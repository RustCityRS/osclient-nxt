// libs/hal/windowing/Window.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.windowing

#include "Window.h"
#include "libs/graphics/runetek7/particles/Particle.h"

// 0x1003a58d0
void __ZNSt3__18functionIFbffEEaSIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2vEERS2_OT_(
    function<bool_(float, float)>* param_1, undefined8* param_2) {
    function<bool(float, float)> local_58[56];
    long local_20;

    __ZNSt3__18functionIFbffEEC1IZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2vEET_(
        local_58, *param_2);
    local_58->swap(*param_1);
}

// 0x1003a5d70
void ____ZN3jag6Window7SetViewERKNS_10shared_ptrINS_10OpenGLViewEEE_block_invoke(long param_1) {
    Window* window = *(Window**)(param_1 + 32);
    ID IVar1 = window->field_656;
    OpenGLView* pOVar2 = (OpenGLView*)(*window->m_view).operator->();
    uint64_t uVar3 = pOVar2->GetNSView();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(IVar1, "setContentView:", uVar3);
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar3);
    IVar1 = window->field_656;
    pOVar2 = (OpenGLView*)(*window->m_view).operator->();
    uVar3 = pOVar2->GetNSView();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(IVar1, "makeFirstResponder:", uVar3);
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar3);
    window->OnSize();
}

// 0x1003a5f30
void ____ZN3jag6Window14SetWindowTitleEPKc_block_invoke(long param_1) {
    uint8_t* puVar2 = PTR__objc_msgSend_100ee9e50;
    uint64_t uVar1 = *(uint64_t*)(*(long*)(param_1 + 32) + 656);
    uint64_t uVar4 = _objc_retainAutoreleasedReturnValue(NSString::stringWithUTF8String_(
        (ID)&_OBJC_CLASS___NSString, "stringWithUTF8String:", *(uint64_t*)(param_1 + 40)));
    (*(void (*)(...))puVar2)(uVar1, "setTitle:", uVar4);
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar4);
}

// 0x1003a5fb0
void ____ZN3jag6Window13SetFullScreenEb_block_invoke(long param_1) {
    Window* window = *(Window**)(param_1 + 32);
    window->SetWindowCollectionFullscreen(true);
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(window->field_656, "toggleFullScreen:", 0);
}

// 0x1003a6080
void ____ZN3jag6Window13SetFullScreenEb_block_invoke_2(long param_1) {
    Window* window = *(Window**)(param_1 + 32);
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(window->field_656, "toggleFullScreen:", 0);
    window->SetWindowCollectionFullscreen(false);
}

// 0x1003a6380
void ____ZN3jag6Window13SetForegroundEv_block_invoke(long param_1) {
    uint8_t* puVar2 = PTR__objc_msgSend_100ee9e50;
    long lVar1 = *(long*)(param_1 + 32);
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(*(uint64_t*)PTR__NSApp_100ee4008, "activateIgnoringOtherApps:", 1);
    (*(void (*)(...))puVar2)(*(uint64_t*)(lVar1 + 656), "makeKeyAndOrderFront:", 0);
}

// 0x1003a63d0
void ____ZN3jag6Window14SetFocusWindowEv_block_invoke(long param_1) {
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(*(uint64_t*)(*(long*)(param_1 + 32) + 656),
                                                  "makeKeyAndOrderFront:", 0);
}

// 0x1003a6480
void ____ZN3jag6Window10SetTopmostEb_block_invoke(long param_1) {
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(*(uint64_t*)(*(long*)(param_1 + 32) + 656),
                                                  "setLevel:", (unsigned long)*(uint8_t*)(param_1 + 40) * 3);
}

// 0x1003a6570
void ____ZN3jag6Window12SetResizableEb_block_invoke(long param_1) {
    uint8_t* puVar2 = PTR__objc_msgSend_100ee9e50;
    long lVar1 = *(long*)(param_1 + 32);
    unsigned long uVar3 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(*(uint64_t*)(lVar1 + 656), "styleMask");
    (*(void (*)(...))puVar2)(*(uint64_t*)(lVar1 + 656), "setStyleMask:", uVar3 | 15);
}

// 0x1003a6900
void ____ZN3jag6Window23SetIsFullScreenFlag_OSXEb_block_invoke(long param_1) {
    (*(Window**)(param_1 + 32))->SetWindowCollectionFullscreen(*(bool*)(param_1 + 40));
}

// 0x1003a69a0
void ____ZN3jag6Window11SetPositionEii_block_invoke(long param_1) {
    uint64_t local_58;
    uint64_t uStack_50;
    uint64_t local_48;
    double dStack_40;

    uint8_t* puVar2 = PTR__objc_msgSend_100ee9e50;
    long lVar1 = *(long*)(param_1 + 32);
    auto IVar3 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen, "screens");
    uint64_t uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
    IVar3 = _objc_retainAutoreleasedReturnValue((*(void (*)(...))puVar2)(uVar4, "objectAtIndexedSubscript:", 0));
    if (IVar3 == 0) {
        local_48 = 0;
        dStack_40 = 0.0;
        local_58 = 0;
        uStack_50 = 0;
    } else {
        _objc_msgSend_stret((uint8_t*)&local_58, IVar3, "frame");
    }
    puVar2 = PTR__objc_release_100ee9e60;
    (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar3);
    (*(void (*)(...))puVar2)(uVar4);
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)((uint32_t)((double)*(int*)(param_1 + 44)),
                                                  (double)((int)dStack_40 - *(int*)(param_1 + 40)),
                                                  *(uint64_t*)(lVar1 + 656), "setFrameTopLeftPoint:");
}

// 0x1003a8ee0
void __ZNSt3__18functionIFbffEEC1IZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2vEET_(
    void) {
    __ZNSt3__18functionIFbffEEC2IZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2vEET_();
}

// 0x1003a8f00
void __ZNSt3__18functionIFbffEEC2IZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2vEET_(
    undefined8 param_1, undefined8 param_2) {
    uint64_t local_10 = param_2;
    __ZNSt3__110__function12__value_funcIFbffEEC1IZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3__2vEEOT_(
        param_1, &local_10);
}

// 0x1003a8f20
void __ZNSt3__110__function12__value_funcIFbffEEC1IZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3__2vEEOT_(
    void) {
    __ZNSt3__110__function12__value_funcIFbffEEC1IZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3__2NS_9allocatorISF_EEEEOT_RKT0_();
}

// 0x1003a8f30
void __ZNSt3__110__function12__value_funcIFbffEEC1IZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3__2NS_9allocatorISF_EEEEOT_RKT0_(
    void) {
    __ZNSt3__110__function12__value_funcIFbffEEC2IZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3__2NS_9allocatorISF_EEEEOT_RKT0_();
}

// 0x1003a8f40
void __ZNSt3__110__function12__value_funcIFbffEEC2IZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3__2NS_9allocatorISF_EEEEOT_RKT0_(
    long param_1, undefined8 param_2) {
    uint8_t local_18[8];

    *(uint64_t*)(param_1 + 32) = 0;
    __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1EOSC_OSE_(
        param_1, param_2, local_18);
    *(long*)(param_1 + 32) = param_1;
}

// 0x1003a8f70
void __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1EOSC_OSE_(
    void) {
    __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2EOSC_OSE_();
}

// 0x1003a8f80
void __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2EOSC_OSE_(
    __base<bool(float, float)>* param_1, undefined8 param_2, undefined8 param_3) {
    new (param_1) std::__function::__base<bool(float, float)>();
    *(uint8_t***)param_1 =
        &PTR___ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEED1Ev_100efe280;
    __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1EOSC_OSE_(
        param_1 + 8, param_2, param_3);
}

// 0x1003a8fe0
void __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1EOSC_OSE_(
    void) {
    __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2EOSC_OSE_();
}

// 0x1003a8ff0
void __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEED1Ev(
    void) {}

// 0x1003a9000
void __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEED0Ev(
    void* param_1) {
    operator delete(param_1);
}

// 0x1003a9010
undefined8
__ZNKSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEE7__cloneEv(
    long param_1) {
    uint8_t local_58[24];
    uint8_t local_40[16];
    uint8_t local_30[8];

    uint64_t uVar1 =
        __ZNSt3__19allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS0_ISD_EEFbffEEEE8allocateEm();
    __ZNSt3__122__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2NS1_ISE_EEFbffEEEEEEC1ERSI_m(
        local_40, local_30);
    __ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEEC1ILb1EvEEPSH_NS_16__dependent_typeINS_27__unique_ptr_deleter_sfinaeISK_EEXT_EE20__good_rval_ref_typeE(
        local_58, uVar1, local_40);
    uVar1 =
        __ZNKSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE3getEv(
            local_58);
    uint64_t uVar2 =
        __ZNKSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEE8__targetEv(
            param_1 + 8);
    __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1ERKSC_OSE_(
        uVar1, uVar2, local_40);
    uVar1 =
        __ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE7releaseEv(
            local_58);
    __ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEED1Ev(
        local_58);
    return uVar1;
}

// 0x1003a90a0
void __ZNKSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEE7__cloneEPNS0_6__baseISF_EE(
    long param_1, undefined8 param_2) {
    uint64_t uVar1 =
        __ZNKSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEE8__targetEv(
            param_1 + 8);
    uint64_t uVar2 =
        __ZNKSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEE15__get_allocatorEv(
            param_1 + 8);
    __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1ERKSC_RKSE_(
        param_2, uVar1, uVar2);
}

// 0x1003a90e0
void __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEE7destroyEv(
    void) {}

// 0x1003a90f0
void __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEE18destroy_deallocateEv(
    undefined8 param_1) {
    __ZNSt3__19allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS0_ISD_EEFbffEEEE10deallocateEPSG_m(
        param_1, 1);
}

// 0x1003a9100
undefined1
__ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEclEOfSH_(
    long param_1) {
    __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEclEOfSH_(
        param_1 + 8);
    return 1;
}

// 0x1003a9140
void __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2EOSC_OSE_(
    undefined8 param_1, undefined8 param_2, undefined8 param_3) {
    uint64_t uVar1 =
        __ZNSt3__1L16forward_as_tupleIJZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEENS_5tupleIJDpOT_EEESF_(
            param_2);
    uint64_t uVar2 =
        __ZNSt3__1L16forward_as_tupleIJNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEENS_5tupleIJDpOT_EEESH_(
            param_3);
    __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC1IJOSB_EJOSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSJ_IJDpT0_EEE(
        param_1, uVar1, uVar2);
}

// 0x1003a9180
undefined8
__ZNSt3__1L16forward_as_tupleIJZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEENS_5tupleIJDpOT_EEESF_(
    undefined8 param_1) {
    uint64_t local_10;

    __ZNSt3__15tupleIJOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEC1IJSB_ELi0EEEDpOT_(
        &local_10, param_1);
    return local_10;
}

// 0x1003a91a0
undefined8
__ZNSt3__1L16forward_as_tupleIJNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEENS_5tupleIJDpOT_EEESH_(
    undefined8 param_1) {
    uint64_t local_10;

    __ZNSt3__15tupleIJONS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEC1IJSD_ELi0EEEDpOT_(
        &local_10, param_1);
    return local_10;
}

// 0x1003a91c0
void __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC1IJOSB_EJOSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSJ_IJDpT0_EEE(
    void) {
    __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC2IJOSB_EJOSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSJ_IJDpT0_EEE();
}

// 0x1003a91d0
void __ZNSt3__15tupleIJOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEC1IJSB_ELi0EEEDpOT_(
    void) {
    __ZNSt3__15tupleIJOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEC2IJSB_ELi0EEEDpOT_();
}

// 0x1003a91e0
void __ZNSt3__15tupleIJOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEC2IJSB_ELi0EEEDpOT_(
    void) {
    __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJOZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2EEC1IJLm0EEJSE_EJEJEJSD_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSI_IJDpT2_EEEDpOT3_();
}

// 0x1003a91f0
void __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJOZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2EEC1IJLm0EEJSE_EJEJEJSD_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSI_IJDpT2_EEEDpOT3_(
    void) {
    __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJOZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2EEC2IJLm0EEJSE_EJEJEJSD_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSI_IJDpT2_EEEDpOT3_();
}

// 0x1003a9200
void __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJOZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2EEC2IJLm0EEJSE_EJEJEJSD_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSI_IJDpT2_EEEDpOT3_(
    void) {
    __ZNSt3__112__tuple_leafILm0EOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Lb0EEC2ISB_vEEOT_();
}

// 0x1003a9210
void __ZNSt3__112__tuple_leafILm0EOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Lb0EEC2ISB_vEEOT_(
    undefined8* param_1, undefined8 param_2) {
    *param_1 = param_2;
}

// 0x1003a9220
void __ZNSt3__15tupleIJONS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEC1IJSD_ELi0EEEDpOT_(
    void) {
    __ZNSt3__15tupleIJONS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEC2IJSD_ELi0EEEDpOT_();
}

// 0x1003a9230
void __ZNSt3__15tupleIJONS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEC2IJSD_ELi0EEEDpOT_(
    void) {
    __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJONS_9allocatorIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2EEEEC1IJLm0EEJSG_EJEJEJSF_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSK_IJDpT2_EEEDpOT3_();
}

// 0x1003a9240
void __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJONS_9allocatorIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2EEEEC1IJLm0EEJSG_EJEJEJSF_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSK_IJDpT2_EEEDpOT3_(
    void) {
    __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJONS_9allocatorIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2EEEEC2IJLm0EEJSG_EJEJEJSF_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSK_IJDpT2_EEEDpOT3_();
}

// 0x1003a9250
void __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJONS_9allocatorIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2EEEEC2IJLm0EEJSG_EJEJEJSF_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSK_IJDpT2_EEEDpOT3_(
    void) {
    __ZNSt3__112__tuple_leafILm0EONS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EELb0EEC2ISD_vEEOT_();
}

// 0x1003a9260
void __ZNSt3__112__tuple_leafILm0EONS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EELb0EEC2ISD_vEEOT_(
    undefined8* param_1, undefined8 param_2) {
    *param_1 = param_2;
}

// 0x1003a9270
void __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC2IJOSB_EJOSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSJ_IJDpT0_EEE(
    void) {
    __ZNSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Li0ELb0EEC2IJOSB_EJLm0EEEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENS_15__tuple_indicesIJXspT0_EEEE();
}

// 0x1003a9280
void __ZNSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Li0ELb0EEC2IJOSB_EJLm0EEEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENS_15__tuple_indicesIJXspT0_EEEE(
    undefined8* param_1, undefined8 param_2) {
    uint64_t local_18 = param_2;
    auto puVar1 =
        __ZNSt3__1L3getILm0EJOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEERNS_13tuple_elementIXT_ENS_5tupleIJDpT0_EEEE4typeERSH_(
            &local_18);
    *param_1 = *puVar1;
}

// 0x1003a92b0
void __ZNSt3__1L3getILm0EJOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEERNS_13tuple_elementIXT_ENS_5tupleIJDpT0_EEEE4typeERSH_(
    void) {
    __ZNSt3__112__tuple_leafILm0EOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Lb0EE3getEv();
}

// 0x1003a92c0
undefined8
__ZNSt3__112__tuple_leafILm0EOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Lb0EE3getEv(
    undefined8* param_1) {
    return *param_1;
}

// 0x1003a92d0
void __ZNKSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEE15__get_allocatorEv(
    void) {
    __ZNKSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEE6secondEv();
}

// 0x1003a92e0
void __ZNSt3__19allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS0_ISD_EEFbffEEEE8allocateEm(
    ulong param_1, ulong param_2) {
    std::__libcpp_allocate(param_1, param_2);
}

// 0x1003a92f0
void __ZNSt3__122__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2NS1_ISE_EEFbffEEEEEEC1ERSI_m(
    void) {
    __ZNSt3__122__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2NS1_ISE_EEFbffEEEEEEC2ERSI_m();
}

// 0x1003a9300
void __ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEEC1ILb1EvEEPSH_NS_16__dependent_typeINS_27__unique_ptr_deleter_sfinaeISK_EEXT_EE20__good_rval_ref_typeE(
    void) {
    __ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEEC2ILb1EvEEPSH_NS_16__dependent_typeINS_27__unique_ptr_deleter_sfinaeISK_EEXT_EE20__good_rval_ref_typeE();
}

// 0x1003a9310
undefined8
__ZNKSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE3getEv(
    void) {
    auto puVar1 =
        __ZNKSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE5firstEv();
    return *puVar1;
}

// 0x1003a9320
void __ZNKSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEE8__targetEv(
    void) {
    __ZNKSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEE5firstEv();
}

// 0x1003a9330
void __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1ERKSC_OSE_(
    void) {
    __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2ERKSC_OSE_();
}

// 0x1003a9340
undefined8
__ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE7releaseEv(
    void) {
    auto puVar2 =
        __ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE5firstEv();
    uint64_t uVar1 = *puVar2;
    *puVar2 = 0;
    return uVar1;
}

// 0x1003a9360
void __ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEED1Ev(
    void) {
    __ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEED2Ev();
}

// 0x1003a9370
void __ZNKSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEE6secondEv(
    void) {
    __ZNKSt3__122__compressed_pair_elemINS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EELi1ELb1EE5__getEv();
}

// 0x1003a9380
undefined8
__ZNKSt3__122__compressed_pair_elemINS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EELi1ELb1EE5__getEv(
    undefined8 param_1) {
    return param_1;
}

// 0x1003a93b0
void __ZNSt3__122__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2NS1_ISE_EEFbffEEEEEEC2ERSI_m(
    undefined8* param_1, undefined8 param_2) {
    *param_1 = param_2;
    param_1[1] = 1;
}

// 0x1003a93d0
void __ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEEC2ILb1EvEEPSH_NS_16__dependent_typeINS_27__unique_ptr_deleter_sfinaeISK_EEXT_EE20__good_rval_ref_typeE(
    undefined8 param_1, undefined8 param_2) {
    uint64_t local_10 = param_2;
    __ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEEC1IRSI_SL_EEOT_OT0_(
        param_1, &local_10);
}

// 0x1003a93f0
void __ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEEC1IRSI_SL_EEOT_OT0_(
    void) {
    __ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEEC2IRSI_SL_EEOT_OT0_();
}

// 0x1003a9400
void __ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEEC2IRSI_SL_EEOT_OT0_(
    long param_1, undefined8 param_2, undefined8 param_3) {
    __ZNSt3__122__compressed_pair_elemIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEELi0ELb0EEC2IRSI_vEEOT_();
    __ZNSt3__122__compressed_pair_elemINS_22__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3__2NS2_ISF_EEFbffEEEEEEELi1ELb0EEC2ISK_vEEOT_(
        param_1 + 8, param_3);
}

// 0x1003a9430
void __ZNSt3__122__compressed_pair_elemIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEELi0ELb0EEC2IRSI_vEEOT_(
    undefined8* param_1, undefined8* param_2) {
    *param_1 = *param_2;
}

// 0x1003a9440
void __ZNSt3__122__compressed_pair_elemINS_22__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3__2NS2_ISF_EEFbffEEEEEEELi1ELb0EEC2ISK_vEEOT_(
    undefined8* param_1, undefined8* param_2) {
    uint64_t uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
}

// 0x1003a9450
void __ZNKSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE5firstEv(
    void) {
    __ZNKSt3__122__compressed_pair_elemIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEELi0ELb0EE5__getEv();
}

// 0x1003a9460
undefined8
__ZNKSt3__122__compressed_pair_elemIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEELi0ELb0EE5__getEv(
    undefined8 param_1) {
    return param_1;
}

// 0x1003a9470
void __ZNKSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEE5firstEv(
    void) {
    __ZNKSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Li0ELb0EE5__getEv();
}

// 0x1003a9480
undefined8
__ZNKSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Li0ELb0EE5__getEv(
    undefined8 param_1) {
    return param_1;
}

// 0x1003a9490
void __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2ERKSC_OSE_(
    __base<bool(float, float)>* param_1, undefined8 param_2, undefined8 param_3) {
    new (param_1) std::__function::__base<bool(float, float)>();
    *(uint8_t***)param_1 =
        &PTR___ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEED1Ev_100efe280;
    __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1ERKSC_OSE_(
        param_1 + 8, param_2, param_3);
}

// 0x1003a94d0
void __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1ERKSC_OSE_(
    void) {
    __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2ERKSC_OSE_();
}

// 0x1003a94e0
void __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2ERKSC_OSE_(
    undefined8 param_1, undefined8 param_2, undefined8 param_3) {
    uint64_t uVar1 =
        __ZNSt3__1L16forward_as_tupleIJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEENS_5tupleIJDpOT_EEESH_(
            param_2);
    uint64_t uVar2 =
        __ZNSt3__1L16forward_as_tupleIJNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEENS_5tupleIJDpOT_EEESH_(
            param_3);
    __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC1IJRKSB_EJOSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSK_IJDpT0_EEE(
        param_1, uVar1, uVar2);
}

// 0x1003a9520
undefined8
__ZNSt3__1L16forward_as_tupleIJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEENS_5tupleIJDpOT_EEESH_(
    undefined8 param_1) {
    uint64_t local_10;

    __ZNSt3__15tupleIJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEC1INS_4_AndELi0EEESD_(
        &local_10, param_1);
    return local_10;
}

// 0x1003a9540
void __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC1IJRKSB_EJOSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSK_IJDpT0_EEE(
    void) {
    __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC2IJRKSB_EJOSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSK_IJDpT0_EEE();
}

// 0x1003a9550
void __ZNSt3__15tupleIJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEC1INS_4_AndELi0EEESD_(
    void) {
    __ZNSt3__15tupleIJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEC2INS_4_AndELi0EEESD_();
}

// 0x1003a9560
void __ZNSt3__15tupleIJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEC2INS_4_AndELi0EEESD_(
    void) {
    __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJRKZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2EEC1IJLm0EEJSF_EJEJEJSF_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSJ_IJDpT2_EEEDpOT3_();
}

// 0x1003a9570
void __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJRKZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2EEC1IJLm0EEJSF_EJEJEJSF_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSJ_IJDpT2_EEEDpOT3_(
    void) {
    __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJRKZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2EEC2IJLm0EEJSF_EJEJEJSF_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSJ_IJDpT2_EEEDpOT3_();
}

// 0x1003a9580
void __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJRKZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2EEC2IJLm0EEJSF_EJEJEJSF_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSJ_IJDpT2_EEEDpOT3_(
    void) {
    __ZNSt3__112__tuple_leafILm0ERKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Lb0EEC2ISD_vEEOT_();
}

// 0x1003a9590
void __ZNSt3__112__tuple_leafILm0ERKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Lb0EEC2ISD_vEEOT_(
    undefined8* param_1, undefined8 param_2) {
    *param_1 = param_2;
}

// 0x1003a95a0
void __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC2IJRKSB_EJOSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSK_IJDpT0_EEE(
    void) {
    __ZNSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Li0ELb0EEC2IJRKSB_EJLm0EEEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENS_15__tuple_indicesIJXspT0_EEEE();
}

// 0x1003a95b0
void __ZNSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Li0ELb0EEC2IJRKSB_EJLm0EEEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENS_15__tuple_indicesIJXspT0_EEEE(
    undefined8* param_1, undefined8 param_2) {
    uint64_t local_18 = param_2;
    auto puVar1 =
        __ZNSt3__1L3getILm0EJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEERNS_13tuple_elementIXT_ENS_5tupleIJDpT0_EEEE4typeERSI_(
            &local_18);
    *param_1 = *puVar1;
}

// 0x1003a95e0
void __ZNSt3__1L3getILm0EJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEERNS_13tuple_elementIXT_ENS_5tupleIJDpT0_EEEE4typeERSI_(
    void) {
    __ZNSt3__112__tuple_leafILm0ERKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Lb0EE3getEv();
}

// 0x1003a95f0
undefined8
__ZNSt3__112__tuple_leafILm0ERKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Lb0EE3getEv(
    undefined8* param_1) {
    return *param_1;
}

// 0x1003a9600
void __ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE5firstEv(
    void) {
    __ZNSt3__122__compressed_pair_elemIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEELi0ELb0EE5__getEv();
}

// 0x1003a9610
undefined8
__ZNSt3__122__compressed_pair_elemIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEELi0ELb0EE5__getEv(
    undefined8 param_1) {
    return param_1;
}

// 0x1003a9620
void __ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEED2Ev(
    void) {
    __ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE5resetEPSH_();
}

// 0x1003a9630
void __ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE5resetEPSH_(
    undefined8 param_1) {
    auto plVar2 =
        __ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE5firstEv();
    long lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
        __ZNSt3__122__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2NS1_ISE_EEFbffEEEEEEclEPSH_(
            __ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE6secondEv(
                param_1),
            lVar1);
    }
}

// 0x1003a9670
void __ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE6secondEv(
    long param_1) {
    __ZNSt3__122__compressed_pair_elemINS_22__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3__2NS2_ISF_EEFbffEEEEEEELi1ELb0EE5__getEv(
        param_1 + 8);
}

// 0x1003a9680
void __ZNSt3__122__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2NS1_ISE_EEFbffEEEEEEclEPSH_(
    long param_1, undefined8 param_2) {
    __ZNSt3__116allocator_traitsINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2NS1_ISE_EEFbffEEEEEE10deallocateERSI_PSH_m(
        param_2, *(uint64_t*)(param_1 + 8));
}

// 0x1003a96a0
undefined8
__ZNSt3__122__compressed_pair_elemINS_22__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3__2NS2_ISF_EEFbffEEEEEEELi1ELb0EE5__getEv(
    undefined8 param_1) {
    return param_1;
}

// 0x1003a96b0
void __ZNSt3__116allocator_traitsINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2NS1_ISE_EEFbffEEEEEE10deallocateERSI_PSH_m(
    void) {
    __ZNSt3__19allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS0_ISD_EEFbffEEEE10deallocateEPSG_m();
}

// 0x1003a96c0
void __ZNSt3__19allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS0_ISD_EEFbffEEEE10deallocateEPSG_m(
    void* param_1, ulong param_2, ulong param_3) {
    std::__libcpp_deallocate(param_1, param_2, param_3);
}

// 0x1003a96d0
void __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1ERKSC_RKSE_(
    void) {
    __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2ERKSC_RKSE_();
}

// 0x1003a96e0
void __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2ERKSC_RKSE_(
    __base<bool(float, float)>* param_1, undefined8 param_2, undefined8 param_3) {
    new (param_1) std::__function::__base<bool(float, float)>();
    *(uint8_t***)param_1 =
        &PTR___ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEED1Ev_100efe280;
    __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1ERKSC_RKSE_(
        param_1 + 8, param_2, param_3);
}

// 0x1003a9720
void __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1ERKSC_RKSE_(
    void) {
    __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2ERKSC_RKSE_();
}

// 0x1003a9730
void __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2ERKSC_RKSE_(
    undefined8 param_1, undefined8 param_2, undefined8 param_3) {
    uint64_t uVar1 =
        __ZNSt3__1L16forward_as_tupleIJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEENS_5tupleIJDpOT_EEESH_(
            param_2);
    uint64_t uVar2 =
        __ZNSt3__1L16forward_as_tupleIJRKNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEENS_5tupleIJDpOT_EEESJ_(
            param_3);
    __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC1IJRKSB_EJRKSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSL_IJDpT0_EEE(
        param_1, uVar1, uVar2);
}

// 0x1003a9770
undefined8
__ZNSt3__1L16forward_as_tupleIJRKNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEENS_5tupleIJDpOT_EEESJ_(
    undefined8 param_1) {
    uint64_t local_10;

    __ZNSt3__15tupleIJRKNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEC1INS_4_AndELi0EEESF_(
        &local_10, param_1);
    return local_10;
}

// 0x1003a9790
void __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC1IJRKSB_EJRKSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSL_IJDpT0_EEE(
    void) {
    __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC2IJRKSB_EJRKSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSL_IJDpT0_EEE();
}

// 0x1003a97a0
void __ZNSt3__15tupleIJRKNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEC1INS_4_AndELi0EEESF_(
    void) {
    __ZNSt3__15tupleIJRKNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEC2INS_4_AndELi0EEESF_();
}

// 0x1003a97b0
void __ZNSt3__15tupleIJRKNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEC2INS_4_AndELi0EEESF_(
    void) {
    __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJRKNS_9allocatorIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2EEEEC1IJLm0EEJSH_EJEJEJSH_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSL_IJDpT2_EEEDpOT3_();
}

// 0x1003a97c0
void __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJRKNS_9allocatorIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2EEEEC1IJLm0EEJSH_EJEJEJSH_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSL_IJDpT2_EEEDpOT3_(
    void) {
    __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJRKNS_9allocatorIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2EEEEC2IJLm0EEJSH_EJEJEJSH_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSL_IJDpT2_EEEDpOT3_();
}

// 0x1003a97d0
void __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJRKNS_9allocatorIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2EEEEC2IJLm0EEJSH_EJEJEJSH_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSL_IJDpT2_EEEDpOT3_(
    void) {
    __ZNSt3__112__tuple_leafILm0ERKNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EELb0EEC2ISF_vEEOT_();
}

// 0x1003a97e0
void __ZNSt3__112__tuple_leafILm0ERKNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EELb0EEC2ISF_vEEOT_(
    undefined8* param_1, undefined8 param_2) {
    *param_1 = param_2;
}

// 0x1003a97f0
void __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC2IJRKSB_EJRKSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSL_IJDpT0_EEE(
    void) {
    __ZNSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Li0ELb0EEC2IJRKSB_EJLm0EEEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENS_15__tuple_indicesIJXspT0_EEEE();
}

// 0x1003a9800
void __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEclEOfSH_(
    undefined8 param_1, undefined8 param_2, undefined8 param_3) {
    __ZNSt3__128__invoke_void_return_wrapperIbLb0EE6__callIJRZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2ffEEEbDpOT_(
        __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEE5firstEv(),
        param_2, param_3);
}

// 0x1003a9830
void __ZNSt3__128__invoke_void_return_wrapperIbLb0EE6__callIJRZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2ffEEEbDpOT_(
    void) {
    __ZNSt3__1L8__invokeIRZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2JffEEEDTclscT_fp_spscT0_fp0_EEOSD_DpOSE_();
}

// 0x1003a9840
void __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEE5firstEv(
    void) {
    __ZNSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Li0ELb0EE5__getEv();
}

// 0x1003a9850
void __ZNSt3__1L8__invokeIRZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2JffEEEDTclscT_fp_spscT0_fp0_EEOSD_DpOSE_(
    undefined8 param_1, undefined4* param_2, undefined4* param_3) {
    __ZZZN3jag6WindowC1EPNS_11GraphicsAppERKNS_16SystemInitParamsERKNS_16WindowInitParamsEEUb_ENK3__2clEff(*param_2,
                                                                                                           *param_3);
}

// 0x1003a9870
void __ZZZN3jag6WindowC1EPNS_11GraphicsAppERKNS_16SystemInitParamsERKNS_16WindowInitParamsEEUb_ENK3__2clEff(
    undefined4 param_1, undefined4 param_2, undefined8* param_3) {
    uint8_t* local_50;
    uint64_t local_48;
    void* local_40;
    uint8_t* local_38;
    Window* local_30;
    uint32_t local_28;
    uint32_t local_24;

    Window* window = (Window*)*param_3;
    bool cVar2 = window->IsLiveResizing();
    uint8_t* puVar1 = PTR___dispatch_main_q_100ee9db8;
    if (!cVar2) {
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        local_50 = PTR___NSConcreteStackBlock_100ee4038;
        local_48 = 3221225472;
        local_40 =
            ____ZZZN3jag6WindowC1EPNS_11GraphicsAppERKNS_16SystemInitParamsERKNS_16WindowInitParamsEEUb_ENK3__2clEff_block_invoke;
        local_38 = &___block_descriptor_48_e5_v8__0l;
        local_28 = param_1;
        local_24 = param_2;
        local_30 = window;
        _dispatch_async(puVar1, &local_50);
    }
}

// 0x1003a9900
void ____ZZZN3jag6WindowC1EPNS_11GraphicsAppERKNS_16SystemInitParamsERKNS_16WindowInitParamsEEUb_ENK3__2clEff_block_invoke(
    long param_1) {
    (*(Window**)(param_1 + 32))->SetSize_OsxImpl(*(float*)(param_1 + 40), *(float*)(param_1 + 44));
}

// 0x1003a9920
undefined8
__ZNSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Li0ELb0EE5__getEv(
    undefined8 param_1) {
    return param_1;
}

namespace jag {
    // 0x1003a1680
    void Window::SaveWindowPosition() const {
        if (this_thread::IsMainThread() == '\0') {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/windowing/Window.cpp",
                      12, nullptr);
        }
        if (field_258 != '\0') {
            field_240->OnFirstUpdate(this);
        }
    }

    // 0x1003a16e0
    void Window::RegisterSizeChangedHandler(std::function<bool(float, float)>* callback) {
        field_8.Register(callback);
    }

    // 0x1003a17a0
    void Window::UnregisterSizeChangedHandler(std::function<bool(float, float)>* callback) {
        field_8.Unregister(callback);
    }

    // 0x1003a1840
    void Window::SetMinClientSize(int arg1, int arg2) {
        float* pfVar1;
        float local_1c;

        *(int*)(m_windowInitParams + 64) = arg1;
        *(int*)(m_windowInitParams + 68) = arg2;
        if ((m_width <= (float)arg1 && (float)arg1 != m_width) ||
            (m_height <= (float)arg2 && (float)arg2 != m_height)) {
            pfVar1 = std::max<float>(m_width, (float)arg1);
            local_1c = *pfVar1;
            pfVar1 = std::max<float>(m_height, (float)arg2);
            SetSize(local_1c, *pfVar1);
        }
    }

    // 0x1003a18e0
    void Window::SetSize(float arg1, float arg2) {
        __0* in_RSI;

        m_width = arg1;
        m_height = arg2;
        uint32_t uVar1 = math::RoundFloatToInt(arg1);
        *(uint32_t*)m_windowInitParams = uVar1;
        uVar1 = math::RoundFloatToInt(arg2);
        *(uint32_t*)(m_windowInitParams + 4) = uVar1;
        EventListeners<std::function<bool(float, float)>>::CallListeners<Window::SetSize(float, float)::__0>(
            (EventListeners<std::function<bool(float, float)>>*)&field_8, in_RSI);
    }

    // 0x1003a1a20
    void Window::RegisterWindowClosedHandler(std::function<bool()>* callback) {
        field_104.Register(callback);
    }

    // 0x1003a1ae0
    void Window::UnregisterWindowCloseddHandler(std::function<bool()>* callback) {
        field_104.Unregister(callback);
    }

    // 0x1003a1b80
    bool Window::IsFixedModeEnabled() const {
        if (m_fullScreen == false) {
            if (m_view->operator_cast_to_bool() != '\0') {
                return ((OpenGLView*)(*m_view).operator->())->HasFixedModeSetting();
            }
        }
        return 0;
    }

    // 0x1003a1c20
    uint8_t Window::GetWindowMode() const {

        if (m_view->operator_cast_to_bool()) {
            if (((OpenGLView*)(*m_view).operator->())->HasFixedModeSetting()) {
                return 1;
            }
        }
        return IsFullScreen() | 2;
    }

    // 0x1003a43c0
    void Window::GetCurrentScreen() const {
        Window_vtbl* local_28;
        uint64_t uStack_20;
        uint64_t local_18;
        uint64_t uStack_10;

        ID* pIVar1 = &field_656;
        if (*pIVar1 == 0) {
            local_18 = 0;
            uStack_10 = 0;
            local_28 = nullptr;
            uStack_20 = 0;
        } else {
            this = (Window*)&local_28;
            _objc_msgSend_stret((uint8_t*)this, *pIVar1, "frame");
        }
        uint64_t uVar2 = GetScreenFromRect(local_28);
        uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
        _objc_autoreleaseReturnValue(uVar2);
    }

    // 0x1003a4460
    uint64_t Window::SetFullScreen(bool arg1) {
        uint8_t* puVar1;
        uint64_t in_RAX;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        uint64_t extraout_var_01;
        uint64_t in_register_00000031;
        uint8_t* local_68;
        uint64_t local_60;
        void* local_58;
        uint8_t* local_50;
        Window* local_48;
        uint8_t* local_40;
        uint64_t local_38;
        void* local_30;
        uint8_t* local_28;
        Window* local_20;

        uint64_t uVar2 = (uint64_t)((unsigned long)in_RAX >> 8);
        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            if (m_fullScreen != false) {
                m_fullScreen = false;
                puVar1 = PTR___dispatch_main_q_100ee9db8;
                _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
                local_40 = PTR___NSConcreteStackBlock_100ee4038;
                local_38 = 3221225472;
                local_30 = ____ZN3jag6Window13SetFullScreenEb_block_invoke_2;
                local_28 = &___block_descriptor_40_e5_v8__0l;
                local_20 = this;
                _dispatch_async(puVar1, &local_40);
                uVar2 = extraout_var_00;
                if (field_512 != '\0') {
                    MenuSetup();
                    uVar2 = extraout_var_01;
                }
            }
        } else if (m_fullScreen == false) {
            m_fullScreen = true;
            puVar1 = PTR___dispatch_main_q_100ee9db8;
            _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
            local_68 = PTR___NSConcreteStackBlock_100ee4038;
            local_60 = 3221225472;
            local_58 = ____ZN3jag6Window13SetFullScreenEb_block_invoke;
            local_50 = &___block_descriptor_40_e5_v8__0l;
            local_48 = this;
            _dispatch_async(puVar1, &local_68);
            uVar2 = extraout_var;
        }
        return 1;
    }

    // 0x1003a45e0
    void Window::OnMenuItemSelected(objc_object* objc_object) {
        unsigned int arg1 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(objc_object, "tag");
        auto this_00 = field_368->FindByCommandID(arg1);
        if (this_00 != nullptr) {
            this_00->Run();
        }
    }

    // 0x1003a4690
    void Window::OnSize() {
        uint64_t local_58;
        uint64_t uStack_50;
        double local_48;
        double dStack_40;
        uint64_t local_38;
        uint64_t uStack_30;
        uint64_t local_28;
        uint64_t uStack_20;

        if (field_656 == 0) {
            local_28 = 0;
            uStack_20 = 0;
            local_38 = 0;
            uStack_30 = 0;
        } else {
            _objc_msgSend_stret((uint8_t*)&local_38, field_656, "frame");
        }
        if (field_656 == 0) {
            local_48 = 0.0;
            dStack_40 = 0.0;
            local_58 = 0;
            uStack_50 = 0;
        } else {
            _objc_msgSend_stret((uint8_t*)&local_58, field_656, "contentRectForFrameRect:");
        }
        double dVar2 = dStack_40;
        double dVar1 = local_48;
        bool cVar3 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(field_656, "isZoomed");
        m_maximized = cVar3;
        field_680 = (uint32_t)local_38;
        field_684 = local_38._4_4_;
        field_688 = (uint32_t)uStack_30;
        field_692 = uStack_30._4_4_;
        field_696 = (uint32_t)local_28;
        field_700 = local_28._4_4_;
        field_704 = (uint32_t)uStack_20;
        field_708 = uStack_20._4_4_;
        field_224 = (int)dVar1;
        field_228 = (int)dVar2;
        m_width = (float)(int)dVar1;
        m_height = (float)(int)dVar2;
        field_576 = true;
        cVar3 = m_view->operator_cast_to_bool();
        if (cVar3) {
            ((OpenGLView*)(*m_view).operator->())->OnSize();
        }
    }

    // 0x1003a4990
    void Window::OnMove() {
        uint64_t local_38;
        uint64_t uStack_30;
        uint64_t local_28;
        uint64_t uStack_20;

        field_576 = true;
        if (field_656 == 0) {
            local_28 = 0;
            uStack_20 = 0;
            local_38 = 0;
            uStack_30 = 0;
        } else {
            _objc_msgSend_stret((uint8_t*)&local_38, field_656, "frame");
        }
        field_696 = (uint32_t)local_28;
        field_700 = local_28._4_4_;
        field_704 = (uint32_t)uStack_20;
        field_708 = uStack_20._4_4_;
        field_680 = (uint32_t)local_38;
        field_684 = local_38._4_4_;
        field_688 = (uint32_t)uStack_30;
        field_692 = uStack_30._4_4_;
        bool cVar1 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(field_656, "isZoomed");
        m_maximized = cVar1;
        cVar1 = m_view->operator_cast_to_bool();
        if (cVar1) {
            ((OpenGLView*)(*m_view).operator->())->OnMove();
        }
    }

    // 0x1003a4a60
    uint8_t Window::OnClose() {
        __3 local_e0;
        function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[168];
        long local_20;

        return local_c9 = 0;
        GraphicsApp* this_00 = field_240;
        local_e0.field_8 = &local_c9;
        local_e0.field_0 = (long)this;
        fixedfunction::function<void(BaseApp*), 128ul, 16ul,
                                (fixedfunction::Methods)0>::function<Window::OnClose()::__3, void>(local_c8, &local_e0);
        this_00->RunSynchronousMainThreadEvent(*local_c8);
        return local_c9;
    }

    // 0x1003a4b30
    void Window::OnFocus(bool arg1) {
        if (m_view->operator_cast_to_bool() != '\0') {
            ((OpenGLView*)(*m_view).operator->())->SetFocused(arg1);
        }
    }

    // 0x1003a4bf0
    void Window::SetIsFullScreenFlag_OSX(bool arg1) {
        m_fullScreen = arg1;
        uint8_t* puVar1 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        uint8_t* local_50 = PTR___NSConcreteStackBlock_100ee4038;
        uint64_t local_48 = 3221225472;
        void* local_40 = ____ZN3jag6Window23SetIsFullScreenFlag_OSXEb_block_invoke;
        uint8_t* local_38 = &___block_descriptor_41_e5_v8__0l;
        Window* local_30 = this;
        uint8_t local_28 = arg1;
        _dispatch_async(puVar1, &local_50);
    }

    // 0x1003a4cb0
    void Window::RestoreWindow() {
        (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(field_656, "setFrame:display:", 1);
    }

    // 0x100414eb0: Window::GetView() const has the same machine code as game::MapSquare::GetClientCompositeData() const

} // namespace jag

namespace jag::math {
    // 0x1003a1940
    int RoundFloatToInt(float arg1) {
        return (int)(arg1 + *(float*)(&reinterpret_cast<const uint64_t*>(&NOWARN_KEY_WIN_RIGHT)[1] +
                                      (unsigned long)(arg1 < 0.0) * 4));
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x1003a79e0: ParticleRGBA::ParticleRGBA(float, float, float, float) has the same machine code as math::Vector4T<float>::Vector4T(float, float, float, float)

} // namespace jag::graphics

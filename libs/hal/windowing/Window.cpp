// libs/hal/windowing/Window.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.windowing

#include "Window.h"
#include "libs/graphics/runetek7/particles/Particle.h"

// 0x1003a58d0, 96 bytes, placed by neighbouring functions
// _ZNSt3__18functionIFbffEEaSIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3$_2vEERS2_OT_
void __ZNSt3__18functionIFbffEEaSIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2vEERS2_OT_(
    function* param_1, undefined8* param_2) {
    function<bool(float, float)> local_58[56];
    long local_20;

    local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
    __ZNSt3__18functionIFbffEEC1IZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2vEET_(
        local_58, *param_2);
    std::function<bool(float, float)>::swap(local_58, param_1);
    std::function<bool(float, float)>::~function(local_58);
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
}

// 0x1003a5d70, 192 bytes, placed by neighbouring functions
// ___ZN3jag6Window7SetViewERKNS_10shared_ptrINS_10OpenGLViewEEE_block_invoke
void ____ZN3jag6Window7SetViewERKNS_10shared_ptrINS_10OpenGLViewEEE_block_invoke(long param_1) {
    Window* this;
    ID IVar1;
    OpenGLView* pOVar2;
    undefined8 uVar3;

    this = *(Window**)(param_1 + 32);
    IVar1 = field_656;
    pOVar2 = (OpenGLView*)jag::shared_ptr<jag::OpenGLView>::operator->((shared_ptr<jag::OpenGLView>*)field_200);
    uVar3 = pOVar2->GetNSView();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code*)PTR__objc_msgSend_100ee9e50)(IVar1, "setContentView:", uVar3);
    (*(code*)PTR__objc_release_100ee9e60)(uVar3);
    IVar1 = field_656;
    pOVar2 = (OpenGLView*)jag::shared_ptr<jag::OpenGLView>::operator->((shared_ptr<jag::OpenGLView>*)field_200);
    uVar3 = pOVar2->GetNSView();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code*)PTR__objc_msgSend_100ee9e50)(IVar1, "makeFirstResponder:", uVar3);
    (*(code*)PTR__objc_release_100ee9e60)(uVar3);
    OnSize();
}

// 0x1003a5f30, 128 bytes, placed by neighbouring functions
// ___ZN3jag6Window14SetWindowTitleEPKc_block_invoke
void ____ZN3jag6Window14SetWindowTitleEPKc_block_invoke(long param_1) {
    undefined8 uVar1;
    undefined* puVar2;
    ID IVar3;
    undefined8 uVar4;

    puVar2 = PTR__objc_msgSend_100ee9e50;
    uVar1 = *(undefined8*)(*(long*)(param_1 + 32) + 656);
    IVar3 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,
                                            "stringWithUTF8String:", *(undefined8*)(param_1 + 40));
    uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
    (*(code*)puVar2)(uVar1, "setTitle:", uVar4);
    (*(code*)PTR__objc_release_100ee9e60)(uVar4);
}

// 0x1003a5fb0, 64 bytes, placed by neighbouring functions
// ___ZN3jag6Window13SetFullScreenEb_block_invoke
void ____ZN3jag6Window13SetFullScreenEb_block_invoke(long param_1) {
    Window* this;

    this = *(Window**)(param_1 + 32);
    SetWindowCollectionFullscreen(true);
    (*(code*)PTR__objc_msgSend_100ee9e50)(field_656, "toggleFullScreen:", 0);
}

// 0x1003a6080, 64 bytes, placed by neighbouring functions
// ___ZN3jag6Window13SetFullScreenEb_block_invoke_2
void ____ZN3jag6Window13SetFullScreenEb_block_invoke_2(long param_1) {
    Window* this;

    this = *(Window**)(param_1 + 32);
    (*(code*)PTR__objc_msgSend_100ee9e50)(field_656, "toggleFullScreen:", 0);
    SetWindowCollectionFullscreen(false);
}

// 0x1003a6380, 80 bytes, placed by neighbouring functions
// ___ZN3jag6Window13SetForegroundEv_block_invoke
void ____ZN3jag6Window13SetForegroundEv_block_invoke(long param_1) {
    long lVar1;
    undefined* puVar2;

    puVar2 = PTR__objc_msgSend_100ee9e50;
    lVar1 = *(long*)(param_1 + 32);
    (*(code*)PTR__objc_msgSend_100ee9e50)(*(undefined8*)PTR__NSApp_100ee4008, "activateIgnoringOtherApps:", 1);
    (*(code*)puVar2)(*(undefined8*)(lVar1 + 656), "makeKeyAndOrderFront:", 0);
}

// 0x1003a63d0, 32 bytes, placed by neighbouring functions
// ___ZN3jag6Window14SetFocusWindowEv_block_invoke
void ____ZN3jag6Window14SetFocusWindowEv_block_invoke(long param_1) {
    (*(code*)PTR__objc_msgSend_100ee9e50)(*(undefined8*)(*(long*)(param_1 + 32) + 656), "makeKeyAndOrderFront:", 0);
}

// 0x1003a6480, 48 bytes, placed by neighbouring functions
// ___ZN3jag6Window10SetTopmostEb_block_invoke
void ____ZN3jag6Window10SetTopmostEb_block_invoke(long param_1) {
    (*(code*)PTR__objc_msgSend_100ee9e50)(*(undefined8*)(*(long*)(param_1 + 32) + 656),
                                          "setLevel:", (ulong) * (byte*)(param_1 + 40) * 3);
}

// 0x1003a6570, 64 bytes, placed by neighbouring functions
// ___ZN3jag6Window12SetResizableEb_block_invoke
void ____ZN3jag6Window12SetResizableEb_block_invoke(long param_1) {
    long lVar1;
    undefined* puVar2;
    ulong uVar3;

    puVar2 = PTR__objc_msgSend_100ee9e50;
    lVar1 = *(long*)(param_1 + 32);
    uVar3 = (*(code*)PTR__objc_msgSend_100ee9e50)(*(undefined8*)(lVar1 + 656), "styleMask");
    (*(code*)puVar2)(*(undefined8*)(lVar1 + 656), "setStyleMask:", uVar3 | 15);
}

// 0x1003a6900, 32 bytes, placed by neighbouring functions
// ___ZN3jag6Window23SetIsFullScreenFlag_OSXEb_block_invoke
void ____ZN3jag6Window23SetIsFullScreenFlag_OSXEb_block_invoke(long param_1) {
    (*(Window**)(param_1 + 32))->SetWindowCollectionFullscreen(*(bool*)(param_1 + 40));
}

// 0x1003a69a0, 240 bytes, placed by neighbouring functions
// ___ZN3jag6Window11SetPositionEii_block_invoke
void ____ZN3jag6Window11SetPositionEii_block_invoke(long param_1) {
    long lVar1;
    undefined* puVar2;
    ID IVar3;
    undefined8 uVar4;
    undefined8 uVar5;
    undefined8 local_58;
    undefined8 uStack_50;
    undefined8 local_48;
    double dStack_40;

    puVar2 = PTR__objc_msgSend_100ee9e50;
    lVar1 = *(long*)(param_1 + 32);
    IVar3 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen, "screens");
    uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
    uVar5 = (*(code*)puVar2)(uVar4, "objectAtIndexedSubscript:", 0);
    IVar3 = _objc_retainAutoreleasedReturnValue(uVar5);
    if (IVar3 == 0) {
        local_48 = 0;
        dStack_40 = 0.0;
        local_58 = 0;
        uStack_50 = 0;
    } else {
        _objc_msgSend_stret((undefined*)&local_58, IVar3, "frame");
    }
    puVar2 = PTR__objc_release_100ee9e60;
    (*(code*)PTR__objc_release_100ee9e60)(IVar3);
    (*(code*)puVar2)(uVar4);
    (*(code*)PTR__objc_msgSend_100ee9e50)(SUB84((double)*(int*)(param_1 + 44), 0),
                                          (double)((int)dStack_40 - *(int*)(param_1 + 40)), *(undefined8*)(lVar1 + 656),
                                          "setFrameTopLeftPoint:");
}

// 0x1003a8ee0, 16 bytes, placed by neighbouring functions
// _ZNSt3__18functionIFbffEEC1IZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3$_2vEET_
void __ZNSt3__18functionIFbffEEC1IZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2vEET_() {
    __ZNSt3__18functionIFbffEEC2IZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2vEET_();
}

// 0x1003a8f00, 32 bytes, placed by neighbouring functions
// _ZNSt3__18functionIFbffEEC2IZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3$_2vEET_
void __ZNSt3__18functionIFbffEEC2IZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2vEET_(
    undefined8 param_1, undefined8 param_2) {
    undefined8 local_10;

    local_10 = param_2;
    __ZNSt3__110__function12__value_funcIFbffEEC1IZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3__2vEEOT_(
        param_1, &local_10);
}

// 0x1003a8f20, 16 bytes, placed by neighbouring functions
// _ZNSt3__110__function12__value_funcIFbffEEC1IZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3$_2vEEOT_
void __ZNSt3__110__function12__value_funcIFbffEEC1IZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3__2vEEOT_() {
    __ZNSt3__110__function12__value_funcIFbffEEC1IZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3__2NS_9allocatorISF_EEEEOT_RKT0_();
}

// 0x1003a8f30, 16 bytes, placed by neighbouring functions
// _ZNSt3__110__function12__value_funcIFbffEEC1IZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3$_2NS_9allocatorISF_EEEEOT_RKT0_
void __ZNSt3__110__function12__value_funcIFbffEEC1IZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3__2NS_9allocatorISF_EEEEOT_RKT0_() {
    __ZNSt3__110__function12__value_funcIFbffEEC2IZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3__2NS_9allocatorISF_EEEEOT_RKT0_();
}

// 0x1003a8f40, 48 bytes, placed by neighbouring functions
// _ZNSt3__110__function12__value_funcIFbffEEC2IZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3$_2NS_9allocatorISF_EEEEOT_RKT0_
void __ZNSt3__110__function12__value_funcIFbffEEC2IZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3__2NS_9allocatorISF_EEEEOT_RKT0_(
    long param_1, undefined8 param_2) {
    undefined1 local_18[8];

    *(undefined8*)(param_1 + 32) = 0;
    __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1EOSC_OSE_(
        param_1, param_2, local_18);
    *(long*)(param_1 + 32) = param_1;
}

// 0x1003a8f70, 16 bytes, placed by neighbouring functions
// _ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEEC1EOSC_OSE_
void __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1EOSC_OSE_() {
    __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2EOSC_OSE_();
}

// 0x1003a8f80, 64 bytes, placed by neighbouring functions
// _ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEEC2EOSC_OSE_
void __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2EOSC_OSE_(
    __base<bool(float, float)>* param_1, undefined8 param_2, undefined8 param_3) {
    std::__function::__base<bool(float, float)>::__base(param_1);
    *(undefined***)param_1 =
        &PTR___ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEED1Ev_100efe280;
    __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1EOSC_OSE_(
        param_1 + 8, param_2, param_3);
}

// 0x1003a8fe0, 16 bytes, placed by neighbouring functions
// _ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEEC1EOSC_OSE_
void __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1EOSC_OSE_() {
    __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2EOSC_OSE_();
}

// 0x1003a8ff0, 16 bytes, placed by neighbouring functions
// _ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEED1Ev
void __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEED1Ev() {
}

// 0x1003a9000, 16 bytes, placed by neighbouring functions
// _ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEED0Ev
void __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEED0Ev(
    void* param_1) {
    operator_delete(param_1);
}

// 0x1003a9010, 144 bytes, placed by neighbouring functions
// _ZNKSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEE7__cloneEv
undefined8
__ZNKSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEE7__cloneEv(
    long param_1) {
    undefined8 uVar1;
    undefined8 uVar2;
    undefined1 local_58[24];
    undefined1 local_40[16];
    undefined1 local_30[8];

    uVar1 =
        __ZNSt3__19allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS0_ISD_EEFbffEEEE8allocateEm();
    __ZNSt3__122__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2NS1_ISE_EEFbffEEEEEEC1ERSI_m(
        local_40, local_30);
    __ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEEC1ILb1EvEEPSH_NS_16__dependent_typeINS_27__unique_ptr_deleter_sfinaeISK_EEXT_EE20__good_rval_ref_typeE(
        local_58, uVar1, local_40);
    uVar1 =
        __ZNKSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE3getEv(
            local_58);
    uVar2 =
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

// 0x1003a90a0, 64 bytes, placed by neighbouring functions
// _ZNKSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEE7__cloneEPNS0_6__baseISF_EE
void __ZNKSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEE7__cloneEPNS0_6__baseISF_EE(
    long param_1, undefined8 param_2) {
    undefined8 uVar1;
    undefined8 uVar2;

    uVar1 =
        __ZNKSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEE8__targetEv(
            param_1 + 8);
    uVar2 =
        __ZNKSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEE15__get_allocatorEv(
            param_1 + 8);
    __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1ERKSC_RKSE_(
        param_2, uVar1, uVar2);
}

// 0x1003a90e0, 16 bytes, placed by neighbouring functions
// _ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEE7destroyEv
void __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEE7destroyEv() {
}

// 0x1003a90f0, 16 bytes, placed by neighbouring functions
// _ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEE18destroy_deallocateEv
void __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEE18destroy_deallocateEv(
    undefined8 param_1) {
    __ZNSt3__19allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS0_ISD_EEFbffEEEE10deallocateEPSG_m(
        param_1, 1);
}

// 0x1003a9100, 32 bytes, placed by neighbouring functions
// _ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEEclEOfSH_
undefined1
__ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEclEOfSH_(
    long param_1) {
    __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEclEOfSH_(
        param_1 + 8);
    return 1;
}

// 0x1003a9140, 64 bytes, placed by neighbouring functions
// _ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEEC2EOSC_OSE_
void __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2EOSC_OSE_(
    undefined8 param_1, undefined8 param_2, undefined8 param_3) {
    undefined8 uVar1;
    undefined8 uVar2;

    uVar1 =
        __ZNSt3__1L16forward_as_tupleIJZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEENS_5tupleIJDpOT_EEESF_(
            param_2);
    uVar2 =
        __ZNSt3__1L16forward_as_tupleIJNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEENS_5tupleIJDpOT_EEESH_(
            param_3);
    __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC1IJOSB_EJOSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSJ_IJDpT0_EEE(
        param_1, uVar1, uVar2);
}

// 0x1003a9180, 32 bytes, placed by neighbouring functions
// _ZNSt3__1L16forward_as_tupleIJZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2EEENS_5tupleIJDpOT_EEESF_
undefined8
__ZNSt3__1L16forward_as_tupleIJZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEENS_5tupleIJDpOT_EEESF_(
    undefined8 param_1) {
    undefined8 local_10;

    __ZNSt3__15tupleIJOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEC1IJSB_ELi0EEEDpOT_(
        &local_10, param_1);
    return local_10;
}

// 0x1003a91a0, 32 bytes, placed by neighbouring functions
// _ZNSt3__1L16forward_as_tupleIJNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2EEEEENS_5tupleIJDpOT_EEESH_
undefined8
__ZNSt3__1L16forward_as_tupleIJNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEENS_5tupleIJDpOT_EEESH_(
    undefined8 param_1) {
    undefined8 local_10;

    __ZNSt3__15tupleIJONS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEC1IJSD_ELi0EEEDpOT_(
        &local_10, param_1);
    return local_10;
}

// 0x1003a91c0, 16 bytes, placed by neighbouring functions
// _ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2NS_9allocatorISB_EEEC1IJOSB_EJOSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSJ_IJDpT0_EEE
void __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC1IJOSB_EJOSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSJ_IJDpT0_EEE() {
    __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC2IJOSB_EJOSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSJ_IJDpT0_EEE();
}

// 0x1003a91d0, 16 bytes, placed by neighbouring functions
// _ZNSt3__15tupleIJOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2EEC1IJSB_ELi0EEEDpOT_
void __ZNSt3__15tupleIJOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEC1IJSB_ELi0EEEDpOT_() {
    __ZNSt3__15tupleIJOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEC2IJSB_ELi0EEEDpOT_();
}

// 0x1003a91e0, 16 bytes, placed by neighbouring functions
// _ZNSt3__15tupleIJOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2EEC2IJSB_ELi0EEEDpOT_
void __ZNSt3__15tupleIJOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEC2IJSB_ELi0EEEDpOT_() {
    __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJOZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2EEC1IJLm0EEJSE_EJEJEJSD_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSI_IJDpT2_EEEDpOT3_();
}

// 0x1003a91f0, 16 bytes, placed by neighbouring functions
// _ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJOZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2EEC1IJLm0EEJSE_EJEJEJSD_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSI_IJDpT2_EEEDpOT3_
void __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJOZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2EEC1IJLm0EEJSE_EJEJEJSD_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSI_IJDpT2_EEEDpOT3_() {
    __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJOZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2EEC2IJLm0EEJSE_EJEJEJSD_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSI_IJDpT2_EEEDpOT3_();
}

// 0x1003a9200, 16 bytes, placed by neighbouring functions
// _ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJOZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2EEC2IJLm0EEJSE_EJEJEJSD_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSI_IJDpT2_EEEDpOT3_
void __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJOZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2EEC2IJLm0EEJSE_EJEJEJSD_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSI_IJDpT2_EEEDpOT3_() {
    __ZNSt3__112__tuple_leafILm0EOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Lb0EEC2ISB_vEEOT_();
}

// 0x1003a9210, 16 bytes, placed by neighbouring functions
// _ZNSt3__112__tuple_leafILm0EOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2Lb0EEC2ISB_vEEOT_
void __ZNSt3__112__tuple_leafILm0EOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Lb0EEC2ISB_vEEOT_(
    undefined8* param_1, undefined8 param_2) {
    *param_1 = param_2;
}

// 0x1003a9220, 16 bytes, placed by neighbouring functions
// _ZNSt3__15tupleIJONS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2EEEEC1IJSD_ELi0EEEDpOT_
void __ZNSt3__15tupleIJONS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEC1IJSD_ELi0EEEDpOT_() {
    __ZNSt3__15tupleIJONS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEC2IJSD_ELi0EEEDpOT_();
}

// 0x1003a9230, 16 bytes, placed by neighbouring functions
// _ZNSt3__15tupleIJONS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2EEEEC2IJSD_ELi0EEEDpOT_
void __ZNSt3__15tupleIJONS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEC2IJSD_ELi0EEEDpOT_() {
    __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJONS_9allocatorIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2EEEEC1IJLm0EEJSG_EJEJEJSF_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSK_IJDpT2_EEEDpOT3_();
}

// 0x1003a9240, 16 bytes, placed by neighbouring functions
// _ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJONS_9allocatorIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3$_2EEEEC1IJLm0EEJSG_EJEJEJSF_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSK_IJDpT2_EEEDpOT3_
void __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJONS_9allocatorIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2EEEEC1IJLm0EEJSG_EJEJEJSF_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSK_IJDpT2_EEEDpOT3_() {
    __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJONS_9allocatorIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2EEEEC2IJLm0EEJSG_EJEJEJSF_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSK_IJDpT2_EEEDpOT3_();
}

// 0x1003a9250, 16 bytes, placed by neighbouring functions
// _ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJONS_9allocatorIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3$_2EEEEC2IJLm0EEJSG_EJEJEJSF_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSK_IJDpT2_EEEDpOT3_
void __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJONS_9allocatorIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2EEEEC2IJLm0EEJSG_EJEJEJSF_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSK_IJDpT2_EEEDpOT3_() {
    __ZNSt3__112__tuple_leafILm0EONS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EELb0EEC2ISD_vEEOT_();
}

// 0x1003a9260, 16 bytes, placed by neighbouring functions
// _ZNSt3__112__tuple_leafILm0EONS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2EELb0EEC2ISD_vEEOT_
void __ZNSt3__112__tuple_leafILm0EONS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EELb0EEC2ISD_vEEOT_(
    undefined8* param_1, undefined8 param_2) {
    *param_1 = param_2;
}

// 0x1003a9270, 16 bytes, placed by neighbouring functions
// _ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2NS_9allocatorISB_EEEC2IJOSB_EJOSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSJ_IJDpT0_EEE
void __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC2IJOSB_EJOSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSJ_IJDpT0_EEE() {
    __ZNSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Li0ELb0EEC2IJOSB_EJLm0EEEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENS_15__tuple_indicesIJXspT0_EEEE();
}

// 0x1003a9280, 48 bytes, placed by neighbouring functions
// _ZNSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2Li0ELb0EEC2IJOSB_EJLm0EEEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENS_15__tuple_indicesIJXspT0_EEEE
void __ZNSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Li0ELb0EEC2IJOSB_EJLm0EEEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENS_15__tuple_indicesIJXspT0_EEEE(
    undefined8* param_1, undefined8 param_2) {
    undefined8* puVar1;
    undefined8 local_18;

    local_18 = param_2;
    puVar1 = (undefined8*)
        __ZNSt3__1L3getILm0EJOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEERNS_13tuple_elementIXT_ENS_5tupleIJDpT0_EEEE4typeERSH_(
            &local_18);
    *param_1 = *puVar1;
}

// 0x1003a92b0, 16 bytes, placed by neighbouring functions
// _ZNSt3__1L3getILm0EJOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2EEERNS_13tuple_elementIXT_ENS_5tupleIJDpT0_EEEE4typeERSH_
void __ZNSt3__1L3getILm0EJOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEERNS_13tuple_elementIXT_ENS_5tupleIJDpT0_EEEE4typeERSH_() {
    __ZNSt3__112__tuple_leafILm0EOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Lb0EE3getEv();
}

// 0x1003a92c0, 16 bytes, placed by neighbouring functions
// _ZNSt3__112__tuple_leafILm0EOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2Lb0EE3getEv
undefined8
__ZNSt3__112__tuple_leafILm0EOZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Lb0EE3getEv(
    undefined8* param_1) {
    return *param_1;
}

// 0x1003a92d0, 16 bytes, placed by neighbouring functions
// _ZNKSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEE15__get_allocatorEv
void __ZNKSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEE15__get_allocatorEv() {
    __ZNKSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEE6secondEv();
}

// 0x1003a92e0, 16 bytes, placed by neighbouring functions
// _ZNSt3__19allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2NS0_ISD_EEFbffEEEE8allocateEm
void __ZNSt3__19allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS0_ISD_EEFbffEEEE8allocateEm(
    ulong param_1, ulong param_2) {
    std::__libcpp_allocate(param_1, param_2);
}

// 0x1003a92f0, 16 bytes, placed by neighbouring functions
// _ZNSt3__122__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3$_2NS1_ISE_EEFbffEEEEEEC1ERSI_m
void __ZNSt3__122__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2NS1_ISE_EEFbffEEEEEEC1ERSI_m() {
    __ZNSt3__122__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2NS1_ISE_EEFbffEEEEEEC2ERSI_m();
}

// 0x1003a9300, 16 bytes, placed by neighbouring functions
// _ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEEC1ILb1EvEEPSH_NS_16__dependent_typeINS_27__unique_ptr_deleter_sfinaeISK_EEXT_EE20__good_rval_ref_typeE
void __ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEEC1ILb1EvEEPSH_NS_16__dependent_typeINS_27__unique_ptr_deleter_sfinaeISK_EEXT_EE20__good_rval_ref_typeE() {
    __ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEEC2ILb1EvEEPSH_NS_16__dependent_typeINS_27__unique_ptr_deleter_sfinaeISK_EEXT_EE20__good_rval_ref_typeE();
}

// 0x1003a9310, 16 bytes, placed by neighbouring functions
// _ZNKSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE3getEv
undefined8
__ZNKSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE3getEv() {
    undefined8* puVar1;

    puVar1 = (undefined8*)
        __ZNKSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE5firstEv();
    return *puVar1;
}

// 0x1003a9320, 16 bytes, placed by neighbouring functions
// _ZNKSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEE8__targetEv
void __ZNKSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEE8__targetEv() {
    __ZNKSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEE5firstEv();
}

// 0x1003a9330, 16 bytes, placed by neighbouring functions
// _ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEEC1ERKSC_OSE_
void __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1ERKSC_OSE_() {
    __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2ERKSC_OSE_();
}

// 0x1003a9340, 32 bytes, placed by neighbouring functions
// _ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE7releaseEv
undefined8
__ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE7releaseEv() {
    undefined8 uVar1;
    undefined8* puVar2;

    puVar2 = (undefined8*)
        __ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE5firstEv();
    uVar1 = *puVar2;
    *puVar2 = 0;
    return uVar1;
}

// 0x1003a9360, 16 bytes, placed by neighbouring functions
// _ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEED1Ev
void __ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEED1Ev() {
    __ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEED2Ev();
}

// 0x1003a9370, 16 bytes, placed by neighbouring functions
// _ZNKSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2NS_9allocatorISB_EEE6secondEv
void __ZNKSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEE6secondEv() {
    __ZNKSt3__122__compressed_pair_elemINS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EELi1ELb1EE5__getEv();
}

// 0x1003a9380, 16 bytes, placed by neighbouring functions
// _ZNKSt3__122__compressed_pair_elemINS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2EELi1ELb1EE5__getEv
undefined8
__ZNKSt3__122__compressed_pair_elemINS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EELi1ELb1EE5__getEv(
    undefined8 param_1) {
    return param_1;
}

// 0x1003a93b0, 32 bytes, placed by neighbouring functions
// _ZNSt3__122__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3$_2NS1_ISE_EEFbffEEEEEEC2ERSI_m
void __ZNSt3__122__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2NS1_ISE_EEFbffEEEEEEC2ERSI_m(
    undefined8* param_1, undefined8 param_2) {
    *param_1 = param_2;
    param_1[1] = 1;
}

// 0x1003a93d0, 32 bytes, placed by neighbouring functions
// _ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEEC2ILb1EvEEPSH_NS_16__dependent_typeINS_27__unique_ptr_deleter_sfinaeISK_EEXT_EE20__good_rval_ref_typeE
void __ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEEC2ILb1EvEEPSH_NS_16__dependent_typeINS_27__unique_ptr_deleter_sfinaeISK_EEXT_EE20__good_rval_ref_typeE(
    undefined8 param_1, undefined8 param_2) {
    undefined8 local_10;

    local_10 = param_2;
    __ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEEC1IRSI_SL_EEOT_OT0_(
        param_1, &local_10);
}

// 0x1003a93f0, 16 bytes, placed by neighbouring functions
// _ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEEC1IRSI_SL_EEOT_OT0_
void __ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEEC1IRSI_SL_EEOT_OT0_() {
    __ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEEC2IRSI_SL_EEOT_OT0_();
}

// 0x1003a9400, 48 bytes, placed by neighbouring functions
// _ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEEC2IRSI_SL_EEOT_OT0_
void __ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEEC2IRSI_SL_EEOT_OT0_(
    long param_1, undefined8 param_2, undefined8 param_3) {
    __ZNSt3__122__compressed_pair_elemIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEELi0ELb0EEC2IRSI_vEEOT_();
    __ZNSt3__122__compressed_pair_elemINS_22__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3__2NS2_ISF_EEFbffEEEEEEELi1ELb0EEC2ISK_vEEOT_(
        param_1 + 8, param_3);
}

// 0x1003a9430, 16 bytes, placed by neighbouring functions
// _ZNSt3__122__compressed_pair_elemIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2NS_9allocatorISD_EEFbffEEELi0ELb0EEC2IRSI_vEEOT_
void __ZNSt3__122__compressed_pair_elemIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEELi0ELb0EEC2IRSI_vEEOT_(
    undefined8* param_1, undefined8* param_2) {
    *param_1 = *param_2;
}

// 0x1003a9440, 16 bytes, placed by neighbouring functions
// _ZNSt3__122__compressed_pair_elemINS_22__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3$_2NS2_ISF_EEFbffEEEEEEELi1ELb0EEC2ISK_vEEOT_
void __ZNSt3__122__compressed_pair_elemINS_22__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3__2NS2_ISF_EEFbffEEEEEEELi1ELb0EEC2ISK_vEEOT_(
    undefined8* param_1, undefined8* param_2) {
    undefined8 uVar1;

    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
}

// 0x1003a9450, 16 bytes, placed by neighbouring functions
// _ZNKSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE5firstEv
void __ZNKSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE5firstEv() {
    __ZNKSt3__122__compressed_pair_elemIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEELi0ELb0EE5__getEv();
}

// 0x1003a9460, 16 bytes, placed by neighbouring functions
// _ZNKSt3__122__compressed_pair_elemIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2NS_9allocatorISD_EEFbffEEELi0ELb0EE5__getEv
undefined8
__ZNKSt3__122__compressed_pair_elemIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEELi0ELb0EE5__getEv(
    undefined8 param_1) {
    return param_1;
}

// 0x1003a9470, 16 bytes, placed by neighbouring functions
// _ZNKSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2NS_9allocatorISB_EEE5firstEv
void __ZNKSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEE5firstEv() {
    __ZNKSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Li0ELb0EE5__getEv();
}

// 0x1003a9480, 16 bytes, placed by neighbouring functions
// _ZNKSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2Li0ELb0EE5__getEv
undefined8
__ZNKSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Li0ELb0EE5__getEv(
    undefined8 param_1) {
    return param_1;
}

// 0x1003a9490, 64 bytes, placed by neighbouring functions
// _ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEEC2ERKSC_OSE_
void __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2ERKSC_OSE_(
    __base<bool(float, float)>* param_1, undefined8 param_2, undefined8 param_3) {
    std::__function::__base<bool(float, float)>::__base(param_1);
    *(undefined***)param_1 =
        &PTR___ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEED1Ev_100efe280;
    __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1ERKSC_OSE_(
        param_1 + 8, param_2, param_3);
}

// 0x1003a94d0, 16 bytes, placed by neighbouring functions
// _ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEEC1ERKSC_OSE_
void __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1ERKSC_OSE_() {
    __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2ERKSC_OSE_();
}

// 0x1003a94e0, 64 bytes, placed by neighbouring functions
// _ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEEC2ERKSC_OSE_
void __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2ERKSC_OSE_(
    undefined8 param_1, undefined8 param_2, undefined8 param_3) {
    undefined8 uVar1;
    undefined8 uVar2;

    uVar1 =
        __ZNSt3__1L16forward_as_tupleIJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEENS_5tupleIJDpOT_EEESH_(
            param_2);
    uVar2 =
        __ZNSt3__1L16forward_as_tupleIJNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEENS_5tupleIJDpOT_EEESH_(
            param_3);
    __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC1IJRKSB_EJOSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSK_IJDpT0_EEE(
        param_1, uVar1, uVar2);
}

// 0x1003a9520, 32 bytes, placed by neighbouring functions
// _ZNSt3__1L16forward_as_tupleIJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2EEENS_5tupleIJDpOT_EEESH_
undefined8
__ZNSt3__1L16forward_as_tupleIJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEENS_5tupleIJDpOT_EEESH_(
    undefined8 param_1) {
    undefined8 local_10;

    __ZNSt3__15tupleIJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEC1INS_4_AndELi0EEESD_(
        &local_10, param_1);
    return local_10;
}

// 0x1003a9540, 16 bytes, placed by neighbouring functions
// _ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2NS_9allocatorISB_EEEC1IJRKSB_EJOSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSK_IJDpT0_EEE
void __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC1IJRKSB_EJOSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSK_IJDpT0_EEE() {
    __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC2IJRKSB_EJOSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSK_IJDpT0_EEE();
}

// 0x1003a9550, 16 bytes, placed by neighbouring functions
// _ZNSt3__15tupleIJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2EEC1INS_4_AndELi0EEESD_
void __ZNSt3__15tupleIJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEC1INS_4_AndELi0EEESD_() {
    __ZNSt3__15tupleIJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEC2INS_4_AndELi0EEESD_();
}

// 0x1003a9560, 16 bytes, placed by neighbouring functions
// _ZNSt3__15tupleIJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2EEC2INS_4_AndELi0EEESD_
void __ZNSt3__15tupleIJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEC2INS_4_AndELi0EEESD_() {
    __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJRKZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2EEC1IJLm0EEJSF_EJEJEJSF_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSJ_IJDpT2_EEEDpOT3_();
}

// 0x1003a9570, 16 bytes, placed by neighbouring functions
// _ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJRKZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2EEC1IJLm0EEJSF_EJEJEJSF_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSJ_IJDpT2_EEEDpOT3_
void __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJRKZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2EEC1IJLm0EEJSF_EJEJEJSF_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSJ_IJDpT2_EEEDpOT3_() {
    __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJRKZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2EEC2IJLm0EEJSF_EJEJEJSF_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSJ_IJDpT2_EEEDpOT3_();
}

// 0x1003a9580, 16 bytes, placed by neighbouring functions
// _ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJRKZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2EEC2IJLm0EEJSF_EJEJEJSF_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSJ_IJDpT2_EEEDpOT3_
void __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJRKZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2EEC2IJLm0EEJSF_EJEJEJSF_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSJ_IJDpT2_EEEDpOT3_() {
    __ZNSt3__112__tuple_leafILm0ERKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Lb0EEC2ISD_vEEOT_();
}

// 0x1003a9590, 16 bytes, placed by neighbouring functions
// _ZNSt3__112__tuple_leafILm0ERKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2Lb0EEC2ISD_vEEOT_
void __ZNSt3__112__tuple_leafILm0ERKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Lb0EEC2ISD_vEEOT_(
    undefined8* param_1, undefined8 param_2) {
    *param_1 = param_2;
}

// 0x1003a95a0, 16 bytes, placed by neighbouring functions
// _ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2NS_9allocatorISB_EEEC2IJRKSB_EJOSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSK_IJDpT0_EEE
void __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC2IJRKSB_EJOSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSK_IJDpT0_EEE() {
    __ZNSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Li0ELb0EEC2IJRKSB_EJLm0EEEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENS_15__tuple_indicesIJXspT0_EEEE();
}

// 0x1003a95b0, 48 bytes, placed by neighbouring functions
// _ZNSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2Li0ELb0EEC2IJRKSB_EJLm0EEEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENS_15__tuple_indicesIJXspT0_EEEE
void __ZNSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Li0ELb0EEC2IJRKSB_EJLm0EEEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENS_15__tuple_indicesIJXspT0_EEEE(
    undefined8* param_1, undefined8 param_2) {
    undefined8* puVar1;
    undefined8 local_18;

    local_18 = param_2;
    puVar1 = (undefined8*)
        __ZNSt3__1L3getILm0EJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEERNS_13tuple_elementIXT_ENS_5tupleIJDpT0_EEEE4typeERSI_(
            &local_18);
    *param_1 = *puVar1;
}

// 0x1003a95e0, 16 bytes, placed by neighbouring functions
// _ZNSt3__1L3getILm0EJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2EEERNS_13tuple_elementIXT_ENS_5tupleIJDpT0_EEEE4typeERSI_
void __ZNSt3__1L3getILm0EJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEERNS_13tuple_elementIXT_ENS_5tupleIJDpT0_EEEE4typeERSI_() {
    __ZNSt3__112__tuple_leafILm0ERKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Lb0EE3getEv();
}

// 0x1003a95f0, 16 bytes, placed by neighbouring functions
// _ZNSt3__112__tuple_leafILm0ERKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2Lb0EE3getEv
undefined8
__ZNSt3__112__tuple_leafILm0ERKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Lb0EE3getEv(
    undefined8* param_1) {
    return *param_1;
}

// 0x1003a9600, 16 bytes, placed by neighbouring functions
// _ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE5firstEv
void __ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE5firstEv() {
    __ZNSt3__122__compressed_pair_elemIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEELi0ELb0EE5__getEv();
}

// 0x1003a9610, 16 bytes, placed by neighbouring functions
// _ZNSt3__122__compressed_pair_elemIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2NS_9allocatorISD_EEFbffEEELi0ELb0EE5__getEv
undefined8
__ZNSt3__122__compressed_pair_elemIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEELi0ELb0EE5__getEv(
    undefined8 param_1) {
    return param_1;
}

// 0x1003a9620, 16 bytes, placed by neighbouring functions
// _ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEED2Ev
void __ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEED2Ev() {
    __ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE5resetEPSH_();
}

// 0x1003a9630, 64 bytes, placed by neighbouring functions
// _ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE5resetEPSH_
void __ZNSt3__110unique_ptrINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE5resetEPSH_(
    undefined8 param_1) {
    long lVar1;
    long* plVar2;
    undefined8 uVar3;

    plVar2 = (long*)
        __ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE5firstEv();
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
        uVar3 =
            __ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE6secondEv(
                param_1);
        __ZNSt3__122__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2NS1_ISE_EEFbffEEEEEEclEPSH_(
            uVar3, lVar1);
    }
}

// 0x1003a9670, 16 bytes, placed by neighbouring functions
// _ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE6secondEv
void __ZNSt3__117__compressed_pairIPNS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS_9allocatorISD_EEFbffEEENS_22__allocator_destructorINSE_ISH_EEEEE6secondEv(
    long param_1) {
    __ZNSt3__122__compressed_pair_elemINS_22__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3__2NS2_ISF_EEFbffEEEEEEELi1ELb0EE5__getEv(
        param_1 + 8);
}

// 0x1003a9680, 32 bytes, placed by neighbouring functions
// _ZNSt3__122__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3$_2NS1_ISE_EEFbffEEEEEEclEPSH_
void __ZNSt3__122__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2NS1_ISE_EEFbffEEEEEEclEPSH_(
    long param_1, undefined8 param_2) {
    __ZNSt3__116allocator_traitsINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2NS1_ISE_EEFbffEEEEEE10deallocateERSI_PSH_m(
        param_2, *(undefined8*)(param_1 + 8));
}

// 0x1003a96a0, 16 bytes, placed by neighbouring functions
// _ZNSt3__122__compressed_pair_elemINS_22__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3$_2NS2_ISF_EEFbffEEEEEEELi1ELb0EE5__getEv
undefined8
__ZNSt3__122__compressed_pair_elemINS_22__allocator_destructorINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS5_11GraphicsAppERKNS5_16SystemInitParamsERKNS5_16WindowInitParamsEEUb_E3__2NS2_ISF_EEFbffEEEEEEELi1ELb0EE5__getEv(
    undefined8 param_1) {
    return param_1;
}

// 0x1003a96b0, 16 bytes, placed by neighbouring functions
// _ZNSt3__116allocator_traitsINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3$_2NS1_ISE_EEFbffEEEEEE10deallocateERSI_PSH_m
void __ZNSt3__116allocator_traitsINS_9allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2NS1_ISE_EEFbffEEEEEE10deallocateERSI_PSH_m() {
    __ZNSt3__19allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS0_ISD_EEFbffEEEE10deallocateEPSG_m();
}

// 0x1003a96c0, 16 bytes, placed by neighbouring functions
// _ZNSt3__19allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2NS0_ISD_EEFbffEEEE10deallocateEPSG_m
void __ZNSt3__19allocatorINS_10__function6__funcIZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2NS0_ISD_EEFbffEEEE10deallocateEPSG_m(
    void* param_1, ulong param_2, ulong param_3) {
    std::__libcpp_deallocate(param_1, param_2, param_3);
}

// 0x1003a96d0, 16 bytes, placed by neighbouring functions
// _ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEEC1ERKSC_RKSE_
void __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1ERKSC_RKSE_() {
    __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2ERKSC_RKSE_();
}

// 0x1003a96e0, 64 bytes, placed by neighbouring functions
// _ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEEC2ERKSC_RKSE_
void __ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2ERKSC_RKSE_(
    __base<bool(float, float)>* param_1, undefined8 param_2, undefined8 param_3) {
    std::__function::__base<bool(float, float)>::__base(param_1);
    *(undefined***)param_1 =
        &PTR___ZNSt3__110__function6__funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEED1Ev_100efe280;
    __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1ERKSC_RKSE_(
        param_1 + 8, param_2, param_3);
}

// 0x1003a9720, 16 bytes, placed by neighbouring functions
// _ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEEC1ERKSC_RKSE_
void __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC1ERKSC_RKSE_() {
    __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2ERKSC_RKSE_();
}

// 0x1003a9730, 64 bytes, placed by neighbouring functions
// _ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEEC2ERKSC_RKSE_
void __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEC2ERKSC_RKSE_(
    undefined8 param_1, undefined8 param_2, undefined8 param_3) {
    undefined8 uVar1;
    undefined8 uVar2;

    uVar1 =
        __ZNSt3__1L16forward_as_tupleIJRKZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2EEENS_5tupleIJDpOT_EEESH_(
            param_2);
    uVar2 =
        __ZNSt3__1L16forward_as_tupleIJRKNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEENS_5tupleIJDpOT_EEESJ_(
            param_3);
    __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC1IJRKSB_EJRKSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSL_IJDpT0_EEE(
        param_1, uVar1, uVar2);
}

// 0x1003a9770, 32 bytes, placed by neighbouring functions
// _ZNSt3__1L16forward_as_tupleIJRKNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2EEEEENS_5tupleIJDpOT_EEESJ_
undefined8
__ZNSt3__1L16forward_as_tupleIJRKNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEENS_5tupleIJDpOT_EEESJ_(
    undefined8 param_1) {
    undefined8 local_10;

    __ZNSt3__15tupleIJRKNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEC1INS_4_AndELi0EEESF_(
        &local_10, param_1);
    return local_10;
}

// 0x1003a9790, 16 bytes, placed by neighbouring functions
// _ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2NS_9allocatorISB_EEEC1IJRKSB_EJRKSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSL_IJDpT0_EEE
void __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC1IJRKSB_EJRKSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSL_IJDpT0_EEE() {
    __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC2IJRKSB_EJRKSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSL_IJDpT0_EEE();
}

// 0x1003a97a0, 16 bytes, placed by neighbouring functions
// _ZNSt3__15tupleIJRKNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2EEEEC1INS_4_AndELi0EEESF_
void __ZNSt3__15tupleIJRKNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEC1INS_4_AndELi0EEESF_() {
    __ZNSt3__15tupleIJRKNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEC2INS_4_AndELi0EEESF_();
}

// 0x1003a97b0, 16 bytes, placed by neighbouring functions
// _ZNSt3__15tupleIJRKNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2EEEEC2INS_4_AndELi0EEESF_
void __ZNSt3__15tupleIJRKNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EEEEC2INS_4_AndELi0EEESF_() {
    __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJRKNS_9allocatorIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2EEEEC1IJLm0EEJSH_EJEJEJSH_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSL_IJDpT2_EEEDpOT3_();
}

// 0x1003a97c0, 16 bytes, placed by neighbouring functions
// _ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJRKNS_9allocatorIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3$_2EEEEC1IJLm0EEJSH_EJEJEJSH_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSL_IJDpT2_EEEDpOT3_
void __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJRKNS_9allocatorIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2EEEEC1IJLm0EEJSH_EJEJEJSH_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSL_IJDpT2_EEEDpOT3_() {
    __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJRKNS_9allocatorIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2EEEEC2IJLm0EEJSH_EJEJEJSH_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSL_IJDpT2_EEEDpOT3_();
}

// 0x1003a97d0, 16 bytes, placed by neighbouring functions
// _ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJRKNS_9allocatorIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3$_2EEEEC2IJLm0EEJSH_EJEJEJSH_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSL_IJDpT2_EEEDpOT3_
void __ZNSt3__112__tuple_implINS_15__tuple_indicesIJLm0EEEEJRKNS_9allocatorIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2EEEEC2IJLm0EEJSH_EJEJEJSH_EEENS1_IJXspT_EEEENS_13__tuple_typesIJDpT0_EEENS1_IJXspT1_EEEENSL_IJDpT2_EEEDpOT3_() {
    __ZNSt3__112__tuple_leafILm0ERKNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EELb0EEC2ISF_vEEOT_();
}

// 0x1003a97e0, 16 bytes, placed by neighbouring functions
// _ZNSt3__112__tuple_leafILm0ERKNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2EELb0EEC2ISF_vEEOT_
void __ZNSt3__112__tuple_leafILm0ERKNS_9allocatorIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2EELb0EEC2ISF_vEEOT_(
    undefined8* param_1, undefined8 param_2) {
    *param_1 = param_2;
}

// 0x1003a97f0, 16 bytes, placed by neighbouring functions
// _ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2NS_9allocatorISB_EEEC2IJRKSB_EJRKSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSL_IJDpT0_EEE
void __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEEC2IJRKSB_EJRKSD_EEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENSL_IJDpT0_EEE() {
    __ZNSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Li0ELb0EEC2IJRKSB_EJLm0EEEENS_21piecewise_construct_tENS_5tupleIJDpT_EEENS_15__tuple_indicesIJXspT0_EEEE();
}

// 0x1003a9800, 48 bytes, placed by neighbouring functions
// _ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3$_2NS_9allocatorISC_EEFbffEEclEOfSH_
void __ZNSt3__110__function12__alloc_funcIZZN3jag6WindowC1EPNS2_11GraphicsAppERKNS2_16SystemInitParamsERKNS2_16WindowInitParamsEEUb_E3__2NS_9allocatorISC_EEFbffEEclEOfSH_(
    undefined8 param_1, undefined8 param_2, undefined8 param_3) {
    undefined8 uVar1;

    uVar1 =
        __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEE5firstEv();
    __ZNSt3__128__invoke_void_return_wrapperIbLb0EE6__callIJRZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2ffEEEbDpOT_(
        uVar1, param_2, param_3);
}

// 0x1003a9830, 16 bytes, placed by neighbouring functions
// _ZNSt3__128__invoke_void_return_wrapperIbLb0EE6__callIJRZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3$_2ffEEEbDpOT_
void __ZNSt3__128__invoke_void_return_wrapperIbLb0EE6__callIJRZZN3jag6WindowC1EPNS3_11GraphicsAppERKNS3_16SystemInitParamsERKNS3_16WindowInitParamsEEUb_E3__2ffEEEbDpOT_() {
    __ZNSt3__1L8__invokeIRZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2JffEEEDTclscT_fp_spscT0_fp0_EEOSD_DpOSE_();
}

// 0x1003a9840, 16 bytes, placed by neighbouring functions
// _ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2NS_9allocatorISB_EEE5firstEv
void __ZNSt3__117__compressed_pairIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2NS_9allocatorISB_EEE5firstEv() {
    __ZNSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Li0ELb0EE5__getEv();
}

// 0x1003a9850, 32 bytes, placed by neighbouring functions
// _ZNSt3__1L8__invokeIRZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2JffEEEDTclscT_fp_spscT0_fp0_EEOSD_DpOSE_
void __ZNSt3__1L8__invokeIRZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2JffEEEDTclscT_fp_spscT0_fp0_EEOSD_DpOSE_(
    undefined8 param_1, undefined4* param_2, undefined4* param_3) {
    __ZZZN3jag6WindowC1EPNS_11GraphicsAppERKNS_16SystemInitParamsERKNS_16WindowInitParamsEEUb_ENK3__2clEff(*param_2,
                                                                                                           *param_3);
}

// 0x1003a9870, 144 bytes, placed by neighbouring functions
// _ZZZN3jag6WindowC1EPNS_11GraphicsAppERKNS_16SystemInitParamsERKNS_16WindowInitParamsEEUb_ENK3$_2clEff
void __ZZZN3jag6WindowC1EPNS_11GraphicsAppERKNS_16SystemInitParamsERKNS_16WindowInitParamsEEUb_ENK3__2clEff(
    undefined4 param_1, undefined4 param_2, undefined8* param_3) {
    Window* this;
    undefined* puVar1;
    char cVar2;
    undefined* local_50;
    undefined8 local_48;
    code* local_40;
    undefined* local_38;
    Window* local_30;
    undefined4 local_28;
    undefined4 local_24;

    this = (Window*)*param_3;
    cVar2 = IsLiveResizing();
    puVar1 = PTR___dispatch_main_q_100ee9db8;
    if (cVar2 == '\0') {
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        local_50 = PTR___NSConcreteStackBlock_100ee4038;
        local_48 = 3221225472;
        local_40 =
            ____ZZZN3jag6WindowC1EPNS_11GraphicsAppERKNS_16SystemInitParamsERKNS_16WindowInitParamsEEUb_ENK3__2clEff_block_invoke;
        local_38 = &___block_descriptor_48_e5_v8__0l;
        local_28 = param_1;
        local_24 = param_2;
        local_30 = this;
        _dispatch_async(puVar1, &local_50);
    }
}

// 0x1003a9900, 32 bytes, placed by neighbouring functions
// ___ZZZN3jag6WindowC1EPNS_11GraphicsAppERKNS_16SystemInitParamsERKNS_16WindowInitParamsEEUb_ENK3$_2clEff_block_invoke
void ____ZZZN3jag6WindowC1EPNS_11GraphicsAppERKNS_16SystemInitParamsERKNS_16WindowInitParamsEEUb_ENK3__2clEff_block_invoke(
    long param_1) {
    (*(Window**)(param_1 + 32))->SetSize_OsxImpl(*(float*)(param_1 + 40), *(float*)(param_1 + 44));
}

// 0x1003a9920, 16 bytes, placed by neighbouring functions
// _ZNSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3$_2Li0ELb0EE5__getEv
undefined8
__ZNSt3__122__compressed_pair_elemIZZN3jag6WindowC1EPNS1_11GraphicsAppERKNS1_16SystemInitParamsERKNS1_16WindowInitParamsEEUb_E3__2Li0ELb0EE5__getEv(
    undefined8 param_1) {
    return param_1;
}

namespace jag {
    // 0x1003a1680, 96 bytes, placed by class name and debug map
    // Window::SaveWindowPosition() const
    void Window::SaveWindowPosition() {
        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/windowing/Window.cpp",
                      12, (char*)0);
        }
        if (field_258 != '\0') {
            (*(code*)field_240->field_0[29])(field_240, this);
        }
    }

    // 0x1003a16e0, 16 bytes, placed by class name and debug map
    // Window::RegisterSizeChangedHandler(std::function<bool (float, float)>*)
    /* Window::RegisterSizeChangedHandler(std::function<bool (float, float)>*) */

    void Window::RegisterSizeChangedHandler(function* param_1) {
        EventListeners<std::function<bool(float, float)>>::Register(
            (EventListeners<std::function<bool(float, float)>>*)&field_8, param_1);
    }

    // 0x1003a17a0, 16 bytes, placed by class name and debug map
    // Window::UnregisterSizeChangedHandler(std::function<bool (float, float)>*)
    /* Window::UnregisterSizeChangedHandler(std::function<bool (float, float)>*) */

    void Window::UnregisterSizeChangedHandler(function* param_1) {
        EventListeners<std::function<bool(float, float)>>::Unregister(
            (EventListeners<std::function<bool(float, float)>>*)&field_8, param_1);
    }

    // 0x1003a1840, 144 bytes, placed by class name and debug map
    // Window::SetMinClientSize(int, int)
    void Window::SetMinClientSize(int param_1, int param_2) {
        float* pfVar1;
        float local_24;
        float local_20;
        float local_1c;

        *(int*)(field_264 + 64) = param_1;
        local_24 = (float)param_1;
        *(int*)(field_264 + 68) = param_2;
        if ((m_width <= local_24 && local_24 != m_width) ||
            (m_height <= (float)param_2 && (float)param_2 != m_height)) {
            pfVar1 = std::max<float>(&m_width, &local_24);
            local_1c = *pfVar1;
            local_20 = (float)param_2;
            pfVar1 = std::max<float>(&m_height, &local_20);
            SetSize(this, local_1c, *pfVar1);
        }
    }

    // 0x1003a18e0, 96 bytes, placed by class name and debug map
    // Window::SetSize(float, float)
    void Window::SetSize(float param_1, float param_2) {
        undefined4 uVar1;

        m_width = param_1;
        m_height = param_2;
        uVar1 = math::RoundFloatToInt(param_1);
        *(undefined4*)field_264 = uVar1;
        uVar1 = math::RoundFloatToInt(param_2);
        *(undefined4*)(field_264 + 4) = uVar1;
        EventListeners<std::function<bool(float, float)>>::CallListeners<Window::SetSize(float, float)::__0>(
            (EventListeners<std::function<bool(float, float)>>*)param_1, &field_8);
    }

    // 0x1003a1a20, 16 bytes, placed by class name and debug map
    // Window::RegisterWindowClosedHandler(std::function<bool ()>*)
    /* Window::RegisterWindowClosedHandler(std::function<bool ()>*) */

    void Window::RegisterWindowClosedHandler(function* param_1) {
        EventListeners<std::function<bool()>>::Register((EventListeners<std::function<bool()>>*)&field_104, param_1);
    }

    // 0x1003a1ae0, 16 bytes, placed by class name and debug map
    // Window::UnregisterWindowCloseddHandler(std::function<bool ()>*)
    /* Window::UnregisterWindowCloseddHandler(std::function<bool ()>*) */

    void Window::UnregisterWindowCloseddHandler(function* param_1) {
        EventListeners<std::function<bool()>>::Unregister((EventListeners<std::function<bool()>>*)&field_104, param_1);
    }

    // 0x1003a1b80, 64 bytes, placed by class name and debug map
    // Window::IsFixedModeEnabled() const
    undefined8 Window::IsFixedModeEnabled() {
        OpenGLView* this_00;

        if (m_fullScreen == false) {
            if (field_200->operator_cast_to_bool()) {
                this_00 = (OpenGLView*)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)field_200);
                return this_00->HasFixedModeSetting();
            }
        }
        return 0;
    }

    // 0x1003a1c20, 80 bytes, placed by class name
    // Window::GetWindowMode() const
    byte Window::GetWindowMode() {
        OpenGLView* this_00;

        if (field_200->operator_cast_to_bool()) {
            this_00 = (OpenGLView*)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)field_200);
            if (this_00->HasFixedModeSetting() != '\0') {
                return 1;
            }
        }
        return IsFullScreen(this) | 2;
    }

    // 0x1003a43c0, 80 bytes, placed by class name
    // Window::GetCurrentScreen() const
    void Window::GetCurrentScreen() {
        ID* pIVar1;
        undefined8 uVar2;
        CGRect local_28;

        pIVar1 = &field_656;
        if (*pIVar1 == 0) {
            local_28.field_16.field_0 = 0.0;
            local_28.field_16.field_8 = 0.0;
            local_28.field_0.field_0 = 0.0;
            local_28.field_0.field_8 = 0.0;
        } else {
            this = (Window*)&local_28;
            _objc_msgSend_stret((undefined*)this, *pIVar1, "frame");
        }
        uVar2 = GetScreenFromRect(this, &local_28);
        uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
        _objc_autoreleaseReturnValue(uVar2);
    }

    // 0x1003a4460, 240 bytes, placed by class name
    // Window::SetFullScreen(bool)
    undefined8 Window::SetFullScreen(bool param_1) {
        undefined* puVar1;
        undefined8 in_RAX;
        undefined7 uVar2;
        undefined7 extraout_var;
        undefined7 extraout_var_00;
        undefined7 extraout_var_01;
        undefined7 in_register_00000031;
        undefined* local_68;
        undefined8 local_60;
        code* local_58;
        undefined* local_50;
        Window* local_48;
        undefined* local_40;
        undefined8 local_38;
        code* local_30;
        undefined* local_28;
        Window* local_20;

        uVar2 = (undefined7)((ulong)in_RAX >> 8);
        if ((int)CONCAT71(in_register_00000031, param_1) == 0) {
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
                    MenuSetup(this);
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
        return CONCAT71(uVar2, 1);
    }

    // 0x1003a45e0, 80 bytes, placed by class name
    // Window::OnMenuItemSelected(objc_object*)
    void Window::OnMenuItemSelected(objc_object* param_1) {
        uint uVar1;
        MenuItem* this_00;

        uVar1 = (*(code*)PTR__objc_msgSend_100ee9e50)(param_1, "tag");
        this_00 = (MenuItem*)(&field_368, uVar1)->FindByCommandID();
        if (this_00 != (MenuItem*)0) {
            this_00->Run();
        }
    }

    // 0x1003a4690, 320 bytes, placed by class name
    // Window::OnSize()
    void Window::OnSize() {
        double dVar1;
        double dVar2;
        OpenGLView* this_00;
        undefined8 local_58;
        undefined8 uStack_50;
        double local_48;
        double dStack_40;
        undefined8 local_38;
        undefined8 uStack_30;
        undefined8 local_28;
        undefined8 uStack_20;

        if (field_656 == 0) {
            local_28 = 0;
            uStack_20 = 0;
            local_38 = 0;
            uStack_30 = 0;
        } else {
            _objc_msgSend_stret((undefined*)&local_38, field_656, "frame");
        }
        if (field_656 == 0) {
            local_48 = 0.0;
            dStack_40 = 0.0;
            local_58 = 0;
            uStack_50 = 0;
        } else {
            _objc_msgSend_stret((undefined*)&local_58, field_656, "contentRectForFrameRect:");
        }
        dVar2 = dStack_40;
        dVar1 = local_48;
        m_maximized = (*(code*)PTR__objc_msgSend_100ee9e50)(field_656, "isZoomed") != '\0';
        field_680 = (undefined4)local_38;
        field_684 = local_38._4_4_;
        field_688 = (undefined4)uStack_30;
        field_692 = uStack_30._4_4_;
        field_696 = (undefined4)local_28;
        field_700 = local_28._4_4_;
        field_704 = (undefined4)uStack_20;
        field_708 = uStack_20._4_4_;
        field_224 = (int)dVar1;
        field_228 = (int)dVar2;
        m_width = (float)(int)dVar1;
        m_height = (float)(int)dVar2;
        std::atomic<bool>::operator=((atomic<bool>*)&field_576, true);
        if (field_200->operator_cast_to_bool()) {
            this_00 = (OpenGLView*)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)field_200);
            this_00->OnSize();
        }
    }

    // 0x1003a4990, 176 bytes, placed by class name
    // Window::OnMove()
    void Window::OnMove() {
        OpenGLView* this_00;
        undefined8 local_38;
        undefined8 uStack_30;
        undefined8 local_28;
        undefined8 uStack_20;

        std::atomic<bool>::operator=((atomic<bool>*)&field_576, true);
        if (field_656 == 0) {
            local_28 = 0;
            uStack_20 = 0;
            local_38 = 0;
            uStack_30 = 0;
        } else {
            _objc_msgSend_stret((undefined*)&local_38, field_656, "frame");
        }
        field_696 = (undefined4)local_28;
        field_700 = local_28._4_4_;
        field_704 = (undefined4)uStack_20;
        field_708 = uStack_20._4_4_;
        field_680 = (undefined4)local_38;
        field_684 = local_38._4_4_;
        field_688 = (undefined4)uStack_30;
        field_692 = uStack_30._4_4_;
        m_maximized = (*(code*)PTR__objc_msgSend_100ee9e50)(field_656, "isZoomed") != '\0';
        if (field_200->operator_cast_to_bool()) {
            this_00 = (OpenGLView*)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)field_200);
            this_00->OnMove();
        }
    }

    // 0x1003a4a60, 176 bytes, placed by class name
    // Window::OnClose()
    undefined1 Window::OnClose() {
        GraphicsApp* this_00;
        __3 local_e0;
        undefined1 local_c9;
        function local_c8;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_c9 = 0;
        this_00 = field_240;
        local_e0.field_8 = &local_c9;
        local_e0.field_0 = (long)this;
        fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            Window::OnClose()::__3, void>((function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8,
                                          &local_e0);
        this_00->RunSynchronousMainThreadEvent(&local_c8);
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return local_c9;
    }

    // 0x1003a4b30, 64 bytes, placed by class name
    // Window::OnFocus(bool)
    void Window::OnFocus(bool param_1) {
        OpenGLView* this_00;

        if (field_200->operator_cast_to_bool()) {
            this_00 = (OpenGLView*)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)field_200);
            this_00->SetFocused(param_1);
        }
    }

    // 0x1003a4bf0, 128 bytes, placed by class name
    // Window::SetIsFullScreenFlag_OSX(bool)
    void Window::SetIsFullScreenFlag_OSX(bool param_1) {
        undefined* puVar1;
        undefined* local_50;
        undefined8 local_48;
        code* local_40;
        undefined* local_38;
        Window* local_30;
        undefined1 local_28;

        m_fullScreen = param_1;
        puVar1 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        local_50 = PTR___NSConcreteStackBlock_100ee4038;
        local_48 = 3221225472;
        local_40 = ____ZN3jag6Window23SetIsFullScreenFlag_OSXEb_block_invoke;
        local_38 = &___block_descriptor_41_e5_v8__0l;
        local_30 = this;
        local_28 = param_1;
        _dispatch_async(puVar1, &local_50);
    }

    // 0x1003a4cb0, 80 bytes, placed by class name
    // Window::RestoreWindow()
    void Window::RestoreWindow() {
        (*(code*)PTR__objc_msgSend_100ee9e50)(field_656, "setFrame:display:", 1);
    }

    // 0x100414eb0: the linker folded this into game::MapSquare::GetClientCompositeData() const, which has identical code
    Window::GetView() const;

} // namespace jag

namespace jag::graphics {
    // 0x1003a6ab0: the linker folded this into math::Vector4T<float>::Vector4T(float, float, float, float), which has identical code
    ParticleRGBA::ParticleRGBA(float, float, float, float);

    // 0x1003a79e0: the linker folded this into math::Vector4T<float>::Vector4T(float, float, float, float), which has identical code
    ParticleRGBA::ParticleRGBA(float, float, float, float);

} // namespace jag::graphics

namespace jag::math {
    // 0x1003a1940, 48 bytes, inline, placed by debug map only (low confidence)
    // RoundFloatToInt(float)
    int RoundFloatToInt(float param_1) {
        return (int)(param_1 + *(float*)(&DAT_100d42b30 + (ulong)(param_1 < 0.0) * 4));
    }

} // namespace jag::math

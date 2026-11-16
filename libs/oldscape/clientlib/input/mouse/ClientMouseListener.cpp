// libs/oldscape/clientlib/input/mouse/ClientMouseListener.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.clientlib

#include "ClientMouseListener.h"

namespace jag::oldscape::input {
    // 0x100394500
    void ClientMouseListener::Init(jag::input::InputHandler* inputHandler,
                                   ClientKeyboardListener* clientKeyboardListener) {
        __ph<3>* in_R8;
        __ph<4>* in_R9;
        member_function_ptr arg1;
        member_function_ptr arg1_00;
        member_function_ptr arg1_01;
        member_function_ptr arg1_02;
        member_function_ptr arg1_03;
        member_function_ptr arg1_04;
        member_function_ptr arg1_05;
        member_function_ptr arg1_06;
        member_function_ptr arg1_07;
        member_function_ptr arg1_08;
        member_function_ptr arg1_09;
        member_function_ptr arg1_10;
        int local_78[8];
        function<bool_(float, float)>* local_58;

        field_8 = clientKeyboardListener;
        field_16 = inputHandler;
        local_78[0] = 0;
        field_24.fill(*local_78);
        ClientMouseListener* local_50 = (ClientMouseListener*)MouseReleased;
        uint64_t local_48 = 0;
        uint32_t local_3c = 0;
        ClientMouseListener* local_38 = this;
        member_function_ptr mVar1 =
            std::bind<bool (ClientMouseListener::*)(int, float, float), ClientMouseListener*, int,
                      std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&>(
                (bool__jag__oldscape__input__ClientMouseListener_______int__float__float_)local_78, local_50, local_38,
                local_3c, *in_R8);
        local_58 = (function<bool_(float, float)>*)&field_48;
        mVar1.ptr = local_78;
        ((function<bool(float, float)>*)local_58)->operator=(mVar1);
        local_50 = (ClientMouseListener*)MousePressed;
        local_48 = 0;
        local_3c = 0;
        local_38 = this;
        mVar1 = std::bind<bool (ClientMouseListener::*)(int, float, float), ClientMouseListener*, int,
                          std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&>(
            (bool__jag__oldscape__input__ClientMouseListener_______int__float__float_)local_78, local_50, local_38,
            local_3c, *in_R8);
        arg1.adj = mVar1.adj;
        arg1.ptr = local_78;
        ((function<bool(float, float)>*)&field_96)->operator=(arg1);
        local_50 = (ClientMouseListener*)MouseReleased;
        local_48 = 0;
        local_3c = 1;
        local_38 = this;
        mVar1 = std::bind<bool (ClientMouseListener::*)(int, float, float), ClientMouseListener*, int,
                          std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&>(
            (bool__jag__oldscape__input__ClientMouseListener_______int__float__float_)local_78, local_50, local_38,
            local_3c, *in_R8);
        arg1_00.adj = mVar1.adj;
        arg1_00.ptr = local_78;
        ((function<bool(float, float)>*)&field_144)->operator=(arg1_00);
        local_50 = (ClientMouseListener*)MousePressed;
        local_48 = 0;
        local_3c = 1;
        local_38 = this;
        mVar1 = std::bind<bool (ClientMouseListener::*)(int, float, float), ClientMouseListener*, int,
                          std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&>(
            (bool__jag__oldscape__input__ClientMouseListener_______int__float__float_)local_78, local_50, local_38,
            local_3c, *in_R8);
        arg1_01.adj = mVar1.adj;
        arg1_01.ptr = local_78;
        ((function<bool(float, float)>*)&field_192)->operator=(arg1_01);
        local_50 = (ClientMouseListener*)MouseReleased;
        local_48 = 0;
        local_3c = 2;
        local_38 = this;
        mVar1 = std::bind<bool (ClientMouseListener::*)(int, float, float), ClientMouseListener*, int,
                          std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&>(
            (bool__jag__oldscape__input__ClientMouseListener_______int__float__float_)local_78, local_50, local_38,
            local_3c, *in_R8);
        arg1_02.adj = mVar1.adj;
        arg1_02.ptr = local_78;
        ((function<bool(float, float)>*)&field_240)->operator=(arg1_02);
        local_50 = (ClientMouseListener*)MousePressed;
        local_48 = 0;
        local_3c = 2;
        __ph<1>* ph1 = (__ph<1>*)&local_3c;
        local_38 = this;
        mVar1 = std::bind<bool (ClientMouseListener::*)(int, float, float), ClientMouseListener*, int,
                          std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&>(
            (bool__jag__oldscape__input__ClientMouseListener_______int__float__float_)local_78, local_50, local_38,
            *ph1, *in_R8);
        arg1_03.adj = mVar1.adj;
        arg1_03.ptr = local_78;
        ((function<bool(float, float)>*)&field_288)->operator=(arg1_03);
        local_50 = (ClientMouseListener*)MouseMoved;
        local_48 = 0;
        local_38 = this;
        mVar1 = std::bind<bool (ClientMouseListener::*)(float, float), ClientMouseListener*,
                          std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&>(
            (bool__jag__oldscape__input__ClientMouseListener_______float__float_)local_78, local_50, local_38, *ph1);
        arg1_04.adj = mVar1.adj;
        arg1_04.ptr = local_78;
        ((function<bool(float, float)>*)&field_336)->operator=(arg1_04);
        local_50 = (ClientMouseListener*)MouseWheel;
        local_48 = 0;
        local_38 = this;
        mVar1 = std::bind<bool (ClientMouseListener::*)(float, float, float, float), ClientMouseListener*,
                          std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&,
                          std::placeholders::__ph<3> const&, std::placeholders::__ph<4> const&>(
            (bool__jag__oldscape__input__ClientMouseListener_______float__float__float__float_)local_78, local_50,
            local_38, *ph1, *in_R8, *in_R9);
        arg1_05.adj = mVar1.adj;
        arg1_05.ptr = local_78;
        ((function<bool(float, float, float, float)>*)&field_384)->operator=(arg1_05);
        local_50 = (ClientMouseListener*)LowLevelMouseDown;
        local_48 = 0;
        local_38 = this;
        mVar1 = std::bind<bool (ClientMouseListener::*)(int, int, int, int), ClientMouseListener*,
                          std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&,
                          std::placeholders::__ph<3> const&, std::placeholders::__ph<4> const&>(
            (bool__jag__oldscape__input__ClientMouseListener_______int__int__int__int_)local_78, local_50, local_38,
            *ph1, *in_R8, *in_R9);
        arg1_06.adj = mVar1.adj;
        arg1_06.ptr = local_78;
        ((function<bool(int, int, int, int)>*)&field_432)->operator=(arg1_06);
        inputHandler->RegisterLMouseUp(local_58);
        inputHandler->RegisterLMouseDown(&field_96);
        inputHandler->RegisterMMouseUp(&field_144);
        inputHandler->RegisterMMouseDown(&field_192);
        inputHandler->RegisterRMouseUp(&field_240);
        inputHandler->RegisterRMouseDown(&field_288);
        inputHandler->RegisterMouseMove(&field_336);
        inputHandler->RegisterMouseWheel(&field_384);
        inputHandler->RegisterLowLevelMouseDown(&field_432);
        local_50 = (ClientMouseListener*)OnFirstTouchDown;
        local_48 = 0;
        local_38 = this;
        mVar1 = std::bind<bool (ClientMouseListener::*)(unsigned long, float, float), ClientMouseListener*,
                          std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&,
                          std::placeholders::__ph<3> const&>(
            (bool__jag__oldscape__input__ClientMouseListener_______unsigned_long__float__float_)local_78, local_50,
            local_38, *ph1, *in_R8);
        arg1_07.adj = mVar1.adj;
        local_58 = (function<bool_(float, float)>*)&field_480;
        arg1_07.ptr = local_78;
        *local_58 = *arg1_07;
        local_50 = (ClientMouseListener*)OnTouchDown;
        local_48 = 0;
        local_38 = this;
        mVar1 = std::bind<bool (ClientMouseListener::*)(unsigned long, float, float), ClientMouseListener*,
                          std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&,
                          std::placeholders::__ph<3> const&>(
            (bool__jag__oldscape__input__ClientMouseListener_______unsigned_long__float__float_)local_78, local_50,
            local_38, *ph1, *in_R8);
        arg1_08.adj = mVar1.adj;
        arg1_08.ptr = local_78;
        field_528 = *arg1_08;
        local_50 = (ClientMouseListener*)OnTouchMove;
        local_48 = 0;
        local_38 = this;
        mVar1 = std::bind<bool (ClientMouseListener::*)(unsigned long, float, float), ClientMouseListener*,
                          std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&,
                          std::placeholders::__ph<3> const&>(
            (bool__jag__oldscape__input__ClientMouseListener_______unsigned_long__float__float_)local_78, local_50,
            local_38, *ph1, *in_R8);
        arg1_09.adj = mVar1.adj;
        arg1_09.ptr = local_78;
        field_576 = *arg1_09;
        local_50 = (ClientMouseListener*)OnTouchUp;
        local_48 = 0;
        local_38 = this;
        mVar1 = std::bind<bool (ClientMouseListener::*)(unsigned long, float, float), ClientMouseListener*,
                          std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&,
                          std::placeholders::__ph<3> const&>(
            (bool__jag__oldscape__input__ClientMouseListener_______unsigned_long__float__float_)local_78, local_50,
            local_38, *ph1, *in_R8);
        arg1_10.adj = mVar1.adj;
        arg1_10.ptr = local_78;
        field_624 = *arg1_10;
        inputHandler->RegisterFirstTouchDown(local_58);
        inputHandler->RegisterTouchDown(&field_528);
        inputHandler->RegisterTouchMove(&field_576);
        inputHandler->RegisterTouchUp(&field_624);
    }

    // 0x100394980
    uint8_t ClientMouseListener::MouseReleased(int arg1, float arg2, float arg3) {
        int* piVar1 = &field_24[(long)arg1];
        int arg1_00 = *piVar1;
        if (arg1_00 != 0) {
            *piVar1 = 0;
            ReleaseTranslatedButton(arg1_00, (int)arg2, (int)arg3);
        }
        return 1;
    }

    // 0x100394a40
    uint64_t ClientMouseListener::MousePressed(int arg1, float arg2, float arg3) {
        uint8_t** ppuVar1;
        unsigned int* puVar3;
        uint64_t uVar4;

        unsigned int uVar2 = GetTranslatedButton(arg1);
        if ((field_36 & uVar2) == 0) {
            field_36 = field_36 | uVar2;
            puVar3 = (unsigned int*)field_24[(long)arg1];
            *puVar3 = uVar2;
            ppuVar1 = field_0;
            uVar4 = InputListener::GetCurrentTimeMS();
            (**(void (**)(...))(*ppuVar1 + 32))(ppuVar1, 0, uVar2, (int)arg2, (int)arg3, uVar4);
        }
        return 1;
    }

    // 0x100394ae0
    uint8_t ClientMouseListener::MouseMoved(float arg1, float arg2) {
        uint8_t** ppuVar1;
        uint64_t uVar3;

        int* piVar2 = &field_24[0];
        if ((*piVar2 == 0) && (piVar2 = (int*)field_24[1], *piVar2 == 0)) {
            ppuVar1 = field_0;
            uVar3 = InputListener::GetCurrentTimeMS();
            (**(void (**)(...))(*ppuVar1 + 56))(ppuVar1, (int)arg1, (int)arg2, uVar3);
            return 1;
        }
        MouseDragged(arg1, arg2);
        return 1;
    }

    // 0x100394c00
    uint8_t ClientMouseListener::MouseWheel(float arg1, float arg2, float arg3, float arg4) {
        field_40 -= ((int)(arg4 * 1024.0));
        return 1;
    }

    // 0x100394cb0
    uint64_t ClientMouseListener::LowLevelMouseDown(int arg1, int arg2, int arg3, int arg4) {
        (**(void (**)(...))(*field_0 + 104))();
        return 1;
    }

    // 0x100394e60
    uint64_t ClientMouseListener::OnFirstTouchDown(unsigned long arg1, float arg2, float arg3) {
        Instance();
        hal::Haptics::Prepare();
        return 0;
    }

    // 0x100394ef0
    uint8_t ClientMouseListener::OnTouchDown(unsigned long arg1, float arg2, float arg3) {
        uint8_t** ppuVar1 = field_0;
        uint64_t uVar2 = InputListener::GetCurrentTimeMS();
        (**(void (**)(...))(*ppuVar1 + 32))(ppuVar1, arg1 & 4294967295, 0, (int)arg2, (int)arg3, uVar2);
        return 1;
    }

    // 0x100394f40
    uint8_t ClientMouseListener::OnTouchMove(unsigned long arg1, float arg2, float arg3) {
        uint8_t** ppuVar1 = field_0;
        uint64_t uVar2 = InputListener::GetCurrentTimeMS();
        (**(void (**)(...))(*ppuVar1 + 48))(ppuVar1, arg1 & 4294967295, (int)arg2, (int)arg3, uVar2);
        return 1;
    }

    // 0x100394f90
    uint8_t ClientMouseListener::OnTouchUp(unsigned long arg1, float arg2, float arg3) {
        uint8_t** ppuVar1 = field_0;
        uint64_t uVar2 = InputListener::GetCurrentTimeMS();
        (**(void (**)(...))(*ppuVar1 + 40))(ppuVar1, arg1 & 4294967295, 0, (int)arg2, (int)arg3, uVar2);
        return 1;
    }

    // 0x100395060
    void ClientMouseListener::Destroy() {
        if (field_16 != nullptr) {
            field_16->UnregisterLMouseUp(&field_48);
            field_16->UnregisterLMouseDown(&field_96);
            field_16->UnregisterMMouseUp(&field_144);
            field_16->UnregisterMMouseDown(&field_192);
            field_16->UnregisterRMouseUp(&field_240);
            field_16->UnregisterRMouseDown(&field_288);
            field_16->UnregisterMouseMove(&field_336);
            field_16->UnregisterMouseWheel(&field_384);
            field_16->UnregisterLowLevelMouseDown(&field_432);
            field_16->UnregisterFirstTouchDown(&field_480);
            field_16->UnregisterTouchDown(&field_528);
            field_16->UnregisterTouchMove(&field_576);
            field_16->UnregisterTouchUp(&field_624);
        }
    }

    // 0x1003952d0
    void ClientMouseListener::MouseDragged(float arg1, float arg2) {
        uint8_t** ppuVar1 = field_0;
        uint64_t uVar2 = InputListener::GetCurrentTimeMS();
        (**(void (**)(...))(*ppuVar1 + 48))(ppuVar1, 0, (int)arg1, (int)arg2, uVar2);
    }

    // 0x100395320
    uint64_t ClientMouseListener::GetTranslatedButton(int arg1) {
        bool cVar1;
        uint64_t uVar2;

        ClientKeyboardListener* this_00 = field_8;
        if (this_00 == nullptr) {
            if (arg1 == 1) {
                return 4;
            }
        } else {
            cVar1 = this_00->IsAltDown();
            if (cVar1) {
                return 4;
            }
            if (arg1 == 1) {
                return 4;
            }
        }
        if (arg1 == 2) {
            uVar2 = 2;
        } else {
            if ((this_00 != nullptr) && (cVar1 = this_00->IsCtrlDown(), cVar1)) {
                return 2;
            }
            uVar2 = 1;
        }
        return uVar2;
    }

    // 0x100395390
    void ClientMouseListener::ReleaseTranslatedButton(int arg1, int arg2, int arg3) {
        uint8_t** ppuVar1;
        uint64_t uVar2;

        if ((field_36 & arg1) != 0) {
            field_36 = field_36 & ~arg1;
            ppuVar1 = field_0;
            uVar2 = InputListener::GetCurrentTimeMS();
            (**(void (**)(...))(*ppuVar1 + 40))(ppuVar1, 0, arg1, arg2, arg3, uVar2);
        }
    }

    // 0x1003953f0
    int ClientMouseListener::GetAndResetWheelRotation() {
        memory_order in_EDX;
        int in_ESI;

        int iVar1 = field_40.exchange(in_ESI, in_EDX);
        int iVar2 = (unsigned int)(0 < iVar1) * 1024;
        int iVar3 = iVar2 + iVar1 - 512;
        iVar2 = iVar1 + iVar2 + 511;
        if (-1 < iVar3) {
            iVar2 = iVar3;
        }
        return iVar2 >> 10;
    }

} // namespace jag::oldscape::input

namespace jag::fixedfunction {
    // 0x100396c70
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::Close()::{
        lambda(BaseApp*) #1
    }
    , void > (oldscape::input::InputForm::Close()::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, void*) #1
    }
    ::operator void (*)(void*, void*)() const {
        lambda(void*, void*) #1
    }
    ::operator_cast_to_function_pointer(_lambda_void__void___1_* this) {
        return PTR___invoke_100ee9600;
    }

    // 0x100396c80
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::Close()::{
        lambda(BaseApp*) #1
    }
    , void > (oldscape::input::InputForm::Close()::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator void (*)(void*, BaseApp*)() const {
        lambda(void*, BaseApp*) #1
    }
    ::operator_cast_to_function_pointer(_lambda_void__jag__BaseApp___1_* this) {
        return PTR_BaseApp___100ee95f8;
    }

    // 0x100396c90
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::Close()::{
        lambda(BaseApp*) #1
    }
    , void > (oldscape::input::InputForm::Close()::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*) #1
    }
    ::operator void (*)(void*)() const {
        return PTR___invoke_100ee95f0;
    }

    // 0x100396ca0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::Close()::{
        lambda(BaseApp*) #1
    }
    , void > (oldscape::input::InputForm::Close()::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        arg1->~AutoSingleton();
    }

    // 0x100396cc0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::Close()::{
        lambda(BaseApp*) #1
    }
    , void > (oldscape::input::InputForm::Close()::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::__invoke(void* arg1, BaseApp* baseApp) {
        function < oldscape::input::InputForm::Close()::{
            lambda(BaseApp*) #1
        }
        , void > (oldscape::input::InputForm::Close()::{ lambda(BaseApp*) #1 }&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::operator()(arg1, arg1, baseApp);
    }

    // 0x100396ce0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::Close()::{
        lambda(BaseApp*) #1
    }
    , void > (oldscape::input::InputForm::Close()::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(void* arg1, BaseApp * baseApp) const {
        oldscape::input::InputForm::Close()::{
            lambda(BaseApp*) #1
        }
        ::operator()(arg1, baseApp);
    }

    // 0x100396d20
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::Close()::{
        lambda(BaseApp*) #1
    }
    , void > (oldscape::input::InputForm::Close()::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {
        arg1->~AutoSingleton();
    }

} // namespace jag::fixedfunction

// libs/oldscape/clientlib/input/mouse/ClientMouseListener.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.clientlib

#include "ClientMouseListener.h"

namespace jag::oldscape::input {
    // 0x100394500, 1088 bytes, placed by class name and debug map
    // ClientMouseListener::Init(jag::input::InputHandler*, ClientKeyboardListener*)
    void ClientMouseListener::Init(InputHandler* param_1, ClientKeyboardListener* param_2) {
        __ph* in_R8;
        __ph* in_R9;
        int local_78[8];
        function* local_58;
        ClientMouseListener* local_50;
        undefined8 local_48;
        undefined4 local_3c;
        ClientMouseListener* local_38;

        field_8 = param_2;
        field_16 = param_1;
        local_78[0] = 0;
        (&field_24, local_78)->fill();
        local_50 = (ClientMouseListener*)MouseReleased;
        local_48 = 0;
        local_3c = 0;
        local_38 = this;
        std::bind<bool (ClientMouseListener::*)(int, float, float), ClientMouseListener*, int,
                  std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&>(
            (_func_bool_int_float_float*)local_78, &local_50, (int*)&local_38, (__ph*)&local_3c, in_R8);
        local_58 = (function*)&field_48;
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)local_58, (__bind*)local_78);
        local_50 = (ClientMouseListener*)MousePressed;
        local_48 = 0;
        local_3c = 0;
        local_38 = this;
        std::bind<bool (ClientMouseListener::*)(int, float, float), ClientMouseListener*, int,
                  std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&>(
            (_func_bool_int_float_float*)local_78, &local_50, (int*)&local_38, (__ph*)&local_3c, in_R8);
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)&field_96, (__bind*)local_78);
        local_50 = (ClientMouseListener*)MouseReleased;
        local_48 = 0;
        local_3c = 1;
        local_38 = this;
        std::bind<bool (ClientMouseListener::*)(int, float, float), ClientMouseListener*, int,
                  std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&>(
            (_func_bool_int_float_float*)local_78, &local_50, (int*)&local_38, (__ph*)&local_3c, in_R8);
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)&field_144, (__bind*)local_78);
        local_50 = (ClientMouseListener*)MousePressed;
        local_48 = 0;
        local_3c = 1;
        local_38 = this;
        std::bind<bool (ClientMouseListener::*)(int, float, float), ClientMouseListener*, int,
                  std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&>(
            (_func_bool_int_float_float*)local_78, &local_50, (int*)&local_38, (__ph*)&local_3c, in_R8);
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)&field_192, (__bind*)local_78);
        local_50 = (ClientMouseListener*)MouseReleased;
        local_48 = 0;
        local_3c = 2;
        local_38 = this;
        std::bind<bool (ClientMouseListener::*)(int, float, float), ClientMouseListener*, int,
                  std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&>(
            (_func_bool_int_float_float*)local_78, &local_50, (int*)&local_38, (__ph*)&local_3c, in_R8);
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)&field_240, (__bind*)local_78);
        local_50 = (ClientMouseListener*)MousePressed;
        local_48 = 0;
        local_3c = 2;
        local_38 = this;
        std::bind<bool (ClientMouseListener::*)(int, float, float), ClientMouseListener*, int,
                  std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&>(
            (_func_bool_int_float_float*)local_78, &local_50, (int*)&local_38, (__ph*)&local_3c, in_R8);
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)&field_288, (__bind*)local_78);
        local_50 = (ClientMouseListener*)MouseMoved;
        local_48 = 0;
        local_38 = this;
        std::bind<bool (ClientMouseListener::*)(float, float), ClientMouseListener*, std::placeholders::__ph<1> const&,
                  std::placeholders::__ph<2> const&>((_func_bool_float_float*)local_78, &local_50, (__ph*)&local_38,
                                                     (__ph*)&local_3c);
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)&field_336, (__bind*)local_78);
        local_50 = (ClientMouseListener*)MouseWheel;
        local_48 = 0;
        local_38 = this;
        std::bind<bool (ClientMouseListener::*)(float, float, float, float), ClientMouseListener*,
                  std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&,
                  std::placeholders::__ph<3> const&, std::placeholders::__ph<4> const&>(
            (_func_bool_float_float_float_float*)local_78, &local_50, (__ph*)&local_38, (__ph*)&local_3c, in_R8, in_R9);
        std::function<bool(float, float, float, float)>::operator=(
            (function<bool(float, float, float, float)>*)&field_384, (__bind*)local_78);
        local_50 = (ClientMouseListener*)LowLevelMouseDown;
        local_48 = 0;
        local_38 = this;
        std::bind<bool (ClientMouseListener::*)(int, int, int, int), ClientMouseListener*,
                  std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&,
                  std::placeholders::__ph<3> const&, std::placeholders::__ph<4> const&>(
            (_func_bool_int_int_int_int*)local_78, &local_50, (__ph*)&local_38, (__ph*)&local_3c, in_R8, in_R9);
        std::function<bool(int, int, int, int)>::operator=((function<bool(int, int, int, int)>*)&field_432,
                                                           (__bind*)local_78);
        param_1->RegisterLMouseUp(local_58);
        param_1->RegisterLMouseDown((function*)&field_96);
        param_1->RegisterMMouseUp((function*)&field_144);
        param_1->RegisterMMouseDown((function*)&field_192);
        param_1->RegisterRMouseUp((function*)&field_240);
        param_1->RegisterRMouseDown((function*)&field_288);
        param_1->RegisterMouseMove((function*)&field_336);
        param_1->RegisterMouseWheel((function*)&field_384);
        param_1->RegisterLowLevelMouseDown((function*)&field_432);
        local_50 = (ClientMouseListener*)OnFirstTouchDown;
        local_48 = 0;
        local_38 = this;
        std::bind<bool (ClientMouseListener::*)(unsigned long, float, float), ClientMouseListener*,
                  std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&,
                  std::placeholders::__ph<3> const&>((_func_bool_ulong_float_float*)local_78, &local_50,
                                                     (__ph*)&local_38, (__ph*)&local_3c, in_R8);
        local_58 = (function*)&field_480;
        std::function<bool(unsigned long, float, float)>::operator=(
            (function<bool(unsigned long, float, float)>*)local_58, (__bind*)local_78);
        local_50 = (ClientMouseListener*)OnTouchDown;
        local_48 = 0;
        local_38 = this;
        std::bind<bool (ClientMouseListener::*)(unsigned long, float, float), ClientMouseListener*,
                  std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&,
                  std::placeholders::__ph<3> const&>((_func_bool_ulong_float_float*)local_78, &local_50,
                                                     (__ph*)&local_38, (__ph*)&local_3c, in_R8);
        std::function<bool(unsigned long, float, float)>::operator=(
            (function<bool(unsigned long, float, float)>*)&field_528, (__bind*)local_78);
        local_50 = (ClientMouseListener*)OnTouchMove;
        local_48 = 0;
        local_38 = this;
        std::bind<bool (ClientMouseListener::*)(unsigned long, float, float), ClientMouseListener*,
                  std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&,
                  std::placeholders::__ph<3> const&>((_func_bool_ulong_float_float*)local_78, &local_50,
                                                     (__ph*)&local_38, (__ph*)&local_3c, in_R8);
        std::function<bool(unsigned long, float, float)>::operator=(
            (function<bool(unsigned long, float, float)>*)&field_576, (__bind*)local_78);
        local_50 = (ClientMouseListener*)OnTouchUp;
        local_48 = 0;
        local_38 = this;
        std::bind<bool (ClientMouseListener::*)(unsigned long, float, float), ClientMouseListener*,
                  std::placeholders::__ph<1> const&, std::placeholders::__ph<2> const&,
                  std::placeholders::__ph<3> const&>((_func_bool_ulong_float_float*)local_78, &local_50,
                                                     (__ph*)&local_38, (__ph*)&local_3c, in_R8);
        std::function<bool(unsigned long, float, float)>::operator=(
            (function<bool(unsigned long, float, float)>*)&field_624, (__bind*)local_78);
        param_1->RegisterFirstTouchDown(local_58);
        param_1->RegisterTouchDown((function*)&field_528);
        param_1->RegisterTouchMove((function*)&field_576);
        param_1->RegisterTouchUp((function*)&field_624);
    }

    // 0x100394980, 80 bytes, placed by class name and debug map
    // ClientMouseListener::MouseReleased(int, float, float)
    undefined1 ClientMouseListener::MouseReleased(int param_1, float param_2, float param_3) {
        int iVar1;
        int* piVar2;

        piVar2 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)&field_24, (long)param_1);
        iVar1 = *piVar2;
        if (iVar1 != 0) {
            *piVar2 = 0;
            ReleaseTranslatedButton(this, iVar1, (int)param_2, (int)param_3);
        }
        return 1;
    }

    // 0x100394a40, 128 bytes, placed by class name and debug map
    // ClientMouseListener::MousePressed(int, float, float)
    undefined8 ClientMouseListener::MousePressed(int param_1, float param_2, float param_3) {
        undefined** ppuVar1;
        uint uVar2;
        uint* puVar3;
        undefined8 uVar4;
        InputListener* this_00;

        uVar2 = GetTranslatedButton(this, param_1);
        if ((field_36 & uVar2) == 0) {
            field_36 = field_36 | uVar2;
            this_00 = (InputListener*)&field_24;
            puVar3 = (uint*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)this_00, (long)param_1);
            *puVar3 = uVar2;
            ppuVar1 = field_0;
            uVar4 = this_00->GetCurrentTimeMS();
            (**(code**)(*ppuVar1 + 32))(ppuVar1, 0, uVar2, (int)param_2, (int)param_3, uVar4);
        }
        return 1;
    }

    // 0x100394ae0, 144 bytes, placed by class name and debug map
    // ClientMouseListener::MouseMoved(float, float)
    undefined1 ClientMouseListener::MouseMoved(float param_1, float param_2) {
        undefined** ppuVar1;
        int* piVar2;
        undefined8 uVar3;
        InputListener* this_00;

        this_00 = (InputListener*)&field_24;
        piVar2 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)this_00, 0);
        if ((*piVar2 == 0) &&
            (piVar2 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)this_00, 1), *piVar2 == 0)) {
            ppuVar1 = field_0;
            uVar3 = this_00->GetCurrentTimeMS();
            (**(code**)(*ppuVar1 + 56))(ppuVar1, (int)param_1, (int)param_2, uVar3);
            return 1;
        }
        MouseDragged(this, param_1, param_2);
        return 1;
    }

    // 0x100394c00, 32 bytes, placed by class name and debug map
    // ClientMouseListener::MouseWheel(float, float, float, float)
    undefined1 ClientMouseListener::MouseWheel(float param_1, float param_2, float param_3, float param_4) {
        std::__atomic_base<int, true>::operator-=((__atomic_base<int, true>*)&field_40, (int)(param_4 * 1024.0));
        return 1;
    }

    // 0x100394cb0, 32 bytes, placed by class name and debug map
    // ClientMouseListener::LowLevelMouseDown(int, int, int, int)
    undefined8 ClientMouseListener::LowLevelMouseDown(int param_1, int param_2, int param_3, int param_4) {
        undefined4 in_register_0000003c;

        (**(code**)(**(long**)CONCAT44(in_register_0000003c, param_1) + 104))();
        return 1;
    }

    // 0x100394e60, 32 bytes, placed by class name and debug map
    // ClientMouseListener::OnFirstTouchDown(unsigned long, float, float)
    undefined8 ClientMouseListener::OnFirstTouchDown(ulong param_1, float param_2, float param_3) {
        param_1->Instance();
        hal::Haptics::Prepare();
        return 0;
    }

    // 0x100394ef0, 80 bytes, placed by class name and debug map
    // ClientMouseListener::OnTouchDown(unsigned long, float, float)
    undefined1 ClientMouseListener::OnTouchDown(ulong param_1, float param_2, float param_3) {
        undefined** ppuVar1;
        undefined8 uVar2;

        ppuVar1 = field_0;
        uVar2 = GetCurrentTimeMS();
        (**(code**)(*ppuVar1 + 32))(ppuVar1, param_1 & 4294967295, 0, (int)param_2, (int)param_3, uVar2);
        return 1;
    }

    // 0x100394f40, 80 bytes, placed by class name and debug map
    // ClientMouseListener::OnTouchMove(unsigned long, float, float)
    undefined1 ClientMouseListener::OnTouchMove(ulong param_1, float param_2, float param_3) {
        undefined** ppuVar1;
        undefined8 uVar2;

        ppuVar1 = field_0;
        uVar2 = GetCurrentTimeMS();
        (**(code**)(*ppuVar1 + 48))(ppuVar1, param_1 & 4294967295, (int)param_2, (int)param_3, uVar2);
        return 1;
    }

    // 0x100394f90, 80 bytes, placed by class name and debug map
    // ClientMouseListener::OnTouchUp(unsigned long, float, float)
    undefined1 ClientMouseListener::OnTouchUp(ulong param_1, float param_2, float param_3) {
        undefined** ppuVar1;
        undefined8 uVar2;

        ppuVar1 = field_0;
        uVar2 = GetCurrentTimeMS();
        (**(code**)(*ppuVar1 + 40))(ppuVar1, param_1 & 4294967295, 0, (int)param_2, (int)param_3, uVar2);
        return 1;
    }

    // 0x100395060, 240 bytes, placed by class name and debug map
    // ClientMouseListener::Destroy()
    void ClientMouseListener::Destroy() {
        if (field_16 != (InputHandler*)0) {
            (field_16, (function*)&field_48)->UnregisterLMouseUp();
            (field_16, (function*)&field_96)->UnregisterLMouseDown();
            (field_16, (function*)&field_144)->UnregisterMMouseUp();
            (field_16, (function*)&field_192)->UnregisterMMouseDown();
            (field_16, (function*)&field_240)->UnregisterRMouseUp();
            (field_16, (function*)&field_288)->UnregisterRMouseDown();
            (field_16, (function*)&field_336)->UnregisterMouseMove();
            (field_16, (function*)&field_384)->UnregisterMouseWheel();
            (field_16, (function*)&field_432)->UnregisterLowLevelMouseDown();
            (field_16, (function*)&field_480)->UnregisterFirstTouchDown();
            (field_16, (function*)&field_528)->UnregisterTouchDown();
            (field_16, (function*)&field_576)->UnregisterTouchMove();
            (field_16, (function*)&field_624)->UnregisterTouchUp();
        }
    }

    // 0x1003952d0, 64 bytes, placed by class name and debug map
    // ClientMouseListener::MouseDragged(float, float)
    void ClientMouseListener::MouseDragged(float param_1, float param_2) {
        undefined** ppuVar1;
        undefined8 uVar2;

        ppuVar1 = field_0;
        uVar2 = GetCurrentTimeMS();
        (**(code**)(*ppuVar1 + 48))(ppuVar1, 0, (int)param_1, (int)param_2, uVar2);
    }

    // 0x100395320, 112 bytes, placed by class name and debug map
    // ClientMouseListener::GetTranslatedButton(int)
    undefined8 ClientMouseListener::GetTranslatedButton(int param_1) {
        ClientKeyboardListener* this_00;
        char cVar1;
        undefined8 uVar2;

        this_00 = field_8;
        if (this_00 == (ClientKeyboardListener*)0) {
            if (param_1 == 1) {
                return 4;
            }
        } else {
            cVar1 = this_00->IsAltDown();
            if (cVar1 != '\0') {
                return 4;
            }
            if (param_1 == 1) {
                return 4;
            }
        }
        if (param_1 == 2) {
            uVar2 = 2;
        } else {
            if ((this_00 != (ClientKeyboardListener*)0) && (cVar1 = this_00->IsCtrlDown(), cVar1 != '\0')) {
                return 2;
            }
            uVar2 = 1;
        }
        return uVar2;
    }

    // 0x100395390, 80 bytes, placed by class name and debug map
    // ClientMouseListener::ReleaseTranslatedButton(int, int, int)
    void ClientMouseListener::ReleaseTranslatedButton(int param_1, int param_2, int param_3) {
        undefined** ppuVar1;
        undefined8 uVar2;

        if ((field_36 & param_1) != 0) {
            field_36 = field_36 & ~param_1;
            ppuVar1 = field_0;
            uVar2 = GetCurrentTimeMS();
            (**(code**)(*ppuVar1 + 40))(ppuVar1, 0, param_1, param_2, param_3, uVar2);
        }
    }

    // 0x1003953f0, 64 bytes, placed by class name and debug map
    // ClientMouseListener::GetAndResetWheelRotation()
    int ClientMouseListener::GetAndResetWheelRotation() {
        int iVar1;
        int iVar2;
        int iVar3;

        iVar1 = std::__atomic_base<int, false>::exchange(&field_40);
        iVar2 = (uint)(0 < iVar1) * 1024;
        iVar3 = iVar2 + iVar1 + -512;
        iVar2 = iVar1 + iVar2 + 511;
        if (-1 < iVar3) {
            iVar2 = iVar3;
        }
        return iVar2 >> 10;
    }

} // namespace jag::oldscape::input

namespace jag::fixedfunction {
    // 0x100396c70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::Close()::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::Close()::{lambda(BaseApp*)#1}&&)::{lambda(void*, void*)#1}::operator void (*)(void*, void*)() const
    _func_void_void_ptr_void_ptr* function::function(oldscape::input::InputForm::Close()::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, void*) #1
    }
    ::operator_cast_to_function_pointer(_lambda_void__void___1_* this)

    {
        return (_func_void_void_ptr_void_ptr*)PTR___invoke_100ee9600;
    }

    // 0x100396c80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::Close()::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::Close()::{lambda(BaseApp*)#1}&&)::{lambda(void*, BaseApp*)#1}::operator void (*)(void*, BaseApp*)() const
    _func_void_void_ptr_BaseApp_ptr* function::function(oldscape::input::InputForm::Close()::{
        lambda(BaseApp*) #1
    }&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator_cast_to_function_pointer(_lambda_void__jag__BaseApp___1_* this)

    {
        return (_func_void_void_ptr_BaseApp_ptr*)PTR_BaseApp___100ee95f8;
    }

    // 0x100396c90, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::Close()::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::Close()::{lambda(BaseApp*)#1}&&)::{lambda(void*)#1}::operator void (*)(void*)() const
    _func_void_void_ptr* function::function(oldscape::input::InputForm::Close()::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*) #1
    }
    ::operator_cast_to_function_pointer() {
        return (_func_void_void_ptr*)PTR___invoke_100ee95f0;
    }

    // 0x100396ca0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::Close()::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::Close()::{lambda(BaseApp*)#1}&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::Close()::{
        lambda(void*, void*) #1
    }
    (BaseApp*)#1
},void>(oldscape::input::InputForm::Close()::{
    lambda(void*, void*) #1}(BaseApp*)#1
}&&)
     ::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    param_1->~AutoSingleton(param_1, param_2);
}

// 0x100396cc0, 32 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::Close()::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::Close()::{lambda(BaseApp*)#1}&&)::{lambda(void*, BaseApp*)#1}::__invoke(void*, BaseApp*)
void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::Close()::{
    lambda(void*, BaseApp*) #1
}
(BaseApp*)#1
},void>(oldscape::input::InputForm::Close()::{
    lambda(void*, BaseApp*) #1}(BaseApp*)#1
}&&)
     ::{
    lambda(void*, BaseApp*) #1
}
::BaseApp__(_lambda_void__jag__BaseApp___1_* param_1, BaseApp* param_2) {
    function < oldscape::input::InputForm::Close()::{
        lambda(BaseApp*) #1
    }
    , void > (oldscape::input::InputForm::Close()::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(param_1, param_1, param_2);
}

// 0x100396ce0, 32 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::Close()::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::Close()::{lambda(BaseApp*)#1}&&)::{lambda(void*, BaseApp*)#1}::operator()(void*, BaseApp*) const
/* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<oldscape::input::InputForm::Close()::{lambda(BaseApp*)#1},
   void>(oldscape::input::InputForm::Close()::{lambda(BaseApp*)#1}&&)::{lambda(void*,
   BaseApp*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, BaseApp*) const */

void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::Close()::{
    lambda(BaseApp*) #1
}
, void > (oldscape::input::InputForm::Close()::{ lambda(BaseApp*) #1 }&&)::{
    lambda(void*, BaseApp*) #1
}
::operator()(void* param_1, BaseApp * param_2) {
    oldscape::input::InputForm::Close()::{
        lambda(BaseApp*) #1
    }
    ::operator()(param_1, param_2);
}

// 0x100396d20, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::Close()::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::Close()::{lambda(BaseApp*)#1}&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::Close()::{
    lambda(void*) #1
}
(BaseApp*)#1
},void>(oldscape::input::InputForm::Close()::{
    lambda(void*) #1}(BaseApp*)#1
}&&)
     ::{
    lambda(void*) #1
}
::__invoke(void* param_1) {
    param_1->~AutoSingleton(param_1);
}

} // namespace jag::fixedfunction

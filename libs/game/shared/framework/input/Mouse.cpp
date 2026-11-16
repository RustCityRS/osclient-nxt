// libs/game/shared/framework/input/Mouse.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.shared

#include "Mouse.h"

namespace jag::game {
    // 0x1003efcf0: Mouse::GetScaledMousePosition() const has the same machine code as ObjType::GetName() const

    // 0x1006e3770
    Mouse::Mouse(input::InputHandler& inputHandler, graphics::ScaleManager& scaleManager)
        : field_0(nullptr), field_428(0.0), field_2432(0), field_2436(0), field_10440(0), field_10444(0) {
        Init(inputHandler, scaleManager);
    }

    // 0x1006e3920
    void Mouse::Init(input::InputHandler& inputHandler, graphics::ScaleManager& scaleManager) {
        Mouse* local_38;

        field_0 = inputHandler;
        bool* arg1 = std::array<bool, 3ul>::begin();
        bool* arg2 = std::array<bool, 3ul>::end();
        local_38 = (Mouse*)((unsigned long)local_38 & 18446744073709551360);
        std::fill<bool*, bool>(arg1, arg2, local_38);
        uint32_t* puVar1 = &field_400[0];
        *puVar1 = 3212836864;
        puVar1 = &field_400[1];
        *puVar1 = 3212836864;
        local_38 = this;
        ScaleManager* local_30 = scaleManager;
        ((function<bool(float, float)>*)&field_16)->operator=(&local_38);
        field_0->RegisterLMouseDown(&field_16);
        local_38 = this;
        ((function<bool(float, float)>*)&field_64)->operator=(&local_38);
        field_0->RegisterLMouseUp(&field_64);
        local_38 = this;
        local_30 = scaleManager;
        ((function<bool(float, float)>*)&field_112)->operator=(&local_38);
        field_0->RegisterMMouseDown(&field_112);
        local_38 = this;
        ((function<bool(float, float)>*)&field_160)->operator=(&local_38);
        field_0->RegisterMMouseUp(&field_160);
        local_38 = this;
        local_30 = scaleManager;
        ((function<bool(float, float)>*)&field_208)->operator=(&local_38);
        field_0->RegisterRMouseDown(&field_208);
        local_38 = this;
        ((function<bool(float, float)>*)&field_256)->operator=(&local_38);
        field_0->RegisterRMouseUp(&field_256);
        local_38 = this;
        local_30 = scaleManager;
        ((function<bool(float, float)>*)&field_304)->operator=(&local_38);
        field_0->RegisterMouseMove(&field_304);
        local_38 = this;
        ((function<bool(float, float, float, float)>*)&field_352)->operator=(&local_38);
        field_0->RegisterMouseWheel(&field_352);
    }

    // 0x1006e3ad0
    Mouse::~Mouse() {
        if (field_0 != nullptr) {
            field_0->UnregisterMouseWheel(&field_352);
            field_0->UnregisterMouseMove(&field_304);
            field_0->UnregisterRMouseUp(&field_256);
            field_0->UnregisterRMouseDown(&field_208);
            field_0->UnregisterMMouseUp(&field_160);
            field_0->UnregisterMMouseDown(&field_112);
            field_0->UnregisterLMouseUp(&field_64);
            field_0->UnregisterLMouseDown(&field_16);
        }
        field_352.~function();
        field_304.~function();
        field_256.~function();
        field_208.~function();
        field_160.~function();
        field_112.~function();
        field_64.~function();
        field_16.~function();
    }

    // 0x1006e3f90
    void Mouse::SetPosition(float arg1, float arg2, const graphics::ScaleManager& scaleManager) {
        float local_24 = arg1;
        float* pfVar1 = &field_400[0];
        *pfVar1 = local_24;
        local_24 = arg2;
        pfVar1 = &field_400[1];
        *pfVar1 = local_24;
        scaleManager.ScreenToInterfacePosition(arg1, arg2, true);
        local_24 = arg1;
        pfVar1 = &field_408[0];
        *pfVar1 = local_24;
        local_24 = arg2;
        pfVar1 = &field_408[1];
        *pfVar1 = local_24;
    }

    // 0x1006e4050
    void Mouse::OnMove(float arg1, float arg2, const graphics::ScaleManager& scaleManager) {
        SetPosition(arg1, arg2, scaleManager);
        uint8_t* this_00 = &field_2440;
        uint32_t* puVar2 = (uint32_t*)(*this_00)[(unsigned long)field_10440];
        *puVar2 = 4294967295;
        puVar2 = &field_400[0];
        uint32_t uVar1 = *puVar2;
        long lVar3 = (*this_00)[(unsigned long)field_10440];
        puVar2 = (uint32_t*)(*((lVar3 + 4)))[0];
        *puVar2 = uVar1;
        puVar2 = &field_400[1];
        uVar1 = *puVar2;
        lVar3 = (*this_00)[(unsigned long)field_10440];
        puVar2 = (uint32_t*)(*((lVar3 + 4)))[1];
        *puVar2 = uVar1;
        puVar2 = &field_408[0];
        uVar1 = *puVar2;
        lVar3 = (*this_00)[(unsigned long)field_10440];
        puVar2 = (uint32_t*)(*((lVar3 + 12)))[0];
        *puVar2 = uVar1;
        puVar2 = &field_408[1];
        uVar1 = *puVar2;
        lVar3 = (*this_00)[(unsigned long)field_10440];
        puVar2 = (uint32_t*)(*((lVar3 + 12)))[1];
        *puVar2 = uVar1;
        uint64_t uVar4 = FrameTime::GetCurrentTimeMS();
        unsigned int uVar5 = field_10440;
        lVar3 = (*this_00)[(unsigned long)uVar5];
        uVar5 = uVar5 + 1;
        if (199 < uVar5) {
            uVar5 = 0;
        }
        *(uint64_t*)(lVar3 + 24) = uVar4;
        field_10440 = uVar5;
        if (uVar5 == field_10444) {
            uVar5 = field_10444 + 1;
            if (199 < uVar5) {
                uVar5 = 0;
            }
            field_10444 = uVar5;
        }
    }

    // 0x1006e4200
    uint64_t Mouse::GetAndRemoveOldestMove() {
        unsigned int uVar3;

        unsigned int uVar1 = field_10444;
        uint64_t uVar2 = 0;
        if (uVar1 != field_10440) {
            uVar2 = field_2440[(unsigned long)uVar1];
            uVar3 = 0;
            if (uVar1 + 1 < 200) {
                uVar3 = uVar1 + 1;
            }
            field_10444 = uVar3;
        }
        return uVar2;
    }

    // 0x1006e4260
    void Mouse::OnScroll(float arg1, float arg2, float arg3, float arg4) {
        field_428 = arg4 + field_428;
    }

    // 0x1006e4280
    void Mouse::DoClick(float arg1, float arg2, MouseEventType mouseEventType, MouseButton mouseButton,
                        const graphics::ScaleManager& scaleManager) {
        float local_34 = arg1;
        uint8_t* puVar1 = &field_424[(unsigned long)mouseButton];
        *puVar1 = 1;
        puVar1 = &field_432;
        MouseEventType* pMVar2 = (MouseEventType*)(*puVar1)[(unsigned long)field_2432];
        *pMVar2 = mouseEventType;
        float* pfVar3 = &field_416[0];
        *pfVar3 = local_34;
        local_34 = arg2;
        pfVar3 = &field_416[1];
        *pfVar3 = local_34;
        local_34 = arg1;
        long lVar4 = (*puVar1)[(unsigned long)field_2432];
        pfVar3 = (float*)(*((lVar4 + 4)))[0];
        *pfVar3 = local_34;
        local_34 = arg2;
        lVar4 = (*puVar1)[(unsigned long)field_2432];
        pfVar3 = (float*)(*((lVar4 + 4)))[1];
        *pfVar3 = local_34;
        scaleManager.ScreenToInterfacePosition(arg1, arg2, true);
        local_34 = arg1;
        lVar4 = (*puVar1)[(unsigned long)field_2432];
        pfVar3 = (float*)(*((lVar4 + 12)))[0];
        *pfVar3 = local_34;
        local_34 = arg2;
        lVar4 = (*puVar1)[(unsigned long)field_2432];
        pfVar3 = (float*)(*((lVar4 + 12)))[1];
        *pfVar3 = local_34;
        uint64_t uVar5 = FrameTime::GetCurrentTimeMS();
        unsigned int uVar6 = field_2432;
        lVar4 = (*puVar1)[(unsigned long)uVar6];
        uVar6 = uVar6 + 1;
        if (49 < uVar6) {
            uVar6 = 0;
        }
        *(uint64_t*)(lVar4 + 24) = uVar5;
        field_2432 = uVar6;
        if (uVar6 == field_2436) {
            uVar6 = field_2436 + 1;
            if (49 < uVar6) {
                uVar6 = 0;
            }
            field_2436 = uVar6;
        }
    }

    // 0x1006e4460
    void Mouse::Reset() {
        unsigned long in_RAX;

        uint64_t uStack_28 = in_RAX;
        bool* arg1 = std::array<bool, 3ul>::begin();
        bool* arg2 = std::array<bool, 3ul>::end();
        uStack_28 = uStack_28 & 72057594037927935;
        std::fill<bool*, bool>(arg1, arg2, *((bool*)((long)&uStack_28 + 7)));
        field_2436 = field_2432;
        field_10444 = field_10440;
    }

    // 0x10071abe0
    void Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_46::operator()(float arg1, float arg2) const {
        DoClick(field_0, arg1, arg2, 0, 0, field_8);
    }

    // 0x10071b6c0
    void Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_47::operator()(float arg1, float arg2) const {
        uint8_t* puVar1 = (uint8_t*)(*((field_0 + 424)))[0];
        *puVar1 = 0;
    }

    // 0x10071c010
    void Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_48::operator()(float arg1, float arg2) const {
        DoClick(field_0, arg1, arg2, 1, 1, field_8);
    }

    // 0x10071c950
    void Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_49::operator()(float arg1, float arg2) const {
        uint8_t* puVar1 = (uint8_t*)(*((field_0 + 424)))[1];
        *puVar1 = 0;
    }

    // 0x10071d2a0
    void Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_50::operator()(float arg1, float arg2) const {
        DoClick(field_0, arg1, arg2, 2, 2, field_8);
    }

    // 0x10071dbe0
    void Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_51::operator()(float arg1, float arg2) const {
        uint8_t* puVar1 = (uint8_t*)(*((field_0 + 424)))[2];
        *puVar1 = 0;
    }

    // 0x10071e530
    void Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_52::operator()(float arg1, float arg2) const {
        OnMove((Mouse*)field_0, arg1, arg2, this[1].field_0);
    }

    // 0x10071eed0
    void Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_53::operator()(float arg1, float arg2,
                                                                                      float arg3, float arg4) const {
        OnScroll(field_0, arg1, arg2, arg3, arg4);
    }

} // namespace jag::game

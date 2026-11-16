// libs/game/shared/framework/input/Mouse.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.shared

#include "Mouse.h"

namespace jag::game {
    // 0x1003efcf0: the linker folded this into ObjType::GetName() const, which has identical code
    Mouse::GetScaledMousePosition() const;

    // 0x1006e3770, 368 bytes, base-object constructor, placed by class name and debug map
    // Mouse::Mouse(input::InputHandler&, graphics::ScaleManager&)
    void Mouse::Mouse(InputHandler* param_1, ScaleManager* param_2) {
        field_0 = (InputHandler*)0;
        std::function<bool(float, float)>::function((function<bool(float, float)>*)&field_16);
        std::function<bool(float, float)>::function((function<bool(float, float)>*)&field_64);
        std::function<bool(float, float)>::function((function<bool(float, float)>*)&field_112);
        std::function<bool(float, float)>::function((function<bool(float, float)>*)&field_160);
        std::function<bool(float, float)>::function((function<bool(float, float)>*)&field_208);
        std::function<bool(float, float)>::function((function<bool(float, float)>*)&field_256);
        std::function<bool(float, float)>::function((function<bool(float, float)>*)&field_304);
        std::function<bool(float, float, float, float)>::function(
            (function<bool(float, float, float, float)>*)&field_352);
        new (&field_400) math::Vector2T<int>();
        new (&field_408) math::Vector2T<int>();
        new (&field_416) math::Vector2T<int>();
        field_428 = 0.0;
        new (&field_432) std::array<MouseEvent, 50ul>();
        field_2432 = 0;
        field_2436 = 0;
        new (&field_2440) std::array<MouseEvent, 200ul>();
        field_10440 = 0;
        field_10444 = 0;
        Init(this, param_1, param_2);
    }

    // 0x1006e3920, 416 bytes, placed by class name and debug map
    // Mouse::Init(input::InputHandler&, graphics::ScaleManager&)
    void Mouse::Init(InputHandler* param_1, ScaleManager* param_2) {
        bool* pbVar1;
        bool* pbVar2;
        undefined4* puVar3;
        __52 local_38;

        field_0 = param_1;
        pbVar1 = (bool*)(&field_424)->begin();
        pbVar2 = (bool*)(&field_424)->end();
        local_38.field_0 = (Mouse*)((ulong)local_38.field_0 & 18446744073709551360);
        std::fill<bool*, bool>(pbVar1, pbVar2, (bool*)&local_38);
        puVar3 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)&field_400, 0);
        *puVar3 = 3212836864;
        puVar3 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)&field_400, 1);
        *puVar3 = 3212836864;
        local_38.field_0 = this;
        local_38.field_8 = param_2;
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)&field_16, (__46*)&local_38);
        (field_0, (function*)&field_16)->RegisterLMouseDown();
        local_38.field_0 = this;
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)&field_64, (__47*)&local_38);
        (field_0, (function*)&field_64)->RegisterLMouseUp();
        local_38.field_0 = this;
        local_38.field_8 = param_2;
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)&field_112, (__48*)&local_38);
        (field_0, (function*)&field_112)->RegisterMMouseDown();
        local_38.field_0 = this;
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)&field_160, (__49*)&local_38);
        (field_0, (function*)&field_160)->RegisterMMouseUp();
        local_38.field_0 = this;
        local_38.field_8 = param_2;
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)&field_208, (__50*)&local_38);
        (field_0, (function*)&field_208)->RegisterRMouseDown();
        local_38.field_0 = this;
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)&field_256, (__51*)&local_38);
        (field_0, (function*)&field_256)->RegisterRMouseUp();
        local_38.field_0 = this;
        local_38.field_8 = param_2;
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)&field_304, &local_38);
        (field_0, (function*)&field_304)->RegisterMouseMove();
        local_38.field_0 = this;
        std::function<bool(float, float, float, float)>::operator=(
            (function<bool(float, float, float, float)>*)&field_352, (__53*)&local_38);
        (field_0, (function*)&field_352)->RegisterMouseWheel();
    }

    // 0x1006e3ac0, 16 bytes, complete-object constructor, placed by class name and debug map
    // Mouse::Mouse(input::InputHandler&, graphics::ScaleManager&): jumps straight to the base-object constructor

    // 0x1006e3ad0, 336 bytes, base-object destructor, placed by class name and debug map
    // Mouse::~Mouse()
    void Mouse::~Mouse() {
        if (field_0 != (InputHandler*)0) {
            (field_0, (function*)&field_352)->UnregisterMouseWheel();
            (field_0, (function*)&field_304)->UnregisterMouseMove();
            (field_0, (function*)&field_256)->UnregisterRMouseUp();
            (field_0, (function*)&field_208)->UnregisterRMouseDown();
            (field_0, (function*)&field_160)->UnregisterMMouseUp();
            (field_0, (function*)&field_112)->UnregisterMMouseDown();
            (field_0, (function*)&field_64)->UnregisterLMouseUp();
            (field_0, (function*)&field_16)->UnregisterLMouseDown();
        }
        std::function<bool(float, float, float, float)>::~function(
            (function<bool(float, float, float, float)>*)&field_352);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_304);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_256);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_208);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_160);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_112);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_64);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_16);
    }

    // 0x1006e3c20, 16 bytes, complete-object destructor, placed by class name and debug map
    // Mouse::~Mouse(): jumps straight to the base-object destructor

    // 0x1006e3f90, 192 bytes, placed by class name and debug map
    // Mouse::SetPosition(float, float, graphics::ScaleManager const&)
    void Mouse::SetPosition(float param_1, float param_2, ScaleManager* param_3) {
        float* pfVar1;
        float local_2c;
        float local_28;
        float local_24;

        local_2c = param_1;
        local_28 = param_2;
        local_24 = param_1;
        pfVar1 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)&field_400, 0);
        *pfVar1 = local_24;
        local_24 = local_28;
        pfVar1 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)&field_400, 1);
        *pfVar1 = local_24;
        param_3->ScreenToInterfacePosition(&local_2c, &local_28, true);
        local_24 = local_2c;
        pfVar1 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)&field_408, 0);
        *pfVar1 = local_24;
        local_24 = local_28;
        pfVar1 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)&field_408, 1);
        *pfVar1 = local_24;
    }

    // 0x1006e4050, 416 bytes, placed by class name and debug map
    // Mouse::OnMove(float, float, graphics::ScaleManager const&)
    void Mouse::OnMove(float param_1, float param_2, ScaleManager* param_3) {
        undefined1* this_00;
        undefined4 uVar1;
        undefined4* puVar2;
        long lVar3;
        undefined8 uVar4;
        uint uVar5;

        SetPosition(this, param_1, param_2, param_3);
        this_00 = &field_2440;
        puVar2 = (undefined4*)std::array<MouseEvent, 200ul>::operator[]((array<MouseEvent, 200ul>*)this_00,
                                                                        (ulong)field_10440);
        *puVar2 = 4294967295;
        puVar2 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)&field_400, 0);
        uVar1 = *puVar2;
        lVar3 = std::array<MouseEvent, 200ul>::operator[]((array<MouseEvent, 200ul>*)this_00, (ulong)field_10440);
        puVar2 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(lVar3 + 4), 0);
        *puVar2 = uVar1;
        puVar2 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)&field_400, 1);
        uVar1 = *puVar2;
        lVar3 = std::array<MouseEvent, 200ul>::operator[]((array<MouseEvent, 200ul>*)this_00, (ulong)field_10440);
        puVar2 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(lVar3 + 4), 1);
        *puVar2 = uVar1;
        puVar2 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)&field_408, 0);
        uVar1 = *puVar2;
        lVar3 = std::array<MouseEvent, 200ul>::operator[]((array<MouseEvent, 200ul>*)this_00, (ulong)field_10440);
        puVar2 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(lVar3 + 12), 0);
        *puVar2 = uVar1;
        puVar2 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)&field_408, 1);
        uVar1 = *puVar2;
        lVar3 = std::array<MouseEvent, 200ul>::operator[]((array<MouseEvent, 200ul>*)this_00, (ulong)field_10440);
        puVar2 = (undefined4*)math::Vector2T<float>::operator[]((Vector2T<float>*)(lVar3 + 12), 1);
        *puVar2 = uVar1;
        uVar4 = FrameTime::GetCurrentTimeMS();
        uVar5 = field_10440;
        lVar3 = std::array<MouseEvent, 200ul>::operator[]((array<MouseEvent, 200ul>*)this_00, (ulong)uVar5);
        uVar5 = uVar5 + 1;
        if (199 < uVar5) {
            uVar5 = 0;
        }
        *(undefined8*)(lVar3 + 24) = uVar4;
        field_10440 = uVar5;
        if (uVar5 == field_10444) {
            uVar5 = field_10444 + 1;
            if (199 < uVar5) {
                uVar5 = 0;
            }
            field_10444 = uVar5;
        }
    }

    // 0x1006e4200, 96 bytes, placed by class name and debug map
    // Mouse::GetAndRemoveOldestMove()
    undefined8 Mouse::GetAndRemoveOldestMove() {
        uint uVar1;
        undefined8 uVar2;
        uint uVar3;

        uVar1 = field_10444;
        uVar2 = 0;
        if (uVar1 != field_10440) {
            uVar2 = std::array<MouseEvent, 200ul>::operator[]((array<MouseEvent, 200ul>*)&field_2440, (ulong)uVar1);
            uVar3 = 0;
            if (uVar1 + 1 < 200) {
                uVar3 = uVar1 + 1;
            }
            field_10444 = uVar3;
        }
        return uVar2;
    }

    // 0x1006e4260, 32 bytes, placed by class name and debug map
    // Mouse::OnScroll(float, float, float, float)
    void Mouse::OnScroll(float param_1, float param_2, float param_3, float param_4) {
        field_428 = param_4 + field_428;
    }

    // 0x1006e4280, 448 bytes, placed by class name and debug map
    // Mouse::DoClick(float, float, MouseEventType, MouseButton, graphics::ScaleManager const&)
    void Mouse::DoClick(float param_1, float param_2, Mouse* this, undefined4 param_4, uint param_5,
                        ScaleManager* param_6) {
        undefined1* puVar1;
        undefined4* puVar2;
        float* pfVar3;
        long lVar4;
        undefined8 uVar5;
        uint uVar6;
        float local_3c;
        float local_38;
        float local_34;

        local_3c = param_1;
        local_38 = param_2;
        local_34 = param_1;
        puVar1 = (undefined1*)std::array<bool, 3ul>::operator[]((array<bool, 3ul>*)&field_424, (ulong)param_5);
        *puVar1 = 1;
        puVar1 = &field_432;
        puVar2 =
            (undefined4*)std::array<MouseEvent, 50ul>::operator[]((array<MouseEvent, 50ul>*)puVar1, (ulong)field_2432);
        *puVar2 = param_4;
        pfVar3 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)&field_416, 0);
        *pfVar3 = local_34;
        local_34 = local_38;
        pfVar3 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)&field_416, 1);
        *pfVar3 = local_34;
        local_34 = local_3c;
        lVar4 = std::array<MouseEvent, 50ul>::operator[]((array<MouseEvent, 50ul>*)puVar1, (ulong)field_2432);
        pfVar3 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(lVar4 + 4), 0);
        *pfVar3 = local_34;
        local_34 = local_38;
        lVar4 = std::array<MouseEvent, 50ul>::operator[]((array<MouseEvent, 50ul>*)puVar1, (ulong)field_2432);
        pfVar3 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(lVar4 + 4), 1);
        *pfVar3 = local_34;
        param_6->ScreenToInterfacePosition(&local_3c, &local_38, true);
        local_34 = local_3c;
        lVar4 = std::array<MouseEvent, 50ul>::operator[]((array<MouseEvent, 50ul>*)puVar1, (ulong)field_2432);
        pfVar3 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(lVar4 + 12), 0);
        *pfVar3 = local_34;
        local_34 = local_38;
        lVar4 = std::array<MouseEvent, 50ul>::operator[]((array<MouseEvent, 50ul>*)puVar1, (ulong)field_2432);
        pfVar3 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)(lVar4 + 12), 1);
        *pfVar3 = local_34;
        uVar5 = FrameTime::GetCurrentTimeMS();
        uVar6 = field_2432;
        lVar4 = std::array<MouseEvent, 50ul>::operator[]((array<MouseEvent, 50ul>*)puVar1, (ulong)uVar6);
        uVar6 = uVar6 + 1;
        if (49 < uVar6) {
            uVar6 = 0;
        }
        *(undefined8*)(lVar4 + 24) = uVar5;
        field_2432 = uVar6;
        if (uVar6 == field_2436) {
            uVar6 = field_2436 + 1;
            if (49 < uVar6) {
                uVar6 = 0;
            }
            field_2436 = uVar6;
        }
    }

    // 0x1006e4460, 96 bytes, placed by class name and debug map
    // Mouse::Reset()
    void Mouse::Reset() {
        ulong in_RAX;
        bool* pbVar1;
        bool* pbVar2;
        undefined8 uStack_28;

        uStack_28 = in_RAX;
        pbVar1 = (bool*)(&field_424)->begin();
        pbVar2 = (bool*)(&field_424)->end();
        uStack_28 = uStack_28 & 72057594037927935;
        std::fill<bool*, bool>(pbVar1, pbVar2, (bool*)((long)&uStack_28 + 7));
        field_2436 = field_2432;
        field_10444 = field_10440;
    }

    // 0x10071abe0, 32 bytes, placed by class name
    // Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_46::operator()(float, float) const
    /* Mouse::Init(input::InputHandler&,
   graphics::ScaleManager&)::$_46::TEMPNAMEPLACEHOLDERVALUE(float, float) const */

    void Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_46::operator()(float param_1, float param_2) {
        undefined8* in_RDI;

        DoClick((Mouse*)*in_RDI, 0, 0, in_RDI[1]);
    }

    // 0x10071b6c0, 32 bytes, placed by class name
    // Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_47::operator()(float, float) const
    /* Mouse::Init(input::InputHandler&,
   graphics::ScaleManager&)::$_47::TEMPNAMEPLACEHOLDERVALUE(float, float) const */

    void Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_47::operator()(float param_1, float param_2) {
        undefined1* puVar1;
        long* in_RDI;

        puVar1 = (undefined1*)std::array<bool, 3ul>::operator[]((array<bool, 3ul>*)(*in_RDI + 424), 0);
        *puVar1 = 0;
    }

    // 0x10071c010, 32 bytes, placed by class name
    // Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_48::operator()(float, float) const
    /* Mouse::Init(input::InputHandler&,
   graphics::ScaleManager&)::$_48::TEMPNAMEPLACEHOLDERVALUE(float, float) const */

    void Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_48::operator()(float param_1, float param_2) {
        undefined8* in_RDI;

        DoClick((Mouse*)*in_RDI, 1, 1, in_RDI[1]);
    }

    // 0x10071c950, 32 bytes, placed by class name
    // Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_49::operator()(float, float) const
    /* Mouse::Init(input::InputHandler&,
   graphics::ScaleManager&)::$_49::TEMPNAMEPLACEHOLDERVALUE(float, float) const */

    void Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_49::operator()(float param_1, float param_2) {
        undefined1* puVar1;
        long* in_RDI;

        puVar1 = (undefined1*)std::array<bool, 3ul>::operator[]((array<bool, 3ul>*)(*in_RDI + 424), 1);
        *puVar1 = 0;
    }

    // 0x10071d2a0, 32 bytes, placed by class name
    // Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_50::operator()(float, float) const
    /* Mouse::Init(input::InputHandler&,
   graphics::ScaleManager&)::$_50::TEMPNAMEPLACEHOLDERVALUE(float, float) const */

    void Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_50::operator()(float param_1, float param_2) {
        undefined8* in_RDI;

        DoClick((Mouse*)*in_RDI, 2, 2, in_RDI[1]);
    }

    // 0x10071dbe0, 32 bytes, placed by class name
    // Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_51::operator()(float, float) const
    /* Mouse::Init(input::InputHandler&,
   graphics::ScaleManager&)::$_51::TEMPNAMEPLACEHOLDERVALUE(float, float) const */

    void Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_51::operator()(float param_1, float param_2) {
        undefined1* puVar1;
        long* in_RDI;

        puVar1 = (undefined1*)std::array<bool, 3ul>::operator[]((array<bool, 3ul>*)(*in_RDI + 424), 2);
        *puVar1 = 0;
    }

    // 0x10071e530, 32 bytes, placed by class name
    // Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_52::operator()(float, float) const
    /* Mouse::Init(input::InputHandler&,
   graphics::ScaleManager&)::$_52::TEMPNAMEPLACEHOLDERVALUE(float, float) const */

    void Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_52::operator()(float param_1, float param_2) {
        OnMove(field_0, param_1, param_2, field_8);
    }

    // 0x10071eed0, 16 bytes, placed by class name
    // Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_53::operator()(float, float, float, float) const
    /* Mouse::Init(input::InputHandler&,
   graphics::ScaleManager&)::$_53::TEMPNAMEPLACEHOLDERVALUE(float, float, float, float) const
    */

    void Mouse::Init(input::InputHandler&, graphics::ScaleManager&)::$_53::operator()(float param_1, float param_2,
                                                                                      float param_3, float param_4) {
        undefined8* in_RDI;

        OnScroll((Mouse*)*in_RDI, param_1, param_2, param_3, param_4);
    }

} // namespace jag::game

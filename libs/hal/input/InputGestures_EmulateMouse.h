// libs/hal/input/InputGestures_EmulateMouse.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.input

namespace jag::input::gesture {
    class GestureEmulateMouse : public ui::ComponentValueMixin // base inferred from shared vtable slots
    {
    public:
        class RunningTouch;
        // virtual methods in vtable order
        virtual ~GestureEmulateMouse();
        virtual OnTouchDown(GestureManager*, unsigned long, float, float);
        virtual OnTouchUp(GestureManager*, unsigned long, float, float);
        virtual OnTouchMove(GestureManager*, unsigned long, float, float);
        virtual OnTouchUpdate();
        void Reset();
        static /* 8 bytes */ m_touchMovementThresholdInches; // = 1024416809
        static /* 8 bytes */ m_rightClickTime;               // = 600

        // data members, from how the methods use this: 1158 bytes, the first 8 are ComponentValueMixin
        char _unknown_8[104];
        Input* field_112; // offset 112
        char _unknown_120[1000];
        ulong field_1120; // offset 1120
        int field_1128;   // offset 1128
        char _unknown_1132[4];
        ulonglong field_1136;  // offset 1136
        undefined4 field_1144; // offset 1144
        undefined1 field_1148; // offset 1148
        char field_1149;       // offset 1149
        char field_1150;       // offset 1150
        undefined1 field_1151; // offset 1151
        char _unknown_1152[6];
    };

    class GestureEmulateMouse::RunningTouch {
    public:
        RunningTouch(unsigned long, float, float);
        RunningTouch();
        void swap(RunningTouch&);

        // data members, from how the methods use this: 56 bytes
        Pix8* field_0;       // offset 0
        TouchPoint field_8;  // offset 8
        TouchPoint field_32; // offset 32
    };

    // 0x100ca02f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // GestureEmulateMouse::RunningTouch::RunningTouch(): jumps straight to the base-object constructor

    // 0x100ca0300, 48 bytes, inline, placed by debug map only (low confidence)
    // GestureEmulateMouse::RunningTouch::swap(GestureEmulateMouse::RunningTouch&)
    void GestureEmulateMouse::RunningTouch::swap(RunningTouch* param_1) {
        eastl::swap<oldscape::graphics::Pix8*>(&field_0, &param_1->field_0);
        eastl::swap<TouchPoint>((TouchPoint*)field_8, (TouchPoint*)param_1->field_8);
    }

    // 0x100ca0400, 160 bytes, placed by debug map only (low confidence)
    // GestureEmulateMouse::OnTouchUpdate()
    undefined8 GestureEmulateMouse::OnTouchUpdate() {
        char cVar1;
        ulonglong uVar2;
        long lVar3;
        SystemTimer* this_00;
        Layout local_30[16];

        if (field_1151 != '\0') {
            this_00 = (SystemTimer*)&field_120;
            cVar1 = this_00->empty();
            if (cVar1 == '\0') {
                uVar2 = SystemTimer::GetTimeMS<std::chrono::steady_clock>(this_00);
                if (m_rightClickTime < uVar2 - field_1136) {
                    eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                     eastl::equal_to<eastl::string>, eastl::hash<eastl::string>,
                                     eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                     false, true, true>::begin();
                    lVar3 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(local_30);
                    (field_112, *(float*)(lVar3 + 24), *(float*)(lVar3 + 28))->OnRMouseDown();
                    field_1149 = '\x01';
                    (field_112, *(float*)(lVar3 + 24), *(float*)(lVar3 + 28))->OnRMouseUp();
                    field_1150 = '\x01';
                    field_1151 = 0;
                }
            }
        }
        return 1;
    }

    // 0x100ca04a0, 64 bytes, placed by debug map only (low confidence)
    // GestureEmulateMouse::Reset()
    void GestureEmulateMouse::Reset() {
        (&field_120)->clear();
        field_1151 = 0;
        field_1149 = '\0';
        field_1150 = '\0';
        field_1120 = 4294967295;
    }

    // 0x100ca0510, 96 bytes, base-object constructor, placed by debug map only (low confidence)
    // GestureEmulateMouse::RunningTouch::RunningTouch(unsigned long, float, float)
    void GestureEmulateMouse::RunningTouch::RunningTouch(ulong param_1, float param_2, float param_3) {
        field_0 = (Pix8*)param_1;
        new (field_8) TouchPoint();
        new (field_32) TouchPoint();
        *(ulong*)field_8 = param_1;
        *(float*)(field_8 + 8) = param_2;
        *(float*)(field_8 + 12) = param_3;
        *(float*)(field_32 + 8) = param_2;
        *(float*)(field_32 + 12) = param_3;
    }

} // namespace jag::input::gesture

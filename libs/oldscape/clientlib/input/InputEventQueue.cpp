// libs/oldscape/clientlib/input/InputEventQueue.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.clientlib

#include "InputEventQueue.h"

namespace jag::oldscape::input {
    // 0x100009e70: InputEventQueue::ResetState() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100392340
    InputEventQueue::InputEventQueue() : InputHandler(), field_6768(0), field_6772(1) {
        uint32_t* puVar1 = &field_6696[0];
        *puVar1 = 0;
        puVar1 = &field_6696[(long)(int)field_6772];
        *puVar1 = 0;
    }

    // 0x100392430
    void InputEventQueue::RegisterDispatchHandler(InputHandler* inputHandler, unsigned char arg2) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        auto local_40 = field_8.find((uint8_t)arg2);
        local_38.end();
        if (local_40 == local_38 == '\0') {
            LogAssert("handler == m_dispatchHandlers.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/input/"
                      "InputEventQueue.cpp",
                      23, "Dispatch handler already registered at slot %u", (unsigned long)(uint8_t)arg2);
        }
        uint64_t* puVar2 = &field_8[(uint8_t)arg2];
        *puVar2 = inputHandler;
    }

    // 0x100392660
    void InputEventQueue::UnregisterDispatchHandler(unsigned char arg1) {
        field_8.erase(arg1);
    }

    // 0x100392700
    bool InputEventQueue::Dispatch() {
        bool cVar1;
        array<InputEvent, 100ul>* this_00;
        InputEvent* this_01;
        uint64_t* puVar3;
        unsigned long arg1;
        ReturnValue local_68;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_60;
        array<std::array<InputEvent, 100ul>, 2ul>* local_58;
        vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true>>* local_50;

        SwapQueues();
        array<unsigned int, 2ul>* local_48 = (array<unsigned int, 2ul>*)&field_6696;
        InputEventQueue* local_38 = this;
        unsigned int* puVar2 = (unsigned int*)(*local_48)[(long)(int)field_6772];
        unsigned long local_40 = (unsigned long)*puVar2;
        if (local_40 != 0) {
            local_58 = (array<std::array<InputEvent, 100ul>, 2ul>*)&local_38->field_296;
            local_50 =
                (vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true>>*)&local_38->field_8;
            arg1 = 0;
            do {
                this_00 = (array<InputEvent, 100ul>*)(*local_58)[(long)(int)local_38->field_6772];
                this_01 = (InputEvent*)(*this_00)[arg1];
                local_68 = local_50->rbegin();
                local_60.end();
                while (cVar1 = local_68 != local_60, cVar1) {
                    ((compressed_pair<eastl::string*>*)*local_68)->first();
                    puVar3 = (uint64_t*)eastl::compressed_pair<std::deque<ThreadPool::TaskInfo>*>::second();
                    if (((InputHandler*)*puVar3 != nullptr) &&
                        (cVar1 = this_01->DispatchToInputHandler(*puVar3), cVar1))
                        break;
                    ++local_68;
                }
                arg1 = arg1 + 1;
            } while (arg1 != local_40);
        }
        uint32_t* puVar4 = (uint32_t*)(*local_48)[(long)(int)local_38->field_6772];
        *puVar4 = 0;
        return local_40 != 0;
    }

    // 0x100392850
    void InputEventQueue::SwapQueues() {
        scoped_lock<std::mutex> local_20(field_6704);
        bool bVar1 = field_6768 == 0;
        field_6768 = (unsigned int)bVar1;
        field_6772 = (unsigned int)!bVar1;
    }

    // 0x100392aa0
    void InputEventQueue::KeyPressed(int arg1, unsigned long long arg2) {
        uint32_t in_register_00000034;

        KeyRepeat((int)this, (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1));
    }

    // 0x100392ab0
    uint8_t InputEventQueue::KeyRepeat(int arg1, unsigned long long arg2) {

        InputEvent local_48;
        local_48.field_0 = 6;
        local_48._4_4_ = arg1;
        local_48.field_24 = arg2;
        AddEventToQueue(local_48);
        return 1;
    }

    // 0x100392b10
    void InputEventQueue::AddEventToQueue(const InputEvent& inputEvent) {
        scoped_lock<std::mutex> local_28(field_6704);
        int* piVar5 = &field_6696[(long)(int)field_6768];
        int iVar1 = *piVar5;
        unsigned long arg1 = 99;
        if ((long)iVar1 < 100) {
            *piVar5 = iVar1 + 1;
            arg1 = (long)iVar1;
        }
        array<InputEvent, 100ul>* this_00 = &field_296[(long)(int)field_6768];
        uint64_t* puVar6 = (uint64_t*)(*this_00)[arg1];
        uint64_t uVar2 = *(uint64_t*)&inputEvent.field_8;
        uint64_t uVar3 = *(uint64_t*)&inputEvent.field_16;
        uint64_t uVar4 = inputEvent.field_24;
        *puVar6 = *(uint64_t*)inputEvent;
        puVar6[1] = uVar2;
        puVar6[2] = uVar3;
        puVar6[3] = uVar4;
    }

    // 0x100392ba0
    uint8_t InputEventQueue::KeyReleased(int arg1, unsigned long long arg2) {

        InputEvent local_48;
        local_48.field_0 = 7;
        local_48._4_4_ = arg1;
        local_48.field_24 = arg2;
        AddEventToQueue(local_48);
        return 1;
    }

    // 0x100392bf0
    uint8_t InputEventQueue::KeyTyped(char16_t arg1, unsigned long long arg2) {
        uint64_t in_register_00000032;

        InputEvent local_48;
        local_48.field_0 = 8;
        local_48._4_4_ = (uint32_t)((((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1));
        local_48.field_24 = arg2;
        AddEventToQueue(local_48);
        return 1;
    }

    // 0x100392c40
    uint64_t InputEventQueue::PointerPress(int arg1, int arg2, int arg3, int arg4, unsigned long long arg5) {

        InputEvent local_58;
        local_58.field_0 = 3;
        local_58.field_24 = arg5;
        local_58._4_4_ = arg1;
        local_58.field_8 = arg2;
        local_58.field_12 = arg3;
        local_58.field_16 = arg4;
        AddEventToQueue(local_58);
        return 1;
    }

    // 0x100392cb0
    uint64_t InputEventQueue::PointerRelease(int arg1, int arg2, int arg3, int arg4, unsigned long long arg5) {

        InputEvent local_58;
        local_58.field_0 = 4;
        local_58.field_24 = arg5;
        local_58._4_4_ = arg1;
        local_58.field_8 = arg2;
        local_58.field_12 = arg3;
        local_58.field_16 = arg4;
        AddEventToQueue(local_58);
        return 1;
    }

    // 0x100392d20
    uint8_t InputEventQueue::PointerDrag(int arg1, int arg2, int arg3, unsigned long long arg4) {

        InputEvent local_50;
        local_50.field_0 = 5;
        local_50._4_4_ = arg1;
        local_50.field_12 = arg2;
        local_50.field_16 = arg3;
        local_50.field_24 = arg4;
        AddEventToQueue(local_50);
        return 1;
    }

    // 0x100392d80
    uint8_t InputEventQueue::MouseMove(int arg1, int arg2, unsigned long long arg3) {

        InputEvent local_50;
        local_50.field_0 = 0;
        local_50.field_12 = arg1;
        local_50.field_16 = arg2;
        local_50.field_24 = arg3;
        AddEventToQueue(local_50);
        return 1;
    }

    // 0x100392de0
    uint8_t InputEventQueue::PointerCancel(int arg1, int arg2, unsigned long long arg3) {

        InputEvent local_50;
        local_50.field_0 = 1;
        local_50.field_12 = arg1;
        local_50.field_16 = arg2;
        local_50.field_24 = arg3;
        AddEventToQueue(local_50);
        return 1;
    }

    // 0x100392e40
    uint8_t InputEventQueue::WheelScroll(int arg1, unsigned long long arg2) {

        InputEvent local_48;
        local_48.field_0 = 2;
        local_48._4_4_ = arg1;
        local_48.field_24 = arg2;
        AddEventToQueue(local_48);
        return 1;
    }

    // 0x100392e90
    uint8_t InputEventQueue::KeyboardInputFocusChange(int arg1, unsigned long long arg2) {

        InputEvent local_48;
        local_48.field_0 = 9;
        local_48._4_4_ = arg1;
        local_48.field_24 = arg2;
        AddEventToQueue(local_48);
        return 1;
    }

    // 0x100392ee0
    uint8_t InputEventQueue::OnLowLevelMouseDown(int arg1, int arg2, int arg3, int arg4) {

        InputEvent local_48;
        local_48.field_0 = 10;
        local_48._4_4_ = arg3;
        local_48.field_8 = arg4;
        AddEventToQueue(local_48);
        return 1;
    }

    // 0x100392f30
    uint8_t InputEventQueue::TextCommandReceived(int arg1, unsigned long long arg2) {

        InputEvent local_48;
        local_48.field_0 = 11;
        local_48._4_4_ = arg1;
        local_48.field_24 = arg2;
        AddEventToQueue(local_48);
        return 1;
    }

} // namespace jag::oldscape::input

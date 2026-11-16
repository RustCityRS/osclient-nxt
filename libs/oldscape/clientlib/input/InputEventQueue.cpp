// libs/oldscape/clientlib/input/InputEventQueue.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.clientlib

#include "InputEventQueue.h"

namespace jag::oldscape::input {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    InputEventQueue::ResetState();

    // 0x100392340, 160 bytes, base-object constructor, placed by class name and debug map
    // InputEventQueue::InputEventQueue()
    void InputEventQueue::InputEventQueue() {
        undefined4* puVar1;
        InputHandler* in_RSI;

        new (this) InputHandler(in_RSI);
        field_0 = &PTR_KeyPressed_100efd5e8;
        new (&field_8)
            eastl::fixed_map<unsigned char, InputHandler*, 3ul, true, eastl::less<unsigned char>, eastl::allocator>();
        new (&field_296) std::array<std::array<InputEvent, 100ul>, 2ul>();
        new (&field_6704) std::mutex();
        field_6768 = 0;
        field_6772 = 1;
        puVar1 = (undefined4*)std::array<unsigned int, 2ul>::operator[]((array<unsigned int, 2ul>*)&field_6696, 0);
        *puVar1 = 0;
        puVar1 = (undefined4*)std::array<unsigned int, 2ul>::operator[]((array<unsigned int, 2ul>*)&field_6696,
                                                                        (long)(int)field_6772);
        *puVar1 = 0;
    }

    // 0x100392420, 16 bytes, complete-object constructor, placed by class name and debug map
    // InputEventQueue::InputEventQueue(): jumps straight to the base-object constructor

    // 0x100392430, 160 bytes, placed by class name and debug map
    // InputEventQueue::RegisterDispatchHandler(InputHandler*, unsigned char)
    void InputEventQueue::RegisterDispatchHandler(InputHandler* param_1, uchar param_2) {
        undefined8* puVar2;
        hashtable_iterator_base* extraout_RDX;
        eastl local_40[8];
        hashtable_iterator_base local_38[15];
        byte local_29;

        local_29 = param_2;
        eastl::rbtree<unsigned char, eastl::pair<unsigned char const, InputHandler*>, eastl::less<unsigned char>,
                      eastl::fixed_node_allocator<48ul, 3ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<unsigned char const, InputHandler*>>, true,
                      true>::find((uchar*)local_40);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (!eastl::operator==(local_40, local_38, extraout_RDX)) {
            /* WARNING: Subroutine does not return */
            LogAssert("handler == m_dispatchHandlers.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/input/"
                      "InputEventQueue.cpp",
                      23, "Dispatch handler already registered at slot %u", (ulong)local_29);
        }
        puVar2 = (undefined8*)eastl::map<unsigned char, InputHandler*, eastl::less<unsigned char>,
                                         eastl::fixed_node_allocator<48ul, 3ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[]((map<unsigned char, InputHandler*, eastl::less<unsigned char>,
                        eastl::fixed_node_allocator<48ul, 3ul, 8ul, 0ul, true, eastl::allocator>>*)&field_8,
                   &local_29);
        *puVar2 = param_1;
    }

    // 0x100392660, 32 bytes, placed by class name and debug map
    // InputEventQueue::UnregisterDispatchHandler(unsigned char)
    void InputEventQueue::UnregisterDispatchHandler(uchar param_1) {
        undefined7 in_register_00000039;

        eastl::map<unsigned char, InputHandler*, eastl::less<unsigned char>,
                   eastl::fixed_node_allocator<48ul, 3ul, 8ul, 0ul, true, eastl::allocator>>::
            erase((uchar*)(CONCAT71(in_register_00000039, param_1) + 8));
    }

    // 0x100392700, 336 bytes, placed by class name and debug map
    // InputEventQueue::Dispatch()
    bool InputEventQueue::Dispatch() {
        bool bVar1;
        char cVar2;
        uint* puVar3;
        array<InputEvent, 100ul>* this_00;
        InputEvent* this_01;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            this_02;
        undefined8* puVar4;
        undefined4* puVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar6;
        ulong uVar7;
        rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>
            local_68[8];
        hashtable_iterator_base local_60[8];
        array<std::array<InputEvent, 100ul>, 2ul>* local_58;
        undefined1* local_50;
        array<unsigned int, 2ul>* local_48;
        ulong local_40;
        InputEventQueue* local_38;

        SwapQueues(this);
        local_48 = (array<unsigned int, 2ul>*)&field_6696;
        local_38 = this;
        puVar3 = (uint*)std::array<unsigned int, 2ul>::operator[](local_48, (long)(int)field_6772);
        local_40 = (ulong)*puVar3;
        if (local_40 != 0) {
            local_58 = (array<std::array<InputEvent, 100ul>, 2ul>*)&local_38->field_296;
            local_50 = &local_38->field_8;
            uVar7 = 0;
            do {
                this_00 = (array<InputEvent, 100ul>*)std::array<std::array<InputEvent, 100ul>, 2ul>::operator[](
                    local_58, (long)(int)local_38->field_6772);
                this_01 = (InputEvent*)std::array<InputEvent, 100ul>::operator[](this_00, uVar7);
                eastl::vector<unsigned long,
                              eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
                eastl::rbtree<
                    unsigned int,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::less<unsigned int>, eastl::allocator,
                    eastl::use_first<eastl::pair<unsigned int const,
                                                 eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                    true, true>::end();
                phVar6 = extraout_RDX;
                while (bVar1 = eastl::operator!=((eastl*)local_68, local_60, phVar6), bVar1) {
                    this_02 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator>*)
                        eastl::rbtree_iterator<
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                          eastl::allocator>>&>::operator*(local_68);
                    eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
                    puVar4 = (undefined8*)
                        eastl::compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator>::second(this_02);
                    if (((InputHandler*)*puVar4 != (InputHandler*)0) &&
                        (cVar2 = this_01->DispatchToInputHandler((InputHandler*)*puVar4), cVar2 != '\0'))
                        break;
                    eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                      eastl::allocator>>&>::operator++(local_68);
                    phVar6 = extraout_RDX_00;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 != local_40);
        }
        puVar5 = (undefined4*)std::array<unsigned int, 2ul>::operator[](local_48, (long)(int)local_38->field_6772);
        *puVar5 = 0;
        return local_40 != 0;
    }

    // 0x100392850, 80 bytes, placed by class name and debug map
    // InputEventQueue::SwapQueues()
    void InputEventQueue::SwapQueues() {
        bool bVar1;
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&field_6704);
        bVar1 = field_6768 == 0;
        field_6768 = (uint)bVar1;
        field_6772 = (uint)!bVar1;
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100392aa0, 16 bytes, placed by class name
    // InputEventQueue::KeyPressed(int, unsigned long long)
    void InputEventQueue::KeyPressed(int param_1, ulonglong param_2) {
        (*(code*)field_0[1])();
    }

    // 0x100392ab0, 80 bytes, placed by class name
    // InputEventQueue::KeyRepeat(int, unsigned long long)
    undefined1 InputEventQueue::KeyRepeat(int param_1, ulonglong param_2) {
        InputEvent local_48;

        new (&local_48) InputEvent();
        local_48.field_0 = 6;
        local_48._4_4_ = param_1;
        local_48.field_24 = param_2;
        AddEventToQueue(this, &local_48);
        return 1;
    }

    // 0x100392b10, 144 bytes, placed by class name
    // InputEventQueue::AddEventToQueue(InputEvent const&)
    void InputEventQueue::AddEventToQueue(InputEvent* param_1) {
        int iVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        int* piVar5;
        array<InputEvent, 100ul>* this_00;
        undefined8* puVar6;
        ulong uVar7;
        scoped_lock<std::mutex> local_28[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)&field_6704);
        piVar5 = (int*)std::array<unsigned int, 2ul>::operator[]((array<unsigned int, 2ul>*)&field_6696,
                                                                 (long)(int)field_6768);
        iVar1 = *piVar5;
        uVar7 = 99;
        if ((long)iVar1 < 100) {
            *piVar5 = iVar1 + 1;
            uVar7 = (long)iVar1;
        }
        this_00 = (array<InputEvent, 100ul>*)std::array<std::array<InputEvent, 100ul>, 2ul>::operator[](
            (array<std::array<InputEvent, 100ul>, 2ul>*)&field_296, (long)(int)field_6768);
        puVar6 = (undefined8*)std::array<InputEvent, 100ul>::operator[](this_00, uVar7);
        uVar2 = *(undefined8*)&param_1->field_8;
        uVar3 = *(undefined8*)&param_1->field_16;
        uVar4 = param_1->field_24;
        *puVar6 = *(undefined8*)param_1;
        puVar6[1] = uVar2;
        puVar6[2] = uVar3;
        puVar6[3] = uVar4;
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
    }

    // 0x100392ba0, 80 bytes, placed by class name
    // InputEventQueue::KeyReleased(int, unsigned long long)
    undefined1 InputEventQueue::KeyReleased(int param_1, ulonglong param_2) {
        InputEvent local_48;

        new (&local_48) InputEvent();
        local_48.field_0 = 7;
        local_48._4_4_ = param_1;
        local_48.field_24 = param_2;
        AddEventToQueue(this, &local_48);
        return 1;
    }

    // 0x100392bf0, 80 bytes, placed by class name
    // InputEventQueue::KeyTyped(char16_t, unsigned long long)
    undefined1 InputEventQueue::KeyTyped(wchar16 param_1, ulonglong param_2) {
        undefined6 in_register_00000032;
        InputEvent local_48;

        new (&local_48) InputEvent();
        local_48.field_0 = 8;
        local_48._4_4_ = SUB84(CONCAT62(in_register_00000032, param_1), 0);
        local_48.field_24 = param_2;
        AddEventToQueue(this, &local_48);
        return 1;
    }

    // 0x100392c40, 112 bytes, placed by class name
    // InputEventQueue::PointerPress(int, int, int, int, unsigned long long)
    undefined8 InputEventQueue::PointerPress(int param_1, int param_2, int param_3, int param_4, ulonglong param_5) {
        InputEvent local_58;

        new (&local_58) InputEvent();
        local_58.field_0 = 3;
        local_58.field_24 = param_5;
        local_58._4_4_ = param_1;
        local_58.field_8 = param_2;
        local_58.field_12 = param_3;
        local_58.field_16 = param_4;
        AddEventToQueue(this, &local_58);
        return 1;
    }

    // 0x100392cb0, 112 bytes, placed by class name
    // InputEventQueue::PointerRelease(int, int, int, int, unsigned long long)
    undefined8 InputEventQueue::PointerRelease(int param_1, int param_2, int param_3, int param_4, ulonglong param_5) {
        InputEvent local_58;

        new (&local_58) InputEvent();
        local_58.field_0 = 4;
        local_58.field_24 = param_5;
        local_58._4_4_ = param_1;
        local_58.field_8 = param_2;
        local_58.field_12 = param_3;
        local_58.field_16 = param_4;
        AddEventToQueue(this, &local_58);
        return 1;
    }

    // 0x100392d20, 96 bytes, placed by class name
    // InputEventQueue::PointerDrag(int, int, int, unsigned long long)
    undefined1 InputEventQueue::PointerDrag(int param_1, int param_2, int param_3, ulonglong param_4) {
        InputEvent local_50;

        new (&local_50) InputEvent();
        local_50.field_0 = 5;
        local_50._4_4_ = param_1;
        local_50.field_12 = param_2;
        local_50.field_16 = param_3;
        local_50.field_24 = param_4;
        AddEventToQueue(this, &local_50);
        return 1;
    }

    // 0x100392d80, 96 bytes, placed by class name
    // InputEventQueue::MouseMove(int, int, unsigned long long)
    undefined1 InputEventQueue::MouseMove(int param_1, int param_2, ulonglong param_3) {
        InputEvent local_50;

        new (&local_50) InputEvent();
        local_50.field_0 = 0;
        local_50.field_12 = param_1;
        local_50.field_16 = param_2;
        local_50.field_24 = param_3;
        AddEventToQueue(this, &local_50);
        return 1;
    }

    // 0x100392de0, 96 bytes, placed by class name
    // InputEventQueue::PointerCancel(int, int, unsigned long long)
    undefined1 InputEventQueue::PointerCancel(int param_1, int param_2, ulonglong param_3) {
        InputEvent local_50;

        new (&local_50) InputEvent();
        local_50.field_0 = 1;
        local_50.field_12 = param_1;
        local_50.field_16 = param_2;
        local_50.field_24 = param_3;
        AddEventToQueue(this, &local_50);
        return 1;
    }

    // 0x100392e40, 80 bytes, placed by class name
    // InputEventQueue::WheelScroll(int, unsigned long long)
    undefined1 InputEventQueue::WheelScroll(int param_1, ulonglong param_2) {
        InputEvent local_48;

        new (&local_48) InputEvent();
        local_48.field_0 = 2;
        local_48._4_4_ = param_1;
        local_48.field_24 = param_2;
        AddEventToQueue(this, &local_48);
        return 1;
    }

    // 0x100392e90, 80 bytes, placed by class name
    // InputEventQueue::KeyboardInputFocusChange(int, unsigned long long)
    undefined1 InputEventQueue::KeyboardInputFocusChange(int param_1, ulonglong param_2) {
        InputEvent local_48;

        new (&local_48) InputEvent();
        local_48.field_0 = 9;
        local_48._4_4_ = param_1;
        local_48.field_24 = param_2;
        AddEventToQueue(this, &local_48);
        return 1;
    }

    // 0x100392ee0, 80 bytes, placed by class name
    // InputEventQueue::OnLowLevelMouseDown(int, int, int, int)
    undefined1 InputEventQueue::OnLowLevelMouseDown(int param_1, int param_2, int param_3, int param_4) {
        InputEvent local_48;

        new (&local_48) InputEvent();
        local_48.field_0 = 10;
        local_48._4_4_ = param_3;
        local_48.field_8 = param_4;
        AddEventToQueue(this, &local_48);
        return 1;
    }

    // 0x100392f30, 80 bytes, placed by class name
    // InputEventQueue::TextCommandReceived(int, unsigned long long)
    undefined1 InputEventQueue::TextCommandReceived(int param_1, ulonglong param_2) {
        InputEvent local_48;

        new (&local_48) InputEvent();
        local_48.field_0 = 11;
        local_48._4_4_ = param_1;
        local_48.field_24 = param_2;
        AddEventToQueue(this, &local_48);
        return 1;
    }

} // namespace jag::oldscape::input

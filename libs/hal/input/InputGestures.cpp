// libs/hal/input/InputGestures.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.input

#include "InputGestures.h"

namespace jag::input {
    // 0x100c9d390, 16 bytes, placed by debug map only (low confidence)
    // Input::IsOnScreenKeyboardVisible() const
    undefined8 Input::IsOnScreenKeyboardVisible() {
        return 0;
    }

    // 0x100c9d3a0, 16 bytes, placed by debug map only (low confidence)
    // Input::ShowOnScreenKeyboard(SoftKeyboardType, eastl::basic_string<char, BucketAllocatorEASTL>, int, bool, bool)
    void Input::ShowOnScreenKeyboard() {}

    // 0x100c9d3b0, 16 bytes, placed by debug map only (low confidence)
    // Input::HideOnScreenKeyboard()
    void Input::HideOnScreenKeyboard() {}

    // 0x100c9d3c0, 16 bytes, placed by debug map only (low confidence)
    // Input::SetOnScreenKeyboardText(eastl::basic_string<char, BucketAllocatorEASTL>, int, bool)
    void Input::SetOnScreenKeyboardText() {}

    // 0x100c9d3d0, 16 bytes, placed by debug map only (low confidence)
    // Input::SetOnScreenKeyboardSelection(int, int)
    void Input::SetOnScreenKeyboardSelection(int param_1, int param_2) {}

    // 0x100c9d3e0, 16 bytes, placed by debug map only (low confidence)
    // Input::ShowEditMenu()
    void Input::ShowEditMenu() {}

    // 0x100c9d3f0, 16 bytes, placed by debug map only (low confidence)
    // Input::HideEditMenu()
    void Input::HideEditMenu() {}

} // namespace jag::input

namespace jag::input::gesture {
    // 0x100c9d300, 144 bytes, placed by debug map only (low confidence)
    // GestureManager::Update()
    void GestureManager::Update() {
        bool bVar1;
        undefined8* puVar2;
        hashtable_iterator_base* extraout_RDX;
        undefined1 auVar3[16];
        undefined8 local_28;
        undefined8 local_20;

        local_28 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        auVar3 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                               eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                               true>::begin();
        local_20 = auVar3._0_8_;
        bVar1 = eastl::operator!=((eastl*)&local_20, (hashtable_iterator_base*)&local_28, auVar3._8_8_);
        if (bVar1) {
            do {
                puVar2 = (undefined8*)eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_20);
                (**(code**)(*(long*)*puVar2 + 40))();
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_20);
                bVar1 = eastl::operator!=((eastl*)&local_20, (hashtable_iterator_base*)&local_28, extraout_RDX);
            } while (bVar1);
        }
    }

} // namespace jag::input::gesture

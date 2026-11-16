// libs/hal/windowing/osx/MenuItem_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.windowing

#include "libs/hal/windowing/MenuItem.h"

namespace jag {
    // 0x1003a1e80, 576 bytes, placed by class name and debug map
    // MenuItem::AddChildMenuItems(NSMenu*, unsigned int&, MenuItem&, Window const&)
    void MenuItem::AddChildMenuItems(NSMenu* param_1, uint* param_2, MenuItem* param_3, Window* param_4) {
        long lVar1;
        ID IVar2;
        NSMenu* pNVar3;
        vector* this_00;
        MenuItem* pMVar4;
        MenuItem* pMVar5;
        undefined8 uVar6;
        ID IVar7;
        char* pcVar8;
        fixed_string<char, 256, true, eastl::allocator> local_160[296];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        lVar1 = (*(code*)PTR__objc_retain_100ee9e68)(param_1);
        IVar2 = NSMenu::alloc((ID)&_OBJC_CLASS___NSMenu, "alloc");
        pcVar8 = "initWithTitle:";
        pNVar3 = (NSMenu*)NSMenu::initWithTitle_(IVar2, "initWithTitle:", &cf___);
        this_00 = param_3->SSOBeginPtr(pcVar8);
        pMVar4 = (MenuItem*)this_00->HeapBeginPtr();
        pMVar5 = (MenuItem*)this_00->end();
        for (; pMVar4 != pMVar5; pMVar4 = (MenuItem*)&pMVar4[1].field_8) {
            AddSingleMenuItem(this, pNVar3, param_2, pMVar4, param_4);
        }
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_160);
        pcVar8 = (char*)GetText(param_3);
        ConvertMenuItemString<256, true>((fixed_string*)local_160, pcVar8);
        IVar2 = NSMenuItem::alloc((ID)&_OBJC_CLASS___NSMenuItem, "alloc");
        uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        IVar7 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString, "stringWithUTF8String:", uVar6);
        uVar6 = _objc_retainAutoreleasedReturnValue(IVar7);
        IVar2 = NSMenuItem::initWithTitle_action_keyEquivalent_(IVar2, "initWithTitle:action:keyEquivalent:", uVar6, 0,
                                                                &cf___);
        (*(code*)PTR__objc_release_100ee9e60)(uVar6);
        NSMenuItem::setSubmenu_(IVar2, "setSubmenu:", pNVar3);
        if (lVar1 != 0) {
            (*(code*)PTR__objc_msgSend_100ee9e50)(lVar1, "addItem:", IVar2);
        }
        /* WARNING: Subroutine does not return */
        local_160->~fixed_string();
    }

    // 0x1003a20c0, 688 bytes, placed by class name and debug map
    // MenuItem::AddSingleMenuItem(NSMenu*, unsigned int&, MenuItem&, Window const&)
    void MenuItem::AddSingleMenuItem(NSMenu* param_1, uint* param_2, MenuItem* param_3, Window* param_4) {
        uint uVar1;
        char cVar2;
        NSMenu* pNVar3;
        undefined8 uVar4;
        ID IVar5;
        char* pcVar6;
        ID IVar7;
        fixed_string<char, 256, true, eastl::allocator> local_160[296];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pNVar3 = (NSMenu*)(*(code*)PTR__objc_retain_100ee9e68)(param_1);
        cVar2 = IsSubMenu(param_3);
        if (cVar2 == '\0') {
            cVar2 = IsEmpty(param_3);
            if (cVar2 == '\0') {
                uVar1 = *param_2;
                *param_2 = uVar1 + 1;
                param_3->SetLoopIterations(uVar1 + 1);
                eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_160);
                pcVar6 = (char*)GetText(param_3);
                ConvertMenuItemString<256, true>((fixed_string*)local_160, pcVar6);
                IVar5 = NSMenuItem::alloc((ID)&_OBJC_CLASS___NSMenuItem, "alloc");
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                IVar7 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString, "stringWithUTF8String:", uVar4);
                uVar4 = _objc_retainAutoreleasedReturnValue(IVar7);
                IVar5 = NSMenuItem::initWithTitle_action_keyEquivalent_(
                    IVar5, "initWithTitle:action:keyEquivalent:", uVar4, 0, &cf___);
                (*(code*)PTR__objc_release_100ee9e60)(uVar4);
                uVar4 = param_4->GetWindowDelegate();
                uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
                NSMenuItem::setTarget_(IVar5, "setTarget:", uVar4);
                (*(code*)PTR__objc_release_100ee9e60)(uVar4);
                NSMenuItem::setTag_(IVar5, "setTag:", (ulong)*param_2);
                NSMenuItem::setEnabled_(IVar5, "setEnabled:", 1);
                NSMenuItem::setAction_(IVar5, "setAction:", "onMenuItemSelected:");
                (*(code*)PTR__objc_msgSend_100ee9e50)(pNVar3, "addItem:", IVar5);
                (*(code*)PTR__objc_release_100ee9e60)(IVar5);
                /* WARNING: Subroutine does not return */
                local_160->~fixed_string();
            }
            IVar5 = NSMenuItem::separatorItem((ID)&_OBJC_CLASS___NSMenuItem, "separatorItem");
            uVar4 = _objc_retainAutoreleasedReturnValue(IVar5);
            (*(code*)PTR__objc_msgSend_100ee9e50)(pNVar3, "addItem:", uVar4);
            (*(code*)PTR__objc_release_100ee9e60)(uVar4);
        } else {
            uVar4 = AddChildMenuItems(this, pNVar3, param_2, param_3, param_4);
            uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
            (*(code*)PTR__objc_release_100ee9e60)(uVar4);
        }
        (*(code*)PTR__objc_release_100ee9e60)(pNVar3);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003a2380, 80 bytes, placed by debug map only (low confidence)
    // void ConvertMenuItemString<256, true>(eastl::fixed_string<char, 256, true, eastl::allocator>&, char const*)
    void ConvertMenuItemString<256, true>(fixed_string* param_1, char* param_2) {
        ulong uVar1;

        eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
            (fixed_string<char, 16, true, eastl::allocator>*)param_1, param_2);
        uVar1 = param_1->find('&', 0);
        if (uVar1 != 18446744073709551615) {
            param_1->replace(uVar1, 1, "");
        }
    }

    // 0x1003a23f0: the linker folded this into MenuItem::IsSeparator() const, which has identical code
    MenuItem::IsEmpty() const;

    // 0x1003a2450, 320 bytes, placed by class name and neighbouring functions
    // MenuItem::Setup(Window const&)
    void MenuItem::Setup(Window* param_1) {
        ID self;
        undefined8 uVar2;
        ID IVar3;
        NSMenu* self_00;
        vector* this_00;
        MenuItem* pMVar4;
        undefined8 uVar5;
        char* pcVar6;
        uint local_34;

        Destroy((Window*)this);
        if (IsEmpty(this) == '\0') {
            self = NSMenu::alloc((ID)&_OBJC_CLASS___NSMenu, "alloc");
            uVar2 = GetText(this);
            IVar3 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString, "stringWithUTF8String:", uVar2);
            uVar2 = _objc_retainAutoreleasedReturnValue(IVar3);
            self_00 = (NSMenu*)NSMenu::initWithTitle_(self, "initWithTitle:", uVar2);
            (*(code*)PTR__objc_release_100ee9e60)(uVar2);
            pcVar6 = "setAutoenablesItems:";
            NSMenu::setAutoenablesItems_((ID)self_00, "setAutoenablesItems:", 0);
            this_00 = SSOBeginPtr(pcVar6);
            pMVar4 = (MenuItem*)this_00->front();
            uVar2 = AddChildMenuItems(this, self_00, &local_34, pMVar4, param_1);
            uVar5 = _objc_retainAutoreleasedReturnValue(uVar2);
            uVar2 = field_128;
            field_128 = uVar5;
            (*(code*)PTR__objc_release_100ee9e60)(uVar2);
            (*(code*)PTR__objc_msgSend_100ee9e50)(*(undefined8*)PTR__NSApp_100ee4008, "setMenu:", self_00);
            (*(code*)PTR__objc_release_100ee9e60)(self_00);
        }
    }

    // 0x1003a2590, 48 bytes, placed by class name and neighbouring functions
    // MenuItem::Destroy(Window const&)
    void MenuItem::Destroy(Window* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)&param_1->field_128;
        *(undefined8*)&param_1->field_128 = 0;
        (*(code*)PTR__objc_release_100ee9e60)(uVar1);
    }

} // namespace jag

// libs/hal/windowing/MenuItem.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class MenuItem {
    public:
        GetChildren();
        GetChildren() const;
        GetCommandIndex() const;
        MenuItem* FindByCommandID(unsigned int) const;
        void AddChildMenuItems(NSMenu*, unsigned int&, MenuItem&, Window const&);
        void AddSingleMenuItem(NSMenu*, unsigned int&, MenuItem&, Window const&);
        void GetText() const;
        byte IsSubMenu() const;
        IsSeparator() const;
        IsEmpty() const;
        SetCommandIndex(unsigned int);
        void Setup(Window const&);
        void Destroy(Window const&);
        MenuItem();
        ~MenuItem();
        void Run() const;

        // data members, from how the methods use this: 136 bytes
        long field_0; // offset 0
        long field_8; // offset 8
        char _unknown_16[16];
        undefined4 field_32; // offset 32
        char _unknown_36[92];
        undefined8 field_128; // offset 128
    };

    // 0x1003a23d0, 16 bytes, inline, placed by class name and debug map
    // MenuItem::GetText() const
    void MenuItem::GetText() {
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x1003a23e0, 16 bytes, inline, placed by class name and debug map
    // MenuItem::IsSubMenu() const
    byte MenuItem::IsSubMenu() {
        byte bVar1;

        bVar1 = empty();
        return bVar1 ^ 1;
    }

    // 0x1003a23f0, 48 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MenuItem::IsSeparator() const
    /* MenuItem::IsEmpty() const */

    undefined8 MenuItem::IsEmpty() {
        char cVar1;
        undefined8 uVar2;

        cVar1 = empty();
        if (cVar1 == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        }
        return uVar2;
    }

    // 0x1003a2420, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MenuItem::SetCommandIndex(unsigned int)
    /* hal::audio::VoiceInstance::SetLoopIterations(int) */

    void hal::audio::VoiceInstance::SetLoopIterations(int param_1) {
        m_loopIterations = param_1;
    }

    // 0x1003a4f70, 16 bytes, complete-object constructor, inline, placed by class name
    // MenuItem::MenuItem(): jumps straight to the base-object constructor

    // 0x1003a5930, 16 bytes, complete-object destructor, inline, placed by class name
    // MenuItem::~MenuItem(): jumps straight to the base-object destructor

    // 0x1003a64b0, 48 bytes, inline, placed by class name
    // MenuItem::Run() const
    void MenuItem::Run() {
        if ((&field_80)->operator_cast_to_bool()) {
            std::function<void()>::operator()((function<void()>*)&field_80);
        }
    }

    // 0x1003a7150, 80 bytes, base-object constructor, inline, placed by class name
    // MenuItem::MenuItem()
    void MenuItem::MenuItem() {
        new (this) eastl::vector<MenuItem, eastl::allocator>();
        field_32 = 0;
        new (&field_40) eastl::string();
        std::function<void()>::function((function<void()>*)&field_80);
        field_128 = 0;
    }

    // 0x1003a72b0, 64 bytes, base-object destructor, inline, placed by class name
    // MenuItem::~MenuItem()
    void MenuItem::~MenuItem() {
        (*(code*)PTR__objc_release_100ee9e60)(field_128);
        std::function<void()>::~function((function<void()>*)&field_80);
        (&field_40)->~basic_string();
        ~vector();
    }

} // namespace jag

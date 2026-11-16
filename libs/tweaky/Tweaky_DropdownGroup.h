// libs/tweaky/Tweaky_DropdownGroup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::tweak {
    class DropdownGroup {
    public:
        // virtual methods in vtable order
        virtual ~DropdownGroup();
        virtual void OnFocusChanged(bool);
        virtual void Draw(int, int);
        virtual ulong GetControlSize(int&, int&);
        virtual OnClick(float, float, bool);
        virtual OnMouseMove(float, float);
        virtual OnMouseOver(float, float);
        virtual ulong OnMouseWheel(float, float, float);
        virtual void DoOnShown();
        virtual void ResetToDefault();
        virtual void ResetAllToDefault();
        virtual HandleChar(int);
        virtual HandleKeyDown(int);
        virtual HasKeyboardNavigation() const;
        virtual void SetMouseOver(bool);
        virtual DropdownGroup* AddPage(eastl::string const&);
        HandleMouseDown(float, float);
        void ShowList();
        void HideList();
        void ValidatePosition();
        ulong HandleMouseUp(float, float);
        void UpdateMouseSelection(float, float);
        void ScrollUp(int);
        void ScrollDown(int);
        int CalculateDropdownWidth(shared_ptr<Tweaky>&);
        void NavigateUp();
        void NavigateDown();
        void NavigateHome();
        void NavigateEnd();

        // data members, from how the methods use this: 424 bytes
        long field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        int field_24; // offset 24
        int field_28; // offset 28
        char _unknown_32[4];
        int field_36;  // offset 36
        uint field_40; // offset 40
        char _unknown_44[92];
        int field_136; // offset 136
        int field_140; // offset 140
        int field_144; // offset 144
        int field_148; // offset 148
        char _unknown_152[8];
        Event field_160; // offset 160
        char _unknown_184[24];
        bool m_mouseOver; // offset 208
        char _unknown_209[71];
        uint field_280; // offset 280
        char _unknown_284[20];
        int field_304;                      // offset 304
        int field_308;                      // offset 308
        int field_312;                      // offset 312
        int field_316;                      // offset 316
        int field_320;                      // offset 320
        int field_324;                      // offset 324
        int field_328;                      // offset 328
        undefined1 field_332;               // offset 332
        bool field_333;                     // offset 333
        undefined1 m_hasKeyboardNavigation; // offset 334
        char _unknown_335[1];
        uint field_336;       // offset 336
        uint field_340;       // offset 340
        uint field_344;       // offset 344
        int field_348;        // offset 348
        int field_352;        // offset 352
        uint field_356;       // offset 356
        undefined4 field_360; // offset 360
        ulong field_364;      // offset 364
        int field_372;        // offset 372
        int field_376;        // offset 376
        int field_380;        // offset 380
        ulong field_384;      // offset 384
        int field_392;        // offset 392
        int field_396;        // offset 396
        int field_400;        // offset 400
        int field_404;        // offset 404
        float field_408;      // offset 408
        float field_412;      // offset 412
        undefined1 field_416; // offset 416
        undefined1 field_417; // offset 417
        char _unknown_418[6];
    };

    // 0x100a46a30, 32 bytes, inline, placed by class name and debug map
    // DropdownGroup::NavigateUp()
    void DropdownGroup::NavigateUp() {
        field_336 = field_336 - 1;
        ValidatePosition(this);
    }

    // 0x100a46a50, 32 bytes, inline, placed by class name and debug map
    // DropdownGroup::NavigateDown()
    void DropdownGroup::NavigateDown() {
        field_336 = field_336 + 1;
        ValidatePosition(this);
    }

    // 0x100a46a70, 32 bytes, inline, placed by class name and debug map
    // DropdownGroup::NavigateHome()
    void DropdownGroup::NavigateHome() {
        field_336 = 0;
        ValidatePosition(this);
    }

    // 0x100a46a90, 48 bytes, inline, placed by class name and debug map
    // DropdownGroup::NavigateEnd()
    void DropdownGroup::NavigateEnd() {
        int iVar1;

        iVar1 = (&field_248)->size();
        field_336 = iVar1 - 1;
        ValidatePosition(this);
    }

    // 0x100a516c0, 16 bytes, complete-object destructor, inline, placed by class name
    // DropdownGroup::~DropdownGroup(): jumps straight to the base-object destructor

    // 0x100a516d0, 32 bytes, deleting destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // DropdownGroup::~DropdownGroup()
    /* TabGroup::~TabGroup() */

    void TabGroup::~TabGroup() {
        ~TabGroup(this);
        operator_delete(this);
    }

    // 0x100a516f0, 16 bytes, inline, placed by class name
    // DropdownGroup::HasKeyboardNavigation() const
    undefined1 DropdownGroup::HasKeyboardNavigation() {
        return m_hasKeyboardNavigation;
    }

    // 0x100a52b00, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // DropdownGroup::~DropdownGroup()
    /* TabGroup::~TabGroup() */

    void TabGroup::~TabGroup() {
        ~ContainerGroup();
    }

} // namespace jag::tweak

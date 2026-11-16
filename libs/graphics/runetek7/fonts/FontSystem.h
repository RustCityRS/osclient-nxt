// libs/graphics/runetek7/fonts/FontSystem.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class FontSystem {
    public:
        FontSystem(GUIManager&, shared_ptr<FontManager> const&);
        bool LoadFont(Js5ResourceProvider*, Js5ArchiveSettings const&, int);
        void Destroy();

        // data members, from how the methods use this: 56 bytes
        int field_0; // offset 0
        char _unknown_4[4];
        shared_ptr field_8; // offset 8
        char _unknown_24[16];
        shared_ptr field_40; // offset 40
    };

    class TextFlags {
    public:
        TextFlags();
        TextFlags* SetFlag(Flag);
        bool HasFlag(Flag) const;
        TextFlags(std::initializer_list<Flag>);
        TextFlags(Flag, bool);
        TextFlags* ClearFlag(Flag);
        TextFlags* SetFlag(Flag, bool);
        static TextFlags /* 8 bytes */ DEFAULT; // = TextFlags()

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1008e2d40, 16 bytes, inline, placed by class header (inline)
    // TextFlags::SetFlag(TextFlags::Flag)
    TextFlags* TextFlags::SetFlag(byte param_2) {
        *this = (TextFlags)((byte) * this | param_2);
        return this;
    }

    // 0x1008e3750, 32 bytes, inline, placed by class header (inline)
    // TextFlags::HasFlag(TextFlags::Flag) const
    bool TextFlags::HasFlag(byte param_2) {
        return (((byte) * this ^ 255) & param_2) == 0;
    }

    // 0x1008e7c80, 208 bytes, base-object constructor, placed by class name
    // FontSystem::FontSystem(GUIManager&, shared_ptr<FontManager> const&)
    void FontSystem::FontSystem(GUIManager* param_1, shared_ptr* param_2) {
        FontHelpers* this_00;
        undefined1* this_01;
        shared_ptr local_40;

        field_0 = -1;
        new (field_8, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_24, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        this_01 = field_40;
        new (this_01) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        shared_ptr<FontManager>::operator=((shared_ptr<FontManager>*)&field_24, param_2);
        make_shared<FontHelpers>((jag*)&local_40);
        shared_ptr<FontHelpers>::operator=((shared_ptr<FontHelpers>*)this_01, &local_40);
        local_40.~shared_ptr();
        this_00 = (FontHelpers*)shared_ptr<FontHelpers>::operator->((shared_ptr<FontHelpers>*)this_01);
        this_00->Initialise(param_1);
    }

    // 0x1008e7ea0, 16 bytes, complete-object constructor, placed by class name
    // FontSystem::FontSystem(GUIManager&, shared_ptr<FontManager> const&): jumps straight to the base-object constructor

    // 0x1008e7eb0, 240 bytes, placed by class name
    // FontSystem::LoadFont(Js5ResourceProvider*, Js5ArchiveSettings const&, int)
    bool FontSystem::LoadFont(Js5ResourceProvider* param_1, Js5ArchiveSettings* param_2, int param_3) {
        int iVar1;
        bool bVar2;
        Array<unsigned int, eastl::allocator>* this_00;
        int* piVar4;
        FontManager* this_01;
        shared_ptr* psVar5;
        shared_ptr local_48;
        GeometryBatchInstance* local_38;

        if (param_1 != (Js5ResourceProvider*)0) {
            if (field_0 == param_3) {
                bVar2 = field_8->operator_cast_to_bool();
                if (bVar2)
                    goto LAB_1008e7f76;
            }
            local_38 = (GeometryBatchInstance*)0;
            if ((undefined*)(*(code*)param_1->field_0[4])(param_1, &local_38, param_2) == DataStatus::READY) {
                this_00 = (Array<unsigned int, eastl::allocator>*)local_38->GetMaterial();
                piVar4 = (int*)Array<unsigned int, eastl::allocator>::operator[](this_00, (long)param_3);
                iVar1 = *piVar4;
                this_01 = (FontManager*)shared_ptr<FontManager>::operator->((shared_ptr<FontManager>*)&field_24);
                new (&local_48) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                psVar5 = (shared_ptr*)this_01->GetFont(iVar1, &local_48);
                shared_ptr<Font>::operator=((shared_ptr<Font>*)field_8, psVar5);
                local_48.~shared_ptr();
                bVar2 = field_8->operator_cast_to_bool();
                if (bVar2) {
                    field_0 = param_3;
                }
            }
        }
    LAB_1008e7f76:
        return field_0 != -1;
    }

    // 0x1008e8020, 80 bytes, placed by class name
    // FontSystem::Destroy()
    void FontSystem::Destroy() {
        shared_ptr<Font>::reset();
        if (field_40->operator_cast_to_bool()) {
            shared_ptr<FontHelpers>::operator->((shared_ptr<FontHelpers>*)field_40);
            FontHelpers::Shutdown();
            shared_ptr<FontHelpers>::reset();
        }
        field_0 = -1;
    }

    // 0x1008e80f0, 96 bytes, base-object constructor, placed by debug map only (low confidence)
    // TextFlags::TextFlags(std::initializer_list<TextFlags::Flag>)
    void TextFlags::TextFlags(undefined8 param_2, undefined8 param_3) {
        undefined4* puVar1;
        undefined4* puVar2;
        undefined8 local_30;
        undefined8 local_28;

        *this = (TextFlags)0;
        local_30 = param_2;
        local_28 = param_3;
        puVar1 = (undefined4*)local_30.begin();
        puVar2 = (undefined4*)local_30.end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            SetFlag(this, *puVar1);
        }
    }

    // 0x1008e8180, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // TextFlags::TextFlags(std::initializer_list<TextFlags::Flag>): jumps straight to the base-object constructor

    // 0x1008e81f0, 176 bytes, placed by debug map only (low confidence)
    // TextRunSlice::Slice(unsigned long, unsigned long) const
    TextRunSlice* TextRunSlice::Slice(ulong param_1, ulong param_2) {
        ulong uVar2;
        ulong in_RCX;
        TextRunCharacter* pTVar3;
        TextRunCharacter* pTVar4;
        bool bVar5;
        TextRun* pTVar6;
        ulong local_30;
        ulong local_28;

        local_30 = param_2;
        local_28 = in_RCX;
        uVar2 = GetCodepointCount((TextRunSlice*)param_1);
        if (((IsEmpty((TextRunSlice*)param_1) == '\0') && (local_30 <= uVar2)) && (local_28 <= uVar2)) {
            if (local_28 < local_30) {
                std::swap<unsigned long>(&local_30, &local_28);
            }
            pTVar6 = *(TextRun**)param_1;
            pTVar4 = (TextRunCharacter*)(*(long*)(param_1 + 8) + local_30 * 12);
            pTVar3 = (TextRunCharacter*)(*(long*)(param_1 + 8) + local_28 * 12);
            bVar5 = local_28 == uVar2 && *(char*)(param_1 + 24) != '\0';
        } else {
            pTVar6 = *(TextRun**)param_1;
            pTVar4 = (TextRunCharacter*)0;
            pTVar3 = (TextRunCharacter*)0;
            bVar5 = false;
        }
        TextRunSlice(this, pTVar6, pTVar4, pTVar3, bVar5);
        return this;
    }

    // 0x1008e82a0, 32 bytes, inline, placed by debug map only (low confidence)
    // TextRunSlice::GetCodepointCount() const
    void TextRunSlice::GetCodepointCount() {
        std::distance<TextRunCharacter_const*>(field_8, field_16);
    }

    // 0x1008e82c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TextRunSlice::TextRunSlice(TextRun const&, TextRunCharacter const*, TextRunCharacter const*, bool): jumps straight to the base-object constructor

    // 0x1008e82f0, 64 bytes, inline, placed by debug map only (low confidence)
    // TextRunSlice::back() const
    TextRunCharacter* TextRunSlice::back() {
        if (IsEmpty(this) != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!IsEmpty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.h",
                      81, (char*)0);
        }
        return field_16 + -12;
    }

    // 0x1008fa2c0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // TextFlags::TextFlags(TextFlags::Flag, bool): jumps straight to the base-object constructor

    // 0x100904780, 16 bytes, base-object constructor, inline, placed by class header (inline)
    // TextFlags::TextFlags(TextFlags::Flag, bool)
    void TextFlags::TextFlags() {
        *this = (TextFlags)0;
        SetFlag();
    }

    // 0x100904790, 48 bytes, inline, placed by class header (inline)
    // TextFlags::SetFlag(TextFlags::Flag, bool)
    TextFlags* TextFlags::SetFlag(undefined8 param_2, int param_3) {
        if (param_3 == 0) {
            ClearFlag();
        } else {
            SetFlag();
        }
        return this;
    }

} // namespace jag::graphics

namespace jag::fixedfunction {
    // 0x1008e8c60, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1, void>(graphics::TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::$_1&&): jumps straight to the base-object constructor

    // 0x1008e8cb0, 32 bytes, inline, placed by debug map only (low confidence)
    // bool function<bool (unsigned int), 64ul, 16ul, (Methods)0>::operator()<unsigned int&>(unsigned int&) const
    /* bool function<bool (unsigned int), 64ul, 16ul,
   (Methods)0>::TEMPNAMEPLACEHOLDERVALUE(unsigned int&) const */

    bool function<bool(unsigned int), 64ul, 16ul, (Methods)0>::operator()(
        function<bool(unsigned int), 64ul, 16ul, (Methods)0>* this, uint* param_1) {
        undefined1 uVar1;

        uVar1 = (**(code**)this)(this + 16, *param_1);
        return (bool)uVar1;
    }

    // 0x1008e9610, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2, void>(graphics::TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::$_2&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction

namespace jag {
    // 0x1008e7d90, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::FontHelpers>::type make_shared<graphics::FontHelpers>()
    jag* make_shared<graphics::FontHelpers>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        FontHelpers* local_28[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<graphics::FontHelpers>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<graphics::FontHelpers>, int, graphics::FontHelpers*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag

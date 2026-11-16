// libs/jtl/StringView.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag {
    class StringView {
    public:
        StringView();
        length() const;
        StringView<7ul>(char const (&)[7ul]);
        StringView(char const*, unsigned long);
        StringView<eastl::fixed_string<char, 128, true, eastl::allocator>>(
            eastl::fixed_string<char, 128, true, eastl::allocator> const&);
        StringView<15ul>(char const (&)[15ul]);
        StringView<11ul>(char const (&)[11ul]);
        auto to_owned_string<eastl::basic_string<char, BucketAllocatorEASTL>>() const;
        void find(StringView) const;
        StringView<13ul>(char const (&)[13ul]);
        auto to_owned_string<eastl::string>() const;
        StringView(StringView&&);
        StringView<10ul>(char const (&)[10ul]);
        StringView<9ul>(char const (&)[9ul]);
        StringView<14ul>(char const (&)[14ul]);
        StringView<12ul>(char const (&)[12ul]);
        StringView(StringView const&);
        split(char) const;
        StringView* operator=(StringView&&);
        substr(unsigned long, unsigned long) const;
        StringView<3ul>(char const (&)[3ul]);
        suffix_of(StringView) const;
        StringView<8ul>(char const (&)[8ul]);
        StringView<eastl::fixed_string<char, 512, true, eastl::allocator>>(
            eastl::fixed_string<char, 512, true, eastl::allocator> const&);
        StringView<4ul>(char const (&)[4ul]);
        starts_with(StringView) const;
        StringView<2ul>(char const (&)[2ul]);
        StringView(char const&);
        StringView<char const*>(char const* const&);
        void find(char) const;
        substr(unsigned long) const;
        auto to_owned_string<std::basic_string_view<char, std::char_traits<char>>>() const;
        is_subview_of(StringView) const;
        byte operator!=(StringView) const;
        void compare(unsigned long, unsigned long, StringView) const;
        StringView<std::basic_string_view<char, std::char_traits<char>>>(
            std::basic_string_view<char, std::char_traits<char>> const&);
        void find_first_of(StringView) const;
        StringView<1ul>(char const (&)[1ul]);
        void find_first_of(StringView, unsigned long) const;
        trim() const;
        void operator<(StringView) const;
        auto to_owned_string<eastl::fixed_string<char, 30, true, eastl::allocator>>() const;
        auto to_owned_string<eastl::fixed_string<char, 50, true, eastl::allocator>>() const;
        bool operator==(StringView) const;
        StringView<5ul>(char const (&)[5ul]);
        StringView<6ul>(char const (&)[6ul]);
        auto to_owned_string<eastl::fixed_string<char, 20, true, eastl::allocator>>() const;

        // data members, from how the methods use this: 16 bytes
        ulong field_0;  // offset 0
        uchar* field_8; // offset 8
    };

    // 0x100017ca0: the linker folded this into weak_ptr<oldscape::rs2lib::IfType>::weak_ptr(), which has identical code
    StringView::StringView();

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    StringView::length() const;

    // 0x1000a6bd0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // StringView::StringView<7ul>(char const (&) [7ul]): jumps straight to the base-object constructor

    // 0x1000a6be0, 16 bytes, base-object constructor, inline, placed by class name and debug map
    // StringView::StringView<7ul>(char const (&) [7ul])
    void StringView::StringView<7ul>(char* param_1) {
        new (this) WrapArray<unsigned char>(param_1, 6);
    }

    // 0x10012d150: the linker folded this into oldscape::FoundObject::FoundObject(), which has identical code
    StringView::StringView();

    // 0x1002d9f40: the linker folded this into WrapArray<unsigned char const>::WrapArray(unsigned char const*, unsigned long), which has identical code
    StringView::StringView(char const*, unsigned long);

    // 0x1004b6a00, 48 bytes, base-object constructor, inline, placed by class name
    // StringView::StringView<eastl::fixed_string<char, 128, true, eastl::allocator> >(eastl::fixed_string<char, 128, true, eastl::allocator> const&)
    /* StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>
   >(eastl::fixed_string<char, 40, true, eastl::allocator> const&) */

    void StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(fixed_string* param_1) {
        new (this) shared_ptr<oldscape::DBTableIndex>();
        WrapArray<char const>::Wrap<eastl::fixed_string<char, 40, true, eastl::allocator>>((fixed_string*)this);
    }

    // 0x1006587f0, 16 bytes, complete-object constructor, inline, placed by class name
    // StringView::StringView<15ul>(char const (&) [15ul]): jumps straight to the base-object constructor

    // 0x100658800, 16 bytes, complete-object constructor, inline, placed by class name
    // StringView::StringView<11ul>(char const (&) [11ul]): jumps straight to the base-object constructor

    // 0x10065ca70, 16 bytes, base-object constructor, inline, placed by class name
    // StringView::StringView<15ul>(char const (&) [15ul])
    void StringView::StringView<15ul>(char* param_1) {
        new (this) WrapArray<unsigned char>(param_1, 14);
    }

    // 0x10065ca80, 16 bytes, base-object constructor, inline, placed by class name
    // StringView::StringView<11ul>(char const (&) [11ul])
    void StringView::StringView<11ul>(char* param_1) {
        new (this) WrapArray<unsigned char>(param_1, 10);
    }

    // 0x100683ee0, 96 bytes, inline, placed by class name
    // auto StringView::to_owned_string<eastl::basic_string<char, BucketAllocatorEASTL> >() const
    StringView* StringView::to_owned_string<eastl::basic_string<char, BucketAllocatorEASTL>>() {
        ulong uVar1;
        ShuffledPacketFactory* in_RSI;
        undefined1 auVar2[16];
        eastl local_30[8];

        uVar1 = in_RSI->end();
        auVar2 = ShuffledPacketFactory::p2_alt2(in_RSI);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", auVar2._8_8_);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)this, uVar1, auVar2._0_8_);
        return this;
    }

    // 0x1006e0ca0, 96 bytes, inline, placed by class name
    // StringView::find(StringView) const
    void StringView::find(StringView param_1) {
        char* pcVar1;
        ulong uVar2;
        undefined1 local_38[16];
        undefined8 local_28;
        undefined8 local_20;

        local_38 = to_owned_string<std::basic_string_view<char, std::char_traits<char>>>(this);
        pcVar1 = (char*)param_1.field_0->end();
        uVar2 = param_1.field_0->HeapBeginPtr();
        new (&local_28) std::basic_string_view<char, std::char_traits<char>>(pcVar1, uVar2);
        std::basic_string_view<char, std::char_traits<char>>::find(local_38, local_28, local_20);
    }

    // 0x1006f01d0, 16 bytes, complete-object constructor, inline, placed by class name
    // StringView::StringView<13ul>(char const (&) [13ul]): jumps straight to the base-object constructor

    // 0x1006f0640, 16 bytes, base-object constructor, inline, placed by class name
    // StringView::StringView<13ul>(char const (&) [13ul])
    void StringView::StringView<13ul>(char* param_1) {
        new (this) WrapArray<unsigned char>(param_1, 12);
    }

    // 0x1006f19f0, 96 bytes, inline, placed by class name
    // auto StringView::to_owned_string<eastl::string >() const
    StringView* StringView::to_owned_string<eastl::string>() {
        char* pcVar1;
        ulong uVar2;
        ShuffledPacketFactory* in_RSI;
        allocator local_30[8];

        pcVar1 = (char*)in_RSI->end();
        uVar2 = ShuffledPacketFactory::p2_alt2(in_RSI);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        new (this) eastl::string(pcVar1, uVar2, local_30);
        return this;
    }

    // 0x100711db0, 16 bytes, complete-object constructor, inline, placed by class name
    // StringView::StringView(StringView&&): jumps straight to the base-object constructor

    // 0x100711dd0, 16 bytes, base-object constructor, inline, placed by class name
    // StringView::StringView(StringView&&)
    void StringView::StringView(StringView* param_1) {
        new (this) WrapArray<char const>(param_1);
    }

    // 0x1007122d0, 16 bytes, complete-object constructor, inline, placed by class name
    // StringView::StringView<10ul>(char const (&) [10ul]): jumps straight to the base-object constructor

    // 0x1007122e0, 16 bytes, complete-object constructor, inline, placed by class name
    // StringView::StringView<9ul>(char const (&) [9ul]): jumps straight to the base-object constructor

    // 0x1007122f0, 16 bytes, complete-object constructor, inline, placed by class name
    // StringView::StringView<14ul>(char const (&) [14ul]): jumps straight to the base-object constructor

    // 0x100712300, 16 bytes, complete-object constructor, inline, placed by class name
    // StringView::StringView<12ul>(char const (&) [12ul]): jumps straight to the base-object constructor

    // 0x100712310, 16 bytes, base-object constructor, inline, placed by class name
    // StringView::StringView<10ul>(char const (&) [10ul])
    void StringView::StringView<10ul>(char* param_1) {
        new (this) WrapArray<unsigned char>(param_1, 9);
    }

    // 0x100712320, 16 bytes, base-object constructor, inline, placed by class name
    // StringView::StringView<9ul>(char const (&) [9ul])
    void StringView::StringView<9ul>(char* param_1) {
        new (this) WrapArray<unsigned char>(param_1, 8);
    }

    // 0x100712330, 16 bytes, base-object constructor, inline, placed by class name
    // StringView::StringView<14ul>(char const (&) [14ul])
    void StringView::StringView<14ul>(char* param_1) {
        new (this) WrapArray<unsigned char>(param_1, 13);
    }

    // 0x100712340, 16 bytes, base-object constructor, inline, placed by class name
    // StringView::StringView<12ul>(char const (&) [12ul])
    void StringView::StringView<12ul>(char* param_1) {
        new (this) WrapArray<unsigned char>(param_1, 11);
    }

    // 0x10082e540: the linker folded this into WrapArray<unsigned char const>::WrapArray(WrapArray<unsigned char const> const&), which has identical code
    StringView::StringView(StringView const&);

    // 0x1008dff60, 160 bytes, inline, placed by class name
    // StringView::split(char) const
    StringView* StringView::split(char param_1) {
        char in_DL;
        undefined7 in_register_00000031;
        StringView* this_00;
        StringView local_50;
        StringView local_40;

        this_00 = (StringView*)CONCAT71(in_register_00000031, param_1);
        if (find(this_00, in_DL) == -1) {
            new (&local_40) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
            std::pair<StringView, StringView>::pair<true, false>((pair<StringView, StringView>*)this, this_00,
                                                                 &local_40);
        } else {
            substr(&local_40, (ulong)this_00, 0);
            substr(&local_50, (ulong)this_00);
            std::pair<StringView, StringView>::pair<StringView&, StringView&, false>(
                (pair<StringView, StringView>*)this, &local_40, &local_50);
        }
        return this;
    }

    // 0x1008e0720, 16 bytes, complete-object constructor, inline, placed by class name
    // StringView::StringView(char const*, unsigned long): jumps straight to the base-object constructor

    // 0x1008e1540, 32 bytes, inline, placed by class name
    // StringView::operator=(StringView&&)
    /* StringView::TEMPNAMEPLACEHOLDERVALUE(StringView&&) */

    StringView* StringView::operator=(StringView* param_1) {
        WrapArray<char const>::operator=((WrapArray<char const>*)this, (WrapArray*)param_1);
        return this;
    }

    // 0x1008e2ee0, 96 bytes, inline, placed by class name
    // StringView::substr(unsigned long, unsigned long) const
    StringView* StringView::substr(ulong param_1, ulong param_2) {
        long lVar2;
        ulong in_RCX;

        if (param_1->HeapBeginPtr() < in_RCX + param_2) {
            new (this) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        } else {
            lVar2 = param_1->end();
            StringView(this, (char*)(param_2 + lVar2), in_RCX);
        }
        return this;
    }

    // 0x1008e3d60, 16 bytes, complete-object constructor, inline, placed by class name
    // StringView::StringView<3ul>(char const (&) [3ul]): jumps straight to the base-object constructor

    // 0x1008e3fb0, 112 bytes, inline, placed by class name
    // StringView::suffix_of(StringView) const
    StringView* StringView::suffix_of(StringView param_1) {
        uchar* extraout_RDX;
        StringView SVar2;
        StringView local_38;

        StringView(&local_38, (StringView*)param_1.field_8);
        SVar2.field_8 = extraout_RDX;
        SVar2.field_0 = (ulong)&local_38;
        if (starts_with((StringView*)param_1.field_0, SVar2) == '\0') {
            new (this) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        } else {
            param_1.field_8->HeapBeginPtr();
            substr(this, param_1.field_0);
        }
        return this;
    }

    // 0x1008e40a0, 16 bytes, complete-object constructor, inline, placed by class name
    // StringView::StringView<8ul>(char const (&) [8ul]): jumps straight to the base-object constructor

    // 0x1008e4690, 16 bytes, complete-object constructor, inline, placed by class name
    // StringView::StringView<eastl::fixed_string<char, 512, true, eastl::allocator> >(eastl::fixed_string<char, 512, true, eastl::allocator> const&): jumps straight to the base-object constructor

    // 0x1008e4bd0, 16 bytes, complete-object constructor, inline, placed by class name
    // StringView::StringView<4ul>(char const (&) [4ul]): jumps straight to the base-object constructor

    // 0x1008e57c0, 128 bytes, inline, placed by class name
    // StringView::starts_with(StringView) const
    undefined8 StringView::starts_with(StringView param_1) {
        ulong uVar1;
        ulong uVar2;
        undefined8 uVar3;
        uchar* extraout_RDX;
        StringView* this_00;
        StringView SVar4;
        StringView local_48;
        StringView local_38;

        this_00 = (StringView*)param_1.field_0;
        uVar1 = HeapBeginPtr();
        uVar2 = this_00->HeapBeginPtr();
        if (uVar1 < uVar2) {
            uVar3 = 0;
        } else {
            this_00->HeapBeginPtr();
            substr(&local_48, (ulong)this, 0);
            StringView(&local_38, this_00);
            SVar4.field_8 = extraout_RDX;
            SVar4.field_0 = (ulong)&local_38;
            uVar3 = operator==(&local_48, SVar4);
        }
        return uVar3;
    }

    // 0x1008e5840, 16 bytes, complete-object constructor, inline, placed by class name
    // StringView::StringView<2ul>(char const (&) [2ul]): jumps straight to the base-object constructor

    // 0x1008e5840: the linker folded this into StringView::StringView<2ul>(char const (&) [2ul]), which has identical code
    StringView::StringView(char const&);

    // 0x1008fa320, 16 bytes, complete-object constructor, inline, placed by class name
    // StringView::StringView<char const*>(char const* const&): jumps straight to the base-object constructor

    // 0x1008fe650, 48 bytes, inline, placed by class name
    // StringView::find(char) const
    void StringView::find(char param_1) {
        undefined7 in_register_00000031;

        to_owned_string<std::basic_string_view<char, std::char_traits<char>>>(this);
        std::basic_string_view<char, std::char_traits<char>>::find(-32, CONCAT71(in_register_00000031, param_1) &
                                                                            4294967295);
    }

    // 0x1008fe680, 96 bytes, inline, placed by class name
    // StringView::substr(unsigned long) const
    StringView* StringView::substr(ulong param_1) {
        long lVar2;
        long lVar3;
        ulong in_RDX;

        if (param_1->HeapBeginPtr() < in_RDX) {
            new (this) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        } else {
            lVar2 = param_1->end();
            lVar3 = param_1->HeapBeginPtr();
            StringView(this, (char*)(lVar2 + in_RDX), lVar3 - in_RDX);
        }
        return this;
    }

    // 0x1008fe700, 64 bytes, inline, placed by class name
    // auto StringView::to_owned_string<std::basic_string_view<char, std::char_traits<char> > >() const
    /* auto StringView::to_owned_string<std::basic_string_view<char, std::char_traits<char> > >()
   const */

    undefined1[16] StringView::to_owned_string<std::basic_string_view<char, std::char_traits<char>>>() {
        char* pcVar1;
        ulong uVar2;
        undefined1 auVar3[16];
        basic_string_view<char, std::char_traits<char>> local_28[16];

        pcVar1 = (char*)end();
        uVar2 = p2_alt2();
        std::basic_string_view<char, std::char_traits<char>>::basic_string_view(local_28, pcVar1, uVar2);
        auVar3[0] = local_28[0];
        auVar3[1] = local_28[1];
        auVar3[2] = local_28[2];
        auVar3[3] = local_28[3];
        auVar3[4] = local_28[4];
        auVar3[5] = local_28[5];
        auVar3[6] = local_28[6];
        auVar3[7] = local_28[7];
        auVar3[8] = local_28[8];
        auVar3[9] = local_28[9];
        auVar3[10] = local_28[10];
        auVar3[11] = local_28[11];
        auVar3[12] = local_28[12];
        auVar3[13] = local_28[13];
        auVar3[14] = local_28[14];
        auVar3[15] = local_28[15];
        return auVar3;
    }

    // 0x1009063a0, 112 bytes, inline, placed by class name
    // StringView::is_subview_of(StringView) const
    undefined8 StringView::is_subview_of(StringView param_1) {
        ulong uVar1;
        ulong uVar2;
        long lVar3;
        long lVar4;
        long lVar5;
        long lVar6;
        undefined8 uVar7;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)param_1.field_0;
        uVar1 = end();
        uVar2 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        if (uVar1 < uVar2) {
            uVar7 = 0;
        } else {
            lVar3 = end();
            lVar4 = HeapBeginPtr();
            lVar5 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
            lVar6 = this_00->HeapBeginPtr();
            uVar7 = CONCAT71((int7)((ulong)(lVar6 + lVar5) >> 8), (ulong)(lVar4 + lVar3) <= (ulong)(lVar6 + lVar5));
        }
        return uVar7;
    }

    // 0x1009064e0, 48 bytes, inline, placed by class name
    // StringView::operator!=(StringView) const
    /* StringView::TEMPNAMEPLACEHOLDERVALUE(StringView) const */

    byte StringView::operator!=(StringView param_1) {
        uchar* extraout_RDX;
        StringView SVar2;
        StringView local_28;

        StringView(&local_28, (StringView*)param_1.field_0);
        SVar2.field_8 = extraout_RDX;
        SVar2.field_0 = (ulong)&local_28;
        return operator==(this, SVar2) ^ 1;
    }

    // 0x1009066b0, 16 bytes, base-object constructor, inline, placed by class name
    // StringView::StringView<3ul>(char const (&) [3ul])
    void StringView::StringView<3ul>(char* param_1) {
        new (this) WrapArray<unsigned char>(param_1, 2);
    }

    // 0x1009066f0, 16 bytes, base-object constructor, inline, placed by class name
    // StringView::StringView<8ul>(char const (&) [8ul])
    void StringView::StringView<8ul>(char* param_1) {
        new (this) WrapArray<unsigned char>(param_1, 7);
    }

    // 0x1009067d0, 48 bytes, base-object constructor, inline, placed by class name
    // StringView::StringView<eastl::fixed_string<char, 512, true, eastl::allocator> >(eastl::fixed_string<char, 512, true, eastl::allocator> const&)
    void StringView::StringView<eastl::fixed_string<char, 512, true, eastl::allocator>>(fixed_string* param_1) {
        new (this) shared_ptr<oldscape::DBTableIndex>();
        WrapArray<char const>::Wrap<eastl::fixed_string<char, 512, true, eastl::allocator>>((fixed_string*)this);
    }

    // 0x100906840, 208 bytes, inline, placed by class name
    // StringView::compare(unsigned long, unsigned long, StringView) const
    void StringView::compare(ulong param_1, ulong param_2, StringView param_3) {
        ulong uVar1;
        char* pcVar2;
        long lVar3;
        ShuffledPacketFactory* this_00;
        basic_string_view<char, std::char_traits<char>> local_60[16];
        undefined8 local_50;
        undefined8 local_48;
        undefined8 local_40;
        undefined8 local_38;

        this_00 = (ShuffledPacketFactory*)param_3.field_0;
        uVar1 = HeapBeginPtr();
        if (uVar1 < param_2 + param_1) {
            std::basic_string_view<char, std::char_traits<char>>::basic_string_view(local_60);
            pcVar2 = (char*)this_00->end();
            uVar1 = ShuffledPacketFactory::p2_alt2(this_00);
            new (&local_50) std::basic_string_view<char, std::char_traits<char>>(pcVar2, uVar1);
        } else {
            lVar3 = end();
            std::basic_string_view<char, std::char_traits<char>>::basic_string_view(local_60, (char*)(param_1 + lVar3),
                                                                                    param_2);
            pcVar2 = (char*)this_00->end();
            uVar1 = ShuffledPacketFactory::p2_alt2(this_00);
            new (&local_40) std::basic_string_view<char, std::char_traits<char>>(pcVar2, uVar1);
            local_48 = local_38;
            local_50 = local_40;
        }
        std::basic_string_view<char, std::char_traits<char>>::compare(local_60, local_50, local_48);
    }

    // 0x1009069d0, 16 bytes, base-object constructor, inline, placed by class name
    // StringView::StringView<4ul>(char const (&) [4ul])
    void StringView::StringView<4ul>(char* param_1) {
        new (this) WrapArray<unsigned char>(param_1, 3);
    }

    // 0x1009069e0, 16 bytes, base-object constructor, inline, placed by class name
    // StringView::StringView<2ul>(char const (&) [2ul])
    /* StringView::StringView(char const&) */

    void StringView::StringView(char* param_1) {
        new (this) WrapArray<unsigned char>(param_1, 1);
    }

    // 0x1009069e0: the linker folded this into StringView::StringView<2ul>(char const (&) [2ul]), which has identical code
    StringView::StringView(char const&);

    // 0x10090e7e0, 64 bytes, base-object constructor, inline, placed by class name
    // StringView::StringView<char const*>(char const* const&)
    void StringView::StringView<char const*>(char** param_1) {
        uchar* puVar1;
        size_t sVar2;

        new (this) shared_ptr<oldscape::DBTableIndex>();
        puVar1 = (uchar*)*param_1;
        if (puVar1 != (uchar*)0) {
            sVar2 = _strlen((char*)puVar1);
            new (this) WrapArray<unsigned char>(puVar1, sVar2);
        }
    }

    // 0x100a51f20, 16 bytes, complete-object constructor, inline, placed by class name
    // StringView::StringView<std::basic_string_view<char, std::char_traits<char> > >(std::basic_string_view<char, std::char_traits<char> > const&): jumps straight to the base-object constructor

    // 0x100a51f30, 48 bytes, base-object constructor, inline, placed by class name
    // StringView::StringView<std::basic_string_view<char, std::char_traits<char> > >(std::basic_string_view<char, std::char_traits<char> > const&)
    /* StringView::StringView<std::basic_string_view<char, std::char_traits<char> >
   >(std::basic_string_view<char, std::char_traits<char> > const&) */

    void StringView::StringView<std::basic_string_view<char, std::char_traits<char>>>(basic_string_view* param_1) {
        new (this) shared_ptr<oldscape::DBTableIndex>();
        WrapArray<char const>::Wrap<std::basic_string_view<char, std::char_traits<char>>>((WrapArray<char const>*)this,
                                                                                          param_1);
    }

    // 0x100c7d970, 48 bytes, inline, placed by class name
    // StringView::find_first_of(StringView) const
    void StringView::find_first_of(StringView param_1) {
        ulong in_RCX;
        StringView SVar1;
        StringView local_28;

        StringView(&local_28, (StringView*)param_1.field_0);
        SVar1.field_8 = (uchar*)0;
        SVar1.field_0 = (ulong)&local_28;
        find_first_of(this, SVar1, in_RCX);
    }

    // 0x100c7dc40, 16 bytes, complete-object constructor, inline, placed by class name
    // StringView::StringView<1ul>(char const (&) [1ul]): jumps straight to the base-object constructor

    // 0x100c7e0a0, 128 bytes, inline, placed by class name
    // StringView::find_first_of(StringView, unsigned long) const
    void StringView::find_first_of(StringView param_1, ulong param_2) {
        char* pcVar1;
        ulong uVar2;
        basic_string_view<char, std::char_traits<char>> local_50[16];
        undefined8 local_40;
        undefined8 local_38;

        pcVar1 = (char*)end();
        uVar2 = HeapBeginPtr();
        std::basic_string_view<char, std::char_traits<char>>::basic_string_view(local_50, pcVar1, uVar2);
        pcVar1 = (char*)param_1.field_0->end();
        uVar2 = param_1.field_0->HeapBeginPtr();
        new (&local_40) std::basic_string_view<char, std::char_traits<char>>(pcVar1, uVar2);
        std::basic_string_view<char, std::char_traits<char>>::find_first_of(local_50, local_40, local_38,
                                                                            param_1.field_8);
    }

    // 0x100c7e1b0, 176 bytes, inline, placed by class name
    // StringView::trim() const
    StringView* StringView::trim() {
        char cVar1;
        int iVar2;
        char* pcVar3;
        StringView* in_RSI;
        StringView local_28;

        StringView(this, in_RSI);
        cVar1 = empty();
        if (cVar1 == '\0') {
            do {
                pcVar3 = (char*)front();
                iVar2 = isspace((int)*pcVar3);
                if (iVar2 == 0) {
                    pcVar3 = (char*)back();
                    iVar2 = isspace((int)*pcVar3);
                    if (iVar2 == 0) {
                        return this;
                    }
                    p2_alt2();
                    substr(&local_28, (ulong)this, 0);
                } else {
                    substr(&local_28, (ulong)this);
                }
                operator=(this, &local_28);
                cVar1 = empty();
            } while (cVar1 == '\0');
        }
        return this;
    }

    // 0x100c8b4e0, 64 bytes, inline, placed by class name
    // StringView::operator<(StringView) const
    /* StringView::TEMPNAMEPLACEHOLDERVALUE(StringView) const */

    void StringView::operator<(StringView param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 extraout_RDX;
        undefined8 extraout_RDX_00;

        uVar1 = to_owned_string<std::basic_string_view<char, std::char_traits<char>>>(this);
        uVar2 = to_owned_string<std::basic_string_view<char, std::char_traits<char>>>((StringView*)param_1.field_0);
        std::operator<(uVar1, extraout_RDX, uVar2, extraout_RDX_00);
    }

    // 0x100c8bbd0, 16 bytes, base-object constructor, inline, placed by class name
    // StringView::StringView<1ul>(char const (&) [1ul])
    void StringView::StringView<1ul>(char* param_1) {
        new (this) WrapArray<unsigned char>(param_1, 0);
    }

    // 0x100cb9920, 64 bytes, inline, placed by class name
    // auto StringView::to_owned_string<eastl::fixed_string<char, 30, true, eastl::allocator> >() const
    StringView* StringView::to_owned_string<eastl::fixed_string<char, 30, true, eastl::allocator>>() {
        char* pcVar1;
        ulong uVar2;
        ShuffledPacketFactory* in_RSI;

        pcVar1 = (char*)in_RSI->end();
        uVar2 = ShuffledPacketFactory::p2_alt2(in_RSI);
        new (this) eastl::fixed_string<char, 30, true, eastl::allocator>(pcVar1, uVar2);
        return this;
    }

    // 0x100cb9a20, 64 bytes, inline, placed by class name
    // auto StringView::to_owned_string<eastl::fixed_string<char, 50, true, eastl::allocator> >() const
    StringView* StringView::to_owned_string<eastl::fixed_string<char, 50, true, eastl::allocator>>() {
        char* pcVar1;
        ulong uVar2;
        ShuffledPacketFactory* in_RSI;

        pcVar1 = (char*)in_RSI->end();
        uVar2 = ShuffledPacketFactory::p2_alt2(in_RSI);
        new (this) eastl::fixed_string<char, 50, true, eastl::allocator>(pcVar1, uVar2);
        return this;
    }

    // 0x100cb9e30, 16 bytes, complete-object constructor, inline, placed by class name
    // StringView::StringView(StringView const&): jumps straight to the base-object constructor

    // 0x100cba220, 128 bytes, inline, placed by class name
    // StringView::operator==(StringView) const
    /* StringView::TEMPNAMEPLACEHOLDERVALUE(StringView) const */

    bool StringView::operator==(StringView param_1) {
        long lVar2;
        long lVar3;
        char* pcVar4;
        char* pcVar5;
        size_t sVar6;
        Layout* this_00;
        bool bVar7;

        this_00 = (Layout*)param_1.field_0;
        lVar2 = HeapBeginPtr();
        lVar3 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_00);
        if (lVar2 == lVar3) {
            lVar2 = end();
            lVar3 = this_00->end();
            if (lVar2 == lVar3) {
                bVar7 = true;
            } else {
                pcVar4 = (char*)end();
                pcVar5 = (char*)this_00->end();
                sVar6 = HeapBeginPtr();
                bVar7 = _strncmp(pcVar4, pcVar5, sVar6) == 0;
            }
        } else {
            bVar7 = false;
        }
        return bVar7;
    }

    // 0x100cba2a0, 16 bytes, complete-object constructor, inline, placed by class name
    // StringView::StringView<5ul>(char const (&) [5ul]): jumps straight to the base-object constructor

    // 0x100cba2b0, 16 bytes, complete-object constructor, inline, placed by class name
    // StringView::StringView<6ul>(char const (&) [6ul]): jumps straight to the base-object constructor

    // 0x100cc1d20, 64 bytes, inline, placed by class name
    // auto StringView::to_owned_string<eastl::fixed_string<char, 20, true, eastl::allocator> >() const
    StringView* StringView::to_owned_string<eastl::fixed_string<char, 20, true, eastl::allocator>>() {
        char* pcVar1;
        ulong uVar2;
        ShuffledPacketFactory* in_RSI;

        pcVar1 = (char*)in_RSI->end();
        uVar2 = ShuffledPacketFactory::p2_alt2(in_RSI);
        new (this) eastl::fixed_string<char, 20, true, eastl::allocator>(pcVar1, uVar2);
        return this;
    }

    // 0x100cc1fb0, 16 bytes, base-object constructor, inline, placed by class name
    // StringView::StringView<5ul>(char const (&) [5ul])
    void StringView::StringView<5ul>(char* param_1) {
        new (this) WrapArray<unsigned char>(param_1, 4);
    }

    // 0x100cc1fc0, 16 bytes, base-object constructor, inline, placed by class name
    // StringView::StringView<6ul>(char const (&) [6ul])
    void StringView::StringView<6ul>(char* param_1) {
        new (this) WrapArray<unsigned char>(param_1, 5);
    }

} // namespace jag

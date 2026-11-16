// libs/jtl/StringView.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag {
    class StringView {
    public:
        StringView();
        void length() const;
        StringView<7ul>(char const (&arg1)[7ul]);
        StringView(const char* particle, unsigned long arg2);
        StringView<eastl::fixed_string<char, 128>>(const eastl::fixed_string<char, 128>& str);
        StringView<15ul>(char const (&arg1)[15ul]);
        StringView<11ul>(char const (&arg1)[11ul]);
        auto to_owned_string<eastl::string>() const;
        void find(StringView stringView) const;
        StringView<13ul>(char const (&arg1)[13ul]);
        auto to_owned_string<eastl::string>() const;
        StringView(StringView&& stringView);
        StringView<10ul>(char const (&arg1)[10ul]);
        StringView<9ul>(char const (&arg1)[9ul]);
        StringView<14ul>(char const (&arg1)[14ul]);
        StringView<12ul>(char const (&arg1)[12ul]);
        StringView(const StringView& wrapArray);
        auto split(char arg1) const;
        StringView(const char* str, unsigned long arg2);
        StringView* operator=(StringView&& stringView);
        StringView* substr(unsigned long arg1, unsigned long arg2) const;
        StringView<3ul>(char const (&arg1)[3ul]);
        StringView* suffix_of(StringView stringView) const;
        StringView<8ul>(char const (&arg1)[8ul]);
        StringView<eastl::fixed_string<char, 512>>(const eastl::fixed_string<char, 512>& str);
        StringView<4ul>(char const (&arg1)[4ul]);
        uint64_t starts_with(StringView stringView) const;
        StringView<2ul>(char const (&arg1)[2ul]);
        StringView(const char& arg1);
        StringView<char const*>(char const* const& arg1);
        void find(char arg1) const;
        StringView* substr(unsigned long arg1) const;
        auto to_owned_string<std::basic_string_view<char>>() const;
        uint64_t is_subview_of(StringView stringView) const;
        uint8_t operator!=(StringView stringView) const;
        void compare(unsigned long arg1, unsigned long arg2, StringView stringView) const;
        StringView<std::basic_string_view<char>>(const std::basic_string_view<char>& str);
        void find_first_of(StringView stringView) const;
        StringView<1ul>(char const (&arg1)[1ul]);
        void find_first_of(StringView stringView, unsigned long arg2) const;
        auto trim() const;
        void operator<(StringView stringView) const;
        auto to_owned_string<eastl::fixed_string<char, 30>>() const;
        auto to_owned_string<eastl::fixed_string<char, 50>>() const;
        StringView(const StringView& stringView);
        bool operator==(StringView stringView) const;
        StringView<5ul>(char const (&arg1)[5ul]);
        StringView<6ul>(char const (&arg1)[6ul]);
        auto to_owned_string<eastl::fixed_string<char, 20>>() const;

    private:
        unsigned long field_0;
        Particle* field_8;
    };

    // 0x100017ca0: StringView::StringView() has the same machine code as weak_ptr<oldscape::rs2lib::IfType>::weak_ptr()

    // 0x10007e680: StringView::length() const has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x1000a6be0
    StringView::StringView<7ul>(char const (&arg1)[7ul]) : WrapArray(arg1, 6) {}

    // 0x1002d9f40: StringView::StringView(char const*, unsigned long) has the same machine code as WrapArray<unsigned char const>::WrapArray(unsigned char const*, unsigned long)

    // 0x1004b6a00
    StringView::StringView<eastl::fixed_string<char, 128>>(const eastl::fixed_string<char, 128>& str) : shared_ptr() {
        Wrap<eastl::fixed_string<char, 40>>(str);
    }

    // 0x10065ca70
    StringView::StringView<15ul>(char const (&arg1)[15ul]) : WrapArray(arg1, 14) {}

    // 0x10065ca80
    StringView::StringView<11ul>(char const (&arg1)[11ul]) : WrapArray(arg1, 10) {}

    // 0x100683ee0
    auto StringView::to_owned_string<eastl::basic_string<char, BucketAllocatorEASTL>>() const {
        eastl local_30;

        auto str = end();
        unsigned long arg2 = ShuffledPacketFactory::p2_alt2();
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        return auto(str, arg2, &local_30);
    }

    // 0x1006e0ca0
    void StringView::find(StringView stringView) const {
        uint32_t extraout_var;
        uint64_t local_38[2];
        basic_string_view<char, std::char_traits<char> _>* local_28;
        unsigned long local_20;

        auto aVar1 = to_owned_string<std::basic_string_view<char>>(this);
        local_38[0] = (((uint64_t)extraout_var << 32) | (uint32_t)aVar1);
        auto str = stringView->end();
        unsigned long arg2 = stringView->HeapBeginPtr();
        new (&local_28) std::basic_string_view<char>(str, arg2);
        local_38->find(local_28, local_20);
    }

    // 0x1006f0640
    StringView::StringView<13ul>(char const (&arg1)[13ul]) : WrapArray(arg1, 12) {}

    // 0x1006f19f0
    auto StringView::to_owned_string<eastl::string>() const {
        auto str = end();
        unsigned long arg2 = ShuffledPacketFactory::p2_alt2();
        return auto(str, arg2);
    }

    // 0x100711dd0
    StringView::StringView(StringView&& stringView) : WrapArray(stringView) {}

    // 0x100712310
    StringView::StringView<10ul>(char const (&arg1)[10ul]) : WrapArray(arg1, 9) {}

    // 0x100712320
    StringView::StringView<9ul>(char const (&arg1)[9ul]) : WrapArray(arg1, 8) {}

    // 0x100712330
    StringView::StringView<14ul>(char const (&arg1)[14ul]) : WrapArray(arg1, 13) {}

    // 0x100712340
    StringView::StringView<12ul>(char const (&arg1)[12ul]) : WrapArray(arg1, 11) {}

    // 0x10082e540: StringView::StringView(StringView const&) has the same machine code as WrapArray<unsigned char const>::WrapArray(WrapArray<unsigned char const> const&)

    // 0x1008dff60
    auto StringView::split(char arg1) const {
        auto result;
        StringView local_50;
        StringView local_40;

        if (find(arg1) == -1) {
            local_40 = oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
            result.pair<true, false>(*this, local_40);
        } else {
            substr(&local_40, (unsigned long)this, 0);
            substr(&local_50, (unsigned long)this);
            result.pair<StringView&, StringView&, false>(local_40, local_50);
        }
        return result;
    }

    // 0x1008e1540
    StringView* StringView::operator=(StringView&& stringView) {
        *this = stringView;
        return this;
    }

    // 0x1008e2ee0
    StringView* StringView::substr(unsigned long arg1, unsigned long arg2) const {
        long lVar2;
        unsigned long in_RCX;

        if (arg1->HeapBeginPtr() < in_RCX + arg2) {
            new (this) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        } else {
            lVar2 = arg1->end();
            StringView((arg2 + lVar2), in_RCX);
        }
        return this;
    }

    // 0x1008e3fb0
    StringView* StringView::suffix_of(StringView stringView) const {
        StringView* in_RDX;
        StringView local_38;

        StringView(&local_38, in_RDX);
        if (starts_with(stringView, &local_38) == '\0') {
            new (this) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        } else {
            in_RDX->HeapBeginPtr();
            substr(this, (unsigned long)stringView);
        }
        return this;
    }

    // 0x1008e57c0
    uint64_t StringView::starts_with(StringView stringView) const {
        uint64_t uVar3;
        StringView local_48;
        StringView local_38;

        unsigned long uVar1 = HeapBeginPtr();
        unsigned long uVar2 = stringView->HeapBeginPtr();
        if (uVar1 < uVar2) {
            uVar3 = 0;
        } else {
            stringView->HeapBeginPtr();
            substr(&local_48, (unsigned long)this, 0);
            StringView(&local_38, stringView);
            uVar3 = local_48 == local_38;
        }
        return uVar3;
    }

    // 0x1008fe650
    void StringView::find(char arg1) const {
        uint32_t extraout_var;
        unsigned long arg2;
        uint64_t local_20[2];

        auto aVar1 = to_owned_string<std::basic_string_view<char>>(this);
        local_20[0] = (((uint64_t)extraout_var << 32) | (uint32_t)aVar1);
        local_20->find(arg1, arg2);
    }

    // 0x1008fe680
    StringView* StringView::substr(unsigned long arg1) const {
        long lVar2;
        long lVar3;
        unsigned long in_RDX;

        if (arg1->HeapBeginPtr() < in_RDX) {
            new (this) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        } else {
            lVar2 = arg1->end();
            lVar3 = arg1->HeapBeginPtr();
            StringView((lVar2 + in_RDX), lVar3 - in_RDX);
        }
        return this;
    }

    // 0x1008fe700
    auto StringView::to_owned_string<std::basic_string_view<char>>() const {
        auto str = end();
        unsigned long arg2 = ShuffledPacketFactory::p2_alt2();
        return local_28(str, arg2);
        return local_28[0];
    }

    // 0x1009063a0
    uint64_t StringView::is_subview_of(StringView stringView) const {
        long lVar3;
        long lVar4;
        long lVar5;
        long lVar6;
        uint64_t uVar7;

        unsigned long uVar1 = end();
        unsigned long uVar2 = stringView->end();
        if (uVar1 < uVar2) {
            uVar7 = 0;
        } else {
            lVar3 = end();
            lVar4 = HeapBeginPtr();
            lVar5 = stringView->end();
            lVar6 = stringView->HeapBeginPtr();
            uVar7 = (((uint64_t)((int64_t)((unsigned long)(lVar6 + lVar5) >> 8)) << 8) |
                     (uint8_t)((unsigned long)(lVar4 + lVar3) <= (unsigned long)(lVar6 + lVar5)));
        }
        return uVar7;
    }

    // 0x1009064e0
    uint8_t StringView::operator!=(StringView stringView) const {
        StringView local_28;

        StringView(&local_28, stringView);
        return *this == local_28 ^ 1;
    }

    // 0x1009066b0
    StringView::StringView<3ul>(char const (&arg1)[3ul]) : WrapArray(arg1, 2) {}

    // 0x1009066f0
    StringView::StringView<8ul>(char const (&arg1)[8ul]) : WrapArray(arg1, 7) {}

    // 0x1009067d0
    StringView::StringView<eastl::fixed_string<char, 512>>(const eastl::fixed_string<char, 512>& str) : shared_ptr() {
        Wrap<eastl::fixed_string<char, 512>>(str);
    }

    // 0x100906840
    void StringView::compare(unsigned long arg1, unsigned long arg2, StringView stringView) const {
        char* pcVar2;
        long lVar3;
        basic_string_view<char> local_60;
        basic_string_view<char, std::char_traits<char> _>* local_50[2];
        basic_string_view<char, std::char_traits<char> _>* local_40[2];

        unsigned long uVar1 = HeapBeginPtr();
        if (uVar1 < arg2 + arg1) {
            local_60 = std::basic_string_view<char>();
            pcVar2 = (char*)stringView->end();
            uVar1 = ShuffledPacketFactory::p2_alt2();
            new (local_50) std::basic_string_view<char>(pcVar2, uVar1);
        } else {
            lVar3 = end();
            local_60 = std::basic_string_view<char>((arg1 + lVar3), arg2);
            pcVar2 = (char*)stringView->end();
            uVar1 = ShuffledPacketFactory::p2_alt2();
            new (local_40) std::basic_string_view<char>(pcVar2, uVar1);
            local_50[0] = local_40[0];
        }
        local_60.compare(local_50[0]);
    }

    // 0x1009069d0
    StringView::StringView<4ul>(char const (&arg1)[4ul]) : WrapArray(arg1, 3) {}

    // 0x1009069e0
    StringView::StringView<2ul>(char const (&arg1)[2ul]) : WrapArray(arg1, 1) {}

    // 0x1009069e0: StringView::StringView(char const&) has the same machine code as StringView::StringView<2ul>(char const (&) [2ul])

    // 0x10090e7e0
    StringView::StringView<char const*>(char const* const& arg1) : shared_ptr() {
        size_t arg2;

        Particle* particle = (Particle*)*arg1;
        if (particle != nullptr) {
            arg2 = _strlen((char*)particle);
            new (this) WrapArray(particle, arg2);
        }
    }

    // 0x100a51f30
    StringView::StringView<std::basic_string_view<char>>(const std::basic_string_view<char>& str) : shared_ptr() {
        Wrap<std::basic_string_view<char>>(str);
    }

    // 0x100c7d970
    void StringView::find_first_of(StringView stringView) const {
        StringView local_28;

        StringView(&local_28, stringView);
        find_first_of(&local_28, 0);
    }

    // 0x100c7e0a0
    void StringView::find_first_of(StringView stringView, unsigned long arg2) const {
        basic_string_view<char, std::char_traits<char> _>* local_40;
        unsigned long local_38;

        auto pcVar1 = end();
        unsigned long uVar2 = HeapBeginPtr();
        basic_string_view<char> local_50(pcVar1, uVar2);
        pcVar1 = (char*)stringView->end();
        uVar2 = stringView->HeapBeginPtr();
        new (&local_40) std::basic_string_view<char>(pcVar1, uVar2);
        local_50.find_first_of(local_40, local_38);
    }

    // 0x100c7e1b0
    auto StringView::trim() const {
        auto result;
        int iVar2;
        char* pcVar3;
        StringView local_28;

        StringView(&result, this);
        bool cVar1 = result.empty();
        if (!cVar1) {
            do {
                pcVar3 = result.front();
                iVar2 = isspace((int)*pcVar3);
                if (iVar2 == 0) {
                    pcVar3 = result.back();
                    iVar2 = isspace((int)*pcVar3);
                    if (iVar2 == 0) {
                        return result;
                    }
                    ShuffledPacketFactory::p2_alt2();
                    substr(&local_28, (unsigned long)&result, 0);
                } else {
                    substr(&local_28, (unsigned long)&result);
                }
                operator=(&result, &local_28);
                cVar1 = result.empty();
            } while (!cVar1);
        }
        return result;
    }

    // 0x100c8b4e0
    void StringView::operator<(StringView stringView) const {
        uint32_t extraout_var;
        basic_string_view<char, std::char_traits<char> _>* str2;

        auto aVar1 = to_owned_string<std::basic_string_view<char>>(this);
        to_owned_string<std::basic_string_view<char>>(stringView);
        std::operator<(
            (basic_string_view<char, std::char_traits<char> _>*)(((uint64_t)extraout_var << 32) | (uint32_t)aVar1),
            str2);
    }

    // 0x100c8bbd0
    StringView::StringView<1ul>(char const (&arg1)[1ul]) : WrapArray(arg1, 0) {}

    // 0x100cb9920
    auto StringView::to_owned_string<eastl::fixed_string<char, 30>>() const {
        auto str = end();
        unsigned long arg2 = ShuffledPacketFactory::p2_alt2();
        return auto(str, arg2);
    }

    // 0x100cb9a20
    auto StringView::to_owned_string<eastl::fixed_string<char, 50>>() const {
        auto str = end();
        unsigned long arg2 = ShuffledPacketFactory::p2_alt2();
        return auto(str, arg2);
    }

    // 0x100cba220
    bool StringView::operator==(StringView stringView) const {
        char* pcVar4;
        char* pcVar5;
        size_t sVar6;
        bool bVar7;

        long lVar2 = HeapBeginPtr();
        long lVar3 = stringView->HeapBeginPtr();
        if (lVar2 == lVar3) {
            lVar2 = end();
            lVar3 = stringView->end();
            if (lVar2 == lVar3) {
                bVar7 = true;
            } else {
                pcVar4 = (char*)end();
                pcVar5 = (char*)stringView->end();
                sVar6 = HeapBeginPtr();
                bVar7 = _strncmp(pcVar4, pcVar5, sVar6) == 0;
            }
        } else {
            bVar7 = false;
        }
        return bVar7;
    }

    // 0x100cc1d20
    auto StringView::to_owned_string<eastl::fixed_string<char, 20>>() const {
        auto str = end();
        unsigned long arg2 = ShuffledPacketFactory::p2_alt2();
        return auto(str, arg2);
    }

    // 0x100cc1fb0
    StringView::StringView<5ul>(char const (&arg1)[5ul]) : WrapArray(arg1, 4) {}

    // 0x100cc1fc0
    StringView::StringView<6ul>(char const (&arg1)[6ul]) : WrapArray(arg1, 5) {}

} // namespace jag

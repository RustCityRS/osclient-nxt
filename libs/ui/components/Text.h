// libs/ui/components/Text.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class Text {
    public:
        // virtual methods in vtable order
        virtual ~Text();
        virtual uint64_t GetType() const;
        virtual void MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual int GetLinkObjType() const;
        virtual void SetLinkObjType(int arg1);
        virtual unsigned long long GetLinkObjCount() const;
        virtual void SetLinkObjCount(unsigned long long arg1);
        virtual void LoadStyleSheetVisuals(const StyleSheet& styleSheet);
        virtual uint64_t GetLinkObjText(eastl::fixed_string<char, 256>* str) const;

    private:
        uint8_t _unknown_8[80];
        int field_88;
        int field_92;
        uint32_t field_96;
        uint8_t field_100;
        uint8_t _unknown_101[163];
        VisibleShadowCastingLightInfo field_264;
        uint8_t _unknown_288[104];
        TcpConnectionMessageBase field_392;
        uint8_t _unknown_440[16];
        int m_linkObjType;
        uint8_t _unknown_460[4];
        unsigned long long m_linkObjCount;
        uint8_t _unknown_472[88];
    };

    // 0x1006ae320
    void Text::SetLinkObjCount(unsigned long long arg1) {
        m_linkObjCount = arg1;
    }

    // 0x1006ae330
    uint64_t Text::GetLinkObjText(eastl::fixed_string<char, 256>* str) const {
        *str = "";
        return 0;
    }

    // 0x1006af1f0
    ComponentOpConfig::ComponentOpConfig() {
        unique_ptr<true, void>();
        new (&field_8) eastl::vector<eastl::fixed_string<char, 24>>();
        new (&field_40) eastl::string();
        new (&field_72) eastl::vector<int>();
        new (&field_104) eastl::string();
        field_136 = 65535;
    }

    // 0x1006af3d0
    ComponentCursorConfig::ComponentCursorConfig()
        : m_mouseOverCursor(-1), m_validTargetCursor(-1), m_invalidTargetCursor(-1) {}

    // 0x1006af3f0
    ComponentSwipeConfig::ComponentSwipeConfig()
        : m_deadZoneVertical(0), m_deadZoneHorizontal(0), m_directionMask(0), m_deceleration(0), m_stopExponent(8) {}

    // 0x1006af400
    ComponentServerConfig::ComponentServerConfig() : ServerActiveProperties() {
        field_8.unique_ptr<true, void>();
    }

    // 0x1006af490
    ComponentParams::ComponentParams() {
        unique_ptr<true, void>();
    }

    // 0x1006af500
    ComponentParams::~ComponentParams() {}

    // 0x1006af530
    ComponentServerConfig::~ComponentServerConfig() {
        field_8.~unique_ptr();
    }

    // 0x1006af560
    ComponentOpConfig::~ComponentOpConfig() {
        field_104.~basic_string();
        field_72.~vector();
        field_40.~basic_string();
        field_8.~vector();
    }

    // 0x1006b2090
    ComponentParams::ParamHolder::ParamHolder()
        : eastl::vector_map<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>() {}

    // 0x1006b31c0
    Text::~Text() {
        field_392->~TextData();
    }

} // namespace jag::ui

namespace jag {
    // 0x1006bcb30
    int tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>, StringView>(
        eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>& strs, const StringView& stringView, const char* str,
        int arg4) {
        bool bVar1;
        size_t sVar3;
        ReturnValue* pRVar5;
        char* str1_00;

        if (arg4 == -1) {
            sVar3 = _strlen(str);
            arg4 = (int)sVar3;
        }
        strs.clear();
        strs.reserve(4);
        auto str1 = stringView.end();
        auto pcVar4 = stringView.end();
        char* pcVar6 = str1;
        if (str1 != pcVar4) {
            str1_00 = str1;
            do {
                str1 = pcVar6;
                bVar1 = internal::find_token<char, char const*>(*str1, str, str + arg4);
                if (bVar1) {
                    if (str1_00 != str1) {
                        pRVar5 = (ReturnValue*)eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>::push_back();
                        *pRVar5 =
                            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::assign(
                                str1_00, str1);
                    }
                    if (str1 == pcVar4) {
                    LAB_1006bcc20:
                        pcVar6 = str1;
                    } else {
                        do {
                            bVar1 = internal::find_token<char, char const*>(*str1, str, str + arg4);
                            if (!bVar1)
                                goto LAB_1006bcc20;
                            str1 = str1 + 1;
                            pcVar6 = str1;
                        } while (str1 != pcVar4);
                    }
                } else {
                    pcVar6 = str1 + 1;
                    str1 = str1_00;
                }
                str1_00 = str1;
            } while (pcVar6 != pcVar4);
        }
        if (str1 != pcVar6) {
            pRVar5 = (ReturnValue*)eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>::push_back();
            *pRVar5 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::assign(
                str1, pcVar6);
        }
        return strs.size();
    }

    // 0x1006bcd40
    tweak::Tweaky* placement_new<tweak::Tweaky, graphics::RT7Core*&, graphics::FontHelpers*&, input::Input*&>(
        void* arg1, graphics::RT7Core*& arg2, graphics::FontHelpers*& arg3, input::Input*& arg4) {
        new (arg1) tweak::Tweaky(arg2, arg3, arg4);
        return arg1;
    }

    // 0x1006bcd70
    ref_counter_shared<tweak::Tweaky>*
    placement_new<ref_counter_shared<tweak::Tweaky>, int, tweak::Tweaky*&>(void* arg1, int&& arg2,
                                                                           tweak::Tweaky*& arg3) {
        new (arg1) ref_counter_shared<tweak::Tweaky>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1006bcd90
    void shared_ptr_do_enable_shared_from_this<tweak::Tweaky>(ref_counter_base* ref_counter_base, tweak::Tweaky* tweaky,
                                                              tweak::Tweaky::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)tweaky);
            local_38 = weak_ptr(local_48);
            tweaky->__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1006bce30
    ref_counter_shared<tweak::Tweaky>::ref_counter_shared(unsigned long arg1, tweak::Tweaky* tweaky)
        : ref_counter_base() {}

    // 0x1006bce70
    void ref_counter_shared<tweak::Tweaky>::DeleteData() {
        ref_counter_shared<tweak::Tweaky> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((Tweaky*)((long)&(this[3]._vptr)->_dtor + lVar2))->~Tweaky();
                    prVar1 = (ref_counter_shared<tweak::Tweaky> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 160;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1006bcf70
    tweak::List*
    placement_new<tweak::List, char const (&)[8], eastl::vector<eastl::string>>(void* arg1, char const (&arg2)[8],
                                                                                eastl::vector<eastl::string>&& strs) {
        new (arg1) tweak::List(arg2, strs);
        return arg1;
    }

    // 0x1006bcf90
    ref_counter_shared<tweak::List>*
    placement_new<ref_counter_shared<tweak::List>, int, tweak::List*&>(void* arg1, int&& arg2, tweak::List*& arg3) {
        new (arg1) ref_counter_shared<tweak::List>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1006bcfb0
    void shared_ptr_do_enable_shared_from_this<tweak::List>(ref_counter_base* ref_counter_base, tweak::List* arg2,
                                                            tweak::List::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)arg2);
            local_38 = weak_ptr(local_48);
            arg2->field_8.__internal_set_weak_ptr(local_38);
        }
    }

} // namespace jag

namespace jag::input::gesture {
    class GestureBase {
    public:
        // virtual methods in vtable order
        virtual ~GestureBase();
        uint8_t OnTouchUpdate();
        GestureBase(const char* str);

    private:
        char* field_8;
    };

    // 0x1006ae4b0
    GestureSwipe::GestureSwipe() : Gesture<GestureEvent_Swipe>("Swipe") {

        new (&field_112) eastl::hash_map<unsigned long, GestureSwipe::RunningTouch>(local_28);
        new (&field_168) eastl::hash_map<unsigned long, GestureSwipe::RunningTouch>(local_28);
    }

    // 0x1006ae550
    Gesture<GestureEvent_Swipe>::Gesture(const char* str) : GestureBase(str) {
        new ((this + 2)) EventListeners<std::function<bool(GestureEvent_Swipe const&)>>();
    }

    // 0x1006ae5a0
    GestureBase::GestureBase(const char* str) : field_8(str) {}

    // 0x1006ae7f0
    void GestureManager::AddGesture(GestureBase* gestureBase) {
        field_40.emplace<GestureBase*&>(gestureBase);
    }

} // namespace jag::input::gesture

// libs/ui/components/Text.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class Text {
    public:
        // virtual methods in vtable order
        virtual ~Text();
        virtual GetType() const;
        virtual void MainDraw(ComponentDependencies const&, int, int, float);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual int GetLinkObjType() const;
        virtual void SetLinkObjType(int);
        virtual ulonglong GetLinkObjCount() const;
        virtual void SetLinkObjCount(unsigned long long);
        virtual void LoadStyleSheetVisuals(StyleSheet const&);
        virtual GetLinkObjText(eastl::fixed_string<char, 256, true, eastl::allocator>*) const;

        // data members, from how the methods use this: 560 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[80];
        int field_88;        // offset 88
        int field_92;        // offset 92
        undefined4 field_96; // offset 96
        byte field_100;      // offset 100
        char _unknown_101[163];
        VisibleShadowCastingLightInfo field_264; // offset 264
        char _unknown_288[104];
        TcpConnectionMessageBase field_392; // offset 392
        char _unknown_440[16];
        int m_linkObjType; // offset 456
        char _unknown_460[4];
        ulonglong m_linkObjCount; // offset 464
        char _unknown_472[88];
    };

    // 0x1006ae2f0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Text::~Text(): jumps straight to the base-object destructor

    // 0x1006ae300, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // Text::~Text()
    void Text::~Text() {
        ~Text(this);
        operator_delete(this);
    }

    // 0x1006ae320, 16 bytes, inline, placed by class name and debug map
    // Text::SetLinkObjCount(unsigned long long)
    void Text::SetLinkObjCount(ulonglong param_1) {
        m_linkObjCount = param_1;
    }

    // 0x1006ae330, 32 bytes, inline, placed by class name and debug map
    // Text::GetLinkObjText(eastl::fixed_string<char, 256, true, eastl::allocator>*) const
    undefined8 Text::GetLinkObjText(fixed_string* param_1) {
        eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
            (fixed_string<char, 16, true, eastl::allocator>*)param_1, "");
        return 0;
    }

    // 0x1006af0f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ComponentOpConfig::ComponentOpConfig(): jumps straight to the base-object constructor

    // 0x1006af100, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ComponentCursorConfig::ComponentCursorConfig(): jumps straight to the base-object constructor

    // 0x1006af110, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ComponentSwipeConfig::ComponentSwipeConfig(): jumps straight to the base-object constructor

    // 0x1006af120, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ComponentServerConfig::ComponentServerConfig(): jumps straight to the base-object constructor

    // 0x1006af130, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ComponentParams::ComponentParams(): jumps straight to the base-object constructor

    // 0x1006af140, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ComponentParams::~ComponentParams(): jumps straight to the base-object destructor

    // 0x1006af150, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ComponentServerConfig::~ComponentServerConfig(): jumps straight to the base-object destructor

    // 0x1006af160, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ComponentOpConfig::~ComponentOpConfig(): jumps straight to the base-object destructor

    // 0x1006af1f0, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ComponentOpConfig::ComponentOpConfig()
    void ComponentOpConfig::ComponentOpConfig() {
        std::unique_ptr<char const, std::default_delete<char const>>::unique_ptr<true, void>(
            (unique_ptr<char const, std::default_delete<char const>>*)this);
        new (&field_8) eastl::vector<eastl::fixed_string<char, 24, true, eastl::allocator>, eastl::allocator>();
        new (&field_40) eastl::string();
        new (&field_72) eastl::vector<int, eastl::allocator>();
        new (&field_104) eastl::string();
        field_136 = 65535;
    }

    // 0x1006af3d0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ComponentCursorConfig::ComponentCursorConfig()
    void ComponentCursorConfig::ComponentCursorConfig() {
        m_mouseOverCursor = -1;
        m_validTargetCursor = -1;
        m_invalidTargetCursor = -1;
    }

    // 0x1006af3f0, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ComponentSwipeConfig::ComponentSwipeConfig()
    void ComponentSwipeConfig::ComponentSwipeConfig() {
        m_deadZoneVertical = 0;
        m_deadZoneHorizontal = 0;
        m_directionMask = 0;
        m_deceleration = 0;
        m_stopExponent = 8;
    }

    // 0x1006af400, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ComponentServerConfig::ComponentServerConfig()
    void ComponentServerConfig::ComponentServerConfig() {
        new (this) ServerActiveProperties();
        std::unique_ptr<ServerKeyProperties, std::default_delete<ServerKeyProperties>>::unique_ptr<true, void>(
            (unique_ptr<ServerKeyProperties, std::default_delete<ServerKeyProperties>>*)&field_8);
    }

    // 0x1006af490, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ComponentParams::ComponentParams()
    void ComponentParams::ComponentParams() {
        std::unique_ptr<ComponentParams::ParamHolder, std::default_delete<ComponentParams::ParamHolder>>::unique_ptr<
            true, void>(
            (unique_ptr<ComponentParams::ParamHolder, std::default_delete<ComponentParams::ParamHolder>>*)this);
    }

    // 0x1006af500, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ComponentParams::~ComponentParams()
    void ComponentParams::~ComponentParams() {
        ~unique_ptr();
    }

    // 0x1006af530, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ComponentServerConfig::~ComponentServerConfig()
    void ComponentServerConfig::~ComponentServerConfig() {
        (&field_8)->~unique_ptr();
    }

    // 0x1006af560, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ComponentOpConfig::~ComponentOpConfig()
    void ComponentOpConfig::~ComponentOpConfig() {
        (&field_104)->~basic_string();
        (&field_72)->~vector();
        (&field_40)->~basic_string();
        (&field_8)->~vector();
        ~unique_ptr();
    }

    // 0x1006b2090, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ComponentParams::ParamHolder::ParamHolder()
    void ComponentParams::ParamHolder::ParamHolder() {
        new (this) eastl::vector_map<
            int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::less<int>, eastl::allocator,
            eastl::vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>,
                          eastl::allocator>>();
    }

    // 0x1006b31c0, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // Text::~Text()
    void Text::~Text() {
        field_0 = &PTR__Text_100f10878;
        field_392->~TextData();
        ~Component();
    }

} // namespace jag::ui

namespace jag {
    // 0x1006bcb30, 320 bytes, inline, placed by debug map only (low confidence)
    // int tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator>, StringView>(eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator>&, StringView const&, char const*, int)
    int jag::tokenize<
        eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator>,
        StringView>(fixed_vector* param_1, StringView* param_2, char* param_3, int param_4) {
        bool bVar1;
        int iVar2;
        size_t sVar3;
        char* pcVar4;
        char* pcVar5;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>* pbVar6;
        char* pcVar7;
        char* pcVar8;

        if (param_4 == -1) {
            sVar3 = _strlen(param_3);
            param_4 = (int)sVar3;
        }
        param_1->clear();
        param_1->reserve(4);
        pcVar4 = (char*)param_2->end();
        pcVar5 = (char*)param_2->end();
        pcVar8 = pcVar4;
        if (pcVar4 != pcVar5) {
            pcVar7 = pcVar4;
            do {
                pcVar4 = pcVar8;
                bVar1 = internal::find_token<char, char const*>(pcVar4, param_3, param_3 + param_4);
                if (bVar1) {
                    if (pcVar7 != pcVar4) {
                        pbVar6 =
                            (basic_string<char,
                                          eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>*)
                                eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                                    eastl::allocator>::push_back();
                        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                eastl::allocator>>::assign(pbVar6,
                                                                                                           pcVar7,
                                                                                                           pcVar4);
                    }
                    if (pcVar4 == pcVar5) {
                    LAB_1006bcc20:
                        pcVar8 = pcVar4;
                    } else {
                        do {
                            bVar1 = internal::find_token<char, char const*>(pcVar4, param_3, param_3 + param_4);
                            if (!bVar1)
                                goto LAB_1006bcc20;
                            pcVar4 = pcVar4 + 1;
                            pcVar8 = pcVar4;
                        } while (pcVar4 != pcVar5);
                    }
                } else {
                    pcVar8 = pcVar4 + 1;
                    pcVar4 = pcVar7;
                }
                pcVar7 = pcVar4;
            } while (pcVar8 != pcVar5);
        }
        if (pcVar4 != pcVar8) {
            pbVar6 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>*)
                eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                    eastl::allocator>::push_back();
            eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::assign(pbVar6,
                                                                                                          pcVar4,
                                                                                                          pcVar8);
        }
        iVar2 = param_1->size();
        return iVar2;
    }

    // 0x1006bcd40, 48 bytes, inline, placed by debug map only (low confidence)
    // tweak::Tweaky* placement_new<tweak::Tweaky, graphics::RT7Core*&, graphics::FontHelpers*&, input::Input*&>(void*, graphics::RT7Core*&, graphics::FontHelpers*&, input::Input*&)
    Tweaky* jag::placement_new<tweak::Tweaky, graphics::RT7Core*&, graphics::FontHelpers*&, input::Input*&>(
        void* param_1, RT7Core** param_2, FontHelpers** param_3, Input** param_4) {
        tweak::Tweaky::Tweaky(param_1, *param_2, *param_3, *param_4);
        return param_1;
    }

    // 0x1006bcd70, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Tweaky>* placement_new<ref_counter_shared<tweak::Tweaky>, int, tweak::Tweaky*&>(void*, int&&, tweak::Tweaky*&)
    ref_counter_shared* placement_new<ref_counter_shared<tweak::Tweaky>, int, tweak::Tweaky*&>(void* param_1,
                                                                                               int* param_2,
                                                                                               Tweaky** param_3) {
        ref_counter_shared<tweak::Tweaky>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1006bcd90, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<tweak::Tweaky>(ref_counter_base*, tweak::Tweaky*, tweak::Tweaky::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<tweak::Tweaky>(ref_counter_base* param_1, Tweaky* param_2,
                                                              enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            param_2->__internal_set_weak_ptr(local_38);
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x1006bce20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Tweaky>::ref_counter_shared(unsigned long, tweak::Tweaky*): jumps straight to the base-object constructor

    // 0x1006bce30, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Tweaky>::ref_counter_shared(unsigned long, tweak::Tweaky*)
    void ref_counter_shared<tweak::Tweaky>::ref_counter_shared(ulong param_1, Tweaky* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7478 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Tweaky**)(this + 24) = param_2;
    }

    // 0x1006bce70, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::Tweaky>::DeleteData()
    void ref_counter_shared<tweak::Tweaky>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Tweaky();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 160;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1006bcf70, 32 bytes, inline, placed by debug map only (low confidence)
    // tweak::List* placement_new<tweak::List, char const (&) [8], eastl::vector<eastl::string, eastl::allocator> >(void*, char const (&) [8], eastl::vector<eastl::string, eastl::allocator>&&)
    List* jag::placement_new<tweak::List, char const (&)[8], eastl::vector<eastl::string, eastl::allocator>>(
        void* param_1, char* param_2, vector* param_3) {
        tweak::List::List(param_1, param_2, param_3);
        return param_1;
    }

    // 0x1006bcf90, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::List>* placement_new<ref_counter_shared<tweak::List>, int, tweak::List*&>(void*, int&&, tweak::List*&)
    ref_counter_shared* placement_new<ref_counter_shared<tweak::List>, int, tweak::List*&>(void* param_1, int* param_2,
                                                                                           List** param_3) {
        ref_counter_shared<tweak::List>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1006bcfb0, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<tweak::List>(ref_counter_base*, tweak::List*, tweak::List::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<tweak::List>(ref_counter_base* param_1, List* param_2,
                                                            enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

} // namespace jag

namespace jag::input::gesture {
    class GestureBase {
    public:
        // virtual methods in vtable order
        virtual ~GestureBase();
        OnTouchUpdate();
        GestureBase(char const*);

        // data members, from how the methods use this: 16 bytes
        undefined* field_0; // offset 0, vtable pointer
        char* field_8;      // offset 8
    };

    // 0x1006ae4b0, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // GestureSwipe::GestureSwipe()
    void GestureSwipe::GestureSwipe() {
        allocator local_28[8];

        new (this) Gesture<GestureEvent_Swipe>("Swipe");
        field_0 = &PTR__GestureSwipe_100f29e58;
        eastl::allocator::allocator(local_28, "EASTL hash_map");
        new (&field_112, local_28)
            eastl::hash_map<unsigned long, GestureSwipe::RunningTouch, eastl::hash<unsigned long>,
                            eastl::equal_to<unsigned long>, eastl::allocator, false>();
        eastl::allocator::allocator(local_28, "EASTL hash_map");
        new (&field_168, local_28)
            eastl::hash_map<unsigned long, GestureSwipe::RunningTouch, eastl::hash<unsigned long>,
                            eastl::equal_to<unsigned long>, eastl::allocator, false>();
    }

    // 0x1006ae550, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Gesture<GestureEvent_Swipe>::Gesture(char const*)
    void Gesture<GestureEvent_Swipe>::Gesture(char* param_1) {
        new (this) GestureBase(param_1);
        *(undefined**)this = PTR_vtable_100ee8638 + 16;
        EventListeners<std::function<bool(GestureEvent_Swipe_const&)>>::EventListeners(
            (EventListeners<std::function<bool(GestureEvent_Swipe_const&)>>*)(this + 16));
    }

    // 0x1006ae5a0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // GestureBase::GestureBase(char const*)
    void GestureBase::GestureBase(char* param_1) {
        field_0 = PTR_vtable_100ee8620 + 16;
        field_8 = param_1;
    }

    // 0x1006ae7f0, 32 bytes, inline, placed by debug map only (low confidence)
    // GestureManager::AddGesture(GestureBase*)
    void GestureManager::AddGesture(GestureBase* param_1) {
        GestureBase* local_10;

        local_10 = param_1;
        eastl::rbtree<GestureBase*, GestureBase*, eastl::less<GestureBase*>, eastl::allocator,
                      eastl::use_self<GestureBase*>, false, true>::
            emplace<GestureBase*&>((rbtree<GestureBase*, GestureBase*, eastl::less<GestureBase*>, eastl::allocator,
                                           eastl::use_self<GestureBase*>, false, true>*)&field_40,
                                   &local_10);
    }

} // namespace jag::input::gesture

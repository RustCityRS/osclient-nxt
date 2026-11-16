// libs/tweaky/Tweaky_ContainerGroup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.tweaky

namespace jag {
    // 0x100a536e0
    tweak::Container* placement_new<tweak::Container, int, int, char const (&)[1]>(void* arg1, int&& arg2, int&& arg3,
                                                                                   char const (&arg4)[1]) {

        eastl::string local_58(arg4);
        new (arg1) tweak::Container((int)arg2, (int)arg3, local_58);
        return arg1;
    }

    // 0x100a53760
    ref_counter_shared<tweak::Container>*
    placement_new<ref_counter_shared<tweak::Container>, int, tweak::Container*&>(void* arg1, int&& arg2,
                                                                                 tweak::Container*& arg3) {
        new (arg1) ref_counter_shared<tweak::Container>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100a53780
    void
    shared_ptr_do_enable_shared_from_this<tweak::Container>(ref_counter_base* ref_counter_base,
                                                            tweak::Container* container,
                                                            tweak::Container::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)container);
            local_38 = weak_ptr(local_48);
            container->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x100a538e0
    ref_counter_shared<tweak::Container>::ref_counter_shared(unsigned long arg1, tweak::Container* container)
        : ref_counter_base() {}

    // 0x100a53920
    void ref_counter_shared<tweak::Container>::DeleteData() {
        long lVar1;
        ref_counter_shared<tweak::SizeControl> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<tweak::SizeControl> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 304;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100a54ca0
    tweak::SizeControl* placement_new<tweak::SizeControl>(void* arg1) {
        new (arg1) tweak::SizeControl();
        return arg1;
    }

    // 0x100a54cc0
    ref_counter_shared<tweak::SizeControl>*
    placement_new<ref_counter_shared<tweak::SizeControl>, int, tweak::SizeControl*&>(void* arg1, int&& arg2,
                                                                                     tweak::SizeControl*& arg3) {
        new (arg1) ref_counter_shared<tweak::SizeControl>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100a54ce0
    void shared_ptr_do_enable_shared_from_this<tweak::SizeControl>(
        ref_counter_base* ref_counter_base, tweak::SizeControl* sizeControl,
        tweak::SizeControl::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)sizeControl);
            local_38 = weak_ptr(local_48);
            sizeControl->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x100a54dc0
    ref_counter_shared<tweak::SizeControl>::ref_counter_shared(unsigned long arg1, tweak::SizeControl* sizeControl)
        : ref_counter_base() {}

    // 0x100a54e00
    tweak::Button* placement_new<tweak::Button, char const*&>(void* arg1, const char*& arg2) {
        new (arg1) tweak::Button(arg2);
        return arg1;
    }

    // 0x100a54e20
    ref_counter_shared<tweak::Button>*
    placement_new<ref_counter_shared<tweak::Button>, int, tweak::Button*&>(void* arg1, int&& arg2,
                                                                           tweak::Button*& arg3) {
        new (arg1) ref_counter_shared<tweak::Button>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100a54e40
    void shared_ptr_do_enable_shared_from_this<tweak::Button>(ref_counter_base* ref_counter_base, tweak::Button* button,
                                                              tweak::Button::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)button);
            local_38 = weak_ptr(local_48);
            button->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x100a54f30
    ref_counter_shared<tweak::Button>::ref_counter_shared(unsigned long arg1, tweak::Button* button)
        : ref_counter_base() {}

    // 0x100a54f70
    void ref_counter_shared<tweak::Button>::DeleteData() {
        long lVar1;
        ref_counter_shared<tweak::CheckBox> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<tweak::CheckBox> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 224;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100a54fd0
    tweak::CheckBox* placement_new<tweak::CheckBox, char const*&, bool&>(void* arg1, const char*& arg2, bool& arg3) {
        new (arg1) tweak::CheckBox(arg2, arg3);
        return arg1;
    }

    // 0x100a54ff0
    ref_counter_shared<tweak::CheckBox>*
    placement_new<ref_counter_shared<tweak::CheckBox>, int, tweak::CheckBox*&>(void* arg1, int&& arg2,
                                                                               tweak::CheckBox*& arg3) {
        new (arg1) ref_counter_shared<tweak::CheckBox>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100a55010
    void
    shared_ptr_do_enable_shared_from_this<tweak::CheckBox>(ref_counter_base* ref_counter_base,
                                                           tweak::CheckBox* checkBox,
                                                           tweak::CheckBox::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)checkBox);
            local_38 = weak_ptr(local_48);
            checkBox->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x100a55180
    ref_counter_shared<tweak::CheckBox>::ref_counter_shared(unsigned long arg1, tweak::CheckBox* checkBox)
        : ref_counter_base() {}

    // 0x100a55b00
    tweak::CheckBox* placement_new<tweak::CheckBox, char const*&>(void* arg1, const char*& arg2) {
        new (arg1) tweak::CheckBox(arg2);
        return arg1;
    }

    // 0x100a55bc0
    tweak::EditField* placement_new<tweak::EditField, char const*&, int&>(void* arg1, const char*& arg2, int& arg3) {
        new (arg1) tweak::EditField(arg2, arg3);
        return arg1;
    }

    // 0x100a55be0
    ref_counter_shared<tweak::EditField>*
    placement_new<ref_counter_shared<tweak::EditField>, int, tweak::EditField*&>(void* arg1, int&& arg2,
                                                                                 tweak::EditField*& arg3) {
        new (arg1) ref_counter_shared<tweak::EditField>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100a55c00
    void
    shared_ptr_do_enable_shared_from_this<tweak::EditField>(ref_counter_base* ref_counter_base,
                                                            tweak::EditField* editField,
                                                            tweak::EditField::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)editField);
            local_38 = weak_ptr(local_48);
            editField->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x100a55d50
    ref_counter_shared<tweak::EditField>::ref_counter_shared(unsigned long arg1, tweak::EditField* editField)
        : ref_counter_base() {}

    // 0x100a55d90
    tweak::Enum* placement_new<tweak::Enum, char const*&, StringEnum const*&, int*&>(void* arg1, const char*& arg2,
                                                                                     const StringEnum*& arg3,
                                                                                     int*& arg4) {
        new (arg1) tweak::Enum(arg2, arg3, arg4);
        return arg1;
    }

    // 0x100a55dc0
    ref_counter_shared<tweak::Enum>*
    placement_new<ref_counter_shared<tweak::Enum>, int, tweak::Enum*&>(void* arg1, int&& arg2, tweak::Enum*& arg3) {
        new (arg1) ref_counter_shared<tweak::Enum>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100a55de0
    void shared_ptr_do_enable_shared_from_this<tweak::Enum>(ref_counter_base* ref_counter_base, tweak::Enum* arg2,
                                                            tweak::Enum::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)arg2);
            local_38 = weak_ptr(local_48);
            arg2->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x100a55e80
    ref_counter_shared<tweak::Enum>::ref_counter_shared(unsigned long arg1, tweak::Enum* arg2) : ref_counter_base() {}

    // 0x100a55ec0
    void ref_counter_shared<tweak::Enum>::DeleteData() {
        long lVar1;
        ref_counter_shared<tweak::Swatch> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<tweak::Swatch> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 336;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100a57ae0
    tweak::Swatch*
    placement_new<tweak::Swatch, float*&, float*&, float*&, decltype(nullptr)>(void* arg1, float*& arg2, float*& arg3,
                                                                               float*& arg4, decltype(nullptr)&& arg5) {
        new (arg1) tweak::Swatch(arg2, arg3, arg4, nullptr);
        return arg1;
    }

    // 0x100a57b10
    ref_counter_shared<tweak::Swatch>*
    placement_new<ref_counter_shared<tweak::Swatch>, int, tweak::Swatch*&>(void* arg1, int&& arg2,
                                                                           tweak::Swatch*& arg3) {
        new (arg1) ref_counter_shared<tweak::Swatch>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100a57b30
    void shared_ptr_do_enable_shared_from_this<tweak::Swatch>(ref_counter_base* ref_counter_base, tweak::Swatch* swatch,
                                                              tweak::Swatch::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)swatch);
            local_38 = weak_ptr(local_48);
            swatch->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x100a57bd0
    ref_counter_shared<tweak::Swatch>::ref_counter_shared(unsigned long arg1, tweak::Swatch* swatch)
        : ref_counter_base() {}

    // 0x100a57c10
    tweak::Swatch* placement_new<tweak::Swatch, float*&, float*&, float*&, float*&>(void* arg1, float*& arg2,
                                                                                    float*& arg3, float*& arg4,
                                                                                    float*& arg5) {
        new (arg1) tweak::Swatch(arg2, arg3, arg4, arg5);
        return arg1;
    }

    // 0x100a57c40
    tweak::Container* placement_new<tweak::Container, char const*&>(void* arg1, const char*& arg2) {
        new (arg1) tweak::Container(arg2);
        return arg1;
    }

    // 0x100a58cb0
    tweak::GradientSlider*
    placement_new<tweak::GradientSlider, char const*&, float, float, float>(void* arg1, const char*& arg2, float&& arg3,
                                                                            float&& arg4, float&& arg5) {
        new (arg1) tweak::GradientSlider(arg2, arg3, arg4, arg5);
        return arg1;
    }

    // 0x100a58ce0
    ref_counter_shared<tweak::GradientSlider>*
    placement_new<ref_counter_shared<tweak::GradientSlider>, int, tweak::GradientSlider*&>(
        void* arg1, int&& arg2, tweak::GradientSlider*& arg3) {
        new (arg1) ref_counter_shared<tweak::GradientSlider>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100a58d00
    void shared_ptr_do_enable_shared_from_this<tweak::GradientSlider>(
        ref_counter_base* ref_counter_base, tweak::GradientSlider* gradientSlider,
        tweak::GradientSlider::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)gradientSlider);
            local_38 = weak_ptr(local_48);
            gradientSlider->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x100a58da0
    ref_counter_shared<tweak::GradientSlider>::ref_counter_shared(unsigned long arg1,
                                                                  tweak::GradientSlider* gradientSlider)
        : ref_counter_base() {}

    // 0x100a597c0
    tweak::GradientSlider* placement_new<tweak::GradientSlider, char const (&)[10], float, float, float&>(
        void* arg1, char const (&arg2)[10], float&& arg3, float&& arg4, float& arg5) {
        new (arg1) tweak::GradientSlider(arg2, arg3, arg4, arg5);
        return arg1;
    }

    // 0x100a5a1a0
    tweak::Button* placement_new<tweak::Button, char const (&)[2]>(void* arg1, char const (&arg2)[2]) {
        new (arg1) tweak::Button(arg2);
        return arg1;
    }

    // 0x100a5acb0
    tweak::Button* placement_new<tweak::Button, char const*&, int&>(void* arg1, const char*& arg2, int& arg3) {
        new (arg1) tweak::Button(arg2, arg3);
        return arg1;
    }

    // 0x100a5b670
    tweak::ColourPicker* placement_new<tweak::ColourPicker, char const*&, bool, math::Range<float>&>(
        void* arg1, const char*& arg2, bool&& arg3, math::Range<float>& range) {
        new (arg1) tweak::ColourPicker(arg2, arg3, range);
        return arg1;
    }

    // 0x100a5b690
    ref_counter_shared<tweak::ColourPicker>*
    placement_new<ref_counter_shared<tweak::ColourPicker>, int, tweak::ColourPicker*&>(void* arg1, int&& arg2,
                                                                                       tweak::ColourPicker*& arg3) {
        new (arg1) ref_counter_shared<tweak::ColourPicker>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100a5b6b0
    void shared_ptr_do_enable_shared_from_this<tweak::ColourPicker>(
        ref_counter_base* ref_counter_base, tweak::ColourPicker* colourPicker,
        tweak::ColourPicker::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)colourPicker);
            local_38 = weak_ptr(local_48);
            colourPicker->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x100a5b750
    ref_counter_shared<tweak::ColourPicker>::ref_counter_shared(unsigned long arg1, tweak::ColourPicker* colourPicker)
        : ref_counter_base() {}

    // 0x100a5ca30
    tweak::ColourPicker*
    placement_new<tweak::ColourPicker, char const*&, bool, math::Range<float>&, math::Range<float>&>(
        void* arg1, const char*& arg2, bool&& arg3, math::Range<float>& range1, math::Range<float>& range2) {
        new (arg1) tweak::ColourPicker(arg2, arg3, range1, range2);
        return arg1;
    }

    // 0x100a5dd30
    tweak::Label* placement_new<tweak::Label, char const*&>(void* arg1, const char*& arg2) {
        new (arg1) tweak::Label(arg2);
        return arg1;
    }

    // 0x100a5dd50
    ref_counter_shared<tweak::Label>*
    placement_new<ref_counter_shared<tweak::Label>, int, tweak::Label*&>(void* arg1, int&& arg2, tweak::Label*& arg3) {
        new (arg1) ref_counter_shared<tweak::Label>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100a5dd70
    void shared_ptr_do_enable_shared_from_this<tweak::Label>(ref_counter_base* ref_counter_base, tweak::Label* label,
                                                             tweak::Label::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)label);
            local_38 = weak_ptr(local_48);
            label->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x100a5de60
    ref_counter_shared<tweak::Label>::ref_counter_shared(unsigned long arg1, tweak::Label* label)
        : ref_counter_base() {}

    // 0x100a5dea0
    tweak::Container* placement_new<tweak::Container, char const*&, bool&>(void* arg1, const char*& arg2, bool& arg3) {
        new (arg1) tweak::Container(arg2, arg3);
        return arg1;
    }

    // 0x100a5e580
    tweak::Settings* placement_new<tweak::Settings, eastl::string const&, tweak::ContainerGroup&>(
        void* arg1, const eastl::string& str, tweak::ContainerGroup& containerGroup) {
        new (arg1) tweak::Settings(str, containerGroup);
        return arg1;
    }

    // 0x100a5e5a0
    ref_counter_shared<tweak::Settings>*
    placement_new<ref_counter_shared<tweak::Settings>, int, tweak::Settings*&>(void* arg1, int&& arg2,
                                                                               tweak::Settings*& arg3) {
        new (arg1) ref_counter_shared<tweak::Settings>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100a5e5c0
    void
    shared_ptr_do_enable_shared_from_this<tweak::Settings>(ref_counter_base* ref_counter_base,
                                                           tweak::Settings* settings,
                                                           tweak::Settings::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)settings);
            local_38 = weak_ptr(local_48);
            settings->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x100a5e660
    ref_counter_shared<tweak::Settings>::ref_counter_shared(unsigned long arg1, tweak::Settings* settings)
        : ref_counter_base() {}

    // 0x100a5e6a0
    void ref_counter_shared<tweak::Settings>::DeleteData() {
        long lVar1;
        ref_counter_shared<tweak::Settings> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<tweak::Settings> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 448;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100a5e780
    tweak::Container* placement_new<tweak::Container, eastl::string const&>(void* arg1, const eastl::string& str) {
        new (arg1) tweak::Container(str);
        return arg1;
    }

    // 0x100a61dd0
    tweak::CheckBox* placement_new<tweak::CheckBox, char const (&)[15]>(void* arg1, char const (&arg2)[15]) {
        new (arg1) tweak::CheckBox(arg2);
        return arg1;
    }

} // namespace jag

namespace jag::tweak {
    class ContainerGroup : public Control // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ContainerGroup();
        uint64_t OnMouseOver(float arg1, float arg2);
        void SetMouseOver(bool arg1);
        void SetTweaky(weak_ptr<Tweaky> tweaky);
        ContainerGroup* AddPage(const eastl::string& str);
        PageInfo* GetPage(const eastl::string& str);
        void SetSelectedPage(int arg1);
        void Sort();
        PageInfo* GetCurrentPage();

    private:
        uint8_t _unknown_216[64];
        int field_280;
        uint8_t _unknown_284[12];
    };

    class PageInfo {
    public:
        ~PageInfo();
        PageInfo(PageInfo&& pageInfo);
        PageInfo(const PageInfo& pageInfo);
        PageInfo* operator=(PageInfo&& pageInfo);

    private:
        uint8_t _unknown_0[48];
        uint64_t field_48;
        uint8_t _unknown_56[2];
        uint64_t field_58;
        uint64_t field_66;
    };

    // 0x100a51d70
    ContainerGroup::GetPage(eastl::string const&)::$_15::~$_15() {}

    // 0x100a52b10
    ContainerGroup::~ContainerGroup() {
        field_288.~shared_ptr();
        field_248.~vector();
        field_216.~basic_string();
    }

    // 0x100a54d80
    SizeControl::SizeControl() : Container() {
        SetDirection(1);
    }

    // 0x100a5e950
    PageInfo::PageInfo(PageInfo&& pageInfo) : eastl::string(pageInfo) {
        field_32.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(pageInfo.field_32);
        uint64_t uVar1 = pageInfo.field_48;
        uint64_t uVar2 = *(uint64_t*)&pageInfo.field_56;
        uint64_t uVar3 = pageInfo.field_66;
        field_58 = pageInfo.field_58;
        field_66 = uVar3;
        field_48 = uVar1;
        *(uint64_t*)&field_56 = uVar2;
    }

    // 0x100a5eb30
    void ContainerGroup::GetPage(eastl::string const&)::$_15::operator()(const PageInfo& pageInfo) const {
        pageInfo == *this;
    }

    // 0x100a5f1c0
    PageInfo::PageInfo(const PageInfo& pageInfo) : eastl::string(pageInfo), field_32(&pageInfo.field_32) {
        uint64_t uVar1 = pageInfo.field_48;
        uint64_t uVar2 = *(uint64_t*)&pageInfo.field_56;
        uint64_t uVar3 = pageInfo.field_66;
        field_58 = pageInfo.field_58;
        field_66 = uVar3;
        field_48 = uVar1;
        *(uint64_t*)&field_56 = uVar2;
    }

    // 0x100a5f2b0
    PageInfo* PageInfo::operator=(PageInfo&& pageInfo) {
        *this = pageInfo;
        field_32 = pageInfo.field_32;
        uint64_t uVar1 = *(uint64_t*)&pageInfo.field_56;
        uint64_t uVar2 = pageInfo.field_58;
        uint64_t uVar3 = pageInfo.field_66;
        field_48 = pageInfo.field_48;
        *(uint64_t*)&field_56 = uVar1;
        field_58 = uVar2;
        field_66 = uVar3;
        return this;
    }

    // 0x100a5f8d0
    Event::Event(const Event& event) : shared_ptr(event), field_16(event.field_16) {}

    // 0x100a61480
    PageInfo* ContainerGroup::GetCurrentPage() {
        return (PageInfo*)field_248[(long)field_280];
    }

    // 0x100a635c0
    void SizeControl::Initialise()::$_20::operator()(const Event& event) const {
        SystemSettings* pSVar2;
        Control* pCVar3;
        Tweaky* pTVar4;
        shared_ptr local_28;

        if (event.field_16 == 2) {
            local_28 = ((field_0 + 104))->lock();
            if (shared_ptr::operator_cast_to_bool(&local_28)) {
                pSVar2 = (SystemSettings*)local_28.operator->();
                if (pSVar2->GetSoftwareNameAsSettingPath()) {
                    pTVar4 = (Tweaky*)local_28.operator->();
                    pTVar4->SetMinimised(false);
                    pCVar3 = (Control*)event.operator->();
                    pCVar3->SetText("Shrink");
                    goto LAB_100a636e4;
                }
            }
            if (shared_ptr::operator_cast_to_bool(&local_28)) {
                pTVar4 = (Tweaky*)local_28.operator->();
                pTVar4->SetMinimised(true);
                pCVar3 = (Control*)event.operator->();
                pCVar3->SetText("Expand");
            }
        } else {
            if (event.field_16 != 1) {
                return;
            }
            local_28 = ((field_0 + 104))->lock();
            if (shared_ptr::operator_cast_to_bool(&local_28)) {
                pSVar2 = (SystemSettings*)local_28.operator->();
                if (pSVar2->GetSoftwareNameAsSettingPath()) {
                    pCVar3 = (Control*)event.operator->();
                    pCVar3->SetText("Expand");
                    goto LAB_100a636e4;
                }
            }
            pCVar3 = (Control*)event.operator->();
            pCVar3->SetText("Shrink");
        }
    LAB_100a636e4:
    }

    // 0x100a63710
    bool Tweaky::IsMinimised() {
        return m_softwareNameAsSettingPath;
    }

    // 0x100a63720
    void Tweaky::SetMinimised(bool arg1) {
        m_minimised = arg1;
    }

    // 0x100a64020
    void SizeControl::Initialise()::$_21::operator()(const Event& event) const {
        Tweaky* pTVar2;
        Control* pCVar3;
        shared_ptr local_28;

        if (event.field_16 == 2) {
            local_28 = ((field_0 + 104))->lock();
            if (shared_ptr::operator_cast_to_bool(&local_28)) {
                pTVar2 = (Tweaky*)local_28.operator->();
                if (pTVar2->IsAttached()) {
                    pTVar2 = (Tweaky*)local_28.operator->();
                    pTVar2->SetAttached(false);
                    pCVar3 = (Control*)event.operator->();
                    pCVar3->SetText("Attach");
                    goto LAB_100a64144;
                }
            }
            if (shared_ptr::operator_cast_to_bool(&local_28)) {
                pTVar2 = (Tweaky*)local_28.operator->();
                pTVar2->SetAttached(true);
                pCVar3 = (Control*)event.operator->();
                pCVar3->SetText("Detach");
            }
        } else {
            if (event.field_16 != 1) {
                return;
            }
            local_28 = ((field_0 + 104))->lock();
            if (shared_ptr::operator_cast_to_bool(&local_28)) {
                pTVar2 = (Tweaky*)local_28.operator->();
                if (pTVar2->IsAttached()) {
                    pCVar3 = (Control*)event.operator->();
                    pCVar3->SetText("Detach");
                    goto LAB_100a64144;
                }
            }
            pCVar3 = (Control*)event.operator->();
            pCVar3->SetText("Attach");
        }
    LAB_100a64144:
    }

    // 0x100a64170
    void Tweaky::SetAttached(bool arg1) {
        uint8_t local_20[16];

        m_attached = arg1;
        field_132 = 0;
        field_136 = 0;
        new (local_20) oldscape::dash3d::GridRect(0, 0, 0, 0);
        m_placement = local_20._0_4_;
        field_108 = local_20._4_4_;
        field_112 = local_20._8_4_;
        field_116 = local_20._12_4_;
    }

    // 0x100a64aa0
    void SizeControl::Initialise()::$_22::operator()(const Event& event) const {
        shared_ptr local_20;

        if (event.field_16 == 2) {
            local_20 = ((field_0 + 104))->lock();
            if (shared_ptr::operator_cast_to_bool(&local_20) != '\0') {
                (*((shared_ptr<Tweaky>*)(Tweaky*)&local_20)).operator->();
                local_20.ToggleControlMinHeight();
            }
        }
    }

} // namespace jag::tweak

namespace jag::fixedfunction {
    // 0x100a5f8f0
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>, void>(
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>&& bind) {
        _lambda_void__void___1_ local_28;
        _lambda_void__jag__BaseApp___1_ local_20;
        _lambda_void___1_ local_18;

        *(uint64_t*)this = 0;
        new ((this + 16)) std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>(bind);
        uint64_t uVar1 = fixedfunction::function::function(std::__bind&&)::{
            lambda(void*, void*) #1
        }
        ::operator_cast_to_function_pointer(&local_28);
        *(uint64_t*)(this + 144) = uVar1;
        uVar1 = fixedfunction::function::function(std::__bind&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::operator_cast_to_function_pointer(&local_20);
        *(uint64_t*)this = uVar1;
        uVar1 = fixedfunction::function::function(std::__bind&&)::{
            lambda(void*) #1
        }
        ::operator_cast_to_function_pointer(&local_18);
        *(uint64_t*)(this + 152) = uVar1;
    }

    // 0x100a5f950
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>, void>(
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>&&)::{
        lambda(void*, void*) #1
    }
    ::operator void (*)(void*, void*)() const {
        return PTR___invoke_100ee95d0;
    }

    // 0x100a5f960
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>, void>(
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator void (*)(void*, BaseApp*)() const {
        return PTR_BaseApp___100ee95c8;
    }

    // 0x100a5f970
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>, void>(
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>&&)::{
        lambda(void*) #1
    }
    ::operator void (*)(void*)() const {
        return PTR___invoke_100ee95c0;
    }

    // 0x100a5fac0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>, void>(
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(arg1, arg1, arg2);
    }

    // 0x100a5fae0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>, void>(
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        new (arg2) std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>(*arg1);
    }

    // 0x100a5fbb0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>, void>(
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::__invoke(void* arg1, BaseApp* baseApp) {
        operator()(arg1, arg1, baseApp);
    }

    // 0x100a5fbd0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>, void>(
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(void* arg1, BaseApp * baseApp) const {
        BaseApp* local_10 = baseApp;
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>::operator()(arg1, &local_10);
    }

    // 0x100a5fd00
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>, void>(
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {
        operator()(arg1, arg1);
    }

    // 0x100a5fd10
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>, void>(
        std::__bind<std::function<void(tweak::Event const&)> const&, tweak::Event const&>&&)::{
        lambda(void*) #1
    }
    ::operator()(void* arg1) const {
        arg1->~__bind();
    }

} // namespace jag::fixedfunction

namespace jag::math {
    // 0x100a535b0
    ColourStorage8888<RGBA8StorageLayout>::ColourStorage8888(unsigned int arg1) {
        Set(this, arg1);
    }

    // 0x100a535c0
    void ColourStorage8888<RGBA8StorageLayout>::Set(unsigned int arg1) {
        ColourStorage8888<RGBA8StorageLayout> CVar1 = (ColourStorage8888<RGBA8StorageLayout>)extract_bits(arg1, 24, 8);
        this[3] = CVar1;
        CVar1 = (ColourStorage8888<RGBA8StorageLayout>)extract_bits(arg1, 16, 8);
        this[2] = CVar1;
        CVar1 = (ColourStorage8888<RGBA8StorageLayout>)extract_bits(arg1, 8, 8);
        this[1] = CVar1;
        CVar1 = (ColourStorage8888<RGBA8StorageLayout>)extract_bits(arg1, 0, 8);
        *this = CVar1;
    }

    // 0x100a5ff60
    ColourStorage8888<RGBA8StorageLayout>::ColourStorage8888(float arg1, float arg2, float arg3, float arg4) {
        Set(this, arg1, arg2, arg3, arg4);
    }

    // 0x100a5ff70
    float RoundToDecimalPlaces<float>(float arg1, unsigned int arg2) {
        unsigned int uVar1;
        float fVar3;

        if (arg2 == 0) {
            fVar3 = 1.0;
        } else {
            uVar1 = 1;
            do {
                uVar1 = uVar1 * 10;
                arg1 = arg1 * 10.0;
                arg2 = arg2 - 1;
            } while (arg2 != 0);
            fVar3 = (float)uVar1;
        }
        return (float)::floor(arg1) / fVar3;
    }

} // namespace jag::math

// 0x100a597a0
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}

// 0x100a597b0
void floor(float arg1) {
    _floorf();
}

namespace jag::render {
    // 0x100a5f8d0: KeepAliveSharedPtrAndOwner::KeepAliveSharedPtrAndOwner(KeepAliveSharedPtrAndOwner const&) has the same machine code as tweak::Event::Event(tweak::Event const&)

} // namespace jag::render

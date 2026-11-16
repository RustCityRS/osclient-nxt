// libs/tweaky/Tweaky_Container.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::tweak {
    class Container {
    public:
        // virtual methods in vtable order
        virtual ~Container();
        virtual void Clear();
        virtual void Draw(int, int);
        virtual GetControlSize(int&, int&);
        virtual ulong OnClick(float, float, bool);
        virtual uint OnMouseOver(float, float);
        virtual void DoOnShown();
        virtual void InitDefault();
        virtual void ResetToDefault();
        virtual void ResetAllToDefault();
        virtual void ClearControlSize();
        virtual LoadSettings(TweakSettingsValue const&);
        virtual void SaveSettings(TweakSettingsValue&);
        virtual void SetMouseOver(bool);
        virtual void SetTweaky(weak_ptr<Tweaky>);
        virtual void SetDirection(ContainerDirection);
        void AddSlider<float, graphics::GraphNode::RegisterVisibilityMenu(ContainerGroup&)::$_7&>(
            char const*, float, float, float, float*,
            graphics::GraphNode::RegisterVisibilityMenu(ContainerGroup&)::$_7&);
        void AddSlider<unsigned int>(char const*, float, float, float, unsigned int*&&);
        void SetSliderHandler<Slider, unsigned int>(shared_ptr<Slider>, unsigned int*);
        void AddSlider<float>(char const*, float, float, float, float*&&);
        void AddSlider<int>(char const*, float, float, float, int*&&);
        void SetSliderHandler<Slider, float>(shared_ptr<Slider>, float*);
        void SetSliderHandler<Slider, int>(shared_ptr<Slider>, int*);
        void Add(shared_ptr<Control> const&);
        Container(char const*);
        void MakeCollapsable();
        Container* operator+=(shared_ptr<Control> const&);
        void AddButton(char const*, std::function<void(Event const&)> const&);
        void AddButton(char const*, int, std::function<void(Event const&)> const&);
        void AddCheckBox(char const*, bool&);
        void AddCheckBox(char const*, std::function<void(Event const&)> const&, bool);
        void AddEditField(char const*, int, std::function<void(Event const&)> const&);
        void AddEnum(char const*, StringEnum const*, int*);
        void AddEnum(char const*, StringEnum const*, int*, std::function<void(Event const&)> const&);
        void AddSlider(char const*, float, float, float, std::function<void(Event const&)> const&);
        void AddGradientSlider(char const*, float, float, float, std::function<void(Event const&)> const&);
        void AddColourPicker(char const*, math::Vector3T<float>*, math::Range<float>);
        void AddColourPicker(char const*, math::Vector4T<float>*, math::Range<float>);
        void AddColourPicker(char const*, bool, math::Range<float>, std::function<void(Event const&)> const&);
        void AddColourPickerHDR(char const*, math::Vector3T<float>*, float*, math::Range<float>, math::Range<float>);
        void AddColourPickerHDR(char const*, math::Vector4T<float>*, float*, math::Range<float>, math::Range<float>);
        void AddColourPickerHDR(char const*, bool, math::Range<float>, math::Range<float>,
                                std::function<void(Event const&)> const&);
        void AddLabel(char const*);
        void AddSwatch(float*, float*, float*);
        void AddSwatch(float*, float*, float*, std::function<void(Event const&)> const&);
        void AddSwatch(float*, float*, float*, float*);
        void AddSwatch(float*, float*, float*, float*, std::function<void(Event const&)> const&);
        Container* AddGroup(char const*);
        char* AddGroup(char const*, bool);
        Container();
        Container(int, int, eastl::string const&);
        Container(char const*, bool);
        Container(eastl::string const&);

        // data members, from how the methods use this: 301 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        int field_24;        // offset 24
        undefined4 field_28; // offset 28
        undefined4 field_32; // offset 32
        int field_36;        // offset 36
        int field_40;        // offset 40
        char _unknown_44[92];
        int field_136; // offset 136
        int field_140; // offset 140
        int field_144; // offset 144
        int field_148; // offset 148
        char _unknown_152[8];
        Event field_160; // offset 160
        char _unknown_184[24];
        bool field_208; // offset 208
        char field_209; // offset 209
        bool field_210; // offset 210
        char _unknown_211[37];
        shared_ptr field_248;   // offset 248
        int field_264;          // offset 264
        int field_268;          // offset 268
        shared_ptr field_272;   // offset 272
        undefined4 m_direction; // offset 288
        bool field_292;         // offset 292
        undefined1 field_293;   // offset 293
        char field_294;         // offset 294
        char _unknown_295[6];
    };

    // 0x1007b0aa0, 160 bytes, inline, placed by class name and debug map
    // void Container::AddSlider<float, graphics::GraphNode::RegisterVisibilityMenu(ContainerGroup&)::$_7&>(char const*, float, float, float, float*, graphics::GraphNode::RegisterVisibilityMenu(ContainerGroup&)::$_7&)
    void Container::AddSlider<float, graphics::GraphNode::RegisterVisibilityMenu(ContainerGroup&)::__7&>(
        char* param_1, float param_2, float param_3, float param_4, float* param_5, __7* param_6) {
        function local_58[48];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<void(Event_const&)>::function<
            Container::AddSlider<float, graphics::GraphNode::RegisterVisibilityMenu(ContainerGroup&)::__7&>(
                char const*, float, float, float, float*,
                graphics::GraphNode::RegisterVisibilityMenu(ContainerGroup&)::__7&)::_lambda(Event_const&) _1_,
            void>(local_58, param_6);
        AddSlider((Container*)param_1, (char*)param_5, 0.0, param_2, param_3, local_58);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007c4000, 96 bytes, inline, placed by class name
    // Container::AddSlider<float, graphics::GraphNode::RegisterVisibilityMenu(ContainerGroup&)::$_7&>(char const*, float, float, float, float*, graphics::GraphNode::RegisterVisibilityMenu(ContainerGroup&)::$_7&)::{lambda(Event const&)#1}::operator()(Event const&) const
    /* Container::AddSlider<float,
   graphics::GraphNode::RegisterVisibilityMenu(ContainerGroup&)::$_7&>(char const*,
   float, float, float, float*,
   graphics::GraphNode::RegisterVisibilityMenu(ContainerGroup&)::$_7&)::{lambda(Event
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(Event const&) const */

    void Container::AddSlider<float, graphics::GraphNode::RegisterVisibilityMenu(ContainerGroup&)::$_7&>(
        char const*, float, float, float, float*, graphics::GraphNode::RegisterVisibilityMenu(ContainerGroup&)::$_7&)::{
        lambda(Event_const&) #1
    }
    ::operator()(Event * param_1) {
        Slider* this_00;
        undefined4 uVar1;

        this_00 = (Slider*)param_1->end();
        if (param_1->field_16 == 1) {
            Slider::SetSlider<float>(this_00, **(float**)this);
        }
        if (param_1->field_16 == 3) {
            uVar1 = this_00->GetCurrentValue();
            **(undefined4**)this = uVar1;
            graphics::GraphNode::RegisterVisibilityMenu(ContainerGroup&)::$_7::operator()((__7*)this_00);
        }
    }

    // 0x1008ad550, 208 bytes, inline, placed by class name
    // void Container::AddSlider<unsigned int>(char const*, float, float, float, unsigned int*&&)
    void Container::AddSlider<unsigned int>(char* param_1, float param_2, float param_3, float param_4,
                                            uint** param_5) {
        shared_ptr sVar1;
        char* apcStackY_468[128];
        long in_stack_ffffffffffffffa0;
        shared_ptr<oldscape::RSevenDebugPresetProvider> asStack_56[6];
        shared_ptr local_50;
        shared_ptr<oldscape::dash3d::Decor> local_40[20];
        float local_2c;
        float local_28;
        float local_24;

        local_2c = param_2;
        local_28 = param_3;
        local_24 = param_4;
        make_shared<Slider, char const*&, float&, float&, float&>((jag*)(apcStackY_468 + 129), apcStackY_468 + 128,
                                                                  &local_2c, &local_28, &local_24);
        new (&local_50) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(apcStackY_468 + 129));
        Add(this, &local_50);
        local_50.~shared_ptr();
        shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_40, (shared_ptr*)(apcStackY_468 + 129));
        sVar1.field_8 = in_stack_ffffffffffffffa0;
        sVar1._0_8_ = param_1;
        SetSliderHandler<Slider, unsigned int>(this, sVar1, (uint*)local_40);
        local_40->~shared_ptr();
        ((apcStackY_468 + 129))->~shared_ptr();
    }

    // 0x1008d3320, 128 bytes, inline, placed by class name
    // void Container::SetSliderHandler<Slider, unsigned int>(shared_ptr<Slider>, unsigned int*)
    void Container::SetSliderHandler<Slider, unsigned int>(shared_ptr param_1, uint* param_2) {
        Control* this_00;
        function local_58[48];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (Control*)shared_ptr<Slider>::operator->((shared_ptr<Slider>*)param_2);
        std::function<void(Event_const&)>::function<Container::SetSliderHandler<Slider, unsigned int>(
                                                        shared_ptr<Slider>, unsigned int*)::_lambda(Event_const&) _1_,
                                                    void>(local_58);
        this_00->SetHandler(local_58);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008d3f40, 80 bytes, inline, placed by class name
    // Container::SetSliderHandler<Slider, unsigned int>(shared_ptr<Slider>, unsigned int*)::{lambda(Event const&)#1}::operator()(Event const&) const
    /* Container::SetSliderHandler<Slider, unsigned
   int>(shared_ptr<Slider>, unsigned int*)::{lambda(Event
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(Event const&) const */

    void Container::SetSliderHandler<Slider, unsigned int>(shared_ptr<Slider>, unsigned int*)::{
        lambda(Event_const&) #1
    }
    ::operator()(Event * param_1) {
        Slider* this_00;
        float fVar1;

        this_00 = (Slider*)param_1->end();
        if (param_1->field_16 == 3) {
            fVar1 = (float)this_00->GetCurrentValue();
            **(undefined4**)this = (int)(long)fVar1;
        } else if (param_1->field_16 == 1) {
            Slider::SetSlider<float>(this_00, (float)**(uint**)this);
        }
    }

    // 0x100931fb0, 208 bytes, inline, placed by class name
    // void Container::AddSlider<float>(char const*, float, float, float, float*&&)
    void Container::AddSlider<float>(char* param_1, float param_2, float param_3, float param_4, float** param_5) {
        shared_ptr sVar1;
        char* apcStackY_468[128];
        long in_stack_ffffffffffffffa0;
        shared_ptr<oldscape::RSevenDebugPresetProvider> asStack_56[6];
        shared_ptr local_50;
        shared_ptr<oldscape::dash3d::Decor> local_40[20];
        float local_2c;
        float local_28;
        float local_24;

        local_2c = param_2;
        local_28 = param_3;
        local_24 = param_4;
        make_shared<Slider, char const*&, float&, float&, float&>((jag*)(apcStackY_468 + 129), apcStackY_468 + 128,
                                                                  &local_2c, &local_28, &local_24);
        new (&local_50) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(apcStackY_468 + 129));
        Add(this, &local_50);
        local_50.~shared_ptr();
        shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_40, (shared_ptr*)(apcStackY_468 + 129));
        sVar1.field_8 = in_stack_ffffffffffffffa0;
        sVar1._0_8_ = param_1;
        SetSliderHandler<Slider, float>(this, sVar1, (float*)local_40);
        local_40->~shared_ptr();
        ((apcStackY_468 + 129))->~shared_ptr();
    }

    // 0x100933ef0, 208 bytes, inline, placed by class name
    // void Container::AddSlider<int>(char const*, float, float, float, int*&&)
    void Container::AddSlider<int>(char* param_1, float param_2, float param_3, float param_4, int** param_5) {
        shared_ptr sVar1;
        char* apcStackY_468[128];
        long in_stack_ffffffffffffffa0;
        shared_ptr<oldscape::RSevenDebugPresetProvider> asStack_56[6];
        shared_ptr local_50;
        shared_ptr<oldscape::dash3d::Decor> local_40[20];
        float local_2c;
        float local_28;
        float local_24;

        local_2c = param_2;
        local_28 = param_3;
        local_24 = param_4;
        make_shared<Slider, char const*&, float&, float&, float&>((jag*)(apcStackY_468 + 129), apcStackY_468 + 128,
                                                                  &local_2c, &local_28, &local_24);
        new (&local_50) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(apcStackY_468 + 129));
        Add(this, &local_50);
        local_50.~shared_ptr();
        shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_40, (shared_ptr*)(apcStackY_468 + 129));
        sVar1.field_8 = in_stack_ffffffffffffffa0;
        sVar1._0_8_ = param_1;
        SetSliderHandler<Slider, int>(this, sVar1, (int*)local_40);
        local_40->~shared_ptr();
        ((apcStackY_468 + 129))->~shared_ptr();
    }

    // 0x100941150, 128 bytes, inline, placed by class name
    // void Container::SetSliderHandler<Slider, float>(shared_ptr<Slider>, float*)
    void Container::SetSliderHandler<Slider, float>(shared_ptr param_1, float* param_2) {
        Control* this_00;
        function local_58[48];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (Control*)shared_ptr<Slider>::operator->((shared_ptr<Slider>*)param_2);
        std::function<void(Event_const&)>::function<
            Container::SetSliderHandler<Slider, float>(shared_ptr<Slider>, float*)::_lambda(Event_const&) _1_, void>(
            local_58);
        this_00->SetHandler(local_58);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100942020, 80 bytes, inline, placed by class name
    // Container::SetSliderHandler<Slider, float>(shared_ptr<Slider>, float*)::{lambda(Event const&)#1}::operator()(Event const&) const
    /* Container::SetSliderHandler<Slider,
   float>(shared_ptr<Slider>, float*)::{lambda(Event
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(Event const&) const */

    void Container::SetSliderHandler<Slider, float>(shared_ptr<Slider>, float*)::{
        lambda(Event_const&) #1
    }
    ::operator()(_lambda_jag__tweak__Event_const___1_* this, Event * param_1)

    {
        Slider* this_00;
        undefined4 uVar1;

        this_00 = (Slider*)param_1->end();
        if (param_1->field_16 == 3) {
            uVar1 = this_00->GetCurrentValue();
            **(undefined4**)this = uVar1;
        } else if (param_1->field_16 == 1) {
            Slider::SetSlider<float>(this_00, **(float**)this);
        }
    }

    // 0x100947c50, 128 bytes, inline, placed by class name
    // void Container::SetSliderHandler<Slider, int>(shared_ptr<Slider>, int*)
    void Container::SetSliderHandler<Slider, int>(shared_ptr param_1, int* param_2) {
        Control* this_00;
        function local_58[48];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (Control*)shared_ptr<Slider>::operator->((shared_ptr<Slider>*)param_2);
        std::function<void(Event_const&)>::function<
            Container::SetSliderHandler<Slider, int>(shared_ptr<Slider>, int*)::_lambda(Event_const&) _1_, void>(
            local_58);
        this_00->SetHandler(local_58);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009485c0, 80 bytes, inline, placed by class name
    // Container::SetSliderHandler<Slider, int>(shared_ptr<Slider>, int*)::{lambda(Event const&)#1}::operator()(Event const&) const
    /* Container::SetSliderHandler<Slider,
   int>(shared_ptr<Slider>, int*)::{lambda(Event
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(Event const&) const */

    void Container::SetSliderHandler<Slider, int>(shared_ptr<Slider>, int*)::{
        lambda(Event_const&) #1
    }
    ::operator()(_lambda_jag__tweak__Event_const___1_* this, Event * param_1)

    {
        Slider* this_00;
        float fVar1;

        this_00 = (Slider*)param_1->end();
        if (param_1->field_16 == 3) {
            fVar1 = (float)this_00->GetCurrentValue();
            **(int**)this = (int)fVar1;
        } else if (param_1->field_16 == 1) {
            Slider::SetSlider<float>(this_00, (float)**(int**)this);
        }
    }

    // 0x100a40370, 176 bytes, base-object constructor, inline, placed by class name
    // Container::Container(char const*)
    void Container::Container(char* param_1) {
        new (this) Control(0, 0, 3, param_1);
        field_0 = &PTR__SizeControl_100f1dc10;
        new (&field_216) eastl::list<shared_ptr<Control>, eastl::allocator>();
        new (field_248, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_264 = 0;
        field_268 = 0;
        new (field_272, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        m_direction = 0;
        field_292 = true;
        field_293 = 0;
        field_294 = '\x01';
    }

    // 0x100a40420, 80 bytes, base-object destructor, inline, placed by class name
    // Container::~Container()
    void Container::~Container() {
        field_0 = &PTR__SizeControl_100f1dc10;
        field_272->~shared_ptr();
        field_248->~shared_ptr();
        (&field_216)->~list();
        ~Control();
    }

    // 0x100a4bfc0, 192 bytes, base-object constructor, inline, placed by class name
    // Container::Container()
    void Container::Container() {
        new (this) Control(0, 0, 3, "");
        field_0 = &PTR__SizeControl_100f1dc10;
        new (&field_216) eastl::list<shared_ptr<Control>, eastl::allocator>();
        new (field_248, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_264 = 0;
        field_268 = 0;
        new (field_272, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        m_direction = 0;
        field_292 = true;
        field_293 = 0;
        field_294 = '\x01';
    }

    // 0x100a51540, 16 bytes, complete-object destructor, inline, placed by class name
    // Container::~Container(): jumps straight to the base-object destructor

    // 0x100a51550, 32 bytes, deleting destructor, inline, placed by class name
    // Container::~Container()
    void Container::~Container() {
        ~SizeControl();
        operator_delete(this);
    }

    // 0x100a51570, 16 bytes, inline, placed by class name
    // Container::SetDirection(ContainerDirection)
    void Container::SetDirection(undefined4 param_2) {
        m_direction = param_2;
    }

    // 0x100a53810, 16 bytes, complete-object constructor, inline, placed by class name
    // Container::Container(int, int, eastl::string const&): jumps straight to the base-object constructor

    // 0x100a53820, 176 bytes, base-object constructor, inline, placed by class name
    // Container::Container(int, int, eastl::string const&)
    void Container::Container(int param_1, int param_2, basic_string* param_3) {
        Control::Control();
        field_0 = &PTR__SizeControl_100f1dc10;
        new (&field_216) eastl::list<shared_ptr<Control>, eastl::allocator>();
        new (field_248, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_264 = 0;
        field_268 = 0;
        new (field_272, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        m_direction = 0;
        field_292 = true;
        field_293 = 0;
        field_294 = '\x01';
    }

    // 0x100a57c60, 16 bytes, complete-object constructor, inline, placed by class name
    // Container::Container(char const*): jumps straight to the base-object constructor

    // 0x100a5c070, 96 bytes, inline, placed by class name
    // Container::AddColourPicker(char const*, math::Vector3T<float>*, math::Range<float>)::$_11::operator()(Event const&) const
    /* Container::AddColourPicker(char const*, math::Vector3T<float>*,
   math::Range<float>)::$_11::TEMPNAMEPLACEHOLDERVALUE(Event const&) const */

    void Container::AddColourPicker(char const*, math::Vector3T<float>*,
                                    math::Range<float>)::$_11::operator()(Event* param_1) {
        ColourPicker* this_00;
        undefined8 local_28[2];

        this_00 = (ColourPicker*)param_1->end();
        if (param_1->field_16 == 3) {
            local_28[0] = this_00->GetColour3();
            math::Vector4T<float>::SetXYZ(*(Vector4T<float>**)this, (Vector3T*)local_28);
        } else if (param_1->field_16 == 1) {
            this_00->SetColour(*(Vector3T**)this);
        }
    }

    // 0x100a5c9c0, 96 bytes, inline, placed by class name
    // Container::AddColourPicker(char const*, math::Vector4T<float>*, math::Range<float>)::$_12::operator()(Event const&) const
    /* Container::AddColourPicker(char const*, math::Vector4T<float>*,
   math::Range<float>)::$_12::TEMPNAMEPLACEHOLDERVALUE(Event const&) const */

    void Container::AddColourPicker(char const*, math::Vector4T<float>*,
                                    math::Range<float>)::$_12::operator()(Event* param_1) {
        ColourPicker* this_00;
        undefined8 local_28[2];

        this_00 = (ColourPicker*)param_1->end();
        if (param_1->field_16 == 3) {
            local_28[0] = this_00->GetColour4();
            math::Rect<float>::operator=(*(Rect<float>**)this, (Rect*)local_28);
        } else if (param_1->field_16 == 1) {
            this_00->SetColour(*(Vector4T**)this);
        }
    }

    // 0x100a5d330, 128 bytes, inline, placed by class name
    // Container::AddColourPickerHDR(char const*, math::Vector3T<float>*, float*, math::Range<float>, math::Range<float>)::$_13::operator()(Event const&) const
    /* Container::AddColourPickerHDR(char const*, math::Vector3T<float>*, float*,
   math::Range<float>,
   math::Range<float>)::$_13::TEMPNAMEPLACEHOLDERVALUE(Event const&) const */

    void Container::AddColourPickerHDR(char const*, math::Vector3T<float>*, float*, math::Range<float>,
                                       math::Range<float>)::$_13::operator()(Event* param_1) {
        ColourPicker* this_00;
        undefined4 uVar1;
        undefined8 local_30[2];

        this_00 = (ColourPicker*)param_1->end();
        if (param_1->field_16 == 3) {
            local_30[0] = this_00->GetColour3();
            math::Vector4T<float>::SetXYZ(*(Vector4T<float>**)this, (Vector3T*)local_30);
            uVar1 = this_00->GetIntensity();
            **(undefined4**)(this + 8) = uVar1;
        } else if (param_1->field_16 == 1) {
            this_00->SetColour(*(Vector3T**)this);
            this_00->SetIntensity(**(float**)(this + 8));
        }
    }

    // 0x100a5dca0, 128 bytes, inline, placed by class name
    // Container::AddColourPickerHDR(char const*, math::Vector4T<float>*, float*, math::Range<float>, math::Range<float>)::$_14::operator()(Event const&) const
    /* Container::AddColourPickerHDR(char const*, math::Vector4T<float>*, float*,
   math::Range<float>,
   math::Range<float>)::$_14::TEMPNAMEPLACEHOLDERVALUE(Event const&) const */

    void Container::AddColourPickerHDR(char const*, math::Vector4T<float>*, float*, math::Range<float>,
                                       math::Range<float>)::$_14::operator()(Event* param_1) {
        ColourPicker* this_00;
        undefined4 uVar1;
        undefined8 in_XMM1_Qa;
        undefined8 local_38;
        undefined4 uStack_30;
        undefined4 uStack_2c;

        this_00 = (ColourPicker*)param_1->end();
        if (param_1->field_16 == 3) {
            local_38 = this_00->GetColour4();
            uStack_30 = (undefined4)in_XMM1_Qa;
            uStack_2c = (undefined4)((ulong)in_XMM1_Qa >> 32);
            math::Rect<float>::operator=(*(Rect<float>**)this, (Rect*)&local_38);
            uVar1 = this_00->GetIntensity();
            **(undefined4**)(this + 8) = uVar1;
        } else if (param_1->field_16 == 1) {
            this_00->SetColour(*(Vector4T**)this);
            this_00->SetIntensity(**(float**)(this + 8));
        }
    }

    // 0x100a5dec0, 16 bytes, complete-object constructor, inline, placed by class name
    // Container::Container(char const*, bool): jumps straight to the base-object constructor

    // 0x100a5ded0, 192 bytes, base-object constructor, inline, placed by class name
    // Container::Container(char const*, bool)
    void Container::Container(char* param_1, bool param_2) {
        new (this) Control(0, 0, 3, param_1);
        field_0 = &PTR__SizeControl_100f1dc10;
        new (&field_216) eastl::list<shared_ptr<Control>, eastl::allocator>();
        new (field_248, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_264 = 0;
        field_268 = 0;
        new (field_272, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        m_direction = 0;
        field_292 = param_2;
        field_293 = 0;
        field_294 = '\x01';
    }

    // 0x100a5e7a0, 16 bytes, complete-object constructor, inline, placed by class name
    // Container::Container(eastl::string const&): jumps straight to the base-object constructor

    // 0x100a5e7b0, 176 bytes, base-object constructor, inline, placed by class name
    // Container::Container(eastl::string const&)
    void Container::Container(basic_string* param_1) {
        new (this) Control(0, 0, 3, param_1);
        field_0 = &PTR__SizeControl_100f1dc10;
        new (&field_216) eastl::list<shared_ptr<Control>, eastl::allocator>();
        new (field_248, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_264 = 0;
        field_268 = 0;
        new (field_272, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        m_direction = 0;
        field_292 = true;
        field_293 = 0;
        field_294 = '\x01';
    }

} // namespace jag::tweak

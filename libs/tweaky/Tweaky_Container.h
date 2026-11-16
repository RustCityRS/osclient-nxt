// libs/tweaky/Tweaky_Container.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::tweak {
    class Container {
    public:
        // virtual methods in vtable order
        virtual ~Container();
        virtual void Clear();
        virtual void Draw(int arg1, int arg2);
        virtual uint64_t GetControlSize(int& arg1, int& arg2);
        virtual unsigned long OnClick(float arg1, float arg2, bool arg3);
        virtual unsigned int OnMouseOver(float arg1, float arg2);
        virtual void DoOnShown();
        virtual void InitDefault();
        virtual void ResetToDefault();
        virtual void ResetAllToDefault();
        virtual void ClearControlSize();
        virtual uint64_t LoadSettings(const TweakSettingsValue& tweakSettingsValue);
        virtual void SaveSettings(TweakSettingsValue& tweakSettingsValue);
        virtual void SetMouseOver(bool arg1);
        virtual void SetTweaky(weak_ptr<Tweaky> tweaky);
        virtual void SetDirection(ContainerDirection containerDirection);
        void AddSlider<float, graphics::GraphNode::RegisterVisibilityMenu(ContainerGroup&)::$_7&>(
            const char* str, float arg2, float arg3, float arg4, float* arg5,
            graphics::GraphNode::RegisterVisibilityMenu(ContainerGroup&)::$_7& arg6);
        void AddSlider<unsigned int>(const char* str, float arg2, float arg3, float arg4, unsigned int*&& arg5);
        void SetSliderHandler<Slider, unsigned int>(shared_ptr<Slider> slider, unsigned int* arg2);
        void AddSlider<float>(const char* str, float arg2, float arg3, float arg4, float*&& arg5);
        void AddSlider<int>(const char* str, float arg2, float arg3, float arg4, int*&& arg5);
        void SetSliderHandler<Slider, float>(shared_ptr<Slider> slider, float* arg2);
        void SetSliderHandler<Slider, int>(shared_ptr<Slider> slider, int* arg2);
        void Add(const shared_ptr<Control>& control);
        Container(const char* str);
        void MakeCollapsable();
        Container* operator+=(const shared_ptr<Control>& control);
        void AddButton(const char* str, std::function<void(Event const&)> const& callback);
        void AddButton(const char* str, int arg2, std::function<void(Event const&)> const& callback);
        void AddCheckBox(const char* str, bool& arg2);
        void AddCheckBox(const char* str, std::function<void(Event const&)> const& callback, bool arg3);
        void AddEditField(const char* str, int arg2, std::function<void(Event const&)> const& callback);
        void AddEnum(const char* str, const StringEnum* stringEnum, int* arg3);
        void AddEnum(const char* str, const StringEnum* stringEnum, int* arg3,
                     std::function<void(Event const&)> const& callback);
        void AddSlider(const char* str, float arg2, float arg3, float arg4,
                       std::function<void(Event const&)> const& callback);
        void AddGradientSlider(const char* str, float arg2, float arg3, float arg4,
                               std::function<void(Event const&)> const& callback);
        void AddColourPicker(const char* str, math::Vector3T<float>* vector3, math::Range<float> range);
        void AddColourPicker(const char* str, math::Vector4T<float>* vector4, math::Range<float> range);
        void AddColourPicker(const char* str, bool arg2, math::Range<float> range,
                             std::function<void(Event const&)> const& callback);
        void AddColourPickerHDR(const char* str, math::Vector3T<float>* vector3, float* arg3, math::Range<float> range1,
                                math::Range<float> range2);
        void AddColourPickerHDR(const char* str, math::Vector4T<float>* vector4, float* arg3, math::Range<float> range1,
                                math::Range<float> range2);
        void AddColourPickerHDR(const char* str, bool arg2, math::Range<float> range1, math::Range<float> range2,
                                std::function<void(Event const&)> const& callback);
        void AddLabel(const char* str);
        void AddSwatch(float* arg1, float* arg2, float* arg3);
        void AddSwatch(float* arg1, float* arg2, float* arg3, std::function<void(Event const&)> const& callback);
        void AddSwatch(float* arg1, float* arg2, float* arg3, float* arg4);
        void AddSwatch(float* arg1, float* arg2, float* arg3, float* arg4,
                       std::function<void(Event const&)> const& callback);
        Container* AddGroup(const char* str);
        auto AddGroup(const char* str, bool arg2);
        Container();
        Container(int arg1, int arg2, const eastl::string& str);
        Container(const char* str, bool arg2);
        Container(const eastl::string& str);

    private:
        uint8_t _unknown_8[16];
        int field_24;
        int field_28;
        Type field_32;
        ShaderVariablePrecision field_36;
        int field_40;
        uint8_t _unknown_44[92];
        int field_136;
        int field_140;
        int field_144;
        int field_148;
        uint8_t _unknown_152[8];
        Event field_160;
        uint8_t _unknown_184[24];
        bool field_208;
        char field_209;
        bool field_210;
        uint8_t _unknown_211[37];
        shared_ptr field_248;
        int field_264;
        ShaderVariablePrecision field_268;
        shared_ptr field_272;
        ContainerDirection m_direction;
        bool field_292;
        uint8_t field_293;
        char field_294;
        uint8_t _unknown_295[6];
    };

    // 0x1007b0aa0
    void Container::AddSlider<float, graphics::GraphNode::RegisterVisibilityMenu(ContainerGroup&)::$_7&>(
        const char* str, float arg2, float arg3, float arg4, float* arg5,
        graphics::GraphNode::RegisterVisibilityMenu(ContainerGroup&)::$_7& arg6) {
        function<void(Event const&)> local_58[48];
        long local_28;

        std::function<void(Event const&)>::function<
            Container::AddSlider<float, graphics::GraphNode::RegisterVisibilityMenu(*(ContainerGroup&))::__7&>(
                char const*, float, float, float, float*,
                graphics::GraphNode::RegisterVisibilityMenu(*(ContainerGroup&))::__7&)::_lambda(Event const&) _1_,
            void>(local_58, (_lambda_jag__tweak__Event_const___1_*)arg6);
        AddSlider((Container*)str, (char*)arg5, 0.0, arg2, arg3, (function<void_(Event const&)>*)local_58);
    }

    // 0x1007c4000
    void Container::AddSlider<float, graphics::GraphNode::RegisterVisibilityMenu(ContainerGroup&)::$_7&>(
        char const*, float, float, float, float*, graphics::GraphNode::RegisterVisibilityMenu(ContainerGroup&)::$_7&)::{
        lambda(Event const&) #1
    }
    ::operator()(const Event & event) const {
        uint32_t uVar1;

        auto this_00 = event.end();
        if (event.field_16 == 1) {
            this_00->SetSlider<float>(**(float**)this);
        }
        if (event.field_16 == 3) {
            uVar1 = this_00->GetCurrentValue();
            **(uint32_t**)this = uVar1;
            graphics::GraphNode::RegisterVisibilityMenu(*(ContainerGroup&))::$_7::operator()((__7*)this_00);
        }
    }

    // 0x1008ad550
    void Container::AddSlider<unsigned int>(const char* str, float arg2, float arg3, float arg4, unsigned int*&& arg5) {
        ReturnValue local_60;

        char* local_68 = str;
        float local_2c = arg2;
        float local_28 = arg3;
        float local_24 = arg4;
        make_shared<Slider, char const*&, float&, float&, float&>(&local_60, &local_68, &local_2c, &local_28,
                                                                  &local_24);
        shared_ptr<oldscape::dash3d::Decor> local_50(&local_60);
        Add(local_50);
        shared_ptr<oldscape::dash3d::Decor> local_40(&local_60);
        SetSliderHandler<Slider, unsigned int>(this, &local_40, arg5);
    }

    // 0x1008d3320
    void Container::SetSliderHandler<Slider, unsigned int>(shared_ptr<Slider> slider, unsigned int* arg2) {
        function<void(Event const&)> local_58[48];
        long local_28;

        Control* this_00 = (Control*)(*slider).operator->();
        std::function<void(Event const&)>::function<Container::SetSliderHandler<Slider, unsigned int>(
                                                        shared_ptr<Slider>, unsigned int*)::_lambda(Event const&) _1_,
                                                    void>(local_58, (_lambda_jag__tweak__Event_const___1_*)arg2);
        this_00->SetHandler(*local_58);
    }

    // 0x1008d3f40
    void Container::SetSliderHandler<Slider, unsigned int>(shared_ptr<Slider>, unsigned int*)::{
        lambda(Event const&) #1
    }
    ::operator()(const Event & event) const {
        float fVar1;

        auto this_00 = event.end();
        if (event.field_16 == 3) {
            fVar1 = (float)this_00->GetCurrentValue();
            **(uint32_t**)this = (int)(long)fVar1;
        } else if (event.field_16 == 1) {
            this_00->SetSlider<float>((float)**(unsigned int**)this);
        }
    }

    // 0x100931fb0
    void Container::AddSlider<float>(const char* str, float arg2, float arg3, float arg4, float*&& arg5) {
        ReturnValue local_60;

        char* local_68 = str;
        float local_2c = arg2;
        float local_28 = arg3;
        float local_24 = arg4;
        make_shared<Slider, char const*&, float&, float&, float&>(&local_60, &local_68, &local_2c, &local_28,
                                                                  &local_24);
        shared_ptr<oldscape::dash3d::Decor> local_50(&local_60);
        Add(local_50);
        shared_ptr<oldscape::dash3d::Decor> local_40(&local_60);
        SetSliderHandler<Slider, float>(this, &local_40, arg5);
    }

    // 0x100933ef0
    void Container::AddSlider<int>(const char* str, float arg2, float arg3, float arg4, int*&& arg5) {
        ReturnValue local_60;

        char* local_68 = str;
        float local_2c = arg2;
        float local_28 = arg3;
        float local_24 = arg4;
        make_shared<Slider, char const*&, float&, float&, float&>(&local_60, &local_68, &local_2c, &local_28,
                                                                  &local_24);
        shared_ptr<oldscape::dash3d::Decor> local_50(&local_60);
        Add(local_50);
        shared_ptr<oldscape::dash3d::Decor> local_40(&local_60);
        SetSliderHandler<Slider, int>(this, &local_40, arg5);
    }

    // 0x100941150
    void Container::SetSliderHandler<Slider, float>(shared_ptr<Slider> slider, float* arg2) {
        function<void(Event const&)> local_58[48];
        long local_28;

        Control* this_00 = (Control*)(*slider).operator->();
        std::function<void(Event const&)>::function<
            Container::SetSliderHandler<Slider, float>(shared_ptr<Slider>, float*)::_lambda(Event const&) _1_, void>(
            local_58, (_lambda_jag__tweak__Event_const___1_*)arg2);
        this_00->SetHandler(*local_58);
    }

    // 0x100942020
    void Container::SetSliderHandler<Slider, float>(shared_ptr<Slider>, float*)::{
        lambda(Event const&) #1
    }
    ::operator()(const Event & arg1) const {
        lambda(Event const&) #1
    }
    ::operator()(_lambda_jag__tweak__Event_const___1_* this, Event * event) {
        Slider* this_00;
        uint32_t uVar1;

        this_00 = (Slider*)event->end();
        if (event->field_16 == 3) {
            uVar1 = this_00->GetCurrentValue();
            **(uint32_t**)this = uVar1;
        } else if (event->field_16 == 1) {
            this_00->SetSlider<float>(**(float**)this);
        }
        return;
    }

    // 0x100947c50
    void Container::SetSliderHandler<Slider, int>(shared_ptr<Slider> slider, int* arg2) {
        function<void(Event const&)> local_58[48];
        long local_28;

        Control* this_00 = (Control*)(*slider).operator->();
        std::function<void(Event const&)>::function<
            Container::SetSliderHandler<Slider, int>(shared_ptr<Slider>, int*)::_lambda(Event const&) _1_, void>(
            local_58, (_lambda_jag__tweak__Event_const___1_*)arg2);
        this_00->SetHandler(*local_58);
    }

    // 0x1009485c0
    void Container::SetSliderHandler<Slider, int>(shared_ptr<Slider>, int*)::{
        lambda(Event const&) #1
    }
    ::operator()(const Event & arg1) const {
        lambda(Event const&) #1
    }
    ::operator()(_lambda_jag__tweak__Event_const___1_* this, Event * event) {
        Slider* this_00;
        float fVar1;

        this_00 = (Slider*)event->end();
        if (event->field_16 == 3) {
            fVar1 = (float)this_00->GetCurrentValue();
            **(int**)this = (int)fVar1;
        } else if (event->field_16 == 1) {
            this_00->SetSlider<float>((float)**(int**)this);
        }
        return;
    }

    // 0x100a40370
    Container::Container(const char* str)
        : Control(0, 0, 3, str), field_264(0), field_268(0), m_direction(0), field_292(true), field_293(0) {
        field_294 = '\x01';
    }

    // 0x100a40420
    Container::~Container() {
        field_272->~shared_ptr();
        field_248->~shared_ptr();
        field_216.~list();
    }

    // 0x100a4bfc0
    Container::Container()
        : Control(0, 0, 3, ""), field_264(0), field_268(0), m_direction(0), field_292(true), field_293(0) {
        field_294 = '\x01';
    }

    // 0x100a51570
    void Container::SetDirection(ContainerDirection containerDirection) {
        m_direction = containerDirection;
    }

    // 0x100a53820
    Container::Container(int arg1, int arg2, const eastl::string& str)
        : Control(arg1, arg2, 3, str), field_264(0), field_268(0), m_direction(0), field_292(true), field_293(0) {
        field_294 = '\x01';
    }

    // 0x100a5c070
    void Container::AddColourPicker(char const*, math::Vector3T<float>*,
                                    math::Range<float>)::$_11::operator()(const Event& event) const {
        uint64_t local_28[2];

        auto this_00 = event.end();
        if (event.field_16 == 3) {
            local_28[0] = this_00->GetColour3();
            (*(Vector4T<float>**)this)->SetXYZ(*local_28);
        } else if (event.field_16 == 1) {
            this_00->SetColour(*(*(Vector3T<float>**)this));
        }
    }

    // 0x100a5c9c0
    void Container::AddColourPicker(char const*, math::Vector4T<float>*,
                                    math::Range<float>)::$_12::operator()(const Event& event) const {
        uint64_t local_28[2];

        auto this_00 = event.end();
        if (event.field_16 == 3) {
            local_28[0] = this_00->GetColour4();
            (*(*(Rect<float>**)this)) = *local_28;
        } else if (event.field_16 == 1) {
            this_00->SetColour(*(*(Vector4T<float>**)this));
        }
    }

    // 0x100a5d330
    void Container::AddColourPickerHDR(char const*, math::Vector3T<float>*, float*, math::Range<float>,
                                       math::Range<float>)::$_13::operator()(const Event& event) const {
        uint32_t uVar1;
        uint64_t local_30[2];

        auto this_00 = event.end();
        if (event.field_16 == 3) {
            local_30[0] = this_00->GetColour3();
            (*(Vector4T<float>**)this)->SetXYZ(*local_30);
            uVar1 = this_00->GetIntensity();
            **(uint32_t**)(this + 8) = uVar1;
        } else if (event.field_16 == 1) {
            this_00->SetColour(*(*(Vector3T<float>**)this));
            this_00->SetIntensity(**(float**)(this + 8));
        }
    }

    // 0x100a5dca0
    void Container::AddColourPickerHDR(char const*, math::Vector4T<float>*, float*, math::Range<float>,
                                       math::Range<float>)::$_14::operator()(const Event& event) const {
        uint32_t uVar1;
        uint64_t in_XMM1_Qa;
        uint64_t local_38;
        uint32_t uStack_30;
        uint32_t uStack_2c;

        auto this_00 = event.end();
        if (event.field_16 == 3) {
            local_38 = this_00->GetColour4();
            uStack_30 = (uint32_t)in_XMM1_Qa;
            uStack_2c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
            (*(*(Rect<float>**)this)) = local_38;
            uVar1 = this_00->GetIntensity();
            **(uint32_t**)(this + 8) = uVar1;
        } else if (event.field_16 == 1) {
            this_00->SetColour(*(*(Vector4T<float>**)this));
            this_00->SetIntensity(**(float**)(this + 8));
        }
    }

    // 0x100a5ded0
    Container::Container(const char* str, bool arg2)
        : Control(0, 0, 3, str), field_264(0), field_268(0), m_direction(0), field_292(arg2), field_293(0) {
        field_294 = '\x01';
    }

    // 0x100a5e7b0
    Container::Container(const eastl::string& str)
        : Control(0, 0, 3, str), field_264(0), field_268(0), m_direction(0), field_292(true), field_293(0) {
        field_294 = '\x01';
    }

} // namespace jag::tweak

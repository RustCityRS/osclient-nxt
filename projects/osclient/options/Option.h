// projects/osclient/options/Option.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::option {
    template <typename...> // 9 instantiations, e.g. <bool>, <eastl::fixed_string<char, 256> >, <float>
    class Option {
    public:
        class DefaultEnumOptionRange;
        class DefaultOptionRange;
        // virtual methods in vtable order
        virtual ~Option();
        virtual void MainLogic();
        virtual uint8_t SetValueFromString(const eastl::fixed_string<char, 256>& str);
        virtual auto GetValueAsString() const;
        virtual void GetDescription(int arg1) const;
        virtual void TriggerValueChangedHandler();
        virtual Option<float>* GetDefaultValue() const;
        virtual bool IsValidValue(const int& arg1) const;
        virtual unsigned long SetValueDeferred(int impactStrength, long long arg2, bool arg3);
        virtual unsigned long SetValue(hal::Haptics::ImpactStrength clientWindowMode, bool arg2);
        virtual uint8_t* GetValue() const;
        virtual void GetRange(int& windowSavedPosition1, int& windowSavedPosition2) const;
        Option(OptionStore& optionStore, const char* str, bool arg3);
        Option(OptionStore& optionStore, const char* str, ClientWindowMode clientWindowMode);
        Option(OptionStore& optionStore, const char* str, ScaledUIQuality scaledUIQuality);
        Option(OptionStore& optionStore, const char* str1, eastl::fixed_string<char, 256> str2);
        Option(OptionStore& optionStore, const char* str1, eastl::fixed_string<char, 256> str2,
               OptionFlags optionFlags);
        Option(OptionStore& optionStore, const char* str, int arg3, OptionFlags optionFlags);
        Option(OptionStore& optionStore, const char* str, WindowSavedPosition windowSavedPosition,
               OptionFlags optionFlags);
        Option(OptionStore& optionStore, const char* str, int arg3);
        Option(OptionStore& optionStore, const char* str, hal::Haptics::ImpactStrength impactStrength);
        void Bind(std::function<void(ClientWindowMode)>&& callback);
        void Bind(std::function<void(int)>&& callback);
        void Bind(std::function<void(bool)>&& callback);
        void Bind(std::function<void(ScaledUIQuality)>&& callback);
        Option(OptionStore& optionStore, const char* str, ChatTimestampMode chatTimestampMode);
        Option<float>* GetValueAsString() const;
        unsigned long SetValueDeferred(float arg1, long long arg2, bool arg3);
        unsigned long SetValue(float arg1, bool arg2);
        Option(OptionStore& optionStore, const char* str, bool arg3, OptionFlags optionFlags);
        uint8_t* GetDefaultValue() const;
        unsigned long SetValueDeferred(bool arg1, long long arg2, bool arg3);
        void GetRange(bool& arg1, bool& arg2) const;
        Option(OptionStore& optionStore, const char* str, ClientWindowMode clientWindowMode, OptionFlags optionFlags);
        void GetRange(ClientWindowMode& clientWindowMode1, ClientWindowMode& clientWindowMode2) const;
        Option(OptionStore& optionStore, const char* str, ScaledUIQuality scaledUIQuality, OptionFlags optionFlags);
        void GetRange(ScaledUIQuality& scaledUIQuality1, ScaledUIQuality& scaledUIQuality2) const;
        void SetValueFromString(const eastl::fixed_string<char, 256>& str);
        uint32_t SetValueDeferred(eastl::fixed_string<char, 256> str, long long arg2, bool arg3);
        unsigned long SetValue(WindowSavedPosition windowSavedPosition, bool arg2);
        Option(OptionStore& optionStore, const char* str, hal::Haptics::ImpactStrength impactStrength,
               OptionFlags optionFlags);
        Option(OptionStore& optionStore, const char* str, ChatTimestampMode chatTimestampMode, OptionFlags optionFlags);
        Option(OptionStore& optionStore, const char* str, float arg3, OptionFlags optionFlags);
        Option<eastl::fixed_string<char, 256>>* GetValue() const;
        uint32_t SetValue(eastl::fixed_string<char, 256> str, bool arg2);
        unsigned long SetValueDeferred(WindowSavedPosition windowSavedPosition, long long arg2, bool arg3);
        unsigned long SetValue(bool arg1, bool arg2);
    };

    template <typename...> // 2 instantiations, e.g. <ClientWindowMode>, <ScaledUIQuality>
    class Option::DefaultEnumOptionRange {
    public:
        uint8_t GetDefaultRange(ClientWindowMode& clientWindowMode1, ClientWindowMode& clientWindowMode2);
        uint8_t GetDefaultRange(ScaledUIQuality& scaledUIQuality1, ScaledUIQuality& scaledUIQuality2);
    };

    template <typename...> // 1 instantiations, e.g. <bool>
    class Option::DefaultOptionRange {
    public:
        void GetDefaultRange(bool& arg1, bool& arg2);
    };

    // 0x100021cd0
    Option<eastl::fixed_string<char, 256>>::Option(OptionStore& optionStore, const char* str1,
                                                   eastl::fixed_string<char, 256> str2) {

        fixed_string<char, 256> local_158(str2);
        Option(this, optionStore, str1, &local_158, 0);
    }

    // 0x1000230b0
    void Option<ClientWindowMode>::Bind(std::function<void(ClientWindowMode)>&& callback) {
        (*((this + 6))) = callback;
    }

    // 0x100023120
    void Option<int>::Bind(std::function<void(int)>&& callback) {
        (*((this + 6))) = callback;
    }

    // 0x100023170
    void Option<bool>::Bind(std::function<void(bool)>&& callback) {
        (*((this + 4))) = callback;
    }

    // 0x1000231b0
    void Option<ScaledUIQuality>::Bind(std::function<void(ScaledUIQuality)>&& callback) {
        (*((this + 6))) = callback;
    }

    // 0x10002d630
    Option<int>::~Option() {
        ((this + 6))->~function();
    }

    // 0x10002d680
    void Option<int>::MainLogic() {
        long lVar2;

        Option<ClientWindowMode> _vtbl* pOVar1 = this[13]._vptr;
        if (pOVar1 != nullptr) {
            lVar2 = core::SafeTime::CurrentTimeMillis();
            if ((long)pOVar1 <= lVar2) {
                *(uint32_t*)((long)&this[3]._vptr + 4) = *(uint32_t*)&this[12]._vptr;
                this[13]._vptr = nullptr;
                (**(void (**)(...))((this[1]._vptr)->_dtor + 24))(this[1]._vptr, this);
            }
        }
    }

    // 0x10002d6c0
    uint8_t Option<int>::SetValueFromString(const eastl::fixed_string<char, 256>& str) {
        uint8_t uVar1;
        tuple<bool&, int&> local_38[16];
        bool local_20[7];
        bool local_19;

        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))(this[1]._vptr, this);
        uint64_t local_28 = OptionValueSerialiser<int>::StringToValue(str);
        local_38 = (tuple<bool&, int&>[16])std::tie<bool, int>(local_19, *local_20);
        std::tuple<bool&, int&>::operator=(local_38, (tuple<bool, int>*)&local_28);
        if (local_19 == false) {
            uVar1 = 0;
        } else {
            uVar1 = SetValue((ClientWindowMode)this, local_20[0]);
        }
        return uVar1;
    }

    // 0x10002d730
    auto Option<int>::GetValueAsString() const {
        auto result;
        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))();
        result = OptionValueSerialiser<int>::ValueToString(*(int*)((long)&this[3]._vptr + 4));
        return result;
    }

    // 0x10002d760
    void Option<int>::GetDescription(int arg1) const {
        unsigned long in_RDX;
        uint32_t in_register_00000034;
        fixed_string<char, 40> local_160;

        long* plVar2 = (long*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        (**(void (**)(...))(*(long*)plVar2[1] + 32))();
        char* str = &plVar2[2];
        (**(void (**)(...))(*plVar2 + 32))(&local_160, plVar2);
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new (this)
            eastl::fixed_string<char, 256>((CtorSprintf*)"%s <col=%06x>%s</col>", str, in_RDX & 4294967295, uVar1);
    }

    // 0x10002d820
    void Option<int>::TriggerValueChangedHandler() {
        if (((this + 6))->operator_cast_to_bool() != '\0') {
            std::function<void(int)>::operator()((function<void(int)>*)(this + 6), *(int*)((long)&this[3]._vptr + 4));
        }
    }

    // 0x10002d850
    Option<float>* Option<int>::GetDefaultValue() const {
        return this + 4;
    }

    // 0x10002d860
    bool Option<int>::IsValidValue(const int& arg1) const {
        return 1;
    }

    // 0x10002d870
    unsigned long Option<int>::SetValueDeferred(int impactStrength, long long arg2, bool arg3) {
        long lVar2;

        ImpactStrength local_2c = impactStrength;
        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))(this[1]._vptr, this);
        char cVar1 = IsValidValue(&local_2c);
        if (cVar1) {
            *(ImpactStrength*)&this[12]._vptr = local_2c;
            lVar2 = core::SafeTime::CurrentTimeMillis();
            this[13]._vptr = (Option<ClientWindowMode> _vtbl*)(lVar2 + arg2);
            *(bool*)&this[14]._vptr = arg3;
        }
        return cVar1 & 4294967295;
    }

    // 0x10002d8e0
    void Option<int>::GetRange(int& windowSavedPosition1, int& windowSavedPosition2) const {
        windowSavedPosition1.PointerRelease();
    }

    // 0x10002e230
    Option<float>::~Option() {
        ((this + 6))->~function();
    }

    // 0x10002e290
    void Option<float>::MainLogic() {
        long lVar2;

        Option<float> _vtbl* pOVar1 = this[13]._vptr;
        if (pOVar1 != nullptr) {
            lVar2 = core::SafeTime::CurrentTimeMillis();
            if ((long)pOVar1 <= lVar2) {
                *(uint32_t*)((long)&this[3]._vptr + 4) = *(uint32_t*)&this[12]._vptr;
                this[13]._vptr = nullptr;
                (**(void (**)(...))((this[1]._vptr)->_dtor + 24))(this[1]._vptr, this);
            }
        }
    }

    // 0x10002e2e0
    uint8_t Option<float>::SetValueFromString(const eastl::fixed_string<char, 256>& str) {
        uint8_t uVar1;
        tuple<bool&, float&> local_38[16];
        float local_20;
        bool local_19;

        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))(this[1]._vptr, this);
        uint64_t local_28 = OptionValueSerialiser<float>::StringToValue(str);
        local_38 = (tuple<bool&, float&>[16])std::tie<bool, float>(local_19, local_20);
        std::tuple<bool&, float&>::operator=(local_38, (tuple<bool, float>*)&local_28);
        if (local_19 == false) {
            uVar1 = 0;
        } else {
            uVar1 = SetValue(local_20, (uint8_t)this);
        }
        return uVar1;
    }

    // 0x10002e360
    Option<float>* Option<float>::GetValueAsString() const {
        long in_RSI;

        (**(void (**)(...))(**(long**)(in_RSI + 8) + 32))();
        ValueToString(*(float*)(in_RSI + 28));
        return this;
    }

    // 0x10002e390
    void Option<float>::GetDescription(int arg1) const {
        unsigned long in_RDX;
        uint32_t in_register_00000034;
        fixed_string<char, 40> local_160;

        long* plVar2 = (long*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        (**(void (**)(...))(*(long*)plVar2[1] + 32))();
        char* str = &plVar2[2];
        (**(void (**)(...))(*plVar2 + 32))(&local_160, plVar2);
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new (this)
            eastl::fixed_string<char, 256>((CtorSprintf*)"%s <col=%06x>%s</col>", str, in_RDX & 4294967295, uVar1);
    }

    // 0x10002e450
    void Option<float>::TriggerValueChangedHandler() {
        if (((this + 6))->operator_cast_to_bool() != '\0') {
            std::function<void(float)>::operator()((function<void(float)>*)(this + 6),
                                                   *(float*)((long)&this[3]._vptr + 4));
        }
    }

    // 0x10002e480
    unsigned long Option<float>::SetValueDeferred(float arg1, long long arg2, bool arg3) {
        long lVar2;

        float local_2c = arg1;
        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))(this[1]._vptr, this);
        char cVar1 = IsValidValue(&local_2c);
        if (cVar1) {
            *(float*)&this[12]._vptr = local_2c;
            lVar2 = core::SafeTime::CurrentTimeMillis();
            this[13]._vptr = (Option<float> _vtbl*)(lVar2 + arg2);
            *(bool*)&this[14]._vptr = arg3;
        }
        return cVar1 & 4294967295;
    }

    // 0x10002e4f0
    unsigned long Option<float>::SetValue(float arg1, bool arg2) {
        float local_24 = arg1;
        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))(this[1]._vptr, this);
        char cVar1 = IsValidValue(&local_24);
        if (cVar1) {
            this[13]._vptr = nullptr;
            *(float*)((long)&this[3]._vptr + 4) = local_24;
            (**(void (**)(...))((this[1]._vptr)->_dtor + 24))(this[1]._vptr, this);
            if (arg2) {
                TriggerValueChangedHandler();
            }
        }
        return cVar1 & 4294967295;
    }

    // 0x100047770
    Option<bool>::Option(OptionStore& optionStore, const char* str, bool arg3, OptionFlags optionFlags)
        : IOption(optionStore, str, optionFlags) {
        *(bool*)((long)&this[3]._vptr + 4) = arg3;
        *(bool*)((long)&this[3]._vptr + 5) = arg3;
        new ((this + 4)) std::function<void(bool)>();
    }

    // 0x1000477f0
    void Option<bool>::MainLogic() {
        long lVar2;

        Option<bool> _vtbl* pOVar1 = this[11]._vptr;
        if (pOVar1 != nullptr) {
            lVar2 = core::SafeTime::CurrentTimeMillis();
            if ((long)pOVar1 <= lVar2) {
                *(uint8_t*)((long)&this[3]._vptr + 4) = *(uint8_t*)&this[10]._vptr;
                this[11]._vptr = nullptr;
                (**(void (**)(...))((this[1]._vptr)->_dtor + 24))(this[1]._vptr, this);
            }
        }
    }

    // 0x100047830
    uint8_t Option<bool>::SetValueFromString(const eastl::fixed_string<char, 256>& str) {
        uint8_t uVar1;
        tuple<bool&, bool&> local_30[20];
        bool local_1a;
        bool local_19;

        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))(this[1]._vptr, this);
        uint16_t local_1c = OptionValueSerialiser<bool>::StringToValue(str);
        local_30._0_16_ = std::tie<bool, bool>(local_1a, local_19);
        std::tuple<bool&, bool&>::operator=(local_30, (tuple<bool, bool>*)&local_1c);
        if (local_1a == false) {
            uVar1 = 0;
        } else {
            uVar1 = SetValue((uint8_t)this, local_19);
        }
        return uVar1;
    }

    // 0x1000478b0
    auto Option<bool>::GetValueAsString() const {
        auto result;
        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))();
        result = OptionValueSerialiser<bool>::ValueToString(*(bool*)((long)&this[3]._vptr + 4));
        return result;
    }

    // 0x1000478e0
    void Option<bool>::GetDescription(int arg1) const {
        unsigned long in_RDX;
        uint32_t in_register_00000034;
        fixed_string<char, 40> local_160;

        long* plVar2 = (long*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        (**(void (**)(...))(*(long*)plVar2[1] + 32))();
        char* str = &plVar2[2];
        (**(void (**)(...))(*plVar2 + 32))(&local_160, plVar2);
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new (this)
            eastl::fixed_string<char, 256>((CtorSprintf*)"%s <col=%06x>%s</col>", str, in_RDX & 4294967295, uVar1);
    }

    // 0x1000479a0
    void Option<bool>::TriggerValueChangedHandler() {
        if (((this + 4))->operator_cast_to_bool() != '\0') {
            std::function<void(bool)>::operator()((function<void(bool)>*)(this + 4),
                                                  *(bool*)((long)&this[3]._vptr + 4));
        }
    }

    // 0x1000479d0
    uint8_t* Option<bool>::GetDefaultValue() const {
        return (uint8_t*)((long)&this[3]._vptr + 5);
    }

    // 0x1000479e0
    unsigned long Option<bool>::SetValueDeferred(bool arg1, long long arg2, bool arg3) {
        long lVar2;

        uint8_t local_29 = arg1;
        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))(this[1]._vptr, this);
        char cVar1 = IsValidValue(&local_29);
        if (cVar1) {
            *(uint8_t*)&this[10]._vptr = local_29;
            lVar2 = core::SafeTime::CurrentTimeMillis();
            this[11]._vptr = (Option<bool> _vtbl*)(lVar2 + arg2);
            *(bool*)&this[12]._vptr = arg3;
        }
        return cVar1 & 4294967295;
    }

    // 0x100047a50
    void Option<bool>::GetRange(bool& arg1, bool& arg2) const {
        DefaultOptionRange<bool>::GetDefaultRange(arg1, arg2);
    }

    // 0x100047da0
    void Option<bool>::DefaultOptionRange<bool>::GetDefaultRange(bool& arg1, bool& arg2) {
        arg1 = false;
        arg2 = true;
        return 1;
    }

    // 0x100047dc0
    Option<ClientWindowMode>::Option(OptionStore& optionStore, const char* str, ClientWindowMode clientWindowMode,
                                     OptionFlags optionFlags)
        : IOption(optionStore, str, optionFlags) {
        *(ClientWindowMode*)((long)&this[3]._vptr + 4) = clientWindowMode;
        new ((this + 6)) std::function<void(ClientWindowMode)>();
    }

    // 0x100047e40
    uint8_t Option<ClientWindowMode>::SetValueFromString(const eastl::fixed_string<char, 256>& str) {
        uint8_t uVar1;
        tuple<bool&, ClientWindowMode&> local_38[16];
        bool local_20[7];
        bool local_19;

        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))(this[1]._vptr, this);
        uint64_t local_28 = OptionEnumValueSerialiser<ClientWindowMode>::StringToValue(str);
        local_38 = (tuple<bool&, ClientWindowMode&>[16])std::tie<bool, ClientWindowMode>(local_19, *local_20);
        std::tuple<bool&, ClientWindowMode&>::operator=(local_38, (tuple<bool, ClientWindowMode>*)&local_28);
        if (local_19 == false) {
            uVar1 = 0;
        } else {
            uVar1 = SetValue((ClientWindowMode)this, local_20[0]);
        }
        return uVar1;
    }

    // 0x100047eb0
    auto Option<ClientWindowMode>::GetValueAsString() const {
        auto result;
        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))();
        result =
            OptionEnumValueSerialiser<ClientWindowMode>::ValueToString(*(ClientWindowMode*)((long)&this[3]._vptr + 4));
        return result;
    }

    // 0x100047ee0
    void Option<ClientWindowMode>::GetDescription(int arg1) const {
        unsigned long in_RDX;
        uint32_t in_register_00000034;
        fixed_string<char, 40> local_160;

        long* plVar2 = (long*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        (**(void (**)(...))(*(long*)plVar2[1] + 32))();
        char* str = &plVar2[2];
        (**(void (**)(...))(*plVar2 + 32))(&local_160, plVar2);
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new (this)
            eastl::fixed_string<char, 256>((CtorSprintf*)"%s <col=%06x>%s</col>", str, in_RDX & 4294967295, uVar1);
    }

    // 0x100047fa0
    void Option<ClientWindowMode>::TriggerValueChangedHandler() {
        if (((this + 6))->operator_cast_to_bool() != '\0') {
            std::function<void(ClientWindowMode)>::operator()((function<void(ClientWindowMode)>*)(this + 6),
                                                              *(ClientWindowMode*)((long)&this[3]._vptr + 4));
        }
    }

    // 0x100047fd0
    void Option<ClientWindowMode>::GetRange(ClientWindowMode& clientWindowMode1,
                                            ClientWindowMode& clientWindowMode2) const {
        clientWindowMode1.GetDefaultRange(clientWindowMode2, clientWindowMode2);
    }

    // 0x100048310
    uint8_t Option<ClientWindowMode>::DefaultEnumOptionRange<ClientWindowMode>::GetDefaultRange(
        ClientWindowMode& clientWindowMode1, ClientWindowMode& clientWindowMode2) {
        GetEnumRange<ClientWindowMode>((ClientWindowMode*)this, clientWindowMode1);
        return 1;
    }

    // 0x100048350
    Option<ScaledUIQuality>::Option(OptionStore& optionStore, const char* str, ScaledUIQuality scaledUIQuality,
                                    OptionFlags optionFlags)
        : IOption(optionStore, str, optionFlags) {
        *(ScaledUIQuality*)((long)&this[3]._vptr + 4) = scaledUIQuality;
        new ((this + 6)) std::function<void(ScaledUIQuality)>();
    }

    // 0x1000483d0
    uint8_t Option<ScaledUIQuality>::SetValueFromString(const eastl::fixed_string<char, 256>& str) {
        uint8_t uVar1;
        tuple<bool&, ScaledUIQuality&> local_38[16];
        bool local_20[7];
        bool local_19;

        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))(this[1]._vptr, this);
        uint64_t local_28 = OptionEnumValueSerialiser<ScaledUIQuality>::StringToValue(str);
        local_38 = (tuple<bool&, ScaledUIQuality&>[16])std::tie<bool, ScaledUIQuality>(local_19, *local_20);
        std::tuple<bool&, ScaledUIQuality&>::operator=(local_38, (tuple<bool, ScaledUIQuality>*)&local_28);
        if (local_19 == false) {
            uVar1 = 0;
        } else {
            uVar1 = SetValue((ClientWindowMode)this, local_20[0]);
        }
        return uVar1;
    }

    // 0x100048440
    auto Option<ScaledUIQuality>::GetValueAsString() const {
        auto result;
        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))();
        result =
            OptionEnumValueSerialiser<ScaledUIQuality>::ValueToString(*(ScaledUIQuality*)((long)&this[3]._vptr + 4));
        return result;
    }

    // 0x100048470
    void Option<ScaledUIQuality>::GetDescription(int arg1) const {
        unsigned long in_RDX;
        uint32_t in_register_00000034;
        fixed_string<char, 40> local_160;

        long* plVar2 = (long*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        (**(void (**)(...))(*(long*)plVar2[1] + 32))();
        char* str = &plVar2[2];
        (**(void (**)(...))(*plVar2 + 32))(&local_160, plVar2);
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new (this)
            eastl::fixed_string<char, 256>((CtorSprintf*)"%s <col=%06x>%s</col>", str, in_RDX & 4294967295, uVar1);
    }

    // 0x100048530
    void Option<ScaledUIQuality>::TriggerValueChangedHandler() {
        if (((this + 6))->operator_cast_to_bool() != '\0') {
            std::function<void(ScaledUIQuality)>::operator()((function<void(ScaledUIQuality)>*)(this + 6),
                                                             *(ScaledUIQuality*)((long)&this[3]._vptr + 4));
        }
    }

    // 0x100048560
    void Option<ScaledUIQuality>::GetRange(ScaledUIQuality& scaledUIQuality1, ScaledUIQuality& scaledUIQuality2) const {
        scaledUIQuality1.GetDefaultRange(scaledUIQuality2, scaledUIQuality2);
    }

    // 0x100048890
    uint8_t Option<ScaledUIQuality>::DefaultEnumOptionRange<ScaledUIQuality>::GetDefaultRange(
        ScaledUIQuality& scaledUIQuality1, ScaledUIQuality& scaledUIQuality2) {
        GetEnumRange<hal::Haptics::ImpactStrength>((ScaledUIQuality*)this, scaledUIQuality1);
        return 1;
    }

    // 0x100048960
    Option<int>::Option(OptionStore& optionStore, const char* str, int arg3, OptionFlags optionFlags)
        : IOption(optionStore, str, optionFlags) {
        *(int*)((long)&this[3]._vptr + 4) = arg3;
        new ((this + 6)) std::function<void(int)>();
    }

    // 0x100048c70
    Option<eastl::fixed_string<char, 256>>::Option(OptionStore& optionStore, const char* str1,
                                                   eastl::fixed_string<char, 256> str2, OptionFlags optionFlags)
        : IOption(optionStore, str1, optionFlags) {
        *(uint8_t**)this = PTR_vtable_100ee8a68 + 16;
        new ((this + 32)) eastl::fixed_string<char, 256>(str2);
        new ((this + 328)) eastl::fixed_string<char, 256>(str2);
        new ((this + 624)) std::function<void(eastl::fixed_string<char, 256>)>();
        new ((this + 672)) eastl::fixed_string<char, 256>();
        *(uint64_t*)(this + 968) = 0;
        this[976] = (Option<eastl::fixed_string<char, 256>>)0;
    }

    // 0x100048d70
    void Option<eastl::fixed_string<char, 256>>::MainLogic() {
        long lVar2;

        long lVar1 = *(long*)(this + 968);
        if (lVar1 != 0) {
            lVar2 = core::SafeTime::CurrentTimeMillis();
            if (lVar1 <= lVar2) {
                (*((this + 32))) = ((this + 672));
                *(uint64_t*)(this + 968) = 0;
                (**(void (**)(...))(**(long**)(this + 8) + 24))(*(long**)(this + 8), this);
            }
        }
    }

    // 0x100048dc0
    void Option<eastl::fixed_string<char, 256>>::SetValueFromString(const eastl::fixed_string<char, 256>& str) {
        tuple<bool&, eastl::fixed_string<char, 256>&> local_3b8[23];
        bool local_3a1;

        (**(void (**)(...))(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        fixed_string<char, 256> local_148;
        auto local_278 = OptionValueSerialiser<eastl::fixed_string<char, 256>>::StringToValue(str);
        local_3b8._0_16_ = std::tie<bool, eastl::fixed_string<char, 256>>(local_3a1, local_148);
        std::tuple<bool&, eastl::fixed_string<char, 256>&>::operator=(local_3b8, &local_278);
        if (local_3a1 == false) {
        }
        fixed_string<char, 256> local_3a0(&local_148);
        (**(void (**)(...))(*(long*)this + 80))(this, &local_3a0, 1);
    }

    // 0x100048f00
    auto Option<eastl::fixed_string<char, 256>>::GetValueAsString() const {
        auto result;
        (**(void (**)(...))(**(long**)(this + 8) + 32))();
        result.ValueToString(*((this + 32)));
        return result;
    }

    // 0x100048f30
    void Option<eastl::fixed_string<char, 256>>::GetDescription(int arg1) const {
        unsigned long in_RDX;
        uint32_t in_register_00000034;
        fixed_string<char, 40> local_160;

        long* plVar2 = (long*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        (**(void (**)(...))(*(long*)plVar2[1] + 32))();
        char* str = &plVar2[2];
        (**(void (**)(...))(*plVar2 + 32))(&local_160, plVar2);
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new (this)
            eastl::fixed_string<char, 256>((CtorSprintf*)"%s <col=%06x>%s</col>", str, in_RDX & 4294967295, uVar1);
    }

    // 0x100048ff0
    void Option<eastl::fixed_string<char, 256>>::TriggerValueChangedHandler() {
        fixed_string<char, 256> local_150;

        if (((this + 624))->operator_cast_to_bool() != '\0') {
            local_150 = eastl::fixed_string<char, 256>((this + 32));
            std::function<void(eastl::fixed_string<char, 256>)>::operator()(
                (function<void(eastl::fixed_string<char, 256>)>*)(this + 624), &local_150);
        }
    }

    // 0x100049090
    uint8_t* Option<eastl::fixed_string<char, 256>>::GetDefaultValue() const {
        return m_model;
    }

    // 0x1000490a0
    uint32_t Option<eastl::fixed_string<char, 256>>::SetValueDeferred(eastl::fixed_string<char, 256> str,
                                                                      long long arg2, bool arg3) {
        long lVar2;

        (**(void (**)(...))(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        uint32_t uVar1 = (**(void (**)(...))(*(long*)this + 64))(this, str);
        if ((char)uVar1 != '\0') {
            (*((this + 672))) = str;
            lVar2 = core::SafeTime::CurrentTimeMillis();
            *(long*)(this + 968) = lVar2 + arg2;
            this[976] = (Option<eastl::fixed_string<char, 256>>)arg3;
        }
        return uVar1;
    }

    // 0x100049480
    Option<WindowSavedPosition>::Option(OptionStore& optionStore, const char* str,
                                        WindowSavedPosition windowSavedPosition, OptionFlags optionFlags)
        : IOption(optionStore, str, optionFlags) {
        new ((this + 4)) WindowSavedPosition(*windowSavedPosition);
        new ((this + 8)) WindowSavedPosition(*windowSavedPosition);
        new ((this + 12)) std::function<void(WindowSavedPosition)>();
        new ((this + 18)) WindowSavedPosition();
    }

    // 0x100049580
    void Option<WindowSavedPosition>::MainLogic() {
        long lVar2;

        Option<WindowSavedPosition> _vtbl* pOVar1 = this[22]._vptr;
        if (pOVar1 != nullptr) {
            lVar2 = core::SafeTime::CurrentTimeMillis();
            if ((long)pOVar1 <= lVar2) {
                (*((this + 4))) = (*((this + 18)));
                this[22]._vptr = nullptr;
                (**(void (**)(...))((this[1]._vptr)->_dtor + 24))(this[1]._vptr, this);
            }
        }
    }

    // 0x1000495d0
    uint8_t Option<WindowSavedPosition>::SetValueFromString(const eastl::fixed_string<char, 256>& str) {
        uint8_t uVar1;
        WindowSavedPosition local_78;
        tuple<bool&, WindowSavedPosition&> local_38[23];
        bool local_21;

        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))(this[1]._vptr, this);
        WindowSavedPosition local_58;
        auto local_a0 = OptionValueSerialiser<WindowSavedPosition>::StringToValue(str);
        local_38._0_16_ = std::tie<bool, WindowSavedPosition>(local_21, local_58);
        std::tuple<bool&, WindowSavedPosition&>::operator=(local_38, &local_a0);
        if (local_21 == false) {
            uVar1 = 0;
        } else {
            local_78 = WindowSavedPosition(local_58);
            uVar1 = SetValue((uint8_t)(&local_78));
        }
        return uVar1;
    }

    // 0x1000496b0
    auto Option<WindowSavedPosition>::GetValueAsString() const {
        auto result;
        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))();
        result = OptionValueSerialiser<WindowSavedPosition>::ValueToString(*((this + 4)));
        return result;
    }

    // 0x1000496e0
    void Option<WindowSavedPosition>::GetDescription(int arg1) const {
        unsigned long in_RDX;
        uint32_t in_register_00000034;
        fixed_string<char, 40> local_160;

        long* plVar2 = (long*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        (**(void (**)(...))(*(long*)plVar2[1] + 32))();
        char* str = &plVar2[2];
        (**(void (**)(...))(*plVar2 + 32))(&local_160, plVar2);
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new (this)
            eastl::fixed_string<char, 256>((CtorSprintf*)"%s <col=%06x>%s</col>", str, in_RDX & 4294967295, uVar1);
    }

    // 0x1000497a0
    void Option<WindowSavedPosition>::TriggerValueChangedHandler() {
        WindowSavedPosition local_40;

        if (((this + 12))->operator_cast_to_bool() != '\0') {
            local_40 = WindowSavedPosition(*((this + 4)));
            std::function<void(WindowSavedPosition)>::operator()((function<void(WindowSavedPosition)>*)(this + 12),
                                                                 &local_40);
        }
    }

    // 0x100049810
    uint8_t* Option<WindowSavedPosition>::GetDefaultValue() const {
        return &field_64;
    }

    // 0x100049820
    unsigned long Option<WindowSavedPosition>::SetValue(WindowSavedPosition windowSavedPosition, bool arg2) {
        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))(this[1]._vptr, this);
        char cVar1 = IsValidValue(windowSavedPosition);
        if (cVar1) {
            this[22]._vptr = nullptr;
            (*((this + 4))) = *windowSavedPosition;
            (**(void (**)(...))((this[1]._vptr)->_dtor + 24))(this[1]._vptr, this);
            if (arg2) {
                TriggerValueChangedHandler();
            }
        }
        return cVar1 & 4294967295;
    }

    // 0x10004a080
    Option<hal::Haptics::ImpactStrength>::Option(OptionStore& optionStore, const char* str,
                                                 hal::Haptics::ImpactStrength impactStrength, OptionFlags optionFlags)
        : IOption(optionStore, str, optionFlags) {
        *(ImpactStrength*)((long)&this[3]._vptr + 4) = impactStrength;
        new ((this + 6)) std::function<void(hal::Haptics::ImpactStrength)>();
    }

    // 0x10004a100
    uint8_t Option<hal::Haptics::ImpactStrength>::SetValueFromString(const eastl::fixed_string<char, 256>& str) {
        uint8_t uVar1;
        tuple<bool&, hal::Haptics::ImpactStrength&> local_38[16];
        bool local_20[7];
        bool local_19;

        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))(this[1]._vptr, this);
        uint64_t local_28 = OptionEnumValueSerialiser<hal::Haptics::ImpactStrength>::StringToValue(str);
        local_38 = (tuple<bool&, hal::Haptics::ImpactStrength&>[16])std::tie<bool, hal::Haptics::ImpactStrength>(
            local_19, *local_20);
        std::tuple<bool&, hal::Haptics::ImpactStrength&>::operator=(
            local_38, (tuple<bool, hal::Haptics::ImpactStrength>*)&local_28);
        if (local_19 == false) {
            uVar1 = 0;
        } else {
            uVar1 = SetValue((ClientWindowMode)this, local_20[0]);
        }
        return uVar1;
    }

    // 0x10004a170
    auto Option<hal::Haptics::ImpactStrength>::GetValueAsString() const {
        auto result;
        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))();
        result = OptionEnumValueSerialiser<hal::Haptics::ImpactStrength>::ValueToString(
            *(ImpactStrength*)((long)&this[3]._vptr + 4));
        return result;
    }

    // 0x10004a1a0
    void Option<hal::Haptics::ImpactStrength>::GetDescription(int arg1) const {
        unsigned long in_RDX;
        uint32_t in_register_00000034;
        fixed_string<char, 40> local_160;

        long* plVar2 = (long*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        (**(void (**)(...))(*(long*)plVar2[1] + 32))();
        char* str = &plVar2[2];
        (**(void (**)(...))(*plVar2 + 32))(&local_160, plVar2);
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new (this)
            eastl::fixed_string<char, 256>((CtorSprintf*)"%s <col=%06x>%s</col>", str, in_RDX & 4294967295, uVar1);
    }

    // 0x10004a260
    void Option<hal::Haptics::ImpactStrength>::TriggerValueChangedHandler() {
        if (((this + 6))->operator_cast_to_bool() != '\0') {
            std::function<void(hal::Haptics::ImpactStrength)>::operator()(
                (function<void(hal::Haptics::ImpactStrength)>*)(this + 6),
                *(ImpactStrength*)((long)&this[3]._vptr + 4));
        }
    }

    // 0x10004a290
    unsigned long Option<hal::Haptics::ImpactStrength>::SetValue(hal::Haptics::ImpactStrength clientWindowMode,
                                                                 bool arg2) {
        ClientWindowMode local_24 = clientWindowMode;
        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))(this[1]._vptr, this);
        char cVar1 = IsValidValue(&local_24);
        if (cVar1) {
            this[13]._vptr = nullptr;
            *(ClientWindowMode*)((long)&this[3]._vptr + 4) = local_24;
            (**(void (**)(...))((this[1]._vptr)->_dtor + 24))(this[1]._vptr, this);
            if (arg2) {
                TriggerValueChangedHandler();
            }
        }
        return cVar1 & 4294967295;
    }

    // 0x10004a970
    Option<bool>::~Option() {
        ((this + 4))->~function();
    }

    // 0x10004a9a0
    Option<ClientWindowMode>::~Option() {
        ((this + 6))->~function();
    }

    // 0x10004a9d0
    Option<ScaledUIQuality>::~Option() {
        ((this + 6))->~function();
    }

    // 0x10004aa00
    Option<eastl::fixed_string<char, 256>>::~Option() {
        *(uint8_t**)this = PTR_vtable_100ee8a68 + 16;
        ((this + 672))->~fixed_string();
    }

    // 0x10004aa60
    Option<WindowSavedPosition>::~Option() {
        ((this + 18))->~WindowSavedPosition();
        ((this + 12))->~function();
        ((this + 8))->~WindowSavedPosition();
        ((this + 4))->~WindowSavedPosition();
    }

    // 0x10004aab0
    Option<hal::Haptics::ImpactStrength>::~Option() {
        ((this + 6))->~function();
    }

    // 0x100051010
    Option<ChatTimestampMode>::Option(OptionStore& optionStore, const char* str, ChatTimestampMode chatTimestampMode,
                                      OptionFlags optionFlags)
        : IOption(optionStore, str, optionFlags) {
        *(ChatTimestampMode*)((long)&this[3]._vptr + 4) = chatTimestampMode;
        new ((this + 6)) std::function<void(ChatTimestampMode)>();
    }

    // 0x100051090
    uint8_t Option<ChatTimestampMode>::SetValueFromString(const eastl::fixed_string<char, 256>& str) {
        uint8_t uVar1;
        tuple<bool&, ChatTimestampMode&> local_38[16];
        bool local_20[7];
        bool local_19;

        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))(this[1]._vptr, this);
        uint64_t local_28 = OptionEnumValueSerialiser<ChatTimestampMode>::StringToValue(str);
        local_38 = (tuple<bool&, ChatTimestampMode&>[16])std::tie<bool, ChatTimestampMode>(local_19, *local_20);
        std::tuple<bool&, ChatTimestampMode&>::operator=(local_38, (tuple<bool, ChatTimestampMode>*)&local_28);
        if (local_19 == false) {
            uVar1 = 0;
        } else {
            uVar1 = SetValue((ClientWindowMode)this, local_20[0]);
        }
        return uVar1;
    }

    // 0x100051100
    auto Option<ChatTimestampMode>::GetValueAsString() const {
        auto result;
        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))();
        result = OptionEnumValueSerialiser<ChatTimestampMode>::ValueToString(
            *(ChatTimestampMode*)((long)&this[3]._vptr + 4));
        return result;
    }

    // 0x100051130
    void Option<ChatTimestampMode>::GetDescription(int arg1) const {
        unsigned long in_RDX;
        uint32_t in_register_00000034;
        fixed_string<char, 40> local_160;

        long* plVar2 = (long*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        (**(void (**)(...))(*(long*)plVar2[1] + 32))();
        char* str = &plVar2[2];
        (**(void (**)(...))(*plVar2 + 32))(&local_160, plVar2);
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new (this)
            eastl::fixed_string<char, 256>((CtorSprintf*)"%s <col=%06x>%s</col>", str, in_RDX & 4294967295, uVar1);
    }

    // 0x1000511f0
    void Option<ChatTimestampMode>::TriggerValueChangedHandler() {
        if (((this + 6))->operator_cast_to_bool() != '\0') {
            std::function<void(ChatTimestampMode)>::operator()((function<void(ChatTimestampMode)>*)(this + 6),
                                                               *(ChatTimestampMode*)((long)&this[3]._vptr + 4));
        }
    }

    // 0x100051630
    Option<float>::Option(OptionStore& optionStore, const char* str, float arg3, OptionFlags optionFlags)
        : IOption(optionStore, str, optionFlags) {
        *(float*)((long)&this[3]._vptr + 4) = arg3;
        new ((this + 6)) std::function<void(float)>();
    }

    // 0x100051af0
    Option<ChatTimestampMode>::~Option() {
        ((this + 6))->~function();
    }

    // 0x10012ae30
    uint8_t* Option<bool>::GetValue() const {
        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))(this[1]._vptr, this);
        return (uint8_t*)((long)&this[3]._vptr + 4);
    }

    // 0x10012d410
    Option<eastl::fixed_string<char, 256>>* Option<WindowSavedPosition>::GetValue() const {
        (**(void (**)(...))(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        return this + 32;
    }

    // 0x10012da20
    uint32_t Option<eastl::fixed_string<char, 256>>::SetValue(eastl::fixed_string<char, 256> str, bool arg2) {
        (**(void (**)(...))(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        uint32_t uVar1 = (**(void (**)(...))(*(long*)this + 64))(this, str);
        if ((char)uVar1 != '\0') {
            *(uint64_t*)(this + 968) = 0;
            (*((this + 32))) = str;
            (**(void (**)(...))(**(long**)(this + 8) + 24))(*(long**)(this + 8), this);
            if (arg2) {
                (**(void (**)(...))(*(long*)this + 48))(this);
            }
        }
        return uVar1;
    }

    // 0x10012dc40
    unsigned long Option<WindowSavedPosition>::SetValueDeferred(WindowSavedPosition windowSavedPosition, long long arg2,
                                                                bool arg3) {
        long lVar2;

        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))(this[1]._vptr, this);
        char cVar1 = IsValidValue(windowSavedPosition);
        if (cVar1) {
            (*((this + 18))) = *windowSavedPosition;
            lVar2 = core::SafeTime::CurrentTimeMillis();
            this[22]._vptr = (Option<WindowSavedPosition> _vtbl*)(lVar2 + arg2);
            *(bool*)&this[23]._vptr = arg3;
        }
        return cVar1 & 4294967295;
    }

    // 0x100131770
    unsigned long Option<bool>::SetValue(bool arg1, bool arg2) {
        uint8_t local_21 = arg1;
        (**(void (**)(...))((this[1]._vptr)->_dtor + 32))(this[1]._vptr, this);
        char cVar1 = IsValidValue(&local_21);
        if (cVar1) {
            this[11]._vptr = nullptr;
            *(uint8_t*)((long)&this[3]._vptr + 4) = local_21;
            (**(void (**)(...))((this[1]._vptr)->_dtor + 24))(this[1]._vptr, this);
            if (arg2) {
                TriggerValueChangedHandler();
            }
        }
        return cVar1 & 4294967295;
    }

} // namespace jag::oldscape::option

namespace jag::oldscape::input {
    // 0x10002d860: DefaultInputHandler::KeyPressed(int, unsigned long long) has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: DefaultInputHandler::KeyReleased(int, unsigned long long) has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: DefaultInputHandler::PointerDrag(int, int, int, unsigned long long) has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: DefaultInputHandler::WheelScroll(int, unsigned long long) has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: DefaultInputHandler::PointerPress(int, int, int, int, unsigned long long) has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: DefaultInputHandler::PointerCancel(int, int, unsigned long long) has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: DefaultInputHandler::PointerRelease(int, int, int, int, unsigned long long) has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: DefaultInputHandler::OnLowLevelMouseDown(int, int, int, int) has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: DefaultInputHandler::TextCommandReceived(int, unsigned long long) has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: DefaultInputHandler::KeyboardInputFocusChange(int, unsigned long long) has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: DefaultInputHandler::KeyTyped(char16_t, unsigned long long) has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: DefaultInputHandler::KeyRepeat(int, unsigned long long) has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: DefaultInputHandler::MouseMove(int, int, unsigned long long) has the same machine code as option::Option<int>::IsValidValue(int const&) const

} // namespace jag::oldscape::input

namespace jag::oldscape::dash3d {
    // 0x10002d860: ModelLitImpl::IsLit() const has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: ModelRSevenLit::IsForRSeven() const has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: ModelRSevenLit::IsLit() const has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: ModelUnlitImpl::IsUnlit() const has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: CombineOperation::CanAppend() const has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: ModelRSevenUnlit::IsForRSeven() const has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: ModelRSevenUnlit::IsUnlit() const has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: RecolourOperation::CanAppend() const has the same machine code as option::Option<int>::IsValidValue(int const&) const

} // namespace jag::oldscape::dash3d

namespace jag::game {
    // 0x10002d850: LocTypeCustomisation::GetRecolourDest() const has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x100049810: EnvColourGradingSettings::GetColourRemapWeightings() const has the same machine code as oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const

} // namespace jag::game

namespace jag::oldscape {
    // 0x10002d850: ConsoleCommandHelp::Description() const has the same machine code as option::Option<int>::GetDefaultValue() const

} // namespace jag::oldscape

namespace jag {
    // 0x10002d860: BucketAllocatorEASTL::operator==(BucketAllocatorEASTL const&) has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

} // namespace jag

namespace jag::input::gesture {
    // 0x10002d860: GestureBase::OnTouchUpdate() has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

} // namespace jag::input::gesture

namespace jag::render {
    // 0x10002d860: PixelUnpackBuffer::IsRecyclable() const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

} // namespace jag::render

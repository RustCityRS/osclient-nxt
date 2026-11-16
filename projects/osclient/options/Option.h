// projects/osclient/options/Option.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::option {
    template <
        typename...> // 9 instantiations, e.g. <bool>, <eastl::fixed_string<char, 256, true, eastl::allocator> >, <float>
    class Option {
    public:
        class DefaultEnumOptionRange;
        class DefaultOptionRange;
        // virtual methods in vtable order
        virtual ~Option();
        virtual void MainLogic();
        virtual SetValueFromString(eastl::fixed_string<char, 256, true, eastl::allocator> const&);
        virtual Option<int>* GetValueAsString() const;
        virtual void GetDescription(int) const;
        virtual void TriggerValueChangedHandler();
        virtual Option<float>* GetDefaultValue() const;
        virtual bool IsValidValue(int const&) const;
        virtual SetValueDeferred(int, long long, bool);
        virtual SetValue(hal::Haptics::ImpactStrength, bool);
        virtual Option<ScaledUIQuality>* GetValue() const;
        virtual void GetRange(int&, int&) const;
        Option(OptionStore&, char const*, bool);
        Option(OptionStore&, char const*, ClientWindowMode);
        Option(OptionStore&, char const*, ScaledUIQuality);
        Option(OptionStore&, char const*, eastl::fixed_string<char, 256, true, eastl::allocator>);
        Option(OptionStore&, char const*, eastl::fixed_string<char, 256, true, eastl::allocator>, OptionFlags);
        Option(OptionStore&, char const*, int, OptionFlags);
        Option(OptionStore&, char const*, WindowSavedPosition, OptionFlags);
        Option(OptionStore&, char const*, int);
        Option(OptionStore&, char const*, hal::Haptics::ImpactStrength);
        void Bind(std::function<void(ClientWindowMode)>&&);
        void Bind(std::function<void(int)>&&);
        void Bind(std::function<void(bool)>&&);
        void Bind(std::function<void(ScaledUIQuality)>&&);
        Option(OptionStore&, char const*, ChatTimestampMode);
        Option<float>* GetValueAsString() const;
        SetValueDeferred(float, long long, bool);
        SetValue(float, bool);
        Option(OptionStore&, char const*, bool, OptionFlags);
        Option<bool>* GetValueAsString() const;
        Option<bool>* GetDefaultValue() const;
        SetValueDeferred(bool, long long, bool);
        void GetRange(bool&, bool&) const;
        Option(OptionStore&, char const*, ClientWindowMode, OptionFlags);
        Option<ClientWindowMode>* GetValueAsString() const;
        void GetRange(ClientWindowMode&, ClientWindowMode&) const;
        Option(OptionStore&, char const*, ScaledUIQuality, OptionFlags);
        Option<ScaledUIQuality>* GetValueAsString() const;
        void GetRange(ScaledUIQuality&, ScaledUIQuality&) const;
        void SetValueFromString(eastl::fixed_string<char, 256, true, eastl::allocator> const&);
        Option<eastl::fixed_string<char, 256, true, eastl::allocator>>* GetValueAsString() const;
        GetDefaultValue() const;
        SetValueDeferred(eastl::fixed_string<char, 256, true, eastl::allocator>, long long, bool);
        Option<WindowSavedPosition>* GetValueAsString() const;
        SetValue(WindowSavedPosition, bool);
        Option(OptionStore&, char const*, hal::Haptics::ImpactStrength, OptionFlags);
        Option<hal::Haptics::ImpactStrength>* GetValueAsString() const;
        Option(OptionStore&, char const*, ChatTimestampMode, OptionFlags);
        Option<ChatTimestampMode>* GetValueAsString() const;
        Option(OptionStore&, char const*, float, OptionFlags);
        Option<eastl::fixed_string<char, 256, true, eastl::allocator>>* GetValue() const;
        SetValue(eastl::fixed_string<char, 256, true, eastl::allocator>, bool);
        SetValueDeferred(WindowSavedPosition, long long, bool);
        SetValue(bool, bool);
    };

    template <typename...> // 2 instantiations, e.g. <ClientWindowMode>, <ScaledUIQuality>
    class Option::DefaultEnumOptionRange {
    public:
        GetDefaultRange(ClientWindowMode&, ClientWindowMode&);
        GetDefaultRange(ScaledUIQuality&, ScaledUIQuality&);
    };

    template <typename...> // 1 instantiations, e.g. <bool>
    class Option::DefaultOptionRange {
    public:
        GetDefaultRange(bool&, bool&);
    };

    // 0x100021c90, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Option<bool>::Option(OptionStore&, char const*, bool): jumps straight to the base-object constructor

    // 0x100021ca0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Option<ClientWindowMode>::Option(OptionStore&, char const*, ClientWindowMode): jumps straight to the base-object constructor

    // 0x100021cb0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Option<ScaledUIQuality>::Option(OptionStore&, char const*, ScaledUIQuality): jumps straight to the base-object constructor

    // 0x100021cd0, 160 bytes, complete-object constructor, inline, placed by class name
    // Option<eastl::fixed_string<char, 256, true, eastl::allocator> >::Option(OptionStore&, char const*, eastl::fixed_string<char, 256, true, eastl::allocator>)
    void Option<eastl::fixed_string<char, 256, true, eastl::allocator>>::Option(
        Option<eastl::fixed_string<char, 256, true, eastl::allocator>>* this, undefined8 param_1, undefined8 param_2,
        fixed_string* param_4) {
        fixed_string<char, 256, true, eastl::allocator> local_158[296];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_158, param_4);
        Option(this, param_1, param_2, local_158, 0);
        /* WARNING: Subroutine does not return */
        local_158->~fixed_string();
    }

    // 0x100021d70, 16 bytes, complete-object constructor, inline, placed by class name
    // Option<eastl::fixed_string<char, 256, true, eastl::allocator> >::Option(OptionStore&, char const*, eastl::fixed_string<char, 256, true, eastl::allocator>, OptionFlags): jumps straight to the base-object constructor

    // 0x100021d80, 16 bytes, complete-object constructor, inline, placed by class name
    // Option<int>::Option(OptionStore&, char const*, int, OptionFlags): jumps straight to the base-object constructor

    // 0x100021da0, 16 bytes, complete-object constructor, inline, placed by class name
    // Option<WindowSavedPosition>::Option(OptionStore&, char const*, WindowSavedPosition, OptionFlags): jumps straight to the base-object constructor

    // 0x100021db0, 16 bytes, complete-object constructor, inline, placed by class name
    // Option<int>::Option(OptionStore&, char const*, int): jumps straight to the base-object constructor

    // 0x100021de0, 16 bytes, complete-object constructor, inline, placed by class name
    // Option<hal::Haptics::ImpactStrength>::Option(OptionStore&, char const*, hal::Haptics::ImpactStrength): jumps straight to the base-object constructor

    // 0x100022b30, 16 bytes, complete-object destructor, inline, placed by class name
    // Option<hal::Haptics::ImpactStrength>::~Option(): jumps straight to the base-object destructor

    // 0x100022b40, 16 bytes, complete-object destructor, inline, placed by class name
    // Option<bool>::~Option(): jumps straight to the base-object destructor

    // 0x100022b50, 16 bytes, complete-object destructor, inline, placed by class name
    // Option<int>::~Option(): jumps straight to the base-object destructor

    // 0x100022b60, 16 bytes, complete-object destructor, inline, placed by class name
    // Option<WindowSavedPosition>::~Option(): jumps straight to the base-object destructor

    // 0x100022b70, 16 bytes, complete-object destructor, inline, placed by class name
    // Option<eastl::fixed_string<char, 256, true, eastl::allocator> >::~Option(): jumps straight to the base-object destructor

    // 0x100022b80, 16 bytes, complete-object destructor, inline, placed by class name
    // Option<ScaledUIQuality>::~Option(): jumps straight to the base-object destructor

    // 0x100022b90, 16 bytes, complete-object destructor, inline, placed by class name
    // Option<ClientWindowMode>::~Option(): jumps straight to the base-object destructor

    // 0x1000230b0, 16 bytes, inline, placed by class name
    // Option<ClientWindowMode>::Bind(std::function<void (ClientWindowMode)>&&)
    /* Option<ClientWindowMode>::Bind(std::function<void
   (ClientWindowMode)>&&) */

    void Option<ClientWindowMode>::Bind(function* param_1) {
        std::function<void(ClientWindowMode)>::operator=((function<void(ClientWindowMode)>*)(this + 48), param_1);
    }

    // 0x100023120, 16 bytes, inline, placed by class name
    // Option<int>::Bind(std::function<void (int)>&&)
    /* Option<int>::Bind(std::function<void (int)>&&) */

    void Option<int>::Bind(function* param_1) {
        std::function<void(int)>::operator=((function<void(int)>*)(this + 48), param_1);
    }

    // 0x100023170, 16 bytes, inline, placed by class name
    // Option<bool>::Bind(std::function<void (bool)>&&)
    /* Option<bool>::Bind(std::function<void (bool)>&&) */

    void Option<bool>::Bind(function* param_1) {
        std::function<void(bool)>::operator=((function<void(bool)>*)(this + 32), param_1);
    }

    // 0x1000231b0, 16 bytes, inline, placed by class name
    // Option<ScaledUIQuality>::Bind(std::function<void (ScaledUIQuality)>&&)
    /* Option<ScaledUIQuality>::Bind(std::function<void
   (ScaledUIQuality)>&&) */

    void Option<ScaledUIQuality>::Bind(function* param_1) {
        std::function<void(ScaledUIQuality)>::operator=((function<void(ScaledUIQuality)>*)(this + 48), param_1);
    }

    // 0x100023b10, 16 bytes, complete-object constructor, inline, placed by class name
    // Option<ChatTimestampMode>::Option(OptionStore&, char const*, ChatTimestampMode): jumps straight to the base-object constructor

    // 0x100023b80, 16 bytes, complete-object destructor, inline, placed by class name
    // Option<ChatTimestampMode>::~Option(): jumps straight to the base-object destructor

    // 0x10002d630, 48 bytes, base-object destructor, inline, placed by class name
    // Option<int>::~Option()
    void Option<int>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8aa8 + 16;
        std::function<void(int)>::~function((function<void(int)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x10002d660, 32 bytes, deleting destructor, inline, placed by class name
    // Option<int>::~Option()
    void Option<int>::~Option() {
        ~RangeOption();
        operator_delete(this);
    }

    // 0x10002d680, 64 bytes, inline, placed by class name
    // Option<int>::MainLogic()
    /* Option<ClientWindowMode>::MainLogic() */

    void Option<ClientWindowMode>::MainLogic() {
        long lVar1;
        long lVar2;

        lVar1 = *(long*)(this + 104);
        if (lVar1 != 0) {
            lVar2 = CurrentTimeMillis();
            if (lVar1 <= lVar2) {
                *(undefined4*)(this + 28) = *(undefined4*)(this + 96);
                *(undefined8*)(this + 104) = 0;
                (**(code**)(**(long**)(this + 8) + 24))(*(long**)(this + 8), this);
            }
        }
    }

    // 0x10002d6c0, 112 bytes, inline, placed by class name
    // Option<int>::SetValueFromString(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    undefined8 Option<int>::SetValueFromString(fixed_string* param_1) {
        undefined8 uVar1;
        tuple<bool&, int&> local_38[16];
        undefined8 local_28;
        int local_20;
        bool local_19;

        (**(code**)(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        local_28 = OptionValueSerialiser<int>::StringToValue(param_1);
        local_38 = (tuple<bool&, int&>[16])std::tie<bool, int>(&local_19, &local_20);
        std::tuple<bool&, int&>::operator=(local_38, (tuple*)&local_28);
        if (local_19 == false) {
            uVar1 = 0;
        } else {
            uVar1 = (**(code**)(*(long*)this + 80))(this, local_20, 1);
        }
        return uVar1;
    }

    // 0x10002d730, 48 bytes, inline, placed by class name
    // Option<int>::GetValueAsString() const
    Option<int>* Option<int>::GetValueAsString() {
        long in_RSI;

        (**(code**)(**(long**)(in_RSI + 8) + 32))();
        ValueToString(*(int*)(in_RSI + 28));
        return this;
    }

    // 0x10002d760, 192 bytes, inline, placed by class name
    // Option<int>::GetDescription(int) const
    void Option<int>::GetDescription(int param_1) {
        long lVar1;
        undefined8 uVar2;
        undefined4 in_EDX;
        undefined4 in_register_00000034;
        long* plVar3;
        fixed_string<char, 40, true, eastl::allocator> local_160[296];
        undefined8 local_38;

        plVar3 = (long*)CONCAT44(in_register_00000034, param_1);
        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        (**(code**)(*(long*)plVar3[1] + 32))();
        lVar1 = plVar3[2];
        (**(code**)(*plVar3 + 32))(local_160, plVar3);
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(this, "%s <col=%06x>%s</col>", lVar1,
                                                                             in_EDX, uVar2);
        /* WARNING: Subroutine does not return */
        eastl::fixed_string<char, 40, true, eastl::allocator>::~fixed_string(local_160);
    }

    // 0x10002d820, 48 bytes, inline, placed by class name
    // Option<int>::TriggerValueChangedHandler()
    void Option<int>::TriggerValueChangedHandler() {
        if (((this + 48))->operator_cast_to_bool()) {
            std::function<void(int)>::operator()((function<void(int)>*)(this + 48), *(int*)(this + 28));
        }
    }

    // 0x10002d850, 16 bytes, inline, placed by class name
    // Option<int>::GetDefaultValue() const
    /* Option<float>::GetDefaultValue() const */

    Option<float>* Option<float>::GetDefaultValue() {
        return this + 32;
    }

    // 0x10002d860, 16 bytes, inline, placed by class name
    // Option<int>::IsValidValue(int const&) const
    /* Option<float>::IsValidValue(float const&) const */

    bool Option<float>::IsValidValue(BucketAllocatorSTL* param_1) {
        return true;
    }

    // 0x10002d870, 112 bytes, inline, placed by class name
    // Option<int>::SetValueDeferred(int, long long, bool)
    /* Option<ClientWindowMode>::SetValueDeferred(ClientWindowMode,
   long long, bool) */

    undefined4 Option<ClientWindowMode>::SetValueDeferred(undefined4 param_2, long param_3,
                                                          Option<ClientWindowMode> param_4) {
        undefined4 uVar1;
        long lVar2;
        undefined4 local_2c;

        local_2c = param_2;
        (**(code**)(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        uVar1 = (**(code**)(*(long*)this + 64))(this, &local_2c);
        if ((char)uVar1 != '\0') {
            *(undefined4*)(this + 96) = local_2c;
            lVar2 = ((Option<ClientWindowMode>*)this)->CurrentTimeMillis();
            *(long*)(this + 104) = lVar2 + param_3;
            this[112] = param_4;
        }
        return uVar1;
    }

    // 0x10002d8e0, 32 bytes, inline, placed by class name
    // Option<int>::GetRange(int&, int&) const
    /* Option<float>::GetRange(float&, float&) const */

    void Option<float>::GetRange(float* param_1, float* param_2) {
        param_1->PointerRelease(param_2);
    }

    // 0x10002e230, 48 bytes, base-object destructor, inline, placed by class name
    // Option<float>::~Option()
    void Option<float>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8aa0 + 16;
        std::function<void(float)>::~function((function<void(float)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x10002e270, 32 bytes, deleting destructor, inline, placed by class name
    // Option<float>::~Option()
    void Option<float>::~Option() {
        ~Option(this);
        operator_delete(this);
    }

    // 0x10002e290, 80 bytes, inline, placed by class name
    // Option<float>::MainLogic()
    void Option<float>::MainLogic() {
        long lVar1;
        long lVar2;

        lVar1 = *(long*)(this + 104);
        if (lVar1 != 0) {
            lVar2 = CurrentTimeMillis();
            if (lVar1 <= lVar2) {
                *(undefined4*)(this + 28) = *(undefined4*)(this + 96);
                *(undefined8*)(this + 104) = 0;
                (**(code**)(**(long**)(this + 8) + 24))(*(long**)(this + 8), this);
            }
        }
    }

    // 0x10002e2e0, 128 bytes, inline, placed by class name
    // Option<float>::SetValueFromString(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    undefined8 Option<float>::SetValueFromString(fixed_string* param_1) {
        undefined8 uVar1;
        tuple<bool&, float&> local_38[16];
        undefined8 local_28;
        float local_20;
        bool local_19;

        (**(code**)(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        local_28 = OptionValueSerialiser<float>::StringToValue(param_1);
        local_38 = (tuple<bool&, float&>[16])std::tie<bool, float>(&local_19, &local_20);
        std::tuple<bool&, float&>::operator=(local_38, (tuple*)&local_28);
        if (local_19 == false) {
            uVar1 = 0;
        } else {
            uVar1 = (**(code**)(*(long*)this + 80))(local_20, this, 1);
        }
        return uVar1;
    }

    // 0x10002e360, 48 bytes, inline, placed by class name
    // Option<float>::GetValueAsString() const
    Option<float>* Option<float>::GetValueAsString() {
        long in_RSI;

        (**(code**)(**(long**)(in_RSI + 8) + 32))();
        ValueToString(*(float*)(in_RSI + 28));
        return this;
    }

    // 0x10002e390, 192 bytes, inline, placed by class name
    // Option<float>::GetDescription(int) const
    void Option<float>::GetDescription(int param_1) {
        long lVar1;
        undefined8 uVar2;
        undefined4 in_EDX;
        undefined4 in_register_00000034;
        long* plVar3;
        fixed_string<char, 40, true, eastl::allocator> local_160[296];
        undefined8 local_38;

        plVar3 = (long*)CONCAT44(in_register_00000034, param_1);
        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        (**(code**)(*(long*)plVar3[1] + 32))();
        lVar1 = plVar3[2];
        (**(code**)(*plVar3 + 32))(local_160, plVar3);
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(this, "%s <col=%06x>%s</col>", lVar1,
                                                                             in_EDX, uVar2);
        /* WARNING: Subroutine does not return */
        eastl::fixed_string<char, 40, true, eastl::allocator>::~fixed_string(local_160);
    }

    // 0x10002e450, 48 bytes, inline, placed by class name
    // Option<float>::TriggerValueChangedHandler()
    void Option<float>::TriggerValueChangedHandler() {
        if (((this + 48))->operator_cast_to_bool()) {
            std::function<void(float)>::operator()((function<void(float)>*)(this + 48), *(float*)(this + 28));
        }
    }

    // 0x10002e480, 112 bytes, inline, placed by class name
    // Option<float>::SetValueDeferred(float, long long, bool)
    undefined4 Option<float>::SetValueDeferred(float param_1, longlong param_2, bool param_3) {
        undefined4 uVar1;
        long lVar2;
        float local_2c;

        local_2c = param_1;
        (**(code**)(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        uVar1 = (**(code**)(*(long*)this + 64))(this, &local_2c);
        if ((char)uVar1 != '\0') {
            *(float*)(this + 96) = local_2c;
            lVar2 = ((Option<float>*)this)->CurrentTimeMillis();
            *(long*)(this + 104) = lVar2 + param_2;
            this[112] = (Option<float>)param_3;
        }
        return uVar1;
    }

    // 0x10002e4f0, 128 bytes, inline, placed by class name
    // Option<float>::SetValue(float, bool)
    undefined4 Option<float>::SetValue(float param_1, bool param_2) {
        undefined4 uVar1;
        float local_24;

        local_24 = param_1;
        (**(code**)(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        uVar1 = (**(code**)(*(long*)this + 64))(this, &local_24);
        if ((char)uVar1 != '\0') {
            *(undefined8*)(this + 104) = 0;
            *(float*)(this + 28) = local_24;
            (**(code**)(**(long**)(this + 8) + 24))(*(long**)(this + 8), this);
            if (param_2) {
                (**(code**)(*(long*)this + 48))(this);
            }
        }
        return uVar1;
    }

    // 0x100047760, 16 bytes, complete-object constructor, inline, placed by class name
    // Option<bool>::Option(OptionStore&, char const*, bool, OptionFlags): jumps straight to the base-object constructor

    // 0x100047770, 80 bytes, base-object constructor, inline, placed by class name
    // Option<bool>::Option(OptionStore&, char const*, bool, OptionFlags)
    void Option<bool>::Option(undefined8 param_2, undefined8 param_3_00, Option<bool> param_3) {
        IOption::IOption();
        *(undefined**)this = PTR_vtable_100ee8a98 + 16;
        this[28] = param_3;
        this[29] = param_3;
        std::function<void(bool)>::function((function<void(bool)>*)(this + 32));
        *(undefined8*)(this + 88) = 0;
        this[96] = (Option<bool>)0;
    }

    // 0x1000477d0, 32 bytes, deleting destructor, inline, placed by class name
    // Option<bool>::~Option()
    void Option<bool>::~Option() {
        ~Option(this);
        operator_delete(this);
    }

    // 0x1000477f0, 64 bytes, inline, placed by class name
    // Option<bool>::MainLogic()
    void Option<bool>::MainLogic() {
        long lVar1;
        long lVar2;

        lVar1 = *(long*)(this + 88);
        if (lVar1 != 0) {
            lVar2 = CurrentTimeMillis();
            if (lVar1 <= lVar2) {
                this[28] = this[80];
                *(undefined8*)(this + 88) = 0;
                (**(code**)(**(long**)(this + 8) + 24))(*(long**)(this + 8), this);
            }
        }
    }

    // 0x100047830, 128 bytes, inline, placed by class name
    // Option<bool>::SetValueFromString(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    undefined8 Option<bool>::SetValueFromString(fixed_string* param_1) {
        undefined8 uVar1;
        tuple<bool&, bool&> local_30[20];
        undefined2 local_1c;
        bool local_1a;
        bool local_19;

        (**(code**)(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        local_1c = OptionValueSerialiser<bool>::StringToValue(param_1);
        local_30._0_16_ = std::tie<bool, bool>(&local_1a, &local_19);
        std::tuple<bool&, bool&>::operator=(local_30, (tuple*)&local_1c);
        if (local_1a == false) {
            uVar1 = 0;
        } else {
            uVar1 = (**(code**)(*(long*)this + 80))(this, local_19, 1);
        }
        return uVar1;
    }

    // 0x1000478b0, 48 bytes, inline, placed by class name
    // Option<bool>::GetValueAsString() const
    Option<bool>* Option<bool>::GetValueAsString() {
        long in_RSI;

        (**(code**)(**(long**)(in_RSI + 8) + 32))();
        ValueToString(*(bool*)(in_RSI + 28));
        return this;
    }

    // 0x1000478e0, 192 bytes, inline, placed by class name
    // Option<bool>::GetDescription(int) const
    void Option<bool>::GetDescription(int param_1) {
        long lVar1;
        undefined8 uVar2;
        undefined4 in_EDX;
        undefined4 in_register_00000034;
        long* plVar3;
        fixed_string<char, 40, true, eastl::allocator> local_160[296];
        undefined8 local_38;

        plVar3 = (long*)CONCAT44(in_register_00000034, param_1);
        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        (**(code**)(*(long*)plVar3[1] + 32))();
        lVar1 = plVar3[2];
        (**(code**)(*plVar3 + 32))(local_160, plVar3);
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(this, "%s <col=%06x>%s</col>", lVar1,
                                                                             in_EDX, uVar2);
        /* WARNING: Subroutine does not return */
        eastl::fixed_string<char, 40, true, eastl::allocator>::~fixed_string(local_160);
    }

    // 0x1000479a0, 48 bytes, inline, placed by class name
    // Option<bool>::TriggerValueChangedHandler()
    void Option<bool>::TriggerValueChangedHandler() {
        if (((this + 32))->operator_cast_to_bool()) {
            std::function<void(bool)>::operator()((function<void(bool)>*)(this + 32), (bool)this[28]);
        }
    }

    // 0x1000479d0, 16 bytes, inline, placed by class name
    // Option<bool>::GetDefaultValue() const
    Option<bool>* Option<bool>::GetDefaultValue() {
        return this + 29;
    }

    // 0x1000479e0, 112 bytes, inline, placed by class name
    // Option<bool>::SetValueDeferred(bool, long long, bool)
    undefined4 Option<bool>::SetValueDeferred(bool param_1, longlong param_2, bool param_3) {
        undefined4 uVar1;
        long lVar2;
        Option<bool> local_29;

        local_29 = (Option<bool>)param_1;
        (**(code**)(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        uVar1 = (**(code**)(*(long*)this + 64))(this, &local_29);
        if ((char)uVar1 != '\0') {
            this[80] = local_29;
            lVar2 = ((Option<bool>*)this)->CurrentTimeMillis();
            *(long*)(this + 88) = lVar2 + param_2;
            this[96] = (Option<bool>)param_3;
        }
        return uVar1;
    }

    // 0x100047a50, 32 bytes, inline, placed by class name
    // Option<bool>::GetRange(bool&, bool&) const
    void Option<bool>::GetRange(bool* param_1, bool* param_2) {
        DefaultOptionRange<bool>::GetDefaultRange(param_1, param_2);
    }

    // 0x100047da0, 16 bytes, inline, placed by class name
    // Option<bool>::DefaultOptionRange<bool>::GetDefaultRange(bool&, bool&)
    undefined1 Option<bool>::DefaultOptionRange<bool>::GetDefaultRange(bool* param_1, bool* param_2) {
        *param_1 = false;
        *param_2 = true;
        return 1;
    }

    // 0x100047db0, 16 bytes, complete-object constructor, inline, placed by class name
    // Option<ClientWindowMode>::Option(OptionStore&, char const*, ClientWindowMode, OptionFlags): jumps straight to the base-object constructor

    // 0x100047dc0, 80 bytes, base-object constructor, inline, placed by class name
    // Option<ClientWindowMode>::Option(OptionStore&, char const*, ClientWindowMode, OptionFlags)
    void Option<ClientWindowMode>::Option(undefined8 param_2, undefined8 param_3, undefined4 param_4) {
        IOption::IOption();
        *(undefined**)this = PTR_vtable_100ee8a78 + 16;
        *(undefined4*)(this + 28) = param_4;
        *(undefined4*)(this + 32) = param_4;
        std::function<void(ClientWindowMode)>::function((function<void(ClientWindowMode)>*)(this + 48));
        *(undefined8*)(this + 104) = 0;
        this[112] = (Option<ClientWindowMode>)0;
    }

    // 0x100047e20, 32 bytes, deleting destructor, inline, placed by class name
    // Option<ClientWindowMode>::~Option()
    void Option<ClientWindowMode>::~Option() {
        ~Option(this);
        operator_delete(this);
    }

    // 0x100047e40, 112 bytes, inline, placed by class name
    // Option<ClientWindowMode>::SetValueFromString(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    undefined8 Option<ClientWindowMode>::SetValueFromString(fixed_string* param_1) {
        undefined8 uVar1;
        tuple<bool&, ClientWindowMode&> local_38[16];
        undefined8 local_28;
        undefined4 local_20;
        bool local_19;

        (**(code**)(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        local_28 = OptionEnumValueSerialiser<ClientWindowMode>::StringToValue(param_1);
        local_38 = (tuple<bool&, ClientWindowMode&>[16])std::tie<bool, ClientWindowMode>(&local_19,
                                                                                         (ClientWindowMode*)&local_20);
        std::tuple<bool&, ClientWindowMode&>::operator=(local_38, (tuple*)&local_28);
        if (local_19 == false) {
            uVar1 = 0;
        } else {
            uVar1 = (**(code**)(*(long*)this + 80))(this, local_20, 1);
        }
        return uVar1;
    }

    // 0x100047eb0, 48 bytes, inline, placed by class name
    // Option<ClientWindowMode>::GetValueAsString() const
    Option<ClientWindowMode>* Option<ClientWindowMode>::GetValueAsString() {
        long in_RSI;

        (**(code**)(**(long**)(in_RSI + 8) + 32))();
        ValueToString(*(undefined4*)(in_RSI + 28));
        return this;
    }

    // 0x100047ee0, 192 bytes, inline, placed by class name
    // Option<ClientWindowMode>::GetDescription(int) const
    void Option<ClientWindowMode>::GetDescription(int param_1) {
        long lVar1;
        undefined8 uVar2;
        undefined4 in_EDX;
        undefined4 in_register_00000034;
        long* plVar3;
        fixed_string<char, 40, true, eastl::allocator> local_160[296];
        undefined8 local_38;

        plVar3 = (long*)CONCAT44(in_register_00000034, param_1);
        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        (**(code**)(*(long*)plVar3[1] + 32))();
        lVar1 = plVar3[2];
        (**(code**)(*plVar3 + 32))(local_160, plVar3);
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(this, "%s <col=%06x>%s</col>", lVar1,
                                                                             in_EDX, uVar2);
        /* WARNING: Subroutine does not return */
        eastl::fixed_string<char, 40, true, eastl::allocator>::~fixed_string(local_160);
    }

    // 0x100047fa0, 48 bytes, inline, placed by class name
    // Option<ClientWindowMode>::TriggerValueChangedHandler()
    void Option<ClientWindowMode>::TriggerValueChangedHandler() {
        if (((this + 48))->operator_cast_to_bool()) {
            std::function<void(ClientWindowMode)>::operator()((function<void(ClientWindowMode)>*)(this + 48),
                                                              *(undefined4*)(this + 28));
        }
    }

    // 0x100047fd0, 32 bytes, inline, placed by class name
    // Option<ClientWindowMode>::GetRange(ClientWindowMode&, ClientWindowMode&) const
    void Option<ClientWindowMode>::GetRange(ClientWindowMode* param_1, ClientWindowMode* param_2) {
        DefaultEnumOptionRange<ClientWindowMode>::GetDefaultRange(param_1, param_2);
    }

    // 0x100048310, 16 bytes, inline, placed by class name
    // Option<ClientWindowMode>::DefaultEnumOptionRange<ClientWindowMode>::GetDefaultRange(ClientWindowMode&, ClientWindowMode&)
    undefined1
    Option<ClientWindowMode>::DefaultEnumOptionRange<ClientWindowMode>::GetDefaultRange(ClientWindowMode* param_1,
                                                                                        ClientWindowMode* param_2) {
        GetEnumRange<ClientWindowMode>(param_1, param_2);
        return 1;
    }

    // 0x100048340, 16 bytes, complete-object constructor, inline, placed by class name
    // Option<ScaledUIQuality>::Option(OptionStore&, char const*, ScaledUIQuality, OptionFlags): jumps straight to the base-object constructor

    // 0x100048350, 80 bytes, base-object constructor, inline, placed by class name
    // Option<ScaledUIQuality>::Option(OptionStore&, char const*, ScaledUIQuality, OptionFlags)
    void Option<ScaledUIQuality>::Option(undefined8 param_2, undefined8 param_3, undefined4 param_4) {
        IOption::IOption();
        *(undefined**)this = PTR_vtable_100ee8a70 + 16;
        *(undefined4*)(this + 28) = param_4;
        *(undefined4*)(this + 32) = param_4;
        std::function<void(ScaledUIQuality)>::function((function<void(ScaledUIQuality)>*)(this + 48));
        *(undefined8*)(this + 104) = 0;
        this[112] = (Option<ScaledUIQuality>)0;
    }

    // 0x1000483b0, 32 bytes, deleting destructor, inline, placed by class name
    // Option<ScaledUIQuality>::~Option()
    void Option<ScaledUIQuality>::~Option() {
        ~Option(this);
        operator_delete(this);
    }

    // 0x1000483d0, 112 bytes, inline, placed by class name
    // Option<ScaledUIQuality>::SetValueFromString(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    undefined8 Option<ScaledUIQuality>::SetValueFromString(fixed_string* param_1) {
        undefined8 uVar1;
        tuple<bool&, ScaledUIQuality&> local_38[16];
        undefined8 local_28;
        undefined4 local_20;
        bool local_19;

        (**(code**)(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        local_28 = OptionEnumValueSerialiser<ScaledUIQuality>::StringToValue(param_1);
        local_38 =
            (tuple<bool&, ScaledUIQuality&>[16])std::tie<bool, ScaledUIQuality>(&local_19, (ScaledUIQuality*)&local_20);
        std::tuple<bool&, ScaledUIQuality&>::operator=(local_38, (tuple*)&local_28);
        if (local_19 == false) {
            uVar1 = 0;
        } else {
            uVar1 = (**(code**)(*(long*)this + 80))(this, local_20, 1);
        }
        return uVar1;
    }

    // 0x100048440, 48 bytes, inline, placed by class name
    // Option<ScaledUIQuality>::GetValueAsString() const
    Option<ScaledUIQuality>* Option<ScaledUIQuality>::GetValueAsString() {
        long in_RSI;

        (**(code**)(**(long**)(in_RSI + 8) + 32))();
        ValueToString(*(undefined4*)(in_RSI + 28));
        return this;
    }

    // 0x100048470, 192 bytes, inline, placed by class name
    // Option<ScaledUIQuality>::GetDescription(int) const
    void Option<ScaledUIQuality>::GetDescription(int param_1) {
        long lVar1;
        undefined8 uVar2;
        undefined4 in_EDX;
        undefined4 in_register_00000034;
        long* plVar3;
        fixed_string<char, 40, true, eastl::allocator> local_160[296];
        undefined8 local_38;

        plVar3 = (long*)CONCAT44(in_register_00000034, param_1);
        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        (**(code**)(*(long*)plVar3[1] + 32))();
        lVar1 = plVar3[2];
        (**(code**)(*plVar3 + 32))(local_160, plVar3);
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(this, "%s <col=%06x>%s</col>", lVar1,
                                                                             in_EDX, uVar2);
        /* WARNING: Subroutine does not return */
        eastl::fixed_string<char, 40, true, eastl::allocator>::~fixed_string(local_160);
    }

    // 0x100048530, 48 bytes, inline, placed by class name
    // Option<ScaledUIQuality>::TriggerValueChangedHandler()
    void Option<ScaledUIQuality>::TriggerValueChangedHandler() {
        if (((this + 48))->operator_cast_to_bool()) {
            std::function<void(ScaledUIQuality)>::operator()((function<void(ScaledUIQuality)>*)(this + 48),
                                                             *(undefined4*)(this + 28));
        }
    }

    // 0x100048560, 32 bytes, inline, placed by class name
    // Option<ScaledUIQuality>::GetRange(ScaledUIQuality&, ScaledUIQuality&) const
    /* Option<hal::Haptics::ImpactStrength>::GetRange(hal::Haptics::ImpactStrength&,
   hal::Haptics::ImpactStrength&) const */

    void Option<hal::Haptics::ImpactStrength>::GetRange(ImpactStrength* param_1, ImpactStrength* param_2) {
        DefaultEnumOptionRange<hal::Haptics::ImpactStrength>::GetDefaultRange(param_1, param_2);
    }

    // 0x100048890, 16 bytes, inline, placed by class name
    // Option<ScaledUIQuality>::DefaultEnumOptionRange<ScaledUIQuality>::GetDefaultRange(ScaledUIQuality&, ScaledUIQuality&)
    /* Option<hal::Haptics::ImpactStrength>::DefaultEnumOptionRange<hal::Haptics::ImpactStrength>::GetDefaultRange(hal::Haptics::ImpactStrength&,
   hal::Haptics::ImpactStrength&) */

    undefined1
    Option<hal::Haptics::ImpactStrength>::DefaultEnumOptionRange<hal::Haptics::ImpactStrength>::GetDefaultRange(
        ImpactStrength* param_1, ImpactStrength* param_2) {
        GetEnumRange<hal::Haptics::ImpactStrength>(param_1, param_2);
        return 1;
    }

    // 0x100048960, 80 bytes, base-object constructor, inline, placed by class name
    // Option<int>::Option(OptionStore&, char const*, int, OptionFlags)
    void Option<int>::Option(undefined8 param_2, undefined8 param_3_00, undefined4 param_3) {
        IOption::IOption();
        *(undefined**)this = PTR_vtable_100ee8aa8 + 16;
        *(undefined4*)(this + 28) = param_3;
        *(undefined4*)(this + 32) = param_3;
        std::function<void(int)>::function((function<void(int)>*)(this + 48));
        *(undefined8*)(this + 104) = 0;
        this[112] = (Option<int>)0;
    }

    // 0x100048c70, 192 bytes, base-object constructor, inline, placed by class name
    // Option<eastl::fixed_string<char, 256, true, eastl::allocator> >::Option(OptionStore&, char const*, eastl::fixed_string<char, 256, true, eastl::allocator>, OptionFlags)
    void Option<eastl::fixed_string<char, 256, true, eastl::allocator>>::Option(
        Option<eastl::fixed_string<char, 256, true, eastl::allocator>>* this, undefined8 param_2, undefined8 param_3,
        fixed_string* param_4) {
        IOption::IOption();
        *(undefined**)this = PTR_vtable_100ee8a68 + 16;
        new ((this + 32)) eastl::fixed_string<char, 256, true, eastl::allocator>(param_4);
        new ((this + 328)) eastl::fixed_string<char, 256, true, eastl::allocator>(param_4);
        std::function<void(eastl::fixed_string<char, 256, true, eastl::allocator>)>::function(
            (function<void(eastl::fixed_string<char, 256, true, eastl::allocator>)>*)(this + 624));
        new ((this + 672)) eastl::fixed_string<char, 256, true, eastl::allocator>();
        *(undefined8*)(this + 968) = 0;
        this[976] = (Option<eastl::fixed_string<char, 256, true, eastl::allocator>>)0;
    }

    // 0x100048d50, 32 bytes, deleting destructor, inline, placed by class name
    // Option<eastl::fixed_string<char, 256, true, eastl::allocator> >::~Option()
    void Option<eastl::fixed_string<char, 256, true, eastl::allocator>>::~Option(
        Option<eastl::fixed_string<char, 256, true, eastl::allocator>>* this) {
        ~Option(this);
        operator_delete(this);
    }

    // 0x100048d70, 80 bytes, inline, placed by class name
    // Option<eastl::fixed_string<char, 256, true, eastl::allocator> >::MainLogic()
    void Option<eastl::fixed_string<char, 256, true, eastl::allocator>>::MainLogic(
        Option<eastl::fixed_string<char, 256, true, eastl::allocator>>* this) {
        long lVar1;
        long lVar2;

        lVar1 = *(long*)(this + 968);
        if (lVar1 != 0) {
            lVar2 = CurrentTimeMillis();
            if (lVar1 <= lVar2) {
                eastl::fixed_string<char, 4096, true, eastl::allocator>::operator=(
                    (fixed_string<char, 4096, true, eastl::allocator>*)(this + 32), (fixed_string*)(this + 672));
                *(undefined8*)(this + 968) = 0;
                (**(code**)(**(long**)(this + 8) + 24))(*(long**)(this + 8), this);
            }
        }
    }

    // 0x100048dc0, 320 bytes, inline, placed by class name
    // Option<eastl::fixed_string<char, 256, true, eastl::allocator> >::SetValueFromString(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    void Option<eastl::fixed_string<char, 256, true, eastl::allocator>>::SetValueFromString(fixed_string* param_1) {
        tuple<bool&, eastl::fixed_string<char, 256, true, eastl::allocator>&> local_3b8[23];
        bool local_3a1;
        fixed_string<char, 256, true, eastl::allocator> local_3a0[296];
        fixed_string local_278[304];
        fixed_string<char, 256, true, eastl::allocator> local_148[296];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        (**(code**)(**(long**)(param_1 + 8) + 32))(*(long**)(param_1 + 8), param_1);
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_148);
        OptionValueSerialiser<eastl::fixed_string<char, 256, true, eastl::allocator>>::StringToValue(local_278);
        local_3b8._0_16_ = std::tie<bool, eastl::fixed_string<char, 256, true, eastl::allocator>>(
            &local_3a1, (fixed_string*)local_148);
        std::tuple<bool&, eastl::fixed_string<char, 256, true, eastl::allocator>&>::operator=(local_3b8,
                                                                                              (tuple*)local_278);
        local_278->~tuple();
        if (local_3a1 == false) {
            /* WARNING: Subroutine does not return */
            local_148->~fixed_string();
        }
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_3a0, (fixed_string*)local_148);
        (**(code**)(*(long*)param_1 + 80))(param_1, local_3a0, 1);
        /* WARNING: Subroutine does not return */
        local_3a0->~fixed_string();
    }

    // 0x100048f00, 48 bytes, inline, placed by class name
    // Option<eastl::fixed_string<char, 256, true, eastl::allocator> >::GetValueAsString() const
    Option<eastl::fixed_string<char, 256, true, eastl::allocator>>*
    Option<eastl::fixed_string<char, 256, true, eastl::allocator>>::GetValueAsString(
        Option<eastl::fixed_string<char, 256, true, eastl::allocator>>* this) {
        long in_RSI;

        (**(code**)(**(long**)(in_RSI + 8) + 32))();
        ValueToString((fixed_string*)(in_RSI + 32));
        return this;
    }

    // 0x100048f30, 192 bytes, inline, placed by class name
    // Option<eastl::fixed_string<char, 256, true, eastl::allocator> >::GetDescription(int) const
    void Option<eastl::fixed_string<char, 256, true, eastl::allocator>>::GetDescription(
        Option<eastl::fixed_string<char, 256, true, eastl::allocator>>* this, int param_1) {
        long lVar1;
        undefined8 uVar2;
        undefined4 in_EDX;
        undefined4 in_register_00000034;
        long* plVar3;
        fixed_string<char, 40, true, eastl::allocator> local_160[296];
        undefined8 local_38;

        plVar3 = (long*)CONCAT44(in_register_00000034, param_1);
        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        (**(code**)(*(long*)plVar3[1] + 32))();
        lVar1 = plVar3[2];
        (**(code**)(*plVar3 + 32))(local_160, plVar3);
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(this, "%s <col=%06x>%s</col>", lVar1,
                                                                             in_EDX, uVar2);
        /* WARNING: Subroutine does not return */
        eastl::fixed_string<char, 40, true, eastl::allocator>::~fixed_string(local_160);
    }

    // 0x100048ff0, 160 bytes, inline, placed by class name
    // Option<eastl::fixed_string<char, 256, true, eastl::allocator> >::TriggerValueChangedHandler()
    void Option<eastl::fixed_string<char, 256, true, eastl::allocator>>::TriggerValueChangedHandler(
        Option<eastl::fixed_string<char, 256, true, eastl::allocator>>* this) {
        fixed_string<char, 256, true, eastl::allocator> local_150[296];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (((this + 624))->operator_cast_to_bool()) {
            eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_150, (fixed_string*)(this + 32));
            std::function<void(eastl::fixed_string<char, 256, true, eastl::allocator>)>::operator()(
                (function<void(eastl::fixed_string<char, 256, true, eastl::allocator>)>*)(this + 624), local_150);
            /* WARNING: Subroutine does not return */
            local_150->~fixed_string();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100049090, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Option<eastl::fixed_string<char, 256, true, eastl::allocator> >::GetDefaultValue() const
    /* game::CombinedLocation::GetModel() const */

    undefined1* game::CombinedLocation::GetModel() {
        return m_model;
    }

    // 0x1000490a0, 128 bytes, inline, placed by class name
    // Option<eastl::fixed_string<char, 256, true, eastl::allocator> >::SetValueDeferred(eastl::fixed_string<char, 256, true, eastl::allocator>, long long, bool)
    undefined4 Option<eastl::fixed_string<char, 256, true, eastl::allocator>>::SetValueDeferred(
        Option<eastl::fixed_string<char, 256, true, eastl::allocator>>* this, fixed_string* param_2, long param_3,
        Option<eastl::fixed_string<char, 256, true, eastl::allocator>> param_4) {
        undefined4 uVar1;
        long lVar2;
        fixed_string<char, 32, true, eastl::allocator>* this_00;

        (**(code**)(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        uVar1 = (**(code**)(*(long*)this + 64))(this, param_2);
        if ((char)uVar1 != '\0') {
            this_00 = (fixed_string<char, 32, true, eastl::allocator>*)(this + 672);
            eastl::fixed_string<char, 32, true, eastl::allocator>::operator=(this_00, param_2);
            lVar2 = this_00->CurrentTimeMillis();
            *(long*)(this + 968) = lVar2 + param_3;
            this[976] = param_4;
        }
        return uVar1;
    }

    // 0x100049480, 192 bytes, base-object constructor, inline, placed by class name
    // Option<WindowSavedPosition>::Option(OptionStore&, char const*, WindowSavedPosition, OptionFlags)
    void Option<WindowSavedPosition>::Option(undefined8 param_2, undefined8 param_3, PacketT* param_4) {
        IOption::IOption();
        *(undefined**)this = PTR_vtable_100ee8a88 + 16;
        new ((this + 32)) WindowSavedPosition(param_4);
        new ((this + 64)) WindowSavedPosition(param_4);
        std::function<void(WindowSavedPosition)>::function((function<void(WindowSavedPosition)>*)(this + 96));
        new ((this + 144)) WindowSavedPosition();
        *(undefined8*)(this + 176) = 0;
        this[184] = (Option<WindowSavedPosition>)0;
    }

    // 0x100049560, 32 bytes, deleting destructor, inline, placed by class name
    // Option<WindowSavedPosition>::~Option()
    void Option<WindowSavedPosition>::~Option() {
        ~Option(this);
        operator_delete(this);
    }

    // 0x100049580, 80 bytes, inline, placed by class name
    // Option<WindowSavedPosition>::MainLogic()
    void Option<WindowSavedPosition>::MainLogic() {
        long lVar1;
        long lVar2;

        lVar1 = *(long*)(this + 176);
        if (lVar1 != 0) {
            lVar2 = CurrentTimeMillis();
            if (lVar1 <= lVar2) {
                PacketJ<Array<unsigned char, eastl::allocator>>::operator=(
                    (PacketJ<Array<unsigned char, eastl::allocator>>*)(this + 32), (PacketJ*)(this + 144));
                *(undefined8*)(this + 176) = 0;
                (**(code**)(**(long**)(this + 8) + 24))(*(long**)(this + 8), this);
            }
        }
    }

    // 0x1000495d0, 224 bytes, inline, placed by class name
    // Option<WindowSavedPosition>::SetValueFromString(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    undefined4 Option<WindowSavedPosition>::SetValueFromString(fixed_string* param_1) {
        undefined4 uVar1;
        fixed_string local_a0[40];
        WindowSavedPosition local_78;
        WindowSavedPosition local_58;
        tuple<bool&, WindowSavedPosition&> local_38[23];
        bool local_21;

        (**(code**)(**(long**)(param_1 + 8) + 32))(*(long**)(param_1 + 8), param_1);
        new (&local_58) WindowSavedPosition();
        OptionValueSerialiser<WindowSavedPosition>::StringToValue(local_a0);
        local_38._0_16_ = std::tie<bool, WindowSavedPosition>(&local_21, &local_58);
        std::tuple<bool&, WindowSavedPosition&>::operator=(local_38, (tuple*)local_a0);
        local_a0->~tuple();
        if (local_21 == false) {
            uVar1 = 0;
        } else {
            new (&local_78) WindowSavedPosition((PacketT*)&local_58);
            uVar1 = (**(code**)(*(long*)param_1 + 80))(param_1, &local_78, 1);
            local_78.~WindowSavedPosition();
        }
        local_58.~WindowSavedPosition();
        return uVar1;
    }

    // 0x1000496b0, 48 bytes, inline, placed by class name
    // Option<WindowSavedPosition>::GetValueAsString() const
    Option<WindowSavedPosition>* Option<WindowSavedPosition>::GetValueAsString() {
        long in_RSI;

        (**(code**)(**(long**)(in_RSI + 8) + 32))();
        ValueToString((WindowSavedPosition*)(in_RSI + 32));
        return this;
    }

    // 0x1000496e0, 192 bytes, inline, placed by class name
    // Option<WindowSavedPosition>::GetDescription(int) const
    void Option<WindowSavedPosition>::GetDescription(int param_1) {
        long lVar1;
        undefined8 uVar2;
        undefined4 in_EDX;
        undefined4 in_register_00000034;
        long* plVar3;
        fixed_string<char, 40, true, eastl::allocator> local_160[296];
        undefined8 local_38;

        plVar3 = (long*)CONCAT44(in_register_00000034, param_1);
        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        (**(code**)(*(long*)plVar3[1] + 32))();
        lVar1 = plVar3[2];
        (**(code**)(*plVar3 + 32))(local_160, plVar3);
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(this, "%s <col=%06x>%s</col>", lVar1,
                                                                             in_EDX, uVar2);
        /* WARNING: Subroutine does not return */
        eastl::fixed_string<char, 40, true, eastl::allocator>::~fixed_string(local_160);
    }

    // 0x1000497a0, 112 bytes, inline, placed by class name
    // Option<WindowSavedPosition>::TriggerValueChangedHandler()
    void Option<WindowSavedPosition>::TriggerValueChangedHandler() {
        WindowSavedPosition aWStackY_1060[128];
        WindowSavedPosition in_stack_ffffffffffffffb8;

        if (((this + 96))->operator_cast_to_bool()) {
            WindowSavedPosition::WindowSavedPosition(aWStackY_1060 + 129, (PacketT*)(this + 32));
            std::function<void(WindowSavedPosition)>::operator()((function<void(WindowSavedPosition)>*)(this + 96),
                                                                 in_stack_ffffffffffffffb8);
            (aWStackY_1060 + 129)->~WindowSavedPosition();
        }
    }

    // 0x100049810, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Option<WindowSavedPosition>::GetDefaultValue() const
    /* LoginManager::GetDevCredentialsOutputDirectory() */

    undefined1* LoginManager::GetDevCredentialsOutputDirectory() {
        return &field_64;
    }

    // 0x100049820, 128 bytes, inline, placed by class name
    // Option<WindowSavedPosition>::SetValue(WindowSavedPosition, bool)
    undefined4 Option<WindowSavedPosition>::SetValue(WindowSavedPosition param_1, bool param_2) {
        undefined4 uVar1;
        char in_DL;
        undefined7 in_register_00000031;

        (**(code**)(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        uVar1 = (**(code**)(*(long*)this + 64))(this, (WindowSavedPosition*)CONCAT71(in_register_00000031, param_2));
        if ((char)uVar1 != '\0') {
            *(undefined8*)(this + 176) = 0;
            WindowSavedPosition::operator=((WindowSavedPosition*)(this + 32),
                                           (WindowSavedPosition*)CONCAT71(in_register_00000031, param_2));
            (**(code**)(**(long**)(this + 8) + 24))(*(long**)(this + 8), this);
            if (in_DL != '\0') {
                (**(code**)(*(long*)this + 48))(this);
            }
        }
        return uVar1;
    }

    // 0x10004a070, 16 bytes, complete-object constructor, inline, placed by class name
    // Option<hal::Haptics::ImpactStrength>::Option(OptionStore&, char const*, hal::Haptics::ImpactStrength, OptionFlags): jumps straight to the base-object constructor

    // 0x10004a080, 80 bytes, base-object constructor, inline, placed by class name
    // Option<hal::Haptics::ImpactStrength>::Option(OptionStore&, char const*, hal::Haptics::ImpactStrength, OptionFlags)
    void Option<hal::Haptics::ImpactStrength>::Option(undefined8 param_2, undefined8 param_3, undefined4 param_4) {
        IOption::IOption();
        *(undefined**)this = PTR_vtable_100ee8a90 + 16;
        *(undefined4*)(this + 28) = param_4;
        *(undefined4*)(this + 32) = param_4;
        std::function<void(hal::Haptics::ImpactStrength)>::function(
            (function<void(hal::Haptics::ImpactStrength)>*)(this + 48));
        *(undefined8*)(this + 104) = 0;
        this[112] = (Option<hal::Haptics::ImpactStrength>)0;
    }

    // 0x10004a0e0, 32 bytes, deleting destructor, inline, placed by class name
    // Option<hal::Haptics::ImpactStrength>::~Option()
    void Option<hal::Haptics::ImpactStrength>::~Option() {
        ~Option(this);
        operator_delete(this);
    }

    // 0x10004a100, 112 bytes, inline, placed by class name
    // Option<hal::Haptics::ImpactStrength>::SetValueFromString(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    undefined8 Option<hal::Haptics::ImpactStrength>::SetValueFromString(fixed_string* param_1) {
        undefined8 uVar1;
        tuple<bool&, hal::Haptics::ImpactStrength&> local_38[16];
        undefined8 local_28;
        undefined4 local_20;
        bool local_19;

        (**(code**)(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        local_28 = OptionEnumValueSerialiser<hal::Haptics::ImpactStrength>::StringToValue(param_1);
        local_38 = (tuple<bool&, hal::Haptics::ImpactStrength&>[16])std::tie<bool, hal::Haptics::ImpactStrength>(
            &local_19, (ImpactStrength*)&local_20);
        std::tuple<bool&, hal::Haptics::ImpactStrength&>::operator=(local_38, (tuple*)&local_28);
        if (local_19 == false) {
            uVar1 = 0;
        } else {
            uVar1 = (**(code**)(*(long*)this + 80))(this, local_20, 1);
        }
        return uVar1;
    }

    // 0x10004a170, 48 bytes, inline, placed by class name
    // Option<hal::Haptics::ImpactStrength>::GetValueAsString() const
    Option<hal::Haptics::ImpactStrength>* Option<hal::Haptics::ImpactStrength>::GetValueAsString() {
        long in_RSI;

        (**(code**)(**(long**)(in_RSI + 8) + 32))();
        ValueToString(*(undefined4*)(in_RSI + 28));
        return this;
    }

    // 0x10004a1a0, 192 bytes, inline, placed by class name
    // Option<hal::Haptics::ImpactStrength>::GetDescription(int) const
    void Option<hal::Haptics::ImpactStrength>::GetDescription(int param_1) {
        long lVar1;
        undefined8 uVar2;
        undefined4 in_EDX;
        undefined4 in_register_00000034;
        long* plVar3;
        fixed_string<char, 40, true, eastl::allocator> local_160[296];
        undefined8 local_38;

        plVar3 = (long*)CONCAT44(in_register_00000034, param_1);
        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        (**(code**)(*(long*)plVar3[1] + 32))();
        lVar1 = plVar3[2];
        (**(code**)(*plVar3 + 32))(local_160, plVar3);
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(this, "%s <col=%06x>%s</col>", lVar1,
                                                                             in_EDX, uVar2);
        /* WARNING: Subroutine does not return */
        eastl::fixed_string<char, 40, true, eastl::allocator>::~fixed_string(local_160);
    }

    // 0x10004a260, 48 bytes, inline, placed by class name
    // Option<hal::Haptics::ImpactStrength>::TriggerValueChangedHandler()
    void Option<hal::Haptics::ImpactStrength>::TriggerValueChangedHandler() {
        if (((this + 48))->operator_cast_to_bool()) {
            std::function<void(hal::Haptics::ImpactStrength)>::operator()(
                (function<void(hal::Haptics::ImpactStrength)>*)(this + 48), *(undefined4*)(this + 28));
        }
    }

    // 0x10004a290, 112 bytes, inline, placed by class name
    // Option<hal::Haptics::ImpactStrength>::SetValue(hal::Haptics::ImpactStrength, bool)
    /* Option<int>::SetValue(int, bool) */

    undefined4 Option<int>::SetValue(int param_1, bool param_2) {
        undefined4 uVar1;
        int local_24;

        local_24 = param_1;
        (**(code**)(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        uVar1 = (**(code**)(*(long*)this + 64))(this, &local_24);
        if ((char)uVar1 != '\0') {
            *(undefined8*)(this + 104) = 0;
            *(int*)(this + 28) = local_24;
            (**(code**)(**(long**)(this + 8) + 24))(*(long**)(this + 8), this);
            if (param_2) {
                (**(code**)(*(long*)this + 48))(this);
            }
        }
        return uVar1;
    }

    // 0x10004a970, 48 bytes, base-object destructor, inline, placed by class name
    // Option<bool>::~Option()
    void Option<bool>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8a98 + 16;
        std::function<void(bool)>::~function((function<void(bool)>*)(this + 32));
        ~AutoSingleton();
    }

    // 0x10004a9a0, 48 bytes, base-object destructor, inline, placed by class name
    // Option<ClientWindowMode>::~Option()
    void Option<ClientWindowMode>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8a78 + 16;
        std::function<void(ClientWindowMode)>::~function((function<void(ClientWindowMode)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x10004a9d0, 48 bytes, base-object destructor, inline, placed by class name
    // Option<ScaledUIQuality>::~Option()
    void Option<ScaledUIQuality>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8a70 + 16;
        std::function<void(ScaledUIQuality)>::~function((function<void(ScaledUIQuality)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x10004aa00, 96 bytes, base-object destructor, inline, placed by class name
    // Option<eastl::fixed_string<char, 256, true, eastl::allocator> >::~Option()
    void Option<eastl::fixed_string<char, 256, true, eastl::allocator>>::~Option(
        Option<eastl::fixed_string<char, 256, true, eastl::allocator>>* this) {
        *(undefined**)this = PTR_vtable_100ee8a68 + 16;
        /* WARNING: Subroutine does not return */
        ((this + 672))->~fixed_string();
    }

    // 0x10004aa60, 80 bytes, base-object destructor, inline, placed by class name
    // Option<WindowSavedPosition>::~Option()
    void Option<WindowSavedPosition>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8a88 + 16;
        ((this + 144))->~WindowSavedPosition();
        std::function<void(WindowSavedPosition)>::~function((function<void(WindowSavedPosition)>*)(this + 96));
        ((this + 64))->~WindowSavedPosition();
        ((this + 32))->~WindowSavedPosition();
        ~AutoSingleton();
    }

    // 0x10004aab0, 48 bytes, base-object destructor, inline, placed by class name
    // Option<hal::Haptics::ImpactStrength>::~Option()
    void Option<hal::Haptics::ImpactStrength>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8a90 + 16;
        std::function<void(hal::Haptics::ImpactStrength)>::~function(
            (function<void(hal::Haptics::ImpactStrength)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x100051000, 16 bytes, complete-object constructor, inline, placed by class name
    // Option<ChatTimestampMode>::Option(OptionStore&, char const*, ChatTimestampMode, OptionFlags): jumps straight to the base-object constructor

    // 0x100051010, 80 bytes, base-object constructor, inline, placed by class name
    // Option<ChatTimestampMode>::Option(OptionStore&, char const*, ChatTimestampMode, OptionFlags)
    void Option<ChatTimestampMode>::Option(undefined8 param_2, undefined8 param_3, undefined4 param_4) {
        IOption::IOption();
        *(undefined**)this = PTR_vtable_100ee8a80 + 16;
        *(undefined4*)(this + 28) = param_4;
        *(undefined4*)(this + 32) = param_4;
        std::function<void(ChatTimestampMode)>::function((function<void(ChatTimestampMode)>*)(this + 48));
        *(undefined8*)(this + 104) = 0;
        this[112] = (Option<ChatTimestampMode>)0;
    }

    // 0x100051070, 32 bytes, deleting destructor, inline, placed by class name
    // Option<ChatTimestampMode>::~Option()
    void Option<ChatTimestampMode>::~Option() {
        ~Option(this);
        operator_delete(this);
    }

    // 0x100051090, 112 bytes, inline, placed by class name
    // Option<ChatTimestampMode>::SetValueFromString(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    undefined8 Option<ChatTimestampMode>::SetValueFromString(fixed_string* param_1) {
        undefined8 uVar1;
        tuple<bool&, ChatTimestampMode&> local_38[16];
        undefined8 local_28;
        undefined4 local_20;
        bool local_19;

        (**(code**)(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        local_28 = OptionEnumValueSerialiser<ChatTimestampMode>::StringToValue(param_1);
        local_38 = (tuple<bool&, ChatTimestampMode&>[16])std::tie<bool, ChatTimestampMode>(
            &local_19, (ChatTimestampMode*)&local_20);
        std::tuple<bool&, ChatTimestampMode&>::operator=(local_38, (tuple*)&local_28);
        if (local_19 == false) {
            uVar1 = 0;
        } else {
            uVar1 = (**(code**)(*(long*)this + 80))(this, local_20, 1);
        }
        return uVar1;
    }

    // 0x100051100, 48 bytes, inline, placed by class name
    // Option<ChatTimestampMode>::GetValueAsString() const
    Option<ChatTimestampMode>* Option<ChatTimestampMode>::GetValueAsString() {
        long in_RSI;

        (**(code**)(**(long**)(in_RSI + 8) + 32))();
        ValueToString(*(undefined4*)(in_RSI + 28));
        return this;
    }

    // 0x100051130, 192 bytes, inline, placed by class name
    // Option<ChatTimestampMode>::GetDescription(int) const
    void Option<ChatTimestampMode>::GetDescription(int param_1) {
        long lVar1;
        undefined8 uVar2;
        undefined4 in_EDX;
        undefined4 in_register_00000034;
        long* plVar3;
        fixed_string<char, 40, true, eastl::allocator> local_160[296];
        undefined8 local_38;

        plVar3 = (long*)CONCAT44(in_register_00000034, param_1);
        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        (**(code**)(*(long*)plVar3[1] + 32))();
        lVar1 = plVar3[2];
        (**(code**)(*plVar3 + 32))(local_160, plVar3);
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(this, "%s <col=%06x>%s</col>", lVar1,
                                                                             in_EDX, uVar2);
        /* WARNING: Subroutine does not return */
        eastl::fixed_string<char, 40, true, eastl::allocator>::~fixed_string(local_160);
    }

    // 0x1000511f0, 48 bytes, inline, placed by class name
    // Option<ChatTimestampMode>::TriggerValueChangedHandler()
    void Option<ChatTimestampMode>::TriggerValueChangedHandler() {
        if (((this + 48))->operator_cast_to_bool()) {
            std::function<void(ChatTimestampMode)>::operator()((function<void(ChatTimestampMode)>*)(this + 48),
                                                               *(undefined4*)(this + 28));
        }
    }

    // 0x100051630, 80 bytes, base-object constructor, inline, placed by class name
    // Option<float>::Option(OptionStore&, char const*, float, OptionFlags)
    void Option<float>::Option(undefined4 param_3, Option<float>* this) {
        IOption::IOption();
        *(undefined**)this = PTR_vtable_100ee8aa0 + 16;
        *(undefined4*)(this + 28) = param_3;
        *(undefined4*)(this + 32) = param_3;
        std::function<void(float)>::function((function<void(float)>*)(this + 48));
        *(undefined8*)(this + 104) = 0;
        this[112] = (Option<float>)0;
    }

    // 0x100051af0, 48 bytes, base-object destructor, inline, placed by class name
    // Option<ChatTimestampMode>::~Option()
    void Option<ChatTimestampMode>::~Option() {
        *(undefined**)this = PTR_vtable_100ee8a80 + 16;
        std::function<void(ChatTimestampMode)>::~function((function<void(ChatTimestampMode)>*)(this + 48));
        ~AutoSingleton();
    }

    // 0x10012ae30, 48 bytes, inline, placed by class name and debug map
    // Option<bool>::GetValue() const
    /* Option<ScaledUIQuality>::GetValue() const */

    Option<ScaledUIQuality>* Option<ScaledUIQuality>::GetValue() {
        (**(code**)(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        return this + 28;
    }

    // 0x10012d410, 48 bytes, inline, placed by class name
    // Option<WindowSavedPosition>::GetValue() const
    /* Option<eastl::fixed_string<char, 256, true, eastl::allocator>
   >::GetValue() const */

    Option<eastl::fixed_string<char, 256, true, eastl::allocator>>*
    Option<eastl::fixed_string<char, 256, true, eastl::allocator>>::GetValue(
        Option<eastl::fixed_string<char, 256, true, eastl::allocator>>* this) {
        (**(code**)(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        return this + 32;
    }

    // 0x10012da20, 128 bytes, inline, placed by class name
    // Option<eastl::fixed_string<char, 256, true, eastl::allocator> >::SetValue(eastl::fixed_string<char, 256, true, eastl::allocator>, bool)
    undefined4 Option<eastl::fixed_string<char, 256, true, eastl::allocator>>::SetValue(
        Option<eastl::fixed_string<char, 256, true, eastl::allocator>>* this, fixed_string* param_2, char param_3) {
        undefined4 uVar1;

        (**(code**)(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        uVar1 = (**(code**)(*(long*)this + 64))(this, param_2);
        if ((char)uVar1 != '\0') {
            *(undefined8*)(this + 968) = 0;
            eastl::fixed_string<char, 32, true, eastl::allocator>::operator=(
                (fixed_string<char, 32, true, eastl::allocator>*)(this + 32), param_2);
            (**(code**)(**(long**)(this + 8) + 24))(*(long**)(this + 8), this);
            if (param_3 != '\0') {
                (**(code**)(*(long*)this + 48))(this);
            }
        }
        return uVar1;
    }

    // 0x10012dc40, 128 bytes, inline, placed by class name
    // Option<WindowSavedPosition>::SetValueDeferred(WindowSavedPosition, long long, bool)
    undefined4 Option<WindowSavedPosition>::SetValueDeferred(WindowSavedPosition param_1, longlong param_2,
                                                             bool param_3) {
        undefined4 uVar1;
        long lVar2;
        Option<WindowSavedPosition> in_CL;
        undefined7 in_register_00000011;
        WindowSavedPosition* this_00;

        (**(code**)(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        uVar1 = (**(code**)(*(long*)this + 64))(this, param_2);
        if ((char)uVar1 != '\0') {
            this_00 = (WindowSavedPosition*)(this + 144);
            WindowSavedPosition::operator=(this_00, (WindowSavedPosition*)param_2);
            lVar2 = this_00->CurrentTimeMillis();
            *(long*)(this + 176) = lVar2 + CONCAT71(in_register_00000011, param_3);
            this[184] = in_CL;
        }
        return uVar1;
    }

    // 0x100131770, 112 bytes, inline, placed by class name
    // Option<bool>::SetValue(bool, bool)
    undefined4 Option<bool>::SetValue(bool param_1, bool param_2) {
        undefined4 uVar1;
        Option<bool> local_21;

        local_21 = (Option<bool>)param_1;
        (**(code**)(**(long**)(this + 8) + 32))(*(long**)(this + 8), this);
        uVar1 = (**(code**)(*(long*)this + 64))(this, &local_21);
        if ((char)uVar1 != '\0') {
            *(undefined8*)(this + 88) = 0;
            this[28] = local_21;
            (**(code**)(**(long**)(this + 8) + 24))(*(long**)(this + 8), this);
            if (param_2) {
                (**(code**)(*(long*)this + 48))(this);
            }
        }
        return uVar1;
    }

} // namespace jag::oldscape::option

namespace jag::oldscape::input {
    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    DefaultInputHandler::KeyPressed(int, unsigned long long);

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    DefaultInputHandler::KeyReleased(int, unsigned long long);

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    DefaultInputHandler::PointerDrag(int, int, int, unsigned long long);

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    DefaultInputHandler::WheelScroll(int, unsigned long long);

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    DefaultInputHandler::PointerPress(int, int, int, int, unsigned long long);

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    DefaultInputHandler::PointerCancel(int, int, unsigned long long);

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    DefaultInputHandler::PointerRelease(int, int, int, int, unsigned long long);

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    DefaultInputHandler::OnLowLevelMouseDown(int, int, int, int);

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    DefaultInputHandler::TextCommandReceived(int, unsigned long long);

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    DefaultInputHandler::KeyboardInputFocusChange(int, unsigned long long);

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    DefaultInputHandler::KeyTyped(char16_t, unsigned long long);

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    DefaultInputHandler::KeyRepeat(int, unsigned long long);

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    DefaultInputHandler::MouseMove(int, int, unsigned long long);

} // namespace jag::oldscape::input

namespace jag::oldscape::dash3d {
    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    ModelLitImpl::IsLit() const;

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    ModelRSevenLit::IsForRSeven() const;

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    ModelRSevenLit::IsLit() const;

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    ModelUnlitImpl::IsUnlit() const;

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    CombineOperation::CanAppend() const;

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    ModelRSevenUnlit::IsForRSeven() const;

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    ModelRSevenUnlit::IsUnlit() const;

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    RecolourOperation::CanAppend() const;

} // namespace jag::oldscape::dash3d

namespace jag::game {
    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    LocTypeCustomisation::GetRecolourDest() const;

    // 0x100049810: the linker folded this into oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const, which has identical code
    EnvColourGradingSettings::GetColourRemapWeightings() const;

} // namespace jag::game

namespace jag::oldscape {
    // 0x10002d850: the linker folded this into option::Option<int>::GetDefaultValue() const, which has identical code
    ConsoleCommandHelp::Description() const;

} // namespace jag::oldscape

namespace jag {
    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    BucketAllocatorEASTL::operator==(BucketAllocatorEASTL const&);

} // namespace jag

namespace jag::input::gesture {
    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    GestureBase::OnTouchUpdate();

} // namespace jag::input::gesture

namespace jag::render {
    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    PixelUnpackBuffer::IsRecyclable() const;

} // namespace jag::render

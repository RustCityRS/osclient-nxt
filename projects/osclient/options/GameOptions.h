// projects/osclient/options/GameOptions.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::option {
    class GameOptions {
    public:
        // virtual methods in vtable order
        virtual ~GameOptions();
        virtual void MainLogic();
        virtual OnOptionValueChanged(IOption*);
        ValidateOptionLoaded(IOption const*);
        GameOptions(bool);
        void BindHandlers();
        void GetScriptOption(GameOptionScriptID);
        bool GetHapticOnMinimenuOpen() const;
        bool GetHapticOnMinimenuHover() const;
        bool GetHapticOnOp() const;
        void ToggleRemoveRoof();
        GetDrawMinimenuHeader() const;
        GetMidiVolume() const;
        GetAmbientVolume() const;
        GetWaveVolume() const;
        GetCameraSensitivity() const;
        GetRemoveRoof() const;
        bool GetHapticOnDrag() const;
        void SetMidiVolume(int);
        void SetWaveVolume(int);
        void SetAmbientVolume(int);
        void SetRemoveRoof(bool);
        bool IsSettingExposed(GameOptionScriptID);
        GetChatTimestampMode() const;
        void SetChatTimestampMode(ChatTimestampMode);
        GetMinimenuLongPressTime() const;

        // data members, from how the methods use this: 1889 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[80];
        bool field_88; // offset 88
        char _unknown_89[7];
        undefined1 field_96; // offset 96
        char _unknown_97[719];
        undefined1 field_816; // offset 816
        char _unknown_817[159];
        undefined1 field_976; // offset 976
        char _unknown_977[159];
        undefined1 field_1136; // offset 1136
        char _unknown_1137[159];
        undefined1 field_1296; // offset 1296
        char _unknown_1297[159];
        undefined1 field_1456; // offset 1456
        char _unknown_1457[159];
        undefined1 field_1616; // offset 1616
        char _unknown_1617[143];
        undefined1 field_1760; // offset 1760
        char _unknown_1761[128];
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    GameOptions::OnOptionValueChanged(IOption*);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    GameOptions::ValidateOptionLoaded(IOption const*);

    // 0x1000235f0, 1264 bytes, base-object constructor, placed by class name
    // GameOptions::GameOptions(bool)
    void GameOptions::GameOptions(bool param_1) {
        bool bVar1;
        Skybox* pSVar2;
        __cxx_atomic_base_impl<bool>* this_00;
        undefined7 in_register_00000031;
        AutoSingleton<hal::Haptics>* pAVar3;
        undefined1 local_40[16];

        new (this) OptionStore();
        field_0 = &PTR__GameOptions_100ef0e58;
        local_40._8_4_ = SUB84(CONCAT71(in_register_00000031, param_1), 0);
        field_88 = param_1;
        new (&field_96, (OptionStore*)this, "RemoveRoof", false) Option<bool>();
        pAVar3 = (AutoSingleton<hal::Haptics>*)&field_208;
        new (pAVar3) ScriptOption<bool, GameOptionScriptID>(1, &field_96);
        pSVar2 = (Skybox*)pAVar3->Instance();
        pAVar3 = (AutoSingleton<hal::Haptics>*)&field_240;
        bVar1 = (bool)pSVar2->ShowSkybox();
        new (pAVar3) Option<bool>(this, "HapticOnOp", bVar1);
        pSVar2 = (Skybox*)pAVar3->Instance();
        pAVar3 = (AutoSingleton<hal::Haptics>*)&field_352;
        bVar1 = (bool)pSVar2->ShowSkybox();
        new (pAVar3) Option<bool>(this, "HapticOnDrag", bVar1);
        pSVar2 = (Skybox*)pAVar3->Instance();
        pAVar3 = (AutoSingleton<hal::Haptics>*)&field_464;
        bVar1 = (bool)pSVar2->ShowSkybox();
        new (pAVar3) Option<bool>(this, "HapticOnMinimenuOpen", bVar1);
        pSVar2 = (Skybox*)pAVar3->Instance();
        bVar1 = (bool)pSVar2->ShowSkybox();
        new (&field_576, (OptionStore*)this, "HapticOnMinimenuEntryHover", bVar1) Option<bool>();
        new (&field_688, (OptionStore*)this, "MinimenuLongPressTime", 600) Option<int>();
        new (local_40) sidebars::SideBarData(0, 100);
        new (&field_816, (OptionStore*)this, "MidiVolume", (Range*)local_40, 25) RangeOption<int>();
        new (&field_944, 7, &field_816) ScriptOption<int, GameOptionScriptID>();
        new (local_40) sidebars::SideBarData(0, 100);
        new (&field_976, (OptionStore*)this, "WaveVolume", (Range*)local_40, 50) RangeOption<int>();
        new (&field_1104, 8, &field_976) ScriptOption<int, GameOptionScriptID>();
        new (local_40) sidebars::SideBarData(0, 100);
        new (&field_1136, (OptionStore*)this, "AmbientVolume", (Range*)local_40, 50) RangeOption<int>();
        new (&field_1264, 9, &field_1136) ScriptOption<int, GameOptionScriptID>();
        new (&field_1296, this, "ChatTimestampMode", 0) Option<ChatTimestampMode>();
        new (&field_1424, 10, &field_1296) ScriptOption<ChatTimestampMode, GameOptionScriptID>();
        new (local_40) jag::math::Point<float>(0.1, 4.0);
        new (&field_1456, (OptionStore*)this, "CameraSensitivity", (Range*)local_40, 2.0) RangeOption<float>();
        new (&field_1584, 11, &field_1456) ScriptOption<float, GameOptionScriptID>();
        new (&field_1616, (OptionStore*)this, "DrawMinimenuHeader", true) Option<bool>();
        new (&field_1728, 12, &field_1616) ScriptOption<bool, GameOptionScriptID>();
        new (&field_1760, (OptionStore*)this, "MinimenuMouseStartIndex", 0) Option<int>();
        pAVar3 = (AutoSingleton<hal::Haptics>*)&field_1888;
        new (pAVar3) ScriptOption<int, GameOptionScriptID>(13, &field_1760);
        this_00 = (__cxx_atomic_base_impl<bool>*)pAVar3->Instance();
        std::__cxx_atomic_base_impl<bool>::__cxx_atomic_base_impl(this_00, local_40[8]);
    }

    // 0x100023b90, 16 bytes, complete-object constructor, placed by class name
    // GameOptions::GameOptions(bool): jumps straight to the base-object constructor

    // 0x100023ba0, 352 bytes, placed by class name
    // GameOptions::BindHandlers()
    void GameOptions::BindHandlers() {
        undefined1 local_88[24];
        Client* local_70;
        undefined8 local_68;
        undefined8 local_60;
        function local_58[48];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_70 = (Client*)Client::OnMidiVolumeChanged;
        local_68 = 0;
        local_60 = Client::Instance();
        std::bind<void (Client::*)(), Client*>((_func_void*)local_88, &local_70);
        std::function<void(int)>::function<std::__bind<void (Client::*)(), Client*>, void>(local_58);
        (&field_816, local_58)->Bind();
        std::function<void(int)>::~function((function<void(int)>*)local_58);
        std::function<void(bool)>::function<GameOptions::BindHandlers()::__32, void>(local_58);
        (&field_1616, local_58)->Bind();
        std::function<void(bool)>::~function((function<void(bool)>*)local_58);
        std::function<void(int)>::function<GameOptions::BindHandlers()::__33, void>(local_58);
        (&field_1760, local_58)->Bind();
        std::function<void(int)>::~function((function<void(int)>*)local_58);
        std::function<void(IOption&)>::function<GameOptions::BindHandlers()::__34, void>(local_58);
        ForEachOption(local_58);
        std::function<void(IOption&)>::~function((function<void(IOption&)>*)local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100023d80, 16 bytes, placed by class name
    // GameOptions::MainLogic()
    void GameOptions::MainLogic() {
        MainLogic();
    }

    // 0x100023d90, 16 bytes, placed by class name
    // GameOptions::GetScriptOption(GameOptionScriptID)
    void GameOptions::GetScriptOption(int param_2) {
        GetScriptOption(param_2);
    }

    // 0x100029ff0, 16 bytes, complete-object destructor, inline, placed by class name
    // GameOptions::~GameOptions(): jumps straight to the base-object destructor

    // 0x10002a000, 32 bytes, deleting destructor, inline, placed by class name
    // GameOptions::~GameOptions()
    void GameOptions::~GameOptions() {
        ~GameOptions(this);
        operator_delete(this);
    }

    // 0x10002f560, 288 bytes, base-object destructor, inline, placed by class name
    // GameOptions::~GameOptions()
    void GameOptions::~GameOptions() {
        pair* in_RSI;

        field_0 = &PTR__GameOptions_100ef0e58;
        (&field_1888, in_RSI)->~ScriptOption();
        (&field_1760)->~RangeOption();
        (&field_1728, in_RSI)->~ScriptOption();
        (&field_1616)->~Option();
        (&field_1584, in_RSI)->~ScriptOption();
        (&field_1456)->~RangeOption();
        (&field_1424, in_RSI)->~ScriptOption();
        (&field_1296)->~Option();
        (&field_1264, in_RSI)->~ScriptOption();
        (&field_1136)->~RangeOption();
        (&field_1104, in_RSI)->~ScriptOption();
        (&field_976)->~RangeOption();
        (&field_944, in_RSI)->~ScriptOption();
        (&field_816)->~RangeOption();
        (&field_688)->~RangeOption();
        (&field_576)->~Option();
        (&field_464)->~Option();
        (&field_352)->~Option();
        (&field_240)->~Option();
        (&field_208, in_RSI)->~ScriptOption();
        (&field_96)->~Option();
        ~OptionStore();
    }

    // 0x100052c70, 48 bytes, placed by class name
    // GameOptions::BindHandlers()::$_32::operator()(bool) const
    /* GameOptions::BindHandlers()::$_32::TEMPNAMEPLACEHOLDERVALUE(bool) const */

    void GameOptions::BindHandlers()::$_32::operator()(bool param_1) {
        long lVar1;

        lVar1 = Client::Instance();
        if (*(Minimenu**)(lVar1 + 52344) != (Minimenu*)0) {
            (*(Minimenu**)(lVar1 + 52344))->SetDrawHeader(SUB81(this, 0));
        }
    }

    // 0x100053400, 48 bytes, placed by class name
    // GameOptions::BindHandlers()::$_33::operator()(int) const
    /* GameOptions::BindHandlers()::$_33::TEMPNAMEPLACEHOLDERVALUE(int) const */

    void GameOptions::BindHandlers()::$_33::operator()(int param_1) {
        long lVar1;

        lVar1 = Client::Instance();
        if (*(Minimenu**)(lVar1 + 52344) != (Minimenu*)0) {
            (*(Minimenu**)(lVar1 + 52344))->SetStartHoverIndex((int)this);
        }
    }

    // 0x100053b90, 16 bytes, placed by class name
    // GameOptions::BindHandlers()::$_34::operator()(IOption&) const
    /* GameOptions::BindHandlers()::$_34::TEMPNAMEPLACEHOLDERVALUE(IOption&)
   const */

    void GameOptions::BindHandlers()::$_34::operator()(IOption* param_1) {
        (**(code**)(*(long*)this + 48))();
    }

    // 0x10006d8c0, 48 bytes, inline, placed by class name and debug map
    // GameOptions::GetHapticOnMinimenuOpen() const
    bool GameOptions::GetHapticOnMinimenuOpen() {
        char* pcVar1;

        if (field_88 == false) {
            return false;
        }
        pcVar1 = (char*)(&field_464)->GetValue();
        return *pcVar1 != '\0';
    }

    // 0x10006e680, 48 bytes, inline, placed by class name and debug map
    // GameOptions::GetHapticOnMinimenuHover() const
    bool GameOptions::GetHapticOnMinimenuHover() {
        char* pcVar1;

        if (field_88 == false) {
            return false;
        }
        pcVar1 = (char*)(&field_576)->GetValue();
        return *pcVar1 != '\0';
    }

    // 0x10006e910, 48 bytes, inline, placed by class name and debug map
    // GameOptions::GetHapticOnOp() const
    bool GameOptions::GetHapticOnOp() {
        char* pcVar1;

        if (field_88 == false) {
            return false;
        }
        pcVar1 = (char*)(&field_240)->GetValue();
        return *pcVar1 != '\0';
    }

    // 0x1000777f0, 64 bytes, inline, placed by class name
    // GameOptions::ToggleRemoveRoof()
    void GameOptions::ToggleRemoveRoof() {
        char* pcVar1;

        pcVar1 = (char*)(&field_96)->GetValue();
        (&field_96, *pcVar1 == '\0', true)->SetValue();
    }

    // 0x1000da820, 32 bytes, inline, placed by class name and debug map
    // GameOptions::GetDrawMinimenuHeader() const
    undefined1 GameOptions::GetDrawMinimenuHeader() {
        undefined1* puVar1;

        puVar1 = (undefined1*)(&field_1616)->GetValue();
        return *puVar1;
    }

    // 0x1000e7a30, 32 bytes, inline, placed by class name
    // GameOptions::GetMidiVolume() const
    undefined4 GameOptions::GetMidiVolume() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&field_816)->GetValue();
        return *puVar1;
    }

    // 0x1000e7a70, 32 bytes, inline, placed by class name
    // GameOptions::GetAmbientVolume() const
    undefined4 GameOptions::GetAmbientVolume() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&field_1136)->GetValue();
        return *puVar1;
    }

    // 0x1000e7a90, 32 bytes, inline, placed by class name
    // GameOptions::GetWaveVolume() const
    undefined4 GameOptions::GetWaveVolume() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&field_976)->GetValue();
        return *puVar1;
    }

    // 0x1000f80b0, 32 bytes, inline, placed by class name
    // GameOptions::GetCameraSensitivity() const
    undefined4 GameOptions::GetCameraSensitivity() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&field_1456)->GetValue();
        return *puVar1;
    }

    // 0x1000fc970, 32 bytes, inline, placed by class name
    // GameOptions::GetRemoveRoof() const
    undefined1 GameOptions::GetRemoveRoof() {
        undefined1* puVar1;

        puVar1 = (undefined1*)(&field_96)->GetValue();
        return *puVar1;
    }

    // 0x100106930, 48 bytes, inline, placed by class name
    // GameOptions::GetHapticOnDrag() const
    bool GameOptions::GetHapticOnDrag() {
        char* pcVar1;

        if (field_88 == false) {
            return false;
        }
        pcVar1 = (char*)(&field_352)->GetValue();
        return *pcVar1 != '\0';
    }

    // 0x10010c920, 32 bytes, inline, placed by class name
    // GameOptions::SetMidiVolume(int)
    void GameOptions::SetMidiVolume(int param_1) {
        (&field_816, param_1, true)->SetValue();
    }

    // 0x10010c940, 32 bytes, inline, placed by class name
    // GameOptions::SetWaveVolume(int)
    void GameOptions::SetWaveVolume(int param_1) {
        (&field_976, param_1, true)->SetValue();
    }

    // 0x10010c960, 32 bytes, inline, placed by class name
    // GameOptions::SetAmbientVolume(int)
    void GameOptions::SetAmbientVolume(int param_1) {
        (&field_1136, param_1, true)->SetValue();
    }

    // 0x10015db40, 32 bytes, inline, placed by class name
    // GameOptions::SetRemoveRoof(bool)
    void GameOptions::SetRemoveRoof(bool param_1) {
        (&field_96, param_1, true)->SetValue();
    }

    // 0x10015e620, 32 bytes, inline, placed by class name
    // GameOptions::IsSettingExposed(GameOptionScriptID)
    bool GameOptions::IsSettingExposed() {
        return GetScriptOption() != 0;
    }

    // 0x10017e010, 32 bytes, inline, placed by class name
    // GameOptions::GetChatTimestampMode() const
    undefined4 GameOptions::GetChatTimestampMode() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&field_1296)->GetValue();
        return *puVar1;
    }

    // 0x10017e0e0, 32 bytes, inline, placed by class name
    // GameOptions::SetChatTimestampMode(ChatTimestampMode)
    void GameOptions::SetChatTimestampMode(int param_2) {
        (&field_1296, param_2, true)->SetValue();
    }

    // 0x10017f150, 32 bytes, inline, placed by class name
    // GameOptions::GetMinimenuLongPressTime() const
    undefined4 GameOptions::GetMinimenuLongPressTime() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&field_688)->GetValue();
        return *puVar1;
    }

} // namespace jag::oldscape::option

namespace jag {
    // 0x1000da890, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::TextureCache>::type make_shared<oldscape::dash3d::TextureCache, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&, int, float const&, int>(oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&, int&&, float const&, int&&)
    jag* jag::make_shared<oldscape::dash3d::TextureCache, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&, int,
                          float const&, int>(Js5** param_1, Js5** param_2, int* param_3, float* param_4, int* param_5) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        TextureCache* local_40[2];

        pvVar1 = (void*)aligned_alloc(120, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::dash3d::TextureCache, oldscape::jagex3::Js5*&,
                                        oldscape::jagex3::Js5*&, int, float const&, int>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::TextureCache>, int,
                                   oldscape::dash3d::TextureCache*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::oldscape {
    // 0x1000da9e0, 16 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_RSeven::Instance()
    long OSRenderCore_LogicThread_RSeven::Instance() {
        return OSRenderCore_AudioThread::Instance() + 16;
    }

} // namespace jag::oldscape

// projects/osclient/options/GameOptions.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::option {
    class GameOptions {
    public:
        // virtual methods in vtable order
        virtual ~GameOptions();
        virtual void MainLogic();
        virtual void OnOptionValueChanged(IOption* arg1);
        void ValidateOptionLoaded(const IOption* arg1);
        GameOptions(bool arg1);
        void BindHandlers();
        long* GetScriptOption(GameOptionScriptID gameOptionScriptID);
        bool GetHapticOnMinimenuOpen() const;
        bool GetHapticOnMinimenuHover() const;
        bool GetHapticOnOp() const;
        void ToggleRemoveRoof();
        uint8_t GetDrawMinimenuHeader() const;
        uint32_t GetMidiVolume() const;
        uint32_t GetAmbientVolume() const;
        uint32_t GetWaveVolume() const;
        uint32_t GetCameraSensitivity() const;
        uint8_t GetRemoveRoof() const;
        bool GetHapticOnDrag() const;
        void SetMidiVolume(int arg1);
        void SetWaveVolume(int arg1);
        void SetAmbientVolume(int arg1);
        void SetRemoveRoof(bool arg1);
        bool IsSettingExposed(GameOptionScriptID gameOptionScriptID);
        uint32_t GetChatTimestampMode() const;
        void SetChatTimestampMode(ChatTimestampMode chatTimestampMode);
        uint32_t GetMinimenuLongPressTime() const;

    private:
        uint8_t _unknown_8[40];
        int field_48;
        uint8_t _unknown_52[36];
        bool field_88;
        uint8_t _unknown_89[1800];
    };

    // 0x100009e70: GameOptions::OnOptionValueChanged(IOption*) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: GameOptions::ValidateOptionLoaded(IOption const*) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1000235f0
    GameOptions::GameOptions(bool arg1) : OptionStore() {
        uint64_t in_register_00000031;
        uint8_t local_40[16];

        local_40._8_4_ = (uint32_t)((((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1));
        field_88 = arg1;
        new (&field_96) Option<bool>(*this, "RemoveRoof", false);
        AutoSingleton<hal::Haptics>* pAVar3 = (AutoSingleton<hal::Haptics>*)&field_208;
        new (pAVar3) ScriptOption<bool, GameOptionScriptID>(1, field_96);
        auto pSVar2 = pAVar3->Instance();
        pAVar3 = (AutoSingleton<hal::Haptics>*)&field_240;
        bool bVar1 = (bool)pSVar2->ShowSkybox();
        new (pAVar3) Option<bool>(*this, "HapticOnOp", bVar1);
        pSVar2 = (Skybox*)pAVar3->Instance();
        pAVar3 = (AutoSingleton<hal::Haptics>*)&field_352;
        bVar1 = (bool)pSVar2->ShowSkybox();
        new (pAVar3) Option<bool>(*this, "HapticOnDrag", bVar1);
        pSVar2 = (Skybox*)pAVar3->Instance();
        pAVar3 = (AutoSingleton<hal::Haptics>*)&field_464;
        bVar1 = (bool)pSVar2->ShowSkybox();
        new (pAVar3) Option<bool>(*this, "HapticOnMinimenuOpen", bVar1);
        pSVar2 = (Skybox*)pAVar3->Instance();
        bVar1 = (bool)pSVar2->ShowSkybox();
        new (&field_576) Option<bool>(*this, "HapticOnMinimenuEntryHover", bVar1);
        new (&field_688) Option<int>(*this, "MinimenuLongPressTime", 600);
        new (local_40) sidebars::SideBarData(0, 100);
        new (&field_816) RangeOption<int>(*this, "MidiVolume", *local_40, 25);
        new (&field_944) ScriptOption<int, GameOptionScriptID>(7, field_816);
        new (local_40) sidebars::SideBarData(0, 100);
        new (&field_976) RangeOption<int>(*this, "WaveVolume", *local_40, 50);
        new (&field_1104) ScriptOption<int, GameOptionScriptID>(8, field_976);
        new (local_40) sidebars::SideBarData(0, 100);
        new (&field_1136) RangeOption<int>(*this, "AmbientVolume", *local_40, 50);
        new (&field_1264) ScriptOption<int, GameOptionScriptID>(9, field_1136);
        new (&field_1296) Option<ChatTimestampMode>(*this, "ChatTimestampMode", 0);
        new (&field_1424) ScriptOption<ChatTimestampMode, GameOptionScriptID>(10, field_1296);
        new (local_40) jag::math::Point(0.1, 4.0);
        new (&field_1456) RangeOption<float>(*this, "CameraSensitivity", *local_40, 2.0);
        new (&field_1584) ScriptOption<float, GameOptionScriptID>(11, field_1456);
        new (&field_1616) Option<bool>(*this, "DrawMinimenuHeader", true);
        new (&field_1728) ScriptOption<bool, GameOptionScriptID>(12, field_1616);
        new (&field_1760) Option<int>(*this, "MinimenuMouseStartIndex", 0);
        pAVar3 = (AutoSingleton<hal::Haptics>*)&field_1888;
        new (pAVar3) ScriptOption<int, GameOptionScriptID>(13, field_1760);
        auto this_00 = pAVar3->Instance();
        new (this_00) std::__cxx_atomic_base_impl(local_40[8]);
    }

    // 0x100023ba0
    void GameOptions::BindHandlers() {
        function<void(int)>* pfVar1;
        function<void(bool)>* this_00;
        uint8_t local_88[24];
        function<void(int)> local_58[48];
        long local_28;

        Client* local_70 = (Client*)Client::OnMidiVolumeChanged;
        uint64_t local_68 = 0;
        auto local_60 = Client::Instance();
        Client** arg2 = &local_70;
        member_function_ptr mVar2 =
            std::bind<void (Client::*)(), Client*>((void__jag__oldscape__Client________)local_88, *arg2);
        pfVar1 = local_58;
        mVar2.ptr = arg2;
        pfVar1->function<std::__bind<void (Client::*)(), Client*>, void>(mVar2);
        field_816.Bind(*pfVar1);
        this_00 = (function<void(bool)>*)local_58;
        std::function<void(bool)>::function<GameOptions::BindHandlers()::__32, void>(this_00, (__32*)pfVar1);
        field_1616.Bind(*this_00);
        pfVar1 = local_58;
        std::function<void(int)>::function<GameOptions::BindHandlers()::__33, void>(pfVar1, (__33*)this_00);
        field_1760.Bind(*pfVar1);
        std::function<void(IOption&)>::function<GameOptions::BindHandlers()::__34, void>(
            (function<void(IOption&)>*)local_58, (__34*)pfVar1);
        ForEachOption(*local_58);
    }

    // 0x100023d80
    void GameOptions::MainLogic() {
        MainLogic();
    }

    // 0x100023d90
    long* GameOptions::GetScriptOption(GameOptionScriptID gameOptionScriptID) {
        return (long*)GetScriptOption(gameOptionScriptID);
    }

    // 0x10002f560
    GameOptions::~GameOptions() {
        field_1888.~ScriptOption();
        field_1760.~RangeOption();
        field_1728.~ScriptOption();
        field_1616.~Option();
        field_1584.~ScriptOption();
        field_1456.~RangeOption();
        field_1424.~ScriptOption();
        field_1296.~Option();
        field_1264.~ScriptOption();
        field_1136.~RangeOption();
        field_1104.~ScriptOption();
        field_976.~RangeOption();
        field_944.~ScriptOption();
        field_816.~RangeOption();
        field_688.~RangeOption();
        field_576.~Option();
        field_464.~Option();
        field_352.~Option();
        field_240.~Option();
        field_208.~ScriptOption();
        field_96.~Option();
    }

    // 0x100052c70
    void GameOptions::BindHandlers()::$_32::operator()(bool arg1) const {
        auto pCVar1 = Client::Instance();
        if (pCVar1->field_52344 != nullptr) {
            pCVar1->field_52344->SetDrawHeader((uint8_t)this);
        }
    }

    // 0x100053400
    void GameOptions::BindHandlers()::$_33::operator()(int arg1) const {
        auto pCVar1 = Client::Instance();
        if (pCVar1->field_52344 != nullptr) {
            pCVar1->field_52344->SetStartHoverIndex((int)this);
        }
    }

    // 0x100053b90
    void GameOptions::BindHandlers()::$_34::operator()(IOption& iOption) const {
        (**(void (**)(...))(field_0 + 48))();
    }

    // 0x10006d8c0
    bool GameOptions::GetHapticOnMinimenuOpen() const {
        if (field_88 == false) {
            return false;
        }
        auto pcVar1 = field_464.GetValue();
        return *pcVar1 != '\0';
    }

    // 0x10006e680
    bool GameOptions::GetHapticOnMinimenuHover() const {
        if (field_88 == false) {
            return false;
        }
        auto pcVar1 = field_576.GetValue();
        return *pcVar1 != '\0';
    }

    // 0x10006e910
    bool GameOptions::GetHapticOnOp() const {
        if (field_88 == false) {
            return false;
        }
        auto pcVar1 = field_240.GetValue();
        return *pcVar1 != '\0';
    }

    // 0x1000777f0
    void GameOptions::ToggleRemoveRoof() {
        auto pcVar1 = field_96.GetValue();
        field_96.SetValue(*pcVar1 == '\0', true);
    }

    // 0x1000da820
    uint8_t GameOptions::GetDrawMinimenuHeader() const {
        auto puVar1 = field_1616.GetValue();
        return *puVar1;
    }

    // 0x1000e7a30
    uint32_t GameOptions::GetMidiVolume() const {
        auto puVar1 = field_816.GetValue();
        return *puVar1;
    }

    // 0x1000e7a70
    uint32_t GameOptions::GetAmbientVolume() const {
        auto puVar1 = field_1136.GetValue();
        return *puVar1;
    }

    // 0x1000e7a90
    uint32_t GameOptions::GetWaveVolume() const {
        auto puVar1 = field_976.GetValue();
        return *puVar1;
    }

    // 0x1000f80b0
    uint32_t GameOptions::GetCameraSensitivity() const {
        auto puVar1 = field_1456.GetValue();
        return *puVar1;
    }

    // 0x1000fc970
    uint8_t GameOptions::GetRemoveRoof() const {
        auto puVar1 = field_96.GetValue();
        return *puVar1;
    }

    // 0x100106930
    bool GameOptions::GetHapticOnDrag() const {
        if (field_88 == false) {
            return false;
        }
        auto pcVar1 = field_352.GetValue();
        return *pcVar1 != '\0';
    }

    // 0x10010c920
    void GameOptions::SetMidiVolume(int arg1) {
        field_816.SetValue(arg1, true);
    }

    // 0x10010c940
    void GameOptions::SetWaveVolume(int arg1) {
        field_976.SetValue(arg1, true);
    }

    // 0x10010c960
    void GameOptions::SetAmbientVolume(int arg1) {
        field_1136.SetValue(arg1, true);
    }

    // 0x10015db40
    void GameOptions::SetRemoveRoof(bool arg1) {
        field_96.SetValue(arg1, true);
    }

    // 0x10015e620
    bool GameOptions::IsSettingExposed(GameOptionScriptID gameOptionScriptID) {
        return GetScriptOption(gameOptionScriptID) != nullptr;
    }

    // 0x10017e010
    uint32_t GameOptions::GetChatTimestampMode() const {
        auto puVar1 = field_1296.GetValue();
        return *puVar1;
    }

    // 0x10017e0e0
    void GameOptions::SetChatTimestampMode(ChatTimestampMode chatTimestampMode) {
        field_1296.SetValue(chatTimestampMode, true);
    }

    // 0x10017f150
    uint32_t GameOptions::GetMinimenuLongPressTime() const {
        auto puVar1 = field_688.GetValue();
        return *puVar1;
    }

} // namespace jag::oldscape::option

namespace jag {
    // 0x1000da890
    shared_ptr_if_not_array<oldscape::dash3d::TextureCache>::type
    make_shared<oldscape::dash3d::TextureCache, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&, int, float const&,
                int>(oldscape::jagex3::Js5*& arg1, oldscape::jagex3::Js5*& arg2, int&& arg3, const float& arg4,
                     int&& arg5) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        TextureCache* local_40[2];

        auto arg1_00 = aligned_alloc(120, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::TextureCache>::type result;
        } else {
            local_40[0] =
                placement_new<oldscape::dash3d::TextureCache, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&, int,
                              float const&, int>((void*)((long)arg1_00 + 32), arg1, arg2, arg3, arg4, arg5);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::TextureCache>, int,
                              oldscape::dash3d::TextureCache*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::oldscape {
    // 0x1000da9e0
    OSRenderCore_LogicThread_RSeven* OSRenderCore_LogicThread_RSeven::Instance() {
        long lVar1 = OSRenderCore_AudioThread::Instance();
        return (OSRenderCore_LogicThread_RSeven*)(lVar1 + 16);
    }

} // namespace jag::oldscape

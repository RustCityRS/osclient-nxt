// libs/hal/settings/SystemSettings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag {
    class SystemSettings {
    public:
        void SetLanguage(const Language* arg1);
        SystemSettings();
        ~SystemSettings();
        void SetModeGame(const ModeGame* modeGame);
        float* GetLanguage() const;
        uint64_t GetModeGame() const;
        uint8_t GetSoftwareNameAsSettingPath() const;
        SystemSettings* GetSoftwareName() const;

    private:
        uint8_t _unknown_0[32];
        uint8_t* field_32;
        uint8_t* m_pModeGame;
        float* m_pLanguage;
        uint8_t _unknown_56[96];
        uint32_t field_152;
        uint16_t field_156;
        uint8_t m_softwareNameAsSettingPath;
        uint8_t _unknown_159[5];
    };

    // 0x100013930: SystemSettings::SetLanguage(Language const*) has the same machine code as oldscape::ClientObj::SetHighlight(oldscape::HighlightChannelProperties const*)

    // 0x1000c4520
    shared_ptr_if_not_array<oldscape::rs2lib::PlayerModel>::type make_shared<oldscape::rs2lib::PlayerModel>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        PlayerModel* local_28[2];

        auto arg1 = aligned_alloc(336, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::PlayerModel>::type result;
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::PlayerModel>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::PlayerModel>, int, oldscape::rs2lib::PlayerModel*&>(
                    arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1000e2f20
    void SystemSettings::SetModeGame(const ModeGame* modeGame) {
        m_pEnc = modeGame;
    }

    // 0x1000fcbb0: SystemSettings::GetLanguage() const has the same machine code as oldscape::ClientObj::GetHighlight()

    // 0x100128e20
    SystemSettings::SystemSettings() {

        new (this) eastl::string("scratch");
        field_32 = ModeWhere::LOCAL;
        m_pModeGame = ModeGame::SCRATCH;
        m_pLanguage = (float*)Language::EN;
        new (&field_56) eastl::string();
        new (&field_88) eastl::string();
        new (&field_120) eastl::string();
        field_152 = 4096;
        field_156 = 0;
        m_softwareNameAsSettingPath = 0;
    }

    // 0x10012a250
    SystemSettings::~SystemSettings() {
        field_120.~basic_string();
        field_88.~basic_string();
        field_56.~basic_string();
    }

    // 0x10019bbb0
    uint64_t SystemSettings::GetModeGame() const {
        return m_spritesArchive;
    }

    // 0x100a63710: SystemSettings::GetSoftwareNameAsSettingPath() const has the same machine code as tweak::Tweaky::IsMinimised()

    // 0x100b16d70
    SystemSettings* SystemSettings::GetSoftwareName() const {
        if (empty() != '\0') {
            LogAssert(
                "!m_SoftwareName.empty()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/SystemSettings.h",
                78, nullptr);
        }
        return this;
    }

} // namespace jag

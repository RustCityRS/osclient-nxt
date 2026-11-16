// libs/hal/settings/SystemSettings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag {
    class SystemSettings {
    public:
        void SetLanguage(Language const*);
        SystemSettings();
        ~SystemSettings();
        SetModeGame(ModeGame const*);
        Language* GetLanguage() const;
        GetModeGame() const;
        GetSoftwareNameAsSettingPath() const;
        SystemSettings* GetSoftwareName() const;

        // data members, from how the methods use this: 164 bytes
        char _unknown_0[32];
        undefined* field_32;    // offset 32
        undefined* m_pModeGame; // offset 40
        Language* m_pLanguage;  // offset 48
        char _unknown_56[96];
        undefined4 field_152;                   // offset 152
        undefined2 field_156;                   // offset 156
        undefined1 m_softwareNameAsSettingPath; // offset 158
        char _unknown_159[5];
    };

    // 0x100013930: the linker folded this into oldscape::ClientObj::SetHighlight(oldscape::HighlightChannelProperties const*), which has identical code
    SystemSettings::SetLanguage(Language const*);

    // 0x1000c44e0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // SystemSettings::SystemSettings(): jumps straight to the base-object constructor

    // 0x1000c4520, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::PlayerModel>::type make_shared<oldscape::rs2lib::PlayerModel>()
    jag* make_shared<oldscape::rs2lib::PlayerModel>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        PlayerModel* local_28[2];

        pvVar1 = (void*)aligned_alloc(336, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::PlayerModel>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::rs2lib::PlayerModel>, int, oldscape::rs2lib::PlayerModel*&>(
                    pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1000c4920, 16 bytes, complete-object destructor, inline, placed by class name
    // SystemSettings::~SystemSettings(): jumps straight to the base-object destructor

    // 0x1000e2f20, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SystemSettings::SetModeGame(ModeGame const*)
    /* oldscape::core::SuperPacket::SetEnc(Isaac&) */

    void oldscape::core::SuperPacket::SetEnc(Isaac* param_1) {
        m_pEnc = param_1;
    }

    // 0x1000fcbb0: the linker folded this into oldscape::ClientObj::GetHighlight(), which has identical code
    Language* SystemSettings::GetLanguage() const;

    // 0x100128e20, 224 bytes, base-object constructor, inline, placed by class name
    // SystemSettings::SystemSettings()
    void SystemSettings::SystemSettings() {
        allocator local_30[8];

        eastl::allocator::allocator(local_30, "EASTL basic_string");
        new (this) eastl::string("scratch", local_30);
        field_32 = ModeWhere::LOCAL;
        m_pModeGame = ModeGame::SCRATCH;
        m_pLanguage = (Language*)Language::EN;
        new (&field_56) eastl::string();
        new (&field_88) eastl::string();
        new (&field_120) eastl::string();
        field_152 = 4096;
        field_156 = 0;
        m_softwareNameAsSettingPath = 0;
    }

    // 0x10012a250, 64 bytes, base-object destructor, inline, placed by class name
    // SystemSettings::~SystemSettings()
    void SystemSettings::~SystemSettings() {
        (&field_120)->~basic_string();
        (&field_88)->~basic_string();
        (&field_56)->~basic_string();
        ~basic_string();
    }

    // 0x10019bbb0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SystemSettings::GetModeGame() const
    /* graphics::RT7TextureDataProvider::GetSpritesArchive() const */

    undefined8 graphics::RT7TextureDataProvider::GetSpritesArchive() {
        return m_spritesArchive;
    }

    // 0x100a63710: the linker folded this into tweak::Tweaky::IsMinimised(), which has identical code
    SystemSettings::GetSoftwareNameAsSettingPath() const;

    // 0x100b16d70, 64 bytes, inline, placed by class name
    // SystemSettings::GetSoftwareName() const
    SystemSettings* SystemSettings::GetSoftwareName() {
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() !=
            '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "!m_SoftwareName.empty()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/SystemSettings.h",
                78, (char*)0);
        }
        return this;
    }

} // namespace jag

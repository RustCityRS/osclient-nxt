// libs/game/runetek5/config/iftype/cutscenes/Cutscene2D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class Cutscene2D {
    public:
        class Scene;
        bool HasScene(unsigned char arg1) const;
        ~Cutscene2D();
        Cutscene2D* operator=(Cutscene2D&& cutscene2D);
        Cutscene2D(Cutscene2D&& cutscene2D);
        Cutscene2D();
        void Play(graphics::RT7Core* rt7Core, graphics::FontManager* fontManager, graphics::FontHelpers* fontHelpers,
                  const math::Rect<int>& rect, float arg5, const Cutscene2DResources& cutscene2DResources,
                  const GlobalCutscene2DResources& globalCutscene2DResources) const;
        auto CalculateCutsceneRescaling(const math::Rect<int>& rect) const;
        void PrepareResourceRequests(Cutscene2DResources* cutscene2DResources) const;
        uint64_t LoadFromPacket(PacketT<Array<unsigned char>>& arg1);
        float GetDurationSec() const;
        uint16_t GetSceneIndex(StringView stringView) const;
        void GetSceneStartSec(unsigned char arg1) const;
        void GetSceneEndSec(unsigned char arg1) const;
        float GetSceneDurationSec(unsigned char arg1) const;
        static float m_playbackSpeed;                      // = 1.0f
        static int32_t m_debugIsolateImageElementIndex[4]; // = { -1, 0, 0, 0 }

    private:
        long field_0;
        Scene* field_8;
        uint8_t _unknown_16[680];
        unsigned short field_696;
        unsigned short field_698;
        uint16_t field_700;
        uint8_t _unknown_702[6];
    };

    class Cutscene2DImageElement {
    public:
        uint64_t LoadFromPacket(PacketT<Array<unsigned char>>& arg1, int arg2);
        ~Cutscene2DImageElement();
        Cutscene2DImageElement(Cutscene2DImageElement&& cutscene2DImageElement);
        Cutscene2DImageElement* operator=(Cutscene2DImageElement&& cutscene2DImageElement);
        Cutscene2DImageElement();

    private:
        uint8_t _unknown_0[72];
        uint16_t field_72;
        uint16_t field_74;
        uint32_t field_76;
        uint8_t _unknown_80[160];
    };

    class Cutscene2DPlaybackState {
    public:
        float GetElapsedTimeSec() const;
        float GetPauseTimeSec() const;
        void GetPlaybackTimeSec() const;
        bool IsPaused() const;
        void WasDisplayedRecently() const;
        void Advance(float arg1);
        void SetDisplayedRecently(bool arg1);
        void Reset();
        void SetPausedByUser(bool arg1);
        void IsPausedByUser() const;
        void IsPausedBySystem() const;
        void SetPausedBySystem(bool arg1, float arg2);
        Cutscene2DPlaybackState();

    private:
        uint8_t _unknown_0[4];
        float m_elapsedTimeSec;
        float m_pauseTimeSec;
        uint8_t _unknown_12[4];
    };

    // 0x100524900
    bool Cutscene2D::HasScene(unsigned char arg1) const {
        uint8_t bVar1 = size();
        return arg1 < (unsigned int)bVar1;
    }

    // 0x1005249f0
    void Cutscene2DPlaybackState::IsPausedBySystem() const {
        test(1);
    }

    // 0x100524a00
    void Cutscene2DPlaybackState::SetPausedBySystem(bool arg1, float arg2) {
        if (HasAlphaParticles() == '\0') {
            m_pauseTimeSec = arg2;
        }
        *this = eastl::bitset<3ul, unsigned char>::set(1, arg1);
    }

    // 0x100524be0
    uint64_t GlobalCutscene2DResources::GetSubtitleFont(unsigned char arg1) const {
        uint64_t local_28;

        long lVar1 = field_8.find(arg1);
        long lVar2 = field_8.end();
        if (lVar1 == lVar2) {
            local_28 = std::optional();
        } else {
            local_28.optional<int const&, 0>(*((lVar1 + 4)));
        }
        return local_28;
    }

    // 0x10052a050
    Cutscene2D::~Cutscene2D() {}

    // 0x10052d920
    Cutscene2D* Cutscene2D::operator=(Cutscene2D&& cutscene2D) {
        *this = cutscene2D;
        unsigned short uVar1 = cutscene2D.field_698;
        field_696 = cutscene2D.field_696;
        field_698 = uVar1;
        field_700 = cutscene2D.field_700;
        return this;
    }

    // 0x100530cc0
    Cutscene2D::Cutscene2D(Cutscene2D&& cutscene2D)
        : eastl::fixed_vector<Cutscene2D::Scene, 1ul>(cutscene2D), field_700(cutscene2D.field_700) {
        unsigned short uVar1 = cutscene2D.field_698;
        field_696 = cutscene2D.field_696;
        field_698 = uVar1;
    }

    // 0x100542310
    Cutscene2DImageElement::Cutscene2DImageElement() : eastl::fixed_string<char, 32>() {}

} // namespace jag::game

namespace jag::graphics {
    class SunlightEffectSaveRestore {
    public:
        SunlightEffectSaveRestore(SunlightDirectLighting& sunlightDirectLighting,
                                  const DirectionalLight& directionalLight);
        SunlightEffectSaveRestore(SunlightDirectLighting& sunlightDirectLighting);
        ~SunlightEffectSaveRestore();

    private:
        SunlightDirectLighting* field_0;
        DirectionalLight field_8;
    };

    // 0x1003d1590
    SunlightEffectSaveRestore::SunlightEffectSaveRestore(SunlightDirectLighting& sunlightDirectLighting,
                                                         const DirectionalLight& directionalLight)
        : field_0(sunlightDirectLighting) {
        DirectionalLight* directionalLight_00;

        directionalLight_00 = (DirectionalLight*)field_0->GetDefaultValue();
        *field_8 = *directionalLight_00;
        field_0->SetSunlight(directionalLight);
    }

    // 0x10053d8d0
    SunlightEffectSaveRestore::SunlightEffectSaveRestore(SunlightDirectLighting& sunlightDirectLighting)
        : field_0(sunlightDirectLighting) {
        DirectionalLight* directionalLight;

        directionalLight = (DirectionalLight*)field_0->GetDefaultValue();
        *field_8 = *directionalLight;
    }

    // 0x10053d910
    SunlightEffectSaveRestore::~SunlightEffectSaveRestore() {
        field_0->SetSunlight(*field_8);
    }

} // namespace jag::graphics

namespace jag::fixedfunction {
    // 0x1005249c0
    void function<void(unsigned int, game::CutscenePlaybackEndReason), 64ul, 16ul, (Methods)0>::operator()<
        unsigned int&, game::CutscenePlaybackEndReason&>(unsigned int& arg1,
                                                         game::CutscenePlaybackEndReason& cutscenePlaybackEndReason) {
        (**(void (**)(...))this)(this + 16, arg1, cutscenePlaybackEndReason);
    }

} // namespace jag::fixedfunction

namespace jag::game::helpers {
    // 0x100524b80
    void AcquireCutsceneAudio(Cutscene2DResources* cutscene2DResources, SoundManager* soundManager, int arg3) {
        soundManager->ClaimVorbis(cutscene2DResources, 14, arg3, 1, 255, 5, 4, 0, 0, *PTR_ZERO_100ee66e8, -1,
                                  (int)(*(float*)PTR_m_playbackSpeed_100ee65b0 * 256.0), 0, false);
    }

} // namespace jag::game::helpers

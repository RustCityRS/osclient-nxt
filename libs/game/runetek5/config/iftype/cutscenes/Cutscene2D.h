// libs/game/runetek5/config/iftype/cutscenes/Cutscene2D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class Cutscene2D {
    public:
        class Scene;
        bool HasScene(unsigned char) const;
        ~Cutscene2D();
        Cutscene2D* operator=(Cutscene2D&&);
        Cutscene2D(Cutscene2D&&);
        Cutscene2D();
        void Play(graphics::RT7Core*, graphics::FontManager*, graphics::FontHelpers*, math::Rect<int> const&, float,
                  Cutscene2DResources const&, GlobalCutscene2DResources const&) const;
        CalculateCutsceneRescaling(math::Rect<int> const&) const;
        void PrepareResourceRequests(Cutscene2DResources*) const;
        LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator>>&);
        float GetDurationSec() const;
        GetSceneIndex(StringView) const;
        void GetSceneStartSec(unsigned char) const;
        void GetSceneEndSec(unsigned char) const;
        float GetSceneDurationSec(unsigned char) const;
        static float /* 4 bytes */ m_playbackSpeed;            // = 1.0f
        static /* 16 bytes */ m_debugIsolateImageElementIndex; // = { -1, 0, 0, 0 }

        // data members, from how the methods use this: 708 bytes
        long field_0;   // offset 0
        Scene* field_8; // offset 8
        char _unknown_16[680];
        ushort field_696;     // offset 696
        ushort field_698;     // offset 698
        undefined2 field_700; // offset 700
        char _unknown_702[6];
    };

    class Cutscene2DImageElement {
    public:
        LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        ~Cutscene2DImageElement();
        Cutscene2DImageElement(Cutscene2DImageElement&&);
        Cutscene2DImageElement* operator=(Cutscene2DImageElement&&);
        Cutscene2DImageElement();

        // data members, from how the methods use this: 240 bytes
        char _unknown_0[72];
        undefined2 field_72; // offset 72
        undefined2 field_74; // offset 74
        undefined4 field_76; // offset 76
        char _unknown_80[160];
    };

    class Cutscene2DPlaybackState {
    public:
        float GetElapsedTimeSec() const;
        float GetPauseTimeSec() const;
        void GetPlaybackTimeSec() const;
        IsPaused() const;
        WasDisplayedRecently() const;
        void Advance(float);
        void SetDisplayedRecently(bool);
        void Reset();
        void SetPausedByUser(bool);
        IsPausedByUser() const;
        IsPausedBySystem() const;
        void SetPausedBySystem(bool, float);
        Cutscene2DPlaybackState();

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[4];
        float m_elapsedTimeSec; // offset 4
        float m_pauseTimeSec;   // offset 8
        char _unknown_12[4];
    };

    // 0x100524900, 32 bytes, inline, placed by class name and debug map
    // Cutscene2D::HasScene(unsigned char) const
    bool Cutscene2D::HasScene(uchar param_1) {
        byte bVar1;
        undefined3 in_register_00000031;

        bVar1 = size();
        return CONCAT31(in_register_00000031, param_1) < (uint)bVar1;
    }

    // 0x1005249f0, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Cutscene2DPlaybackState::IsPausedBySystem() const
    /* graphics::ModularParticleSystemTemplate::HasAlphaLateParticles() const */

    void graphics::ModularParticleSystemTemplate::HasAlphaLateParticles() {
        test(1);
    }

    // 0x100524a00, 80 bytes, inline, placed by debug map only (low confidence)
    // Cutscene2DPlaybackState::SetPausedBySystem(bool, float)
    void Cutscene2DPlaybackState::SetPausedBySystem(bool param_1, float param_2) {
        char cVar1;

        cVar1 = HasAlphaParticles();
        if (cVar1 == '\0') {
            m_pauseTimeSec = param_2;
        }
        set(1, param_1);
    }

    // 0x100524be0, 96 bytes, placed by debug map only (low confidence)
    // GlobalCutscene2DResources::GetSubtitleFont(unsigned char) const
    undefined8 GlobalCutscene2DResources::GetSubtitleFont(uchar param_1) {
        long lVar1;
        long lVar2;
        undefined8 local_28;
        uchar local_19;

        local_19 = param_1;
        lVar1 = (&field_8, &local_19)->find();
        lVar2 = (&field_8)->end();
        if (lVar1 == lVar2) {
            new (&local_28) std::optional<int>();
        } else {
            std::optional<int>::optional<int const&, 0>((int*)&local_28);
        }
        return local_28;
    }

    // 0x10052a040, 16 bytes, complete-object destructor, inline, placed by class name
    // Cutscene2D::~Cutscene2D(): jumps straight to the base-object destructor

    // 0x10052a050, 16 bytes, base-object destructor, inline, placed by class name
    // Cutscene2D::~Cutscene2D()
    void Cutscene2D::~Cutscene2D() {
        ~fixed_vector();
    }

    // 0x10052d920, 64 bytes, inline, placed by class name
    // Cutscene2D::operator=(Cutscene2D&&)
    /* Cutscene2D::TEMPNAMEPLACEHOLDERVALUE(Cutscene2D&&) */

    Cutscene2D* Cutscene2D::operator=(Cutscene2D* param_1) {
        ushort uVar1;

        eastl::fixed_vector<Cutscene2D::Scene, 1ul, true, eastl::allocator>::operator=(
            (fixed_vector<Cutscene2D::Scene, 1ul, true, eastl::allocator>*)this, (fixed_vector*)param_1);
        uVar1 = param_1->field_698;
        field_696 = param_1->field_696;
        field_698 = uVar1;
        field_700 = param_1->field_700;
        return this;
    }

    // 0x100530cb0, 16 bytes, complete-object constructor, inline, placed by class name
    // Cutscene2D::Cutscene2D(Cutscene2D&&): jumps straight to the base-object constructor

    // 0x100530cc0, 64 bytes, base-object constructor, inline, placed by class name
    // Cutscene2D::Cutscene2D(Cutscene2D&&)
    void Cutscene2D::Cutscene2D(Cutscene2D* param_1) {
        ushort uVar1;

        new (this) eastl::fixed_vector<Cutscene2D::Scene, 1ul, true, eastl::allocator>(param_1);
        field_700 = param_1->field_700;
        uVar1 = param_1->field_698;
        field_696 = param_1->field_696;
        field_698 = uVar1;
    }

    // 0x100542300, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Cutscene2DImageElement::Cutscene2DImageElement(): jumps straight to the base-object constructor

    // 0x100542310, 160 bytes, base-object constructor, inline, placed by class header (inline)
    // Cutscene2DImageElement::Cutscene2DImageElement()
    void Cutscene2DImageElement::Cutscene2DImageElement() {
        new (this) eastl::fixed_string<char, 32, true, eastl::allocator>();
        new (&field_80) Cutscene2DAnimation<float>();
        new (&field_128) Cutscene2DAnimation<float>();
        new (&field_176) Cutscene2DAnimation<math::Vector2T<float>>();
        new (&field_232) Cutscene2DAnimation<math::Vector2T<float>>();
    }

} // namespace jag::game

namespace jag::graphics {
    class SunlightEffectSaveRestore {
    public:
        SunlightEffectSaveRestore(SunlightDirectLighting&, DirectionalLight const&);
        SunlightEffectSaveRestore(SunlightDirectLighting&);
        ~SunlightEffectSaveRestore();

        // data members, from how the methods use this: 160 bytes
        SunlightDirectLighting* field_0; // offset 0
        DirectionalLight field_8;        // offset 8
    };

    // 0x1003d1590, 80 bytes, base-object constructor, inline, placed by class header (inline)
    // SunlightEffectSaveRestore::SunlightEffectSaveRestore(SunlightDirectLighting&, DirectionalLight const&)
    void SunlightEffectSaveRestore::SunlightEffectSaveRestore(SunlightDirectLighting* param_1,
                                                              DirectionalLight* param_2) {
        DirectionalLight* pDVar1;

        field_0 = param_1;
        new (field_8) DirectionalLight();
        pDVar1 = (DirectionalLight*)field_0->GetDefaultValue();
        DirectionalLight::operator=((DirectionalLight*)field_8, pDVar1);
        (field_0, param_2)->SetSunlight();
    }

    // 0x10053d8d0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // SunlightEffectSaveRestore::SunlightEffectSaveRestore(SunlightDirectLighting&)
    void SunlightEffectSaveRestore::SunlightEffectSaveRestore(SunlightDirectLighting* param_1) {
        DirectionalLight* pDVar1;

        field_0 = param_1;
        new (field_8) DirectionalLight();
        pDVar1 = (DirectionalLight*)field_0->GetDefaultValue();
        DirectionalLight::operator=((DirectionalLight*)field_8, pDVar1);
    }

    // 0x10053d910, 32 bytes, base-object destructor, inline, placed by class header (inline)
    // SunlightEffectSaveRestore::~SunlightEffectSaveRestore()
    void SunlightEffectSaveRestore::~SunlightEffectSaveRestore() {
        (field_0, (DirectionalLight*)field_8)->SetSunlight();
    }

} // namespace jag::graphics

namespace jag::fixedfunction {
    // 0x1005249c0, 32 bytes, inline, placed by debug map only (low confidence)
    // void function<void (unsigned int, game::CutscenePlaybackEndReason), 64ul, 16ul, (Methods)0>::operator()<unsigned int&, game::CutscenePlaybackEndReason&>(unsigned int&, game::CutscenePlaybackEndReason&)
    /* void function<void (unsigned int, game::CutscenePlaybackEndReason),
   64ul, 16ul, (Methods)0>::TEMPNAMEPLACEHOLDERVALUE(unsigned int&,
   game::CutscenePlaybackEndReason&) */

    void
    fixedfunction::function<void(unsigned int, game::CutscenePlaybackEndReason), 64ul, 16ul, (Methods)0>::operator()(
        function<void(unsigned int, game::CutscenePlaybackEndReason), 64ul, 16ul, (Methods)0>* this, uint* param_1,
        CutscenePlaybackEndReason* param_2) {
        (**(code**)this)(this + 16, *param_1, *(undefined4*)param_2);
    }

} // namespace jag::fixedfunction

namespace jag::game::helpers {
    // 0x100524b80, 96 bytes, placed by debug map only (low confidence)
    // AcquireCutsceneAudio(Cutscene2DResources*, SoundManager*, int)
    void AcquireCutsceneAudio(Cutscene2DResources* param_1, SoundManager* param_2, int param_3) {
        param_2->ClaimVorbis(param_1, 14, param_3, 1, 255, 5, 4, 0, 0, PTR_ZERO_100ee66e8, 18446744073709551615,
                             (int)(*(float*)PTR_m_playbackSpeed_100ee65b0 * 256.0), 0, 0);
    }

} // namespace jag::game::helpers

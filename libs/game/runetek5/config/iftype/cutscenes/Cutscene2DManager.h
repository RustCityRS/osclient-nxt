// libs/game/runetek5/config/iftype/cutscenes/Cutscene2DManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class Cutscene2DManager {
    public:
        class ActiveCutsceneData;
        class PreloadRequest;
        // virtual methods in vtable order
        virtual ~Cutscene2DManager();
        Cutscene2DManager(Js5ResourceProvider* js5ResourceProvider, ConfigProvider* configProvider,
                          graphics::RT7Core* rt7Core, graphics::FontManager* fontManager,
                          graphics::FontHelpers* fontHelpers, SoundManager* soundManager);
        void MainDraw(float arg1);
        uint64_t GetPlaybackParam(CutsceneParamID cutsceneParamID, unsigned char arg2) const;
        void StopPlayback(CutscenePlaybackEndReason cutscenePlaybackEndReason);
        void LoadActiveCutsceneResources(float arg1);
        void PlayActiveCutscene(const math::Rect<int>& rect);
        void Preload(unsigned int arg1);
        void FlushPreloadedCutscenes();
        unsigned long StartPlayback(unsigned int arg1, bool arg2);
        void RestartPlayback();
        void TriggerCutscenePlaybackEndCallbacks(unsigned int arg1, bool arg2,
                                                 CutscenePlaybackEndReason cutscenePlaybackEndReason);
        unsigned long SetPlaybackParam(CutsceneParamID cutsceneParamID, unsigned char arg2, int arg3);
        uint16_t GetPlaybackSceneIndex(StringView stringView) const;
        static float m_debugEnableFullScreenAutoplay[4]; // = { 0, 0, 0, 0 }

    private:
        Js5ResourceProvider* field_8;
        ConfigProvider* field_16;
        RT7Core* field_24;
        FontManager* field_32;
        FontHelpers* field_40;
        SoundManager* field_48;
        uint8_t _unknown_56[200];
        unsigned int field_256;
        uint8_t _unknown_260[36];
        unsigned int field_296;
        uint8_t _unknown_300[36];
        unsigned int field_336;
        uint8_t _unknown_340[4];
        Cutscene2DResources field_344;
        Cutscene2DPlaybackState field_2464;
        GlobalCutscene2DResources field_2480;
        uint8_t _unknown_2496[28];
    };

    class Cutscene2DManager::ActiveCutsceneData {
    public:
        bool IsValid() const;
        ActiveCutsceneData();
        ~ActiveCutsceneData();
        void Reset();
        bool IsPlayable() const;
        void FlagPlayable();
        void SetPaused(bool arg1);

    private:
        uint32_t field_0;
        uint8_t _unknown_4[1];
        char field_5;
        uint8_t _unknown_6[2130];
    };

    class Cutscene2DManager::PreloadRequest {
    public:
        ~PreloadRequest();
        uint16_t Ready() const;
        PreloadRequest* operator=(PreloadRequest&& preloadRequest);
        PreloadRequest();
        PreloadRequest(PreloadRequest&& preloadRequest);

    private:
        uint16_t field_0;
        uint8_t _unknown_2[6];
        Cutscene2DResources field_8;
    };

    // 0x1005231b0
    uint16_t Cutscene2DManager::PreloadRequest::Ready() const {
        return field_0 != 5000;
    }

    // 0x100524610
    bool Cutscene2DManager::ActiveCutsceneData::IsPlayable() const {
        bool bVar2;

        if (IsValid() == '\0') {
            bVar2 = false;
        } else {
            bVar2 = field_5 != '\0';
        }
        return bVar2;
    }

    // 0x1005249e0
    void Cutscene2DManager::ActiveCutsceneData::FlagPlayable() {
        field_5 = '\x01';
    }

    // 0x1005297a0
    Cutscene2DManager::ActiveCutsceneData::ActiveCutsceneData() : field_0(4294967295) {
        *(uint16_t*)&field_4 = 0;
        new (&field_8) Cutscene2DResources();
        new (&field_2128) Cutscene2DPlaybackState();
    }

    // 0x100529eb0
    Cutscene2DManager::ActiveCutsceneData::~ActiveCutsceneData() {
        field_8->~Cutscene2DResources();
    }

    // 0x100531220
    void Cutscene2DManager::Cutscene2DManager(
        Js5ResourceProvider*, ConfigProvider*, graphics::RT7Core*, graphics::FontManager*, graphics::FontHelpers*,
        SoundManager*)::$_0::operator()(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                                        const shared_ptr<PacketT<Array<unsigned char>>>& arg5,
                                        const Array<shared_ptr<PacketT<Array<unsigned char>>>, eastl::allocator>* arg6)
        const {
        Cutscene2D* this_00;
        uint32_t in_register_00000014;
        uint8_t local_2e0[712];

        long lVar1 = field_0;
        if (!(*((shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)(((uint64_t)in_register_00000014 << 32) |
                                                                     (uint32_t)arg2))) != nullptr) {
            LogAssert("rawData != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DManager.cpp",
                      37, nullptr);
        }
        new (local_2e0) Cutscene2D();
        auto arg1_00 =
            *(*((shared_ptr<PacketT<Array<unsigned char>>>*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2)));
        if (local_2e0->LoadFromPacket(*arg1_00) == '\0') {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DManager.cpp",
                      46, "Could not decode sprite cutscene %u", arg1);
        } else {
            this_00 = (Cutscene2D*)(*((lVar1 + 256)))[arg1];
            *this_00 = *local_2e0;
        }
    }

    // 0x1005313f0
    bool Cutscene2DManager::MainDraw(float)::$_1::operator()(
        const eastl::pair<unsigned int, Cutscene2DManager::PreloadRequest>& arg1) const {
        return field_8 == 0;
    }

    // 0x100531440
    PreloadRequest* Cutscene2DManager::PreloadRequest::operator=(Cutscene2DManager::PreloadRequest&& preloadRequest) {
        field_0 = preloadRequest.field_0;
        *field_8 = preloadRequest.field_8;
        return this;
    }

    // 0x1005325e0
    Cutscene2DManager::PreloadRequest::PreloadRequest(Cutscene2DManager::PreloadRequest&& preloadRequest)
        : field_0(preloadRequest.field_0), field_8(preloadRequest.field_8) {}

    // 0x100532880
    Cutscene2DManager::PreloadRequest::PreloadRequest() : field_0(5000) {}

    // 0x100534f70
    Cutscene2DManager::~Cutscene2DManager() {
        field_2480->~GlobalCutscene2DResources();
        field_160.~function();
        field_64.~function();
    }

} // namespace jag::game

// libs/graphics/runetek7/gui/debug/DebugOverlay.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class DebugOverlay {
    public:
        void GetInput() const;
        void GetRT7Core() const;
        FontHelpers* GetFontHelpers() const;
        void SetExpandGraphs(bool arg1);
        void SetShow(bool arg1);
        void ShowGraphs();
        void GetFont() const;
        DebugOverlay(input::Input& input, graphics::RT7Core& rt7Core, graphics::FontHelpers& fontHelpers, bool arg4);
        void Init(const shared_ptr<graphics::Font>& font);
        void AddSection(const shared_ptr<DebugOverlaySection>& debugOverlaySection);
        void AddDefaultSections();
        void AddTimingSections();
        void AddMemorySections();
        void AddRenderingSections();
        void HideAllSections();
        uint64_t ShowSection(DebugOverlaySection::SectionType sectionType);
        uint64_t HideSection(DebugOverlaySection::SectionType sectionType);
        void MainLogic();
        void RegisterTweakVars(tweak::ContainerGroup& containerGroup);
        void DrawDebugOverlaySections();
        void MainDraw(const shared_ptr<graphics::Font>& font);
        void DrawDebugRealTimeLogging();
        void DrawString(const char* str, int arg2, int arg3, unsigned int arg4, unsigned int arg5,
                        graphics::FontAlign fontAlign, bool arg7);

    private:
        Input* field_0;
        RT7Core* field_8;
        FontHelpers* m_fontHelpers;
        bool m_show;
        bool m_expandGraphs;
        uint8_t _unknown_26[2];
        uint32_t field_28;
        int field_32;
        unsigned int field_36;
        uint8_t field_40;
        uint8_t _unknown_41[15];
        uint8_t field_56;
        uint8_t _unknown_57[31];
    };

    class DebugOverlayAudio {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayAudio();
        virtual void Draw(unsigned long long arg1, int arg2, int arg3);
        virtual uint64_t Update(unsigned long long arg1);
        virtual void RegisterTweakyVars(tweak::Container& container);
        virtual void SetHeight(int arg1);
        DebugOverlayAudio(DebugOverlay& debugOverlay, bool arg2);
        void DrawSoundManagerDebugData(int arg1, int arg2);

    private:
        DebugOverlay* field_8;
        uint8_t _unknown_16[4];
        unsigned int field_20;
        uint8_t _unknown_24[84];
        int field_108;
        int field_112;
        int field_116;
        bool field_120;
        uint8_t field_121;
        uint8_t _unknown_122[2];
        SectionType field_124;
    };

    class DebugOverlayGPU {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayGPU();
        virtual void RegisterTweakyVars(tweak::Container& container);
        virtual void DrawImpl(int arg1, int arg2);
        virtual uint8_t UpdateImpl(unsigned long long arg1);
        DebugOverlayGPU(DebugOverlay& debugOverlay, bool arg2);

    private:
        uint8_t _unknown_8[104];
        int field_112;
        uint8_t _unknown_116[4];
        bool field_120;
        uint8_t _unknown_121[7];
        TimedGraph field_128;
    };

    class DebugOverlayMainFPS {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayMainFPS();
        virtual uint8_t* GetTitle() const;
        virtual void GetFPSCounter() const;
        DebugOverlayMainFPS(DebugOverlay& debugOverlay, bool arg2);

    private:
        uint8_t _unknown_8[120];
        TimedGraph field_128;
    };

    class DebugOverlayOcclusion {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayOcclusion();
        virtual void Draw(unsigned long long arg1, int arg2, int arg3);
        virtual uint8_t Update(unsigned long long arg1);
        virtual void RegisterTweakyVars(tweak::Container& container);
        DebugOverlayOcclusion(const graphics::EffectManager& effectManager, DebugOverlay& debugOverlay, bool arg3);

    private:
        DebugOverlay* field_8;
        uint64_t field_16;
        uint8_t _unknown_24[84];
        int field_108;
        int field_112;
        uint8_t _unknown_116[4];
        bool field_120;
        uint8_t field_121;
        uint8_t _unknown_122[2];
        SectionType field_124;
        EffectManager* field_128;
    };

    class DebugOverlayProfiler {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayProfiler();
        virtual void Draw(unsigned long long arg1, int arg2, int arg3);
        virtual uint8_t Update(unsigned long long arg1);
        DebugOverlayProfiler(DebugOverlay& debugOverlay, bool arg2);

    private:
        DebugOverlay* field_8;
        uint64_t field_16;
        uint8_t _unknown_24[80];
        uint64_t field_104;
        uint64_t field_112;
        bool field_120;
        uint8_t field_121;
        uint8_t _unknown_122[2];
        SectionType field_124;
    };

    class DebugOverlayRender {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayRender();
        virtual void RegisterTweakyVars(tweak::Container& container);
        virtual void DrawImpl(int arg1, int arg2);
        virtual uint32_t UpdateImpl(unsigned long long arg1);
        DebugOverlayRender(DebugOverlay& debugOverlay, bool arg2);

    private:
        RT7Core* field_8;
        uint8_t _unknown_16[96];
        int field_112;
        uint8_t _unknown_116[4];
        bool field_120;
        uint8_t _unknown_121[15];
    };

    class DebugOverlayShaderProfiler {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayShaderProfiler();
        virtual void Draw(unsigned long long arg1, int arg2, int arg3);
        virtual uint8_t Update(unsigned long long arg1);
        virtual void RegisterTweakyVars(tweak::Container& container);
        DebugOverlayShaderProfiler(DebugOverlay& debugOverlay, bool arg2);

    private:
        DebugOverlay* field_8;
        uint64_t field_16;
        uint8_t _unknown_24[80];
        uint64_t field_104;
        uint64_t field_112;
        bool field_120;
        uint8_t field_121;
        uint8_t _unknown_122[2];
        SectionType field_124;
    };

    class DebugOverlayTextureAtlas {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayTextureAtlas();
        virtual void Draw(unsigned long long arg1, int arg2, int arg3);
        virtual uint8_t Update(unsigned long long arg1);
        virtual void RegisterTweakyVars(tweak::Container& container);
        DebugOverlayTextureAtlas(DebugOverlay& debugOverlay, bool arg2);

    private:
        DebugOverlay* field_8;
        uint64_t field_16;
        uint8_t _unknown_24[80];
        uint64_t field_104;
        uint64_t field_112;
        bool field_120;
        uint8_t field_121;
        uint8_t _unknown_122[2];
        SectionType field_124;
    };

    // 0x100601d40
    void DebugOverlay::ShowGraphs() {
        DebugOverlayGraphSection::ShowGraphs();
    }

    // 0x1008a7f60
    void DebugOverlay::GetFont() const {
        *field_40;
    }

    // 0x100911690
    DebugOverlayMainFPS::DebugOverlayMainFPS(DebugOverlay& debugOverlay, bool arg2)
        : DebugOverlayFPS(debugOverlay, false, arg2) {}

} // namespace jag

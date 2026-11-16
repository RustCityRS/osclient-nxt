// libs/graphics/runetek7/gui/debug/DebugOverlay.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class DebugOverlay {
    public:
        GetInput() const;
        GetRT7Core() const;
        FontHelpers* GetFontHelpers() const;
        SetExpandGraphs(bool);
        void SetShow(bool);
        void ShowGraphs();
        void GetFont() const;
        DebugOverlay(input::Input&, graphics::RT7Core&, graphics::FontHelpers&, bool);
        void Init(shared_ptr<graphics::Font> const&);
        void AddSection(shared_ptr<DebugOverlaySection> const&);
        void AddDefaultSections();
        void AddTimingSections();
        void AddMemorySections();
        void AddRenderingSections();
        void HideAllSections();
        ShowSection(DebugOverlaySection::SectionType);
        HideSection(DebugOverlaySection::SectionType);
        void MainLogic();
        void RegisterTweakVars(tweak::ContainerGroup&);
        void DrawDebugOverlaySections();
        void MainDraw(shared_ptr<graphics::Font> const&);
        void DrawDebugRealTimeLogging();
        void DrawString(char const*, int, int, unsigned int, unsigned int, graphics::FontAlign, bool);

        // data members, from how the methods use this: 88 bytes
        Input* field_0;             // offset 0
        RT7Core* field_8;           // offset 8
        FontHelpers* m_fontHelpers; // offset 16
        bool m_show;                // offset 24
        bool m_expandGraphs;        // offset 25
        char _unknown_26[2];
        undefined4 field_28; // offset 28
        int field_32;        // offset 32
        uint field_36;       // offset 36
        undefined1 field_40; // offset 40
        char _unknown_41[15];
        undefined1 field_56; // offset 56
        char _unknown_57[31];
    };

    class DebugOverlayAudio {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayAudio();
        virtual void Draw(unsigned long long, int, int);
        virtual Update(unsigned long long);
        virtual void RegisterTweakyVars(tweak::Container&);
        virtual void SetHeight(int);
        DebugOverlayAudio(DebugOverlay&, bool);
        void DrawSoundManagerDebugData(int, int);

        // data members, from how the methods use this: 128 bytes
        undefined** field_0;                                                       // offset 0, vtable pointer
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* field_8; // offset 8
        char _unknown_16[4];
        uint field_20; // offset 20
        char _unknown_24[84];
        int field_108;        // offset 108
        int m_height;         // offset 112
        int field_116;        // offset 116
        bool field_120;       // offset 120
        undefined1 field_121; // offset 121
        char _unknown_122[2];
        undefined4 field_124; // offset 124
    };

    class DebugOverlayGPU {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayGPU();
        virtual void RegisterTweakyVars(tweak::Container&);
        virtual void DrawImpl(int, int);
        virtual UpdateImpl(unsigned long long);
        DebugOverlayGPU(DebugOverlay&, bool);

        // data members, from how the methods use this: 98600 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[104];
        int field_112; // offset 112
        char _unknown_116[4];
        bool field_120; // offset 120
        char _unknown_121[7];
        TimedGraph field_128; // offset 128
    };

    class DebugOverlayMainFPS {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayMainFPS();
        virtual GetTitle() const;
        virtual void GetFPSCounter() const;
        DebugOverlayMainFPS(DebugOverlay&, bool);

        // data members, from how the methods use this: 98600 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[120];
        TimedGraph field_128; // offset 128
    };

    class DebugOverlayOcclusion {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayOcclusion();
        virtual void Draw(unsigned long long, int, int);
        virtual Update(unsigned long long);
        virtual void RegisterTweakyVars(tweak::Container&);
        DebugOverlayOcclusion(graphics::EffectManager const&, DebugOverlay&, bool);

        // data members, from how the methods use this: 136 bytes
        undefined** field_0;                                                       // offset 0, vtable pointer
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* field_8; // offset 8
        undefined8 field_16;                                                       // offset 16
        char _unknown_24[84];
        int field_108; // offset 108
        int field_112; // offset 112
        char _unknown_116[4];
        bool field_120;       // offset 120
        undefined1 field_121; // offset 121
        char _unknown_122[2];
        undefined4 field_124;     // offset 124
        EffectManager* field_128; // offset 128
    };

    class DebugOverlayProfiler {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayProfiler();
        virtual void Draw(unsigned long long, int, int);
        virtual Update(unsigned long long);
        DebugOverlayProfiler(DebugOverlay&, bool);

        // data members, from how the methods use this: 128 bytes
        undefined** field_0;             // offset 0, vtable pointer
        _func_decltype_nullptr* field_8; // offset 8
        undefined8 field_16;             // offset 16
        char _unknown_24[80];
        undefined8 field_104; // offset 104
        undefined8 field_112; // offset 112
        undefined1 field_120; // offset 120
        undefined1 field_121; // offset 121
        char _unknown_122[2];
        undefined4 field_124; // offset 124
    };

    class DebugOverlayRender {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayRender();
        virtual void RegisterTweakyVars(tweak::Container&);
        virtual void DrawImpl(int, int);
        virtual UpdateImpl(unsigned long long);
        DebugOverlayRender(DebugOverlay&, bool);

        // data members, from how the methods use this: 136 bytes
        undefined** field_0; // offset 0, vtable pointer
        RT7Core* field_8;    // offset 8
        char _unknown_16[96];
        int field_112; // offset 112
        char _unknown_116[4];
        bool field_120; // offset 120
        char _unknown_121[15];
    };

    class DebugOverlayShaderProfiler {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayShaderProfiler();
        virtual void Draw(unsigned long long, int, int);
        virtual Update(unsigned long long);
        virtual void RegisterTweakyVars(tweak::Container&);
        DebugOverlayShaderProfiler(DebugOverlay&, bool);

        // data members, from how the methods use this: 128 bytes
        undefined** field_0;                                                       // offset 0, vtable pointer
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* field_8; // offset 8
        undefined8 field_16;                                                       // offset 16
        char _unknown_24[80];
        undefined8 field_104; // offset 104
        undefined8 field_112; // offset 112
        bool field_120;       // offset 120
        undefined1 field_121; // offset 121
        char _unknown_122[2];
        undefined4 field_124; // offset 124
    };

    class DebugOverlayTextureAtlas {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayTextureAtlas();
        virtual void Draw(unsigned long long, int, int);
        virtual Update(unsigned long long);
        virtual void RegisterTweakyVars(tweak::Container&);
        DebugOverlayTextureAtlas(DebugOverlay&, bool);

        // data members, from how the methods use this: 128 bytes
        undefined** field_0;                                                       // offset 0, vtable pointer
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* field_8; // offset 8
        undefined8 field_16;                                                       // offset 16
        char _unknown_24[80];
        undefined8 field_104; // offset 104
        undefined8 field_112; // offset 112
        bool field_120;       // offset 120
        undefined1 field_121; // offset 121
        char _unknown_122[2];
        undefined4 field_124; // offset 124
    };

    // 0x100601d40, 16 bytes, inline, placed by class name and debug map
    // DebugOverlay::ShowGraphs()
    void DebugOverlay::ShowGraphs() {
        DebugOverlayGraphSection::ShowGraphs();
    }

    // 0x1008a7f60, 16 bytes, inline, placed by class name and debug map
    // DebugOverlay::GetFont() const
    void DebugOverlay::GetFont() {
        shared_ptr<graphics::Font>::operator*((shared_ptr<graphics::Font>*)&field_40);
    }

    // 0x100911680, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // DebugOverlayMainFPS::DebugOverlayMainFPS(DebugOverlay&, bool): jumps straight to the base-object constructor

    // 0x100911690, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // DebugOverlayMainFPS::DebugOverlayMainFPS(DebugOverlay&, bool)
    void DebugOverlayMainFPS::DebugOverlayMainFPS(DebugOverlay* param_1, bool param_2) {
        new (this) DebugOverlayFPS(param_1, false, param_2);
        field_0 = &PTR__DebugOverlayRenderFPS_100f18a60;
    }

} // namespace jag

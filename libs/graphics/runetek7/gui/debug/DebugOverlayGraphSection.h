// libs/graphics/runetek7/gui/debug/DebugOverlayGraphSection.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class DebugOverlayGraphSection : public DebugOverlaySection // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayGraphSection();
        virtual void Draw(unsigned long long, int, int);
        virtual void Update(unsigned long long);
        virtual void SetHeight(int);
        virtual void DrawTextString(eastl::fixed_string<char, 512, true, eastl::allocator> const&, int, int,
                                    unsigned int, int, graphics::FontAlign);
        void ShowGraphs();
        void RegisterGraphTweaks(tweak::Container&);
        DebugOverlayGraphSection(DebugOverlay&, DebugOverlaySection::SectionType, bool, unsigned int, float);
        void DrawGraph(int, int, unsigned long long);
        static /* 4 bytes */ m_graphDuration; // = 15
        static /* 4 bytes */ m_showGraphs;    // = 1

        // data members, from how the methods use this: 98656 bytes, the first 132 are DebugOverlaySection
        char _unknown_132[98508];
        int field_98640; // offset 98640
        char _unknown_98644[4];
        ulonglong field_98648; // offset 98648
    };

    // 0x1006020a0, 16 bytes, inline, placed by class name and debug map
    // DebugOverlayGraphSection::ShowGraphs()
    void DebugOverlayGraphSection::ShowGraphs() {
        m_showGraphs = 1;
    }

    // 0x1008fc140, 48 bytes, base-object destructor, inline, placed by class name
    // DebugOverlayGraphSection::~DebugOverlayGraphSection()
    void DebugOverlayGraphSection::~DebugOverlayGraphSection() {
        field_0 = &PTR__OptionStore_100f18730;
        field_128->~TimedGraph();
        ~AutoSingleton();
    }

} // namespace jag

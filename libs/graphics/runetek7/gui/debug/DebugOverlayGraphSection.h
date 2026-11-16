// libs/graphics/runetek7/gui/debug/DebugOverlayGraphSection.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class DebugOverlayGraphSection : public DebugOverlaySection // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayGraphSection();
        virtual void Draw(unsigned long long arg1, int arg2, int arg3);
        virtual void Update(unsigned long long arg1);
        virtual void SetHeight(int arg1);
        virtual void DrawTextString(const eastl::fixed_string<char, 512>& str, int arg2, int arg3, unsigned int arg4,
                                    int arg5, graphics::FontAlign fontAlign);
        void ShowGraphs();
        void RegisterGraphTweaks(tweak::Container& container);
        DebugOverlayGraphSection(DebugOverlay& debugOverlay, DebugOverlaySection::SectionType sectionType, bool arg3,
                                 unsigned int arg4, float arg5);
        void DrawGraph(int arg1, int arg2, unsigned long long arg3);
        static int32_t m_graphDuration; // = 15
        static int32_t m_showGraphs;    // = 1

    private:
        uint8_t _unknown_132[98508];
        int field_98640;
        uint8_t _unknown_98644[4];
        unsigned long long field_98648;
    };

    // 0x1006020a0
    void DebugOverlayGraphSection::ShowGraphs() {
        m_showGraphs = 1;
    }

    // 0x1008fc140
    DebugOverlayGraphSection::~DebugOverlayGraphSection() {
        field_128.~TimedGraph();
    }

} // namespace jag

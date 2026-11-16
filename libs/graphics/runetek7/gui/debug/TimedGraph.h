// libs/graphics/runetek7/gui/debug/TimedGraph.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class TimedGraph {
    public:
        class Values;
        TimedGraph(unsigned int arg1, float arg2);
        ~TimedGraph();
        void Draw(graphics::GUIManager& guiManager, int arg2, int arg3, int arg4, int arg5, unsigned long long arg6,
                  int arg7, int arg8);
        void RecordValue(unsigned long long arg1, int arg2);
        void PrintMeanRecordedValues(const char* str) const;
        int GetTotal(unsigned long long arg1, int arg2) const;
        void Reset();
        void DrawMarkers(graphics::GUIManager& guiManager, graphics::FontHelpers& fontHelpers, graphics::Font& font,
                         int arg4, int arg5, int arg6, int arg7, unsigned long long arg8, int arg9, int arg10);
        uint32_t GetMean() const;
        uint32_t GetMax() const;
        void SetMaximum(int arg1);
        void SetHighIsGood();
        uint32_t GetMin() const;

    private:
        uint8_t _unknown_0[72];
        long field_72;
        uint8_t _unknown_80[98336];
        unsigned long field_98416;
        uint8_t field_98424;
        uint8_t _unknown_98425[3];
        int field_98428;
        uint8_t _unknown_98432[16];
        int m_maximum;
        uint32_t m_mean;
        uint32_t m_min;
        uint8_t _unknown_98460[12];
    };

    class TimedGraph::Values {
    public:
        Values();

    private:
        uint64_t field_0;
        uint64_t field_8;
    };

    // 0x1008fc0a0
    uint32_t TimedGraph::GetMean() const {
        return m_mean;
    }

    // 0x1008fc0b0
    uint32_t TimedGraph::GetMax() const {
        return *(uint32_t*)&field_98460;
    }

    // 0x1008fc4b0
    void TimedGraph::SetMaximum(int arg1) {
        m_maximum = arg1;
    }

    // 0x1008fcaa0
    void TimedGraph::SetHighIsGood() {
        field_98424 = 1;
    }

    // 0x1008fd220
    uint32_t TimedGraph::GetMin() const {
        return m_min;
    }

    // 0x1009048a0
    TimedGraph::TimedGraph(unsigned int arg1, float arg2)
        : eastl::fixed_list<TimedGraph::Element, 3072ul>(), field_98416(0), field_98424(0), field_98428(0),
          field_98464(arg1, arg2) {}

    // 0x100904ac0
    TimedGraph::Values::Values() : field_0(1), field_8(0) {}

    // 0x100904d40
    TimedGraph::~TimedGraph() {
        field_98464.~DataRecorder();
    }

} // namespace jag

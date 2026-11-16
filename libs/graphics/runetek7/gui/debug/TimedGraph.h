// libs/graphics/runetek7/gui/debug/TimedGraph.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class TimedGraph {
    public:
        class Values;
        TimedGraph(unsigned int, float);
        ~TimedGraph();
        void Draw(graphics::GUIManager&, int, int, int, int, unsigned long long, int, int);
        void RecordValue(unsigned long long, int);
        void PrintMeanRecordedValues(char const*) const;
        int GetTotal(unsigned long long, int) const;
        void Reset();
        void DrawMarkers(graphics::GUIManager&, graphics::FontHelpers&, graphics::Font&, int, int, int, int,
                         unsigned long long, int, int);
        GetMean() const;
        GetMax() const;
        void SetMaximum(int);
        void SetHighIsGood();
        GetMin() const;

        // data members, from how the methods use this: 98472 bytes
        char _unknown_0[72];
        long field_72; // offset 72
        char _unknown_80[98336];
        ulong field_98416;      // offset 98416
        undefined1 field_98424; // offset 98424
        char _unknown_98425[3];
        int field_98428; // offset 98428
        char _unknown_98432[16];
        int m_maximum;     // offset 98448
        undefined4 m_mean; // offset 98452
        undefined4 m_min;  // offset 98456
        char _unknown_98460[12];
    };

    class TimedGraph::Values {
    public:
        Values();

        // data members, from how the methods use this: 16 bytes
        undefined8 field_0; // offset 0
        undefined8 field_8; // offset 8
    };

    // 0x1008fa420, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // TimedGraph::TimedGraph(unsigned int, float): jumps straight to the base-object constructor

    // 0x1008fa490, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // TimedGraph::~TimedGraph(): jumps straight to the base-object destructor

    // 0x1008fc0a0, 16 bytes, inline, placed by class name
    // TimedGraph::GetMean() const
    undefined4 TimedGraph::GetMean() {
        return m_mean;
    }

    // 0x1008fc0b0, 16 bytes, inline, placed by class name
    // TimedGraph::GetMax() const
    undefined4 TimedGraph::GetMax() {
        return *(undefined4*)&field_98460;
    }

    // 0x1008fc4b0, 16 bytes, inline, placed by class name
    // TimedGraph::SetMaximum(int)
    void TimedGraph::SetMaximum(int param_1) {
        m_maximum = param_1;
    }

    // 0x1008fcaa0, 16 bytes, inline, placed by class name
    // TimedGraph::SetHighIsGood()
    void TimedGraph::SetHighIsGood() {
        field_98424 = 1;
    }

    // 0x1008fd220, 16 bytes, inline, placed by class name
    // TimedGraph::GetMin() const
    undefined4 TimedGraph::GetMin() {
        return m_min;
    }

    // 0x1009048a0, 128 bytes, base-object constructor, inline, placed by class name
    // TimedGraph::TimedGraph(unsigned int, float)
    void TimedGraph::TimedGraph(uint param_1, float param_2) {
        undefined4 in_register_00000034;
        _func_decltype_nullptr* p_Var1;

        p_Var1 = (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1);
        new (this) eastl::fixed_list<TimedGraph::Element, 3072ul, true, eastl::allocator>();
        field_98416 = 0;
        field_98424 = 0;
        field_98428 = 0;
        new (&field_98432, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&m_maximum) Values();
        new (&field_98464, param_1, param_2) DataRecorder<TimedGraph::Values>();
    }

    // 0x100904930, 16 bytes, complete-object constructor, inline, placed by class name
    // TimedGraph::Values::Values(): jumps straight to the base-object constructor

    // 0x100904ac0, 16 bytes, base-object constructor, inline, placed by class name
    // TimedGraph::Values::Values()
    void TimedGraph::Values::Values() {
        field_0 = 1;
        field_8 = 0;
    }

    // 0x100904d40, 48 bytes, base-object destructor, inline, placed by class name
    // TimedGraph::~TimedGraph()
    void TimedGraph::~TimedGraph() {
        (&field_98464)->~DataRecorder();
        ~fixed_list();
    }

} // namespace jag

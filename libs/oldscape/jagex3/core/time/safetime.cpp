// libs/oldscape/jagex3/core/time/safetime.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::core {
    class SafeTime {
    public:
        long CurrentTimeMillis();
        static int64_t m_lastTime;
        static int64_t m_offset;

        uint8_t _unknown_0[1];
    };

    // 0x103936088
    int64_t SafeTime::m_lastTime;

    // 0x103936090
    int64_t SafeTime::m_offset;

    // 0x1003495c0
    long SafeTime::CurrentTimeMillis() {
        unsigned long long uVar1 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
        if ((long)uVar1 < (long)m_lastTime) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/core/time/"
                      "safetime.cpp",
                      20, "WARNING: SafeTime: time jumped back by %lld ms", m_lastTime - uVar1);
            m_offset = m_offset + (m_lastTime - uVar1);
        }
        m_lastTime = uVar1;
        return m_offset + uVar1;
    }

} // namespace jag::oldscape::core

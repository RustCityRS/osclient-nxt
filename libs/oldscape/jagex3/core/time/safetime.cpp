// libs/oldscape/jagex3/core/time/safetime.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::core {
    class SafeTime {
    public:
        long CurrentTimeMillis();
        static /* 8 bytes */ m_lastTime;
        static /* 8 bytes */ m_offset;

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x103936088, 8 bytes, __common; zero-initialised
    SafeTime::m_lastTime;

    // 0x103936090, 8 bytes, __common; zero-initialised
    SafeTime::m_offset;

    // 0x1003495c0, 128 bytes, placed by class name and debug map
    // SafeTime::CurrentTimeMillis()
    long SafeTime::CurrentTimeMillis() {
        ulonglong uVar1;
        undefined8 uVar2;

        uVar1 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this);
        if ((long)uVar1 < (long)m_lastTime) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "core/time/safetime.cpp",
                                20, "WARNING: SafeTime: time jumped back by %lld ms", m_lastTime - uVar1);
            m_offset = m_offset + (m_lastTime - uVar1);
        }
        m_lastTime = uVar1;
        return m_offset + uVar1;
    }

} // namespace jag::oldscape::core

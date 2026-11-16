// _unplaced/libs/graphics/unity_1.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    // 0x104232e40, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x104232e80, 16 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

    // 0x100975e70, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100975ed0, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x100975ef0, 528 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.44
    void ___cxx_global_var_init_44() {
        undefined* puVar1;
        int iVar2;

        if (*PTR_m_basAnimTypeNames_100ee4940 == '\0') {
            iVar2 = ___cxa_guard_acquire(PTR_m_basAnimTypeNames_100ee4940);
            puVar1 = PTR_m_basAnimTypeNames_100ee6a08;
            if (iVar2 != 0) {
                StringView::StringView<6ul>((StringView*)PTR_m_basAnimTypeNames_100ee6a08, "Ready");
                StringView::StringView<14ul>((StringView*)(puVar1 + 16), "ReadyTurnLeft");
                StringView::StringView<15ul>((StringView*)(puVar1 + 32), "ReadyTurnRight");
                StringView::StringView<12ul>((StringView*)(puVar1 + 48), "WalkForward");
                StringView::StringView<13ul>((StringView*)(puVar1 + 64), "WalkBackward");
                StringView::StringView<9ul>((StringView*)(puVar1 + 80), "WalkLeft");
                StringView::StringView<10ul>((StringView*)(puVar1 + 96), "WalkRight");
                StringView::StringView<13ul>((StringView*)(puVar1 + 112), "WalkTurnLeft");
                StringView::StringView<14ul>((StringView*)(puVar1 + 128), "WalkTurnRight");
                StringView::StringView<11ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 144), "RunForward");
                StringView::StringView<12ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 160), "RunBackward");
                StringView::StringView<8ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 176), "RunLeft");
                StringView::StringView<9ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 192), "RunRight");
                StringView::StringView<12ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 208), "RunTurnLeft");
                StringView::StringView<13ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 224), "RunTurnRight");
                StringView::StringView<13ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 240), "CrawlForward");
                StringView::StringView<14ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 256), "CrawlBackward");
                StringView::StringView<10ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 272), "CrawlLeft");
                StringView::StringView<11ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 288), "CrawlRight");
                StringView::StringView<14ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 304), "CrawlTurnLeft");
                StringView::StringView<15ul>((StringView*)(PTR_m_basAnimTypeNames_100ee6a08 + 320), "CrawlTurnRight");
                ___cxa_guard_release(PTR_m_basAnimTypeNames_100ee4940);
            }
        }
    }

} // namespace jag::graphics

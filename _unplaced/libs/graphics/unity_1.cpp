// _unplaced/libs/graphics/unity_1.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    // 0x104232e40
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x104232e80
    uint8_t WORLD_ORTHOGONAL[16];

    // 0x100975e70
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100975ed0
    void ___cxx_global_var_init_1(void) {
        new ((ColourHSL*)&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x100975ef0
    void ___cxx_global_var_init_44(void) {
        uint8_t* puVar1;
        int iVar2;

        if (*PTR_m_basAnimTypeNames_100ee4940 == '\0') {
            iVar2 = ___cxa_guard_acquire(PTR_m_basAnimTypeNames_100ee4940);
            puVar1 = PTR_m_basAnimTypeNames_100ee6a08;
            if (iVar2 != 0) {
                PTR_m_basAnimTypeNames_100ee6a08->StringView<6ul>("Ready");
                ((puVar1 + 16))->StringView<14ul>("ReadyTurnLeft");
                ((puVar1 + 32))->StringView<15ul>("ReadyTurnRight");
                ((puVar1 + 48))->StringView<12ul>("WalkForward");
                ((puVar1 + 64))->StringView<13ul>("WalkBackward");
                ((puVar1 + 80))->StringView<9ul>("WalkLeft");
                ((puVar1 + 96))->StringView<10ul>("WalkRight");
                ((puVar1 + 112))->StringView<13ul>("WalkTurnLeft");
                ((puVar1 + 128))->StringView<14ul>("WalkTurnRight");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 144))->StringView<11ul>("RunForward");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 160))->StringView<12ul>("RunBackward");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 176))->StringView<8ul>("RunLeft");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 192))->StringView<9ul>("RunRight");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 208))->StringView<12ul>("RunTurnLeft");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 224))->StringView<13ul>("RunTurnRight");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 240))->StringView<13ul>("CrawlForward");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 256))->StringView<14ul>("CrawlBackward");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 272))->StringView<10ul>("CrawlLeft");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 288))->StringView<11ul>("CrawlRight");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 304))->StringView<14ul>("CrawlTurnLeft");
                ((PTR_m_basAnimTypeNames_100ee6a08 + 320))->StringView<15ul>("CrawlTurnRight");
                ___cxa_guard_release(PTR_m_basAnimTypeNames_100ee4940);
            }
        }
    }

} // namespace jag::graphics

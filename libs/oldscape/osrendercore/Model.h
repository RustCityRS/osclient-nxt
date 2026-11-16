// libs/oldscape/osrendercore/Model.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rseven {
    class ModelDash3dToRT7Exporter {
    public:
        auto Export(dash3d::ModelUnlitImpl& modelUnlitImpl, bool arg2);
    };

    class ModelWrapper {
    public:
        ModelWrapper(dash3d::ModelUnlitImpl& modelUnlitImpl);
        ~ModelWrapper();
        uint64_t Widify(const Array<short>* arg1);

    private:
        uint8_t _unknown_0[8];
        Array<int>* field_8;
        uint8_t _unknown_16[16];
        ModelUnlitImpl* field_32;
        uint32_t field_40;
        uint8_t field_44;
        uint8_t _unknown_45[3];
        uint64_t field_48;
        uint8_t _unknown_56[24];
        uint64_t field_80;
        uint64_t field_88;
        uint64_t field_96;
        uint64_t field_104;
        uint64_t field_112;
        uint64_t field_120;
        uint64_t field_128;
        uint64_t field_136;
        uint64_t field_144;
        uint64_t field_152;
        uint64_t field_160;
        uint64_t field_168;
        uint64_t field_176;
        uint64_t field_184;
        uint64_t field_192;
        uint64_t field_200;
        uint64_t field_208;
        uint64_t field_216;
        uint64_t field_224;
    };

} // namespace jag::oldscape::rseven

namespace jag::oldscape::dash3d {
    class ModelAppendList {
    public:
        ModelAppendList();
    };

} // namespace jag::oldscape::dash3d

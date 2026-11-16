// projects/osclient/fonts/FontLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class FontLoader {
    public:
        FontLoader(jagex3::Js5* js51, jagex3::Js5* js52);
        FontLoader* LoadFonts(const Array<Font>& fonts);
        ~FontLoader();

    private:
        Js5* field_0;
        Js5* field_8;
        uint8_t _unknown_16[8];
    };

    // 0x10013ca60
    FontLoader::~FontLoader() {
        field_16.~hash_map();
    }

} // namespace jag::oldscape

namespace jag {
    // 0x10013d5a0
    oldscape::sound::Mixer* placement_new<oldscape::sound::Mixer>(void* arg1) {
        *(uint64_t*)((long)arg1 + 128) = 0;
        *(uint64_t*)((long)arg1 + 136) = 0;
        *(uint64_t*)((long)arg1 + 112) = 0;
        *(uint64_t*)((long)arg1 + 120) = 0;
        *(uint64_t*)((long)arg1 + 96) = 0;
        *(uint64_t*)((long)arg1 + 104) = 0;
        *(uint64_t*)((long)arg1 + 80) = 0;
        *(uint64_t*)((long)arg1 + 88) = 0;
        *(uint64_t*)((long)arg1 + 64) = 0;
        *(uint64_t*)((long)arg1 + 72) = 0;
        *(uint64_t*)((long)arg1 + 48) = 0;
        *(uint64_t*)((long)arg1 + 56) = 0;
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        *(uint64_t*)((long)arg1 + 144) = 0;
        new (arg1) oldscape::sound::Mixer();
        return arg1;
    }

    // 0x10013d5f0
    ref_counter_shared<oldscape::sound::Mixer>*
    placement_new<ref_counter_shared<oldscape::sound::Mixer>, int, oldscape::sound::Mixer*&>(
        void* arg1, int&& arg2, oldscape::sound::Mixer*& arg3) {
        new (arg1) ref_counter_shared<oldscape::sound::Mixer>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

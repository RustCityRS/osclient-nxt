// projects/osclient/fonts/FontLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class FontLoader {
    public:
        FontLoader(jagex3::Js5*, jagex3::Js5*);
        LoadFonts(Array<Font, eastl::allocator> const&);
        ~FontLoader();

        // data members, from how the methods use this: 24 bytes
        Js5* field_0; // offset 0
        Js5* field_8; // offset 8
        char _unknown_16[8];
    };

    // 0x10013ca50, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // FontLoader::~FontLoader(): jumps straight to the base-object destructor

    // 0x10013ca60, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // FontLoader::~FontLoader()
    void FontLoader::~FontLoader() {
        (&field_16)->~hash_map();
    }

} // namespace jag::oldscape

namespace jag {
    // 0x10013d5a0, 80 bytes, inline, placed by debug map only (low confidence)
    // oldscape::sound::Mixer* placement_new<oldscape::sound::Mixer>(void*)
    Mixer* placement_new<oldscape::sound::Mixer>(void* param_1) {
        *(undefined8*)((long)param_1 + 128) = 0;
        *(undefined8*)((long)param_1 + 136) = 0;
        *(undefined8*)((long)param_1 + 112) = 0;
        *(undefined8*)((long)param_1 + 120) = 0;
        *(undefined8*)((long)param_1 + 96) = 0;
        *(undefined8*)((long)param_1 + 104) = 0;
        *(undefined8*)((long)param_1 + 80) = 0;
        *(undefined8*)((long)param_1 + 88) = 0;
        *(undefined8*)((long)param_1 + 64) = 0;
        *(undefined8*)((long)param_1 + 72) = 0;
        *(undefined8*)((long)param_1 + 48) = 0;
        *(undefined8*)((long)param_1 + 56) = 0;
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        *(undefined8*)((long)param_1 + 144) = 0;
        oldscape::sound::Mixer::Mixer(param_1);
        return param_1;
    }

    // 0x10013d5f0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::sound::Mixer>* placement_new<ref_counter_shared<oldscape::sound::Mixer>, int, oldscape::sound::Mixer*&>(void*, int&&, oldscape::sound::Mixer*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::sound::Mixer>, int, oldscape::sound::Mixer*&>(
        void* param_1, int* param_2, Mixer** param_3) {
        ref_counter_shared<oldscape::sound::Mixer>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag

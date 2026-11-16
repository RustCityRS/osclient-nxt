// libs/oldscape/jagex3/sound/decimator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::sound {
    class Decimator {
    public:
        ~Decimator();
        Decimator(int arg1, int arg2);
        void Decimate(Array<signed char>& arg1);
        void Decimate(Array<short>& arg1);
        unsigned long TransmitFreq(int arg1);
        int TransmitPos(int arg1);

    private:
        int field_0;
        int field_4;
        uint8_t _unknown_8[8];
    };

    // 0x10013e2d0
    Decimator::~Decimator() {
        field_8.~Array();
    }

} // namespace jag::oldscape::sound

namespace jag {
    // 0x10013f020
    oldscape::configdecoder::OldscapeVarTypeList*
    placement_new<oldscape::configdecoder::OldscapeVarTypeList, ModeGame const*&, game::Js5ConfigGroup const*&,
                  Language const*&, Js5ResourceProvider&, oldscape::jagex3::Js5*&>(
        void* arg1, const ModeGame*& arg2, const game::Js5ConfigGroup*& arg3, const Language*& arg4,
        Js5ResourceProvider& js5ResourceProvider, oldscape::jagex3::Js5*& arg6) {
        new (arg1) oldscape::configdecoder::OldscapeVarTypeList(arg2, arg3, arg4, js5ResourceProvider, arg6);
        return arg1;
    }

    // 0x10013f050
    ref_counter_shared<oldscape::configdecoder::OldscapeVarTypeList>*
    placement_new<ref_counter_shared<oldscape::configdecoder::OldscapeVarTypeList>, int,
                  oldscape::configdecoder::OldscapeVarTypeList*&>(void* arg1, int&& arg2,
                                                                  oldscape::configdecoder::OldscapeVarTypeList*& arg3) {
        new (arg1) ref_counter_shared<oldscape::configdecoder::OldscapeVarTypeList>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::oldscape {
    // 0x10013e6a0
    uint32_t FontHash::operator()(const Font& font) const {
        return *(uint32_t*)font;
    }

} // namespace jag::oldscape

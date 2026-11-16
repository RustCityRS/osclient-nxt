// libs/oldscape/jagex3/sound/decimator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::sound {
    class Decimator {
    public:
        ~Decimator();
        Decimator(int, int);
        void Decimate(Array<signed char, eastl::allocator>&);
        void Decimate(Array<short, eastl::allocator>&);
        ulong TransmitFreq(int);
        int TransmitPos(int);

        // data members, from how the methods use this: 16 bytes
        int field_0; // offset 0
        int field_4; // offset 4
        char _unknown_8[8];
    };

    // 0x10013e2c0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Decimator::~Decimator(): jumps straight to the base-object destructor

    // 0x10013e2d0, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // Decimator::~Decimator()
    void Decimator::~Decimator() {
        (&field_8)->~Array();
    }

} // namespace jag::oldscape::sound

namespace jag {
    // 0x10013f020, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::configdecoder::OldscapeVarTypeList* placement_new<oldscape::configdecoder::OldscapeVarTypeList, ModeGame const*&, game::Js5ConfigGroup const*&, Language const*&, Js5ResourceProvider&, oldscape::jagex3::Js5*&>(void*, ModeGame const*&, game::Js5ConfigGroup const*&, Language const*&, Js5ResourceProvider&, oldscape::jagex3::Js5*&)
    OldscapeVarTypeList*
    jag::placement_new<oldscape::configdecoder::OldscapeVarTypeList, ModeGame_const*&, game::Js5ConfigGroup_const*&,
                       Language_const*&, Js5ResourceProvider&, oldscape::jagex3::Js5*&>(
        void* param_1, ModeGame** param_2, Js5ConfigGroup** param_3, Language** param_4, Js5ResourceProvider* param_5,
        Js5** param_6) {
        oldscape::configdecoder::OldscapeVarTypeList::OldscapeVarTypeList(param_1, *param_2, *param_3, *param_4,
                                                                          param_5, *param_6);
        return param_1;
    }

    // 0x10013f050, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::OldscapeVarTypeList>* placement_new<ref_counter_shared<oldscape::configdecoder::OldscapeVarTypeList>, int, oldscape::configdecoder::OldscapeVarTypeList*&>(void*, int&&, oldscape::configdecoder::OldscapeVarTypeList*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::configdecoder::OldscapeVarTypeList>, int,
                       oldscape::configdecoder::OldscapeVarTypeList*&>(void* param_1, int* param_2,
                                                                       OldscapeVarTypeList** param_3) {
        ref_counter_shared<oldscape::configdecoder::OldscapeVarTypeList>::ref_counter_shared(param_1, (long)*param_2,
                                                                                             *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::oldscape {
    // 0x10013e6a0, 16 bytes, inline, placed by debug map only (low confidence)
    // FontHash::operator()(Font const&) const
    /* FontHash::TEMPNAMEPLACEHOLDERVALUE(Font const&) const */

    undefined4 FontHash::operator()(Font* param_1) {
        return *(undefined4*)param_1;
    }

} // namespace jag::oldscape

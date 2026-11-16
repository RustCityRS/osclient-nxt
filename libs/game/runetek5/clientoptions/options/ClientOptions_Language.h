// libs/game/runetek5/clientoptions/options/ClientOptions_Language.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game::option {
    class Language {
    public:
        // virtual methods in vtable order
        virtual ~Language();
        virtual GetDefault();
        virtual bool IsAvailable(OptionClient) const;
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, LanguageID);
        Language(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes
        undefined* field_0;             // offset 0, vtable pointer
        Settings* field_8;              // offset 8
        BucketAllocatorEASTL* field_16; // offset 16
        int field_24;                   // offset 24
        undefined1 field_28[8];         // offset 28
        int field_36;                   // offset 36
        char _unknown_40[153];
    };

} // namespace jag::game::option

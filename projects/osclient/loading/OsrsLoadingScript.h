// projects/osclient/loading/OsrsLoadingScript.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class OsrsLoadingScript : public LoadingScreenScript // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~OsrsLoadingScript();
        virtual uint8_t CreateResources();
        void Create_root_Resources(LoadingScreenScript::LoadingScreenAnimation& loadingScreenAnimation);
        void Create_anim_Resources(LoadingScreenScript::LoadingScreenAnimation& loadingScreenAnimation);
        void Create_spinner_Resources(LoadingScreenScript::LoadingScreenAnimation& loadingScreenAnimation);
        void Create_bar_Resources(LoadingScreenScript::LoadingScreenAnimation& loadingScreenAnimation);
        OsrsLoadingScript();
    };

    // 0x10002ed70
    OsrsLoadingScript::~OsrsLoadingScript() {}

    // 0x100156280
    OsrsLoadingScript::OsrsLoadingScript() : LoadingScreenScript() {}

} // namespace jag

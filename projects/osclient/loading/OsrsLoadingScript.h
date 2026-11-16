// projects/osclient/loading/OsrsLoadingScript.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class OsrsLoadingScript : public LoadingScreenScript // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~OsrsLoadingScript();
        virtual CreateResources();
        void Create_root_Resources(LoadingScreenScript::LoadingScreenAnimation&);
        void Create_anim_Resources(LoadingScreenScript::LoadingScreenAnimation&);
        void Create_spinner_Resources(LoadingScreenScript::LoadingScreenAnimation&);
        void Create_bar_Resources(LoadingScreenScript::LoadingScreenAnimation&);
        OsrsLoadingScript();

        // data members, from how the methods use this: 128 bytes, the first 128 are LoadingScreenScript
    };

    // 0x100029ed0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // OsrsLoadingScript::~OsrsLoadingScript(): jumps straight to the base-object destructor

    // 0x100029ee0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // OsrsLoadingScript::~OsrsLoadingScript()
    void OsrsLoadingScript::~OsrsLoadingScript() {
        ~OsrsLoadingScript(this);
        operator_delete(this);
    }

    // 0x10002ed70, 16 bytes, base-object destructor, inline, placed by class name
    // OsrsLoadingScript::~OsrsLoadingScript()
    void OsrsLoadingScript::~OsrsLoadingScript() {
        ~LoadingScreenScript();
    }

    // 0x100156260, 16 bytes, complete-object constructor, inline, placed by class name
    // OsrsLoadingScript::OsrsLoadingScript(): jumps straight to the base-object constructor

    // 0x100156280, 48 bytes, base-object constructor, inline, placed by class name
    // OsrsLoadingScript::OsrsLoadingScript()
    void OsrsLoadingScript::OsrsLoadingScript() {
        new (this) LoadingScreenScript();
        field_0 = &PTR__OsrsLoadingScript_100ef0f70;
    }

} // namespace jag

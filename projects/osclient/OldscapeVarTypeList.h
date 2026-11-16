// projects/osclient/OldscapeVarTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::configdecoder {
    class OldscapeVarTypeList {
    public:
        // virtual methods in vtable order
        virtual ~OldscapeVarTypeList();
        OldscapeVarTypeList(ModeGame const*, game::Js5ConfigGroup const*, Language const*, Js5ResourceProvider&,
                            jagex3::Js5*);
        List(int);
        void DecodeVarValue(std::pair<unsigned int, game::VarValue>&, core::SuperPacket&);

        // data members, from how the methods use this: 128 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[104];
        Js5* field_112;       // offset 112
        undefined4 field_120; // offset 120
        char _unknown_124[4];
    };

    // 0x10013f070, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OldscapeVarTypeList::OldscapeVarTypeList(ModeGame const*, game::Js5ConfigGroup const*, Language const*, Js5ResourceProvider&, jagex3::Js5*): jumps straight to the base-object constructor

    // 0x10013f080, 176 bytes, base-object constructor, inline, placed by class name and debug map
    // OldscapeVarTypeList::OldscapeVarTypeList(ModeGame const*, game::Js5ConfigGroup const*, Language const*, Js5ResourceProvider&, jagex3::Js5*)
    void OldscapeVarTypeList::OldscapeVarTypeList(ModeGame* param_1, Js5ConfigGroup* param_2, Language* param_3,
                                                  Js5ResourceProvider* param_4, Js5* param_5) {
        Js5ArchiveSettings local_78;

        new (&local_78) Js5ArchiveSettings(2, Priority::HIGH, 1, 0, EncodeType::NONE, 0, 1, 0);
        new (this)
            game::BaseTemplateConfigTypeList<OldscapeVarType>(3, param_1, param_3, param_4, &local_78, param_2, 64);
        field_0 = PTR_vtable_100ee88e0 + 16;
        field_112 = param_5;
        field_120 = param_2->GetX();
    }

    // 0x10013f2d0, 16 bytes, complete-object destructor, inline, placed by class name
    // OldscapeVarTypeList::~OldscapeVarTypeList(): jumps straight to the base-object destructor

    // 0x10013f2e0, 32 bytes, deleting destructor, inline, placed by class name
    // OldscapeVarTypeList::~OldscapeVarTypeList()
    void OldscapeVarTypeList::~OldscapeVarTypeList() {
        ~OldscapeVarTypeList(this);
        operator_delete(this);
    }

} // namespace jag::oldscape::configdecoder

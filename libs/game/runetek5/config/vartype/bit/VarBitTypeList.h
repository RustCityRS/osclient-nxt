// libs/game/runetek5/config/vartype/bit/VarBitTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class VarBitTypeList {
    public:
        // virtual methods in vtable order
        virtual ~VarBitTypeList();
        GetConfigProvider();
        VarBitTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&,
                       ConfigProvider&);

        // data members, from how the methods use this: 120 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[104];
        undefined8 m_configProvider; // offset 112
    };

    // 0x1004c5ce0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // VarBitTypeList::GetConfigProvider()
    /* VarTypeList::GetDomain() */

    undefined8 VarTypeList::GetDomain() {
        return m_domain;
    }

    // 0x1005875b0, 16 bytes, complete-object constructor, inline, placed by class name
    // VarBitTypeList::VarBitTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, ConfigProvider&): jumps straight to the base-object constructor

    // 0x1005875d0, 80 bytes, base-object constructor, inline, placed by class name
    // VarBitTypeList::VarBitTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, ConfigProvider&)
    void VarBitTypeList::VarBitTypeList() {
        undefined8 in_R9;

        BaseTemplateConfigTypeList<VarBitType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7f68 + 16;
        m_configProvider = in_R9;
    }

    // 0x100587760, 16 bytes, complete-object destructor, inline, placed by class name
    // VarBitTypeList::~VarBitTypeList(): jumps straight to the base-object destructor

    // 0x100587770, 32 bytes, deleting destructor, inline, placed by class name
    // VarBitTypeList::~VarBitTypeList()
    void VarBitTypeList::~VarBitTypeList() {
        ~VarBitTypeList(this);
        operator_delete(this);
    }

    // 0x100587ad0: the linker folded this into BaseTemplateConfigTypeList<VarBitType>::~BaseTemplateConfigTypeList(), which has identical code
    VarBitTypeList::~VarBitTypeList();

} // namespace jag::game

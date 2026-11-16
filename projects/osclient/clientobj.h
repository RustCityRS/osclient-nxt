// projects/osclient/clientobj.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    class ClientObj {
    public:
        // virtual methods in vtable order
        virtual ~ClientObj();
        virtual ClientObj* GetTempModel(int);
        virtual IsClientLocAnim() const;
        SetHighlight(HighlightChannelProperties const*);
        IsLit() const;
        IsUnlit() const;
        bool IsOpEnabled(int) const;
        GetHighlight();
        SetEnabledOpsBitMask(unsigned char);
        ClientObj();

        // data members, from how the methods use this: 57 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        long field_16; // offset 16
        char _unknown_24[24];
        undefined8 m_pHighlight;  // offset 48
        byte m_enabledOpsBitMask; // offset 56
    };

    // 0x100013930, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClientObj::SetHighlight(HighlightChannelProperties const*)
    /* SystemSettings::SetLanguage(Language const*) */

    void SystemSettings::SetLanguage(Language* param_1) {
        m_pLanguage = param_1;
    }

    // 0x100022b10: the linker folded this into option::ScriptOption<int, option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ClientObj::~ClientObj();

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ClientObj::IsClientLocAnim() const;

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ClientObj::IsLit() const;

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ClientObj::IsUnlit() const;

    // 0x100071b90, 32 bytes, inline, placed by class name and debug map
    // ClientObj::IsOpEnabled(int) const
    bool ClientObj::IsOpEnabled(int param_1) {
        bool bVar1;

        bVar1 = true;
        if ((uint)param_1 < 5) {
            bVar1 = (m_enabledOpsBitMask >> (param_1 & 31U) & 1) != 0;
        }
        return bVar1;
    }

    // 0x1000fcbb0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClientObj::GetHighlight()
    /* LoginManager::GetAuthWrapper() */

    AuthLibWrapper* LoginManager::GetAuthWrapper() {
        return m_pAuthWrapper;
    }

    // 0x1001174c0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClientObj::SetEnabledOpsBitMask(unsigned char)
    /* game::AnimationWrapper::SetReadyAnim(bool) */

    void game::AnimationWrapper::SetReadyAnim(bool param_1) {
        m_readyAnim = param_1;
    }

    // 0x100153040, 16 bytes, complete-object constructor, inline, placed by class name
    // ClientObj::ClientObj(): jumps straight to the base-object constructor

    // 0x100153050, 48 bytes, base-object constructor, inline, placed by class name
    // ClientObj::ClientObj()
    void ClientObj::ClientObj() {
        new (this) dash3d::UniqueModelSource();
        field_0 = (undefined**)(PTR_vtable_100ee8c70 + 16);
        m_pHighlight = 0;
        m_enabledOpsBitMask = 31;
    }

    // 0x100153080, 16 bytes, complete-object destructor, inline, placed by class name
    // ClientObj::~ClientObj(): jumps straight to the base-object destructor

    // 0x100153090, 32 bytes, deleting destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClientObj::~ClientObj()
    /* jag::graphics::WaterPatch_DE::~WaterPatch_DE() */

    void jag::graphics::WaterPatch_DE::~WaterPatch_DE() {
        ~RefCounterAndData();
        operator_delete(this);
    }

    // 0x1001530b0, 112 bytes, inline, placed by class name
    // ClientObj::GetTempModel(int)
    ClientObj* ClientObj::GetTempModel(int param_1) {
        int iVar1;
        undefined4 in_register_00000034;
        shared_ptr<RSevenDebugPresetProvider> local_30[16];

        local_30->List(*(int*)(CONCAT44(in_register_00000034, param_1) + 24));
        iVar1 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)local_30);
        GetModelLit(iVar1);
        local_30->~shared_ptr();
        return this;
    }

} // namespace jag::oldscape

namespace jag::oldscape::minimenu {
    // 0x100071d90, 16 bytes, inline, placed by debug map only (low confidence)
    // MinimenuOp::HasProperty(OpProperty) const
    undefined2 MinimenuOp::HasProperty(uint param_2) {
        return CONCAT11((char)(field_0 >> 8), (field_0 >> (param_2 & 31) & 1) != 0);
    }

    // 0x1000720a0, 48 bytes, inline, placed by debug map only (low confidence)
    // MinimenuGlobalEntryData::operator=(MinimenuGlobalEntryData&&)
    /* jag::auth::GameTokenResult::TEMPNAMEPLACEHOLDERVALUE(jag::auth::GameTokenResult&&) */

    GameTokenResult* jag::auth::GameTokenResult::operator=(GameTokenResult* param_1) {
        eastl::string::operator=((eastl::string*)this, (basic_string*)param_1);
        field_32 = param_1->field_32;
        return this;
    }

} // namespace jag::oldscape::minimenu

namespace jag::game {
    // 0x1000fcbb0: the linker folded this into oldscape::ClientObj::GetHighlight(), which has identical code
    ModeGame* BaseConfigTypeList::GetModeGame() const;

} // namespace jag::game

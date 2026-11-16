// projects/osclient/ScriptRunner.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

namespace jag::oldscape {
    class ScriptRunner {
    public:
        void SetActivePlayer(int);
        void ExecuteScript(rs2lib::ClientTriggerType::ID, int, int, int);
        void ExecuteScript(HookReq const&, int);
        void ExecuteStringScriptTrigger(eastl::string&, rs2lib::ClientTriggerType::ID, int, int, int);
        void ExecuteHeldObjOverlayTrigger(shared_ptr<rs2lib::IfType> const&, int);
        void OnLoad(int);
        void SetActiveNPC(int);
        void SetActiveLoc(LocInfo const&);
        void SetActiveObj(rs2lib::CoordGrid const&, weak_ptr<ClientObj>);
        void SetActiveTile(int, int, int);
        void DisallowIfClose();
        void AllowIfClose();
    };

    // 0x10018c8a0, 32 bytes, placed by class name and debug map
    // ScriptRunner::SetActivePlayer(int)
    void ScriptRunner::SetActivePlayer(int param_1) {
        g_SRStatics.SetActivePlayer(param_1);
    }

    // 0x10018c8c0, 32 bytes, placed by class name and debug map
    // ScriptRunner::ExecuteScript(rs2lib::ClientTriggerType::ID, int, int, int)
    void ScriptRunner::ExecuteScript(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4) {
        g_SRStatics.ExecuteScript(param_1, param_2, param_3, param_4, 0);
    }

    // 0x10018ead0, 32 bytes, placed by class name
    // ScriptRunner::ExecuteScript(HookReq const&, int)
    void ScriptRunner::ExecuteScript(HookReq* param_1, int param_2) {
        g_SRStatics.ExecuteScript(param_1, param_2, 0);
    }

    // 0x10018efc0, 48 bytes, placed by class name
    // ScriptRunner::ExecuteStringScriptTrigger(eastl::string&, rs2lib::ClientTriggerType::ID, int, int, int)
    void ScriptRunner::ExecuteStringScriptTrigger(undefined8 param_1, undefined4 param_2, undefined4 param_3,
                                                  undefined4 param_4, undefined4 param_5) {
        g_SRStatics.ExecuteStringScriptTrigger(param_1, param_2, param_3, param_4, param_5, 0);
    }

    // 0x10018f080, 32 bytes, placed by class name
    // ScriptRunner::ExecuteHeldObjOverlayTrigger(shared_ptr<rs2lib::IfType> const&, int)
    void ScriptRunner::ExecuteHeldObjOverlayTrigger(shared_ptr* param_1, int param_2) {
        g_SRStatics.ExecuteHeldObjOverlayTrigger(param_1, param_2, 0);
    }

    // 0x10018f240, 32 bytes, placed by class name
    // ScriptRunner::OnLoad(int)
    void ScriptRunner::OnLoad(int param_1) {
        g_SRStatics.OnLoad(param_1);
    }

    // 0x10018f370, 32 bytes, placed by class name
    // ScriptRunner::SetActiveNPC(int)
    void ScriptRunner::SetActiveNPC(int param_1) {
        g_SRStatics.SetActiveNPC(param_1);
    }

    // 0x10018f3a0, 32 bytes, placed by class name
    // ScriptRunner::SetActiveLoc(LocInfo const&)
    void ScriptRunner::SetActiveLoc(LocInfo* param_1) {
        g_SRStatics.SetActiveLoc(param_1);
    }

    // 0x10018f3e0, 96 bytes, placed by class name
    // ScriptRunner::SetActiveObj(rs2lib::CoordGrid const&, weak_ptr<ClientObj>)
    void ScriptRunner::SetActiveObj(undefined8 param_1, weak_ptr* param_2) {
        weak_ptr<dash3d::Decor> local_28[16];

        weak_ptr<dash3d::Decor>::weak_ptr(local_28, param_2);
        g_SRStatics.SetActiveObj(param_1, local_28);
        local_28->~weak_ptr();
    }

    // 0x10018f480, 32 bytes, placed by class name
    // ScriptRunner::SetActiveTile(int, int, int)
    void ScriptRunner::SetActiveTile(int param_1, int param_2, int param_3) {
        g_SRStatics.SetActiveTile(param_1, param_2, param_3);
    }

    // 0x10018f4d0, 32 bytes, placed by class name
    // ScriptRunner::DisallowIfClose()
    void ScriptRunner::DisallowIfClose() {
        g_SRStatics.DisallowIfClose();
    }

    // 0x10018f500, 32 bytes, placed by class name
    // ScriptRunner::AllowIfClose()
    void ScriptRunner::AllowIfClose() {
        g_SRStatics.AllowIfClose();
    }

} // namespace jag::oldscape

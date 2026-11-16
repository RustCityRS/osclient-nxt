// projects/osclient/ScriptRunner.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

namespace jag::oldscape {
    class ScriptRunner {
    public:
        void SetActivePlayer(int arg1);
        void ExecuteScript(rs2lib::ClientTriggerType::ID id, int arg2, int arg3, int arg4);
        void ExecuteScript(const HookReq& hookReq, int arg2);
        void ExecuteStringScriptTrigger(eastl::string& str, rs2lib::ClientTriggerType::ID id, int arg3, int arg4,
                                        int arg5);
        void ExecuteHeldObjOverlayTrigger(const shared_ptr<rs2lib::IfType>& ifType, int arg2);
        void OnLoad(int arg1);
        void SetActiveNPC(int arg1);
        void SetActiveLoc(const LocInfo& locInfo);
        void SetActiveObj(const rs2lib::CoordGrid& coordGrid, weak_ptr<ClientObj> clientObj);
        void SetActiveTile(int arg1, int arg2, int arg3);
        void DisallowIfClose();
        void AllowIfClose();

    private:
        unsigned int field_0;
        unsigned int field_4;
        unsigned int field_8;
    };

    // 0x10018c8a0
    void ScriptRunner::SetActivePlayer(int arg1) {
        g_SRStatics.SetActivePlayer(arg1);
    }

    // 0x10018c8c0
    void ScriptRunner::ExecuteScript(rs2lib::ClientTriggerType::ID id, int arg2, int arg3, int arg4) {
        g_SRStatics.ExecuteScript(id, arg2, arg3, arg4, 0);
    }

    // 0x10018ead0
    void ScriptRunner::ExecuteScript(const HookReq& hookReq, int arg2) {
        g_SRStatics.ExecuteScript(hookReq, arg2, 0);
    }

    // 0x10018efc0
    void ScriptRunner::ExecuteStringScriptTrigger(eastl::string& str, rs2lib::ClientTriggerType::ID id, int arg3,
                                                  int arg4, int arg5) {
        ScriptRunnerImpl::ExecuteStringScriptTrigger(g_SRStatics, (ID)str, id, arg3, arg4, arg5);
    }

    // 0x10018f080
    void ScriptRunner::ExecuteHeldObjOverlayTrigger(const shared_ptr<rs2lib::IfType>& ifType, int arg2) {
        g_SRStatics.ExecuteHeldObjOverlayTrigger(ifType, arg2, 0);
    }

    // 0x10018f240
    void ScriptRunner::OnLoad(int arg1) {
        g_SRStatics.OnLoad(arg1);
    }

    // 0x10018f370
    void ScriptRunner::SetActiveNPC(int arg1) {
        g_SRStatics.SetActiveNPC(arg1);
    }

    // 0x10018f3a0
    void ScriptRunner::SetActiveLoc(const LocInfo& locInfo) {
        g_SRStatics.SetActiveLoc(locInfo);
    }

    // 0x10018f3e0
    void ScriptRunner::SetActiveObj(const rs2lib::CoordGrid& coordGrid, weak_ptr<ClientObj> clientObj) {

        weak_ptr<dash3d::Decor> local_28(coordGrid);
        g_SRStatics.SetActiveObj(*this, &local_28);
    }

    // 0x10018f480
    void ScriptRunner::SetActiveTile(int arg1, int arg2, int arg3) {
        g_SRStatics.SetActiveTile(arg1, arg2, arg3);
    }

    // 0x10018f4d0
    void ScriptRunner::DisallowIfClose() {
        g_SRStatics.DisallowIfClose();
    }

    // 0x10018f500
    void ScriptRunner::AllowIfClose() {
        g_SRStatics.AllowIfClose();
    }

} // namespace jag::oldscape

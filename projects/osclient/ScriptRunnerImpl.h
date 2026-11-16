// projects/osclient/ScriptRunnerImpl.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class ScriptRunnerImpl {
    public:
        uint64_t ExecuteCommand7000To7099(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand7100To7199(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t DoMinimenuOpTypeAt(int arg1);
        uint64_t DoMinimenuTextAt(int arg1);
        uint64_t DoMinimenuFindNPCAt(int arg1);
        uint64_t DoMinimenuFindLocAt(int arg1);
        uint64_t DoMinimenuFindObjAt(int arg1);
        uint64_t DoMinimenuFindPlayerAt(int arg1);
        uint64_t DoMinimenuCoordAt(int arg1);
        uint64_t DoMinimenuObjTypeAt(int arg1);
        uint64_t DoMinimenuFindComponentAt(int arg1);
        uint64_t ExecuteCommand7200To7299(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand7400To7499(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint8_t ExecuteCommand7500To7599(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        void PopValueOfType(int arg1, game::VarValue& varValue);
        uint64_t ExecuteCommand7600To7699(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand7800To7899(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand8000To8099(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand1600To1699(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand1700To1799(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t DoGetCrmInt(const rs2lib::IfType& ifType);
        uint64_t DoGetCrmString(const rs2lib::IfType& ifType);
        uint64_t ExecuteCommand1800To1899(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand1900To1999Or2900To2999(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3,
                                                      bool arg4);
        uint64_t ExecuteCommand2500To2599(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand2600To2699(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand2700To2799(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand2800To2899(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand3100To3199(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand3200To3299(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand3300To3399(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand3400To3499(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand3500To3599(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand3600To3699(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand3700To3799(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand3800To3899(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand3900To3999(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand4000To4099(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand4100To4199(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand4200To4299(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint8_t ExecuteCommand5000To5099(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand5300To5399(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand5500To5599(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand5600To5699(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        int ConvertCameraLogarithmicToLinearScale(int arg1);
        int ConvertCameraLinearToLogarithmicScale(int arg1);
        uint64_t ExecuteCommand6200To6299(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint8_t ExecuteCommand6500To6599(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand6600To6699(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        void SetMapCoord(int arg1, rs2lib::CoordGrid& coordGrid, bool arg3);
        void ExecuteAddGlobalMinimenuEntry(minimenu::Minimenu3DSubjectType minimenu3DSubjectType);
        uint64_t GetActiveNpcType() const;
        uint32_t ExecuteCommand6700To6799(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t GetActiveObjType() const;
        uint32_t ExecuteCommand6800To6899(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand6900To6999(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        ScriptRunnerImpl();
        ~ScriptRunnerImpl();
        void ExecuteScript(const HookReq& hookReq, int arg2, int arg3);
        unsigned long ExecuteScript(rs2lib::ClientTriggerType::ID id, int arg2, int arg3, int arg4, int arg5);
        unsigned long ExecuteStringScriptTrigger(eastl::string& str, rs2lib::ClientTriggerType::ID id, int arg3,
                                                 int arg4, int arg5, int arg6);
        unsigned long ExecuteHeldObjOverlayTrigger(const shared_ptr<rs2lib::IfType>& ifType, int arg2, int arg3);
        void OnLoad(int arg1);
        void SetActiveNPC(int arg1);
        void SetActiveLoc(const LocInfo& locInfo);
        void SetActiveObj(const rs2lib::CoordGrid& coordGrid, weak_ptr<ClientObj> clientObj);
        void SetActivePlayer(int arg1);
        void SetActiveTile(int arg1, int arg2, int arg3);
        void DisallowIfClose();
        void AllowIfClose();
        void ResetStackFrame();
        void ExecuteScriptInner(shared_ptr<ClientScript>& clientScript, int arg2, int arg3);
        void RunDeferredEvents();
        uint64_t ExecuteOtherCommand(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand100To999(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint64_t ExecuteCommand1000To1099Or2000To2099(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3,
                                                      bool arg4);
        uint64_t ExecuteCommand1100To1199Or2100To2199(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3,
                                                      bool arg4);
        uint64_t ExecuteCommand1200To1299Or2200To2299(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3,
                                                      bool arg4);
        uint8_t ExecuteCommand1300To1399Or2300To2399(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3,
                                                     bool arg4);
        uint64_t ExecuteCommand1400To1499Or2400To2499(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3,
                                                      bool arg4);
        uint64_t ExecuteCommand1500To1599(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3);
        uint8_t* SafeGetComponent(int arg1, bool arg2, bool arg3);
        unsigned long PopValueOfType(const game::BaseVarType* baseVarType, game::VarValue& varValue);
        void CcIfSetOpOptKey(const shared_ptr<rs2lib::IfType>& ifType, int arg2, Array<unsigned char>&& arg3,
                             Array<unsigned char>&& arg4);
        void CcIfSetOpOptKeyRate(const shared_ptr<rs2lib::IfType>& ifType, int arg2, int arg3, int arg4,
                                 ErrorCapture& errorCapture);
        void CcIfSetOpOptKeyIgnoreHeld(const shared_ptr<rs2lib::IfType>& ifType, int arg2, ErrorCapture& errorCapture);
        static uint8_t LOG_E_2[16];

    private:
        uint8_t field_0;
        uint8_t _unknown_1[104091];
        int field_104092;
        uint8_t _unknown_104096[32000];
        int field_136096;
        uint32_t field_136100;
        uint8_t _unknown_136104[4448];
        int field_140552;
        uint8_t _unknown_140556[20];
        int field_140576;
        uint8_t _unknown_140580[276];
        MapElementPosition field_140856;
        uint8_t _unknown_140880[4];
        int m_activeNPC;
        LocData field_140888;
        uint8_t _unknown_140920[8];
        unsigned int field_140928;
        unsigned int field_140932;
        unsigned int field_140936;
        unsigned int m_activePlayer;
        CoordGrid field_140944;
        uint8_t _unknown_140960[24];
        unsigned int field_140984;
        int field_140988;
        uint8_t field_140992;
        char field_140993;
        uint8_t _unknown_140994[2];
        int field_140996;
        ErrorCapture field_141000;
        uint8_t _unknown_141048[800];
        int field_141848;
        uint8_t _unknown_141852[4];
    };

    // 0x1000b9680
    void ScriptRunnerImpl::PopValueOfType(int arg1, game::VarValue& varValue) {
        PopValueOfType((BaseVarType*)game::BaseVarType::GetByID(arg1), varValue);
    }

    // 0x10018f390
    void ScriptRunnerImpl::SetActiveNPC(int arg1) {
        m_activeNPC = arg1;
    }

    // 0x10018f3c0
    void ScriptRunnerImpl::SetActiveLoc(const LocInfo& locInfo) {
        *field_140888 = locInfo;
    }

    // 0x10018f440
    void ScriptRunnerImpl::SetActiveObj(const rs2lib::CoordGrid& coordGrid, weak_ptr<ClientObj> clientObj) {
        field_140936 = coordGrid.m_z;
        unsigned int uVar1 = coordGrid.m_x;
        field_140928 = coordGrid.m_level;
        field_140932 = uVar1;
        (*((field_140888 + 24))) = *clientObj;
    }

    // 0x10018f470
    void ScriptRunnerImpl::SetActivePlayer(int arg1) {
        m_activePlayer = arg1;
    }

    // 0x10018f4a0
    void ScriptRunnerImpl::SetActiveTile(int arg1, int arg2, int arg3) {

        CoordGrid local_20(arg1, arg2, arg3);
        *(unsigned int*)(field_140944 + 8) = local_20.m_z;
        *(unsigned int*)(field_140944 + 0) = local_20.m_level;
        *(unsigned int*)(field_140944 + 4) = local_20.m_x;
    }

    // 0x10018f4f0
    void ScriptRunnerImpl::DisallowIfClose() {
        field_140993 = '\x01';
    }

    // 0x10018f520
    void ScriptRunnerImpl::AllowIfClose() {
        field_140993 = '\0';
    }

    // 0x1001a2930
    ScriptRunnerImpl::ScriptRunnerImpl() : field_0(0), field_136100(0), m_activeNPC(-1) {
        new ((field_140888 + 24)) shared_ptr();
        new (&field_140928) rs2lib::CoordGrid();
        m_activePlayer = 4294967295;
        new (field_140944) rs2lib::CoordGrid();
        new (&field_140960) Array<int>();
        field_140984 = 0;
        field_140988 = -1;
        field_140992 = 0;
        field_140993 = '\0';
        field_140996 = 0;
        new (field_141000) ErrorCapture(true);
        new (&field_141848) HiscoresEntry();
    }

    // 0x1001a30f0
    ScriptRunnerImpl::~ScriptRunnerImpl() {
        field_141000->~LanguageMessage();
        field_140960.~Array();
        ((field_140888 + 24))->~weak_ptr();
        field_140888->~pair();
        field_140584.~fixed_queue();
        field_140560.~shared_ptr();
        field_140536.~shared_ptr();
        field_140520.~shared_ptr();
        field_140504.~shared_ptr();
        field_136104.~array();
        field_104096.~array();
        field_40.~vector();
        field_8.~vector();
    }

} // namespace jag::oldscape

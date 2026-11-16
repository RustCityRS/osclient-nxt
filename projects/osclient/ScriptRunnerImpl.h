// projects/osclient/ScriptRunnerImpl.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class ScriptRunnerImpl {
    public:
        ExecuteCommand7000To7099(ScriptOp, ClientScript const&, bool);
        ExecuteCommand7100To7199(ScriptOp, ClientScript const&, bool);
        DoMinimenuOpTypeAt(int);
        DoMinimenuTextAt(int);
        DoMinimenuFindNPCAt(int);
        DoMinimenuFindLocAt(int);
        DoMinimenuFindObjAt(int);
        DoMinimenuFindPlayerAt(int);
        DoMinimenuCoordAt(int);
        DoMinimenuObjTypeAt(int);
        DoMinimenuFindComponentAt(int);
        ExecuteCommand7200To7299(ScriptOp, ClientScript const&, bool);
        ExecuteCommand7400To7499(ScriptOp, ClientScript const&, bool);
        byte ExecuteCommand7500To7599(ScriptOp, ClientScript const&, bool);
        void PopValueOfType(int, game::VarValue&);
        ExecuteCommand7600To7699(ScriptOp, ClientScript const&, bool);
        ExecuteCommand7800To7899(ScriptOp, ClientScript const&, bool);
        ExecuteCommand8000To8099(ScriptOp, ClientScript const&, bool);
        ExecuteCommand1600To1699(ScriptOp, ClientScript const&, bool);
        ExecuteCommand1700To1799(ScriptOp, ClientScript const&, bool);
        DoGetCrmInt(rs2lib::IfType const&);
        DoGetCrmString(rs2lib::IfType const&);
        ExecuteCommand1800To1899(ScriptOp, ClientScript const&, bool);
        ExecuteCommand1900To1999Or2900To2999(ScriptOp, ClientScript const&, bool, bool);
        ExecuteCommand2500To2599(ScriptOp, ClientScript const&, bool);
        ExecuteCommand2600To2699(ScriptOp, ClientScript const&, bool);
        ExecuteCommand2700To2799(ScriptOp, ClientScript const&, bool);
        ExecuteCommand2800To2899(ScriptOp, ClientScript const&, bool);
        ExecuteCommand3100To3199(ScriptOp, ClientScript const&, bool);
        ExecuteCommand3200To3299(ScriptOp, ClientScript const&, bool);
        ExecuteCommand3300To3399(ScriptOp, ClientScript const&, bool);
        ExecuteCommand3400To3499(ScriptOp, ClientScript const&, bool);
        ExecuteCommand3500To3599(ScriptOp, ClientScript const&, bool);
        ExecuteCommand3600To3699(ScriptOp, ClientScript const&, bool);
        ExecuteCommand3700To3799(ScriptOp, ClientScript const&, bool);
        ExecuteCommand3800To3899(ScriptOp, ClientScript const&, bool);
        ExecuteCommand3900To3999(ScriptOp, ClientScript const&, bool);
        ExecuteCommand4000To4099(ScriptOp, ClientScript const&, bool);
        ExecuteCommand4100To4199(ScriptOp, ClientScript const&, bool);
        ExecuteCommand4200To4299(ScriptOp, ClientScript const&, bool);
        ExecuteCommand5000To5099(ScriptOp, ClientScript const&, bool);
        ExecuteCommand5300To5399(ScriptOp, ClientScript const&, bool);
        ExecuteCommand5500To5599(ScriptOp, ClientScript const&, bool);
        ExecuteCommand5600To5699(ScriptOp, ClientScript const&, bool);
        int ConvertCameraLogarithmicToLinearScale(int);
        int ConvertCameraLinearToLogarithmicScale(int);
        ExecuteCommand6200To6299(ScriptOp, ClientScript const&, bool);
        ExecuteCommand6500To6599(ScriptOp, ClientScript const&, bool);
        ExecuteCommand6600To6699(ScriptOp, ClientScript const&, bool);
        void SetMapCoord(int, rs2lib::CoordGrid&, bool);
        void ExecuteAddGlobalMinimenuEntry(minimenu::Minimenu3DSubjectType);
        GetActiveNpcType() const;
        ExecuteCommand6700To6799(ScriptOp, ClientScript const&, bool);
        GetActiveObjType() const;
        ExecuteCommand6800To6899(ScriptOp, ClientScript const&, bool);
        ExecuteCommand6900To6999(ScriptOp, ClientScript const&, bool);
        ScriptRunnerImpl();
        ~ScriptRunnerImpl();
        void ExecuteScript(HookReq const&, int, int);
        ulong ExecuteScript(rs2lib::ClientTriggerType::ID, int, int, int, int);
        ulong ExecuteStringScriptTrigger(eastl::string&, rs2lib::ClientTriggerType::ID, int, int, int, int);
        ulong ExecuteHeldObjOverlayTrigger(shared_ptr<rs2lib::IfType> const&, int, int);
        void OnLoad(int);
        void SetActiveNPC(int);
        void SetActiveLoc(LocInfo const&);
        void SetActiveObj(rs2lib::CoordGrid const&, weak_ptr<ClientObj>);
        void SetActivePlayer(int);
        void SetActiveTile(int, int, int);
        void DisallowIfClose();
        void AllowIfClose();
        void ResetStackFrame();
        void ExecuteScriptInner(shared_ptr<ClientScript>&, int, int);
        void RunDeferredEvents();
        ExecuteOtherCommand(ScriptOp, ClientScript const&, bool);
        ExecuteCommand100To999(ScriptOp, ClientScript const&, bool);
        ExecuteCommand1000To1099Or2000To2099(ScriptOp, ClientScript const&, bool, bool);
        ExecuteCommand1100To1199Or2100To2199(ScriptOp, ClientScript const&, bool, bool);
        ExecuteCommand1200To1299Or2200To2299(ScriptOp, ClientScript const&, bool, bool);
        ExecuteCommand1300To1399Or2300To2399(ScriptOp, ClientScript const&, bool, bool);
        ExecuteCommand1400To1499Or2400To2499(ScriptOp, ClientScript const&, bool, bool);
        ExecuteCommand1500To1599(ScriptOp, ClientScript const&, bool);
        SafeGetComponent(int, bool, bool);
        ulong PopValueOfType(game::BaseVarType const*, game::VarValue&);
        void CcIfSetOpOptKey(shared_ptr<rs2lib::IfType> const&, int, Array<unsigned char, eastl::allocator>&&,
                             Array<unsigned char, eastl::allocator>&&);
        void CcIfSetOpOptKeyRate(shared_ptr<rs2lib::IfType> const&, int, int, int, ErrorCapture&);
        void CcIfSetOpOptKeyIgnoreHeld(shared_ptr<rs2lib::IfType> const&, int, ErrorCapture&);
        static /* 16 bytes */ LOG_E_2;

        // data members, from how the methods use this: 141856 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[7];
        undefined1 field_8; // offset 8
        char _unknown_9[104083];
        int field_104092; // offset 104092
        char _unknown_104096[32000];
        uint field_136096;       // offset 136096
        undefined4 field_136100; // offset 136100
        char _unknown_136104[4400];
        shared_ptr field_140504; // offset 140504
        char _unknown_140520[336];
        MapElementPosition field_140856; // offset 140856
        char _unknown_140880[4];
        int m_activeNPC;      // offset 140884
        LocData field_140888; // offset 140888
        char _unknown_140920[8];
        undefined8 field_140928; // offset 140928
        undefined4 field_140936; // offset 140936
        int m_activePlayer;      // offset 140940
        CoordGrid field_140944;  // offset 140944
        char _unknown_140960[24];
        undefined8 field_140984; // offset 140984
        undefined1 field_140992; // offset 140992
        char field_140993;       // offset 140993
        char _unknown_140994[2];
        int field_140996;        // offset 140996
        undefined1 field_141000; // offset 141000
        char _unknown_141001[855];
    };

    // 0x1000b9680, 48 bytes, inline, placed by class name and debug map
    // ScriptRunnerImpl::PopValueOfType(int, game::VarValue&)
    void ScriptRunnerImpl::PopValueOfType(int param_1, VarValue* param_2) {
        BaseVarType* pBVar1;

        pBVar1 = (BaseVarType*)game::BaseVarType::GetByID(param_1);
        PopValueOfType(this, pBVar1, param_2);
    }

    // 0x10018eab0, 16 bytes, complete-object constructor, inline, placed by class name
    // ScriptRunnerImpl::ScriptRunnerImpl(): jumps straight to the base-object constructor

    // 0x10018eac0, 16 bytes, complete-object destructor, inline, placed by class name
    // ScriptRunnerImpl::~ScriptRunnerImpl(): jumps straight to the base-object destructor

    // 0x10018f390, 16 bytes, inline, placed by class name
    // ScriptRunnerImpl::SetActiveNPC(int)
    void ScriptRunnerImpl::SetActiveNPC(int param_1) {
        m_activeNPC = param_1;
    }

    // 0x10018f3c0, 32 bytes, inline, placed by class name
    // ScriptRunnerImpl::SetActiveLoc(LocInfo const&)
    void ScriptRunnerImpl::SetActiveLoc(LocInfo* param_1) {
        LocInfo::operator=((LocInfo*)field_140888, param_1);
    }

    // 0x10018f440, 48 bytes, inline, placed by class name
    // ScriptRunnerImpl::SetActiveObj(rs2lib::CoordGrid const&, weak_ptr<ClientObj>)
    void ScriptRunnerImpl::SetActiveObj(undefined8* param_1, weak_ptr* param_3) {
        field_140936 = *(undefined4*)(param_1 + 1);
        field_140928 = *param_1;
        weak_ptr<ClientObj>::operator=((weak_ptr<ClientObj>*)(field_140888 + 24), param_3);
    }

    // 0x10018f470, 16 bytes, inline, placed by class name
    // ScriptRunnerImpl::SetActivePlayer(int)
    void ScriptRunnerImpl::SetActivePlayer(int param_1) {
        m_activePlayer = param_1;
    }

    // 0x10018f4a0, 48 bytes, inline, placed by class name
    // ScriptRunnerImpl::SetActiveTile(int, int, int)
    void ScriptRunnerImpl::SetActiveTile(int param_1, int param_2, int param_3) {
        CoordGrid local_20;

        new (&local_20) rs2lib::CoordGrid(param_1, param_2, param_3);
        *(uint*)(field_140944 + 8) = local_20.field_8;
        *(uint*)(field_140944 + 0) = local_20.field_0;
        *(uint*)(field_140944 + 4) = local_20.field_4;
    }

    // 0x10018f4f0, 16 bytes, inline, placed by class name
    // ScriptRunnerImpl::DisallowIfClose()
    void ScriptRunnerImpl::DisallowIfClose() {
        field_140993 = '\x01';
    }

    // 0x10018f520, 16 bytes, inline, placed by class name
    // ScriptRunnerImpl::AllowIfClose()
    void ScriptRunnerImpl::AllowIfClose() {
        field_140993 = '\0';
    }

    // 0x1001a2930, 576 bytes, base-object constructor, inline, placed by class name
    // ScriptRunnerImpl::ScriptRunnerImpl()
    void ScriptRunnerImpl::ScriptRunnerImpl() {
        _func_decltype_nullptr* in_RSI;

        field_0 = 0;
        new (&field_8) eastl::vector<int, eastl::allocator>();
        new (&field_40) eastl::vector<eastl::string, eastl::allocator>();
        new (&field_104096) std::array<eastl::string, 1000ul>();
        field_136100 = 0;
        new (&field_136104) std::array<ClientGosubFrame, 50ul>();
        new (field_140504, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_140520, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_140536, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_140560, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_140584) eastl::fixed_queue<ScriptRunnerImpl::TriggerOpRequest, 5ul, true>();
        new (field_140856) rs2lib::worldmap::MapElementPosition();
        m_activeNPC = -1;
        new (field_140888) LocInfo();
        new ((field_140888 + 24), in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_140928) rs2lib::CoordGrid();
        m_activePlayer = -1;
        new (field_140944) rs2lib::CoordGrid();
        new (&field_140960) Array<int, eastl::allocator>();
        field_140984 = 18446744069414584320;
        field_140992 = 0;
        field_140993 = '\0';
        field_140996 = 0;
        new (&field_141000, true) ErrorCapture();
        new (&field_141848) HiscoresEntry();
    }

    // 0x1001a30f0, 176 bytes, base-object destructor, inline, placed by class name
    // ScriptRunnerImpl::~ScriptRunnerImpl()
    void ScriptRunnerImpl::~ScriptRunnerImpl() {
        (&field_141000)->~LanguageMessage();
        (&field_140960)->~Array();
        ((field_140888 + 24))->~weak_ptr();
        field_140888->~pair();
        (&field_140584)->~fixed_queue();
        (&field_140560)->~shared_ptr();
        (&field_140536)->~shared_ptr();
        (&field_140520)->~shared_ptr();
        field_140504->~shared_ptr();
        (&field_136104)->~array();
        (&field_104096)->~array();
        (&field_40)->~vector();
        (&field_8)->~vector();
    }

} // namespace jag::oldscape

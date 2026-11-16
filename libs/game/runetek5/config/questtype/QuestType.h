// libs/game/runetek5/config/questtype/QuestType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class EnvSkySettings {
    public:
        void GetSkyModelRequest();
        void GetSkyBox() const;
        unsigned int GetSkyBoxID() const;
        void SetDefaults();
        EnvSkySettings(const EnvSkySettings& envSkySettings);
        ~EnvSkySettings();
        EnvSkySettings();
        void Set(PacketT<Array<unsigned char>>& arg1);
        void ApplyOverride(const EnvironmentOverride& environmentOverride);
        void SetSkyBox(const shared_ptr<SkyBoxType>& skyBoxType);
        bool operator==(const EnvSkySettings& envSkySettings) const;
        unsigned long hash() const;
        void SetSkyBoxID(int arg1);

    private:
        unsigned int m_skyBoxID;
        uint8_t _unknown_4[20];
        ActiveComponent field_24;
    };

    class QuestType {
    public:
        class MasterQuestVar;
        class PrerequisiteStat;
        class PrerequisiteVar;
        // virtual methods in vtable order
        virtual ~QuestType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        unsigned int GetQuestPoints() const;
        bool StartedQuest(PlayerVarDomain& playerVarDomain) const;
        bool FinishedQuest(PlayerVarDomain& playerVarDomain) const;
        unsigned long CanStartQuest(PlayerVarDomain& playerVarDomain, const PlayerGameState& playerGameState,
                                    const ModeAccountType* modeAccountType) const;
        bool CheckPreReqQuestPoints(PlayerVarDomain& playerVarDomain) const;
        bool CheckPreReqStat(const PlayerGameState& playerGameState, unsigned int arg2,
                             const ModeAccountType* modeAccountType) const;
        uint64_t CheckPreReqQuest(PlayerVarDomain& playerVarDomain, unsigned int arg2) const;
        bool CheckPreReqVarP(PlayerVarDomain& playerVarDomain, unsigned int arg2) const;
        bool CheckPreReqVarBit(PlayerVarDomain& playerVarDomain, unsigned int arg2) const;
        QuestType(BaseTemplateConfigTypeList<QuestType>* baseTemplateConfigTypeList, int arg2);

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<QuestType>* field_24;
        int field_32;
        uint8_t _unknown_36[4];
        shared_ptr field_40;
        uint8_t _unknown_56[112];
        unsigned int field_168;
        unsigned int field_172;
        unsigned int field_176;
        uint8_t field_180;
        uint8_t _unknown_181[3];
        unsigned int m_questPoints;
        uint8_t _unknown_188[28];
        CoordGrid field_216;
        uint8_t _unknown_232[48];
        unsigned int field_280;
        uint8_t _unknown_284[52];
        uint32_t field_336;
        uint8_t _unknown_340[4];
    };

    class QuestType::MasterQuestVar {
    public:
        unsigned int GetEndState() const;
        unsigned int GetStartState() const;
        unsigned int GetID() const;
        MasterQuestVar(int arg1, int arg2, int arg3);
        MasterQuestVar(int waterNormalParamsEncoding, int waterNormalParamGroup, int arg3);
        MasterQuestVar();

    private:
        unsigned int m_iD;
        unsigned int m_startState;
        unsigned int m_endState;
        uint8_t _unknown_12[4];
    };

    class QuestType::PrerequisiteStat {
    public:
        unsigned int GetRequirement() const;
        unsigned int GetID() const;
        PrerequisiteStat(int arg1, unsigned int arg2);
        PrerequisiteStat();
    };

    class QuestType::PrerequisiteVar {
    public:
        int GetMax() const;
        int GetMin() const;
        int GetID() const;
        ~PrerequisiteVar();
        PrerequisiteVar(int arg1, int arg2, int arg3, const char* str);
        PrerequisiteVar* operator=(PrerequisiteVar&& prerequisiteVar);
        PrerequisiteVar(PrerequisiteVar&& prerequisiteVar);
        PrerequisiteVar();

    private:
        int m_iD;
        int m_min;
        int m_max;
        uint8_t _unknown_12[12];
    };

    // 0x1004af8d0
    void EnvSkySettings::Set(PacketT<Array<unsigned char>>& arg1) {
        short sVar1 = arg1.g2s();
        m_skyBoxID = (int)sVar1;
    }

    // 0x1004afa00
    void EnvSkySettings::ApplyOverride(const EnvironmentOverride& environmentOverride) {
        long lVar1 = environmentOverride.GetGLVertexBuffers();
        if (((lVar1 + 12))->IsActive() != '\0') {
            lVar1 = environmentOverride.GetGLVertexBuffers();
            SetSkyBoxID(((lVar1 + 12))->GetX());
        }
    }

    // 0x1004afc50
    void EnvSkySettings::SetSkyBox(const shared_ptr<SkyBoxType>& skyBoxType) {
        field_8 = skyBoxType;
    }

    // 0x1004aff40
    bool EnvSkySettings::operator==(const EnvSkySettings& envSkySettings) const {
        if (m_skyBoxID == envSkySettings.m_skyBoxID) {
            return field_8 == envSkySettings.field_8;
        }
        return false;
    }

    // 0x1004b0070
    unsigned long EnvSkySettings::hash() const {

        return local_10 = 0;
        hash_combine<int>(&local_10, (int*)this);
        return local_10;
    }

    // 0x1004b07c0
    EnvSkySettings::EnvSkySettings() {
        new (&field_8) shared_ptr();
        new (field_24) BuildRequest<graphics::Model, BuildModelMain>();
        SetDefaults();
    }

    // 0x1004b0c80
    void EnvSkySettings::SetSkyBoxID(int arg1) {
        m_skyBoxID = arg1;
        field_8.reset();
        field_24->Clear();
    }

    // 0x1004f47e0
    PrerequisiteVar* QuestType::PrerequisiteVar::operator=(QuestType::PrerequisiteVar&& prerequisiteVar) {
        m_max = prerequisiteVar.m_max;
        int iVar1 = prerequisiteVar.m_min;
        m_iD = prerequisiteVar.m_iD;
        m_min = iVar1;
        field_16 = &prerequisiteVar.field_16;
        return this;
    }

    // 0x1004f7020
    QuestType::PrerequisiteVar::PrerequisiteVar(int arg1, int arg2, int arg3, const char* str)
        : m_iD(arg1), m_min(arg2), m_max(arg3) {

        new (&field_16) eastl::string(str);
    }

    // 0x1004fcd70
    QuestType::PrerequisiteVar::PrerequisiteVar() : m_iD(-1) {}

    // 0x1004fcd90
    QuestType::PrerequisiteVar::PrerequisiteVar(QuestType::PrerequisiteVar&& prerequisiteVar)
        : m_max(prerequisiteVar.m_max) {
        int iVar1 = prerequisiteVar.m_min;
        m_iD = prerequisiteVar.m_iD;
        m_min = iVar1;
        new (&field_16) eastl::string(prerequisiteVar.field_16);
    }

    // 0x1005b98b0
    QuestType::~QuestType() {
        field_312.~Array();
        field_288.~Array();
        field_256.~Array();
        field_232.~Array();
        field_192.~Array();
        field_144.~Array();
        field_120.~Array();
        field_88.~basic_string();
        field_56.~basic_string();
    }

    // 0x1005b9dd0
    QuestType::QuestType(BaseTemplateConfigTypeList<QuestType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<QuestType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<QuestType, 128>(),
          field_168(4294967295), m_questPoints(0), field_172(0), field_176(0), field_180(0), field_280(0),
          field_336(4294967295) {}

} // namespace jag::game

namespace jag {
    // 0x1004d90d0
    game::VarType* placement_new<game::VarType, game::BaseTemplateConfigTypeList<game::VarType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::VarType>*& arg2, int& arg3) {
        new (arg1) game::VarType(arg2, arg3);
        return arg1;
    }

    // 0x1004d90f0
    MakeSharedPoolRefCounter<game::VarType, MakeSharedPool<game::VarType, 5504>>*
    placement_new<MakeSharedPoolRefCounter<game::VarType, MakeSharedPool<game::VarType, 5504>>,
                  MakeSharedPool<game::VarType, 5504>::RefCounterAndData*&, game::VarType*>(
        void* arg1, MakeSharedPool<game::VarType, 5504>::RefCounterAndData*& arg2, game::VarType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::VarType, MakeSharedPool<game::VarType, 5504>>(arg2, arg3);
        return arg1;
    }

    // 0x1004d9110
    void shared_ptr_do_enable_shared_from_this<game::VarType>(ref_counter_base* ref_counter_base,
                                                              game::VarType* varType,
                                                              game::VarType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)varType);
            local_38 = weak_ptr(local_48);
            varType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1004d9210
    MakeSharedPoolRefCounter<game::VarType, MakeSharedPool<game::VarType, 5504>>::MakeSharedPoolRefCounter(
        void* arg1, game::VarType* varType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7b28 + 16;
        *(void**)(this + 16) = arg1;
        *(VarType**)(this + 24) = varType;
    }

    // 0x1004d9250
    void MakeSharedPoolRefCounter<game::VarType, MakeSharedPool<game::VarType, 5504>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::VarType, 5504>::deallocate(arg1);
    }

} // namespace jag

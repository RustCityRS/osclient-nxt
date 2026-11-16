// libs/game/runetek5/config/questtype/QuestType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class EnvSkySettings {
    public:
        GetSkyModelRequest();
        GetSkyBox() const;
        GetSkyBoxID() const;
        void SetDefaults();
        EnvSkySettings(EnvSkySettings const&);
        ~EnvSkySettings();
        EnvSkySettings();
        void Set(PacketT<Array<unsigned char, eastl::allocator>>&);
        void ApplyOverride(EnvironmentOverride const&);
        void SetSkyBox(shared_ptr<SkyBoxType> const&);
        bool operator==(EnvSkySettings const&) const;
        ulong hash() const;
        void SetSkyBoxID(int);

        // data members, from how the methods use this: 48 bytes
        uint m_skyBoxID; // offset 0
        char _unknown_4[20];
        ActiveComponent field_24; // offset 24
    };

    class QuestType {
    public:
        class MasterQuestVar;
        class PrerequisiteStat;
        class PrerequisiteVar;
        // virtual methods in vtable order
        virtual ~QuestType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        GetQuestPoints() const;
        bool StartedQuest(PlayerVarDomain&) const;
        bool FinishedQuest(PlayerVarDomain&) const;
        ulong CanStartQuest(PlayerVarDomain&, PlayerGameState const&, ModeAccountType const*) const;
        bool CheckPreReqQuestPoints(PlayerVarDomain&) const;
        bool CheckPreReqStat(PlayerGameState const&, unsigned int, ModeAccountType const*) const;
        CheckPreReqQuest(PlayerVarDomain&, unsigned int) const;
        bool CheckPreReqVarP(PlayerVarDomain&, unsigned int) const;
        bool CheckPreReqVarBit(PlayerVarDomain&, unsigned int) const;
        QuestType(BaseTemplateConfigTypeList<QuestType>*, int);

        // data members, from how the methods use this: 344 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[4];
        shared_ptr field_40; // offset 40
        char _unknown_56[112];
        uint field_168;       // offset 168
        uint field_172;       // offset 172
        uint field_176;       // offset 176
        undefined1 field_180; // offset 180
        char _unknown_181[3];
        uint field_184; // offset 184
        char _unknown_188[28];
        CoordGrid field_216; // offset 216
        char _unknown_232[48];
        uint field_280; // offset 280
        char _unknown_284[52];
        undefined4 field_336; // offset 336
        char _unknown_340[4];
    };

    class QuestType::MasterQuestVar {
    public:
        GetEndState() const;
        GetStartState() const;
        GetID() const;
        MasterQuestVar(int, int, int);
        MasterQuestVar();

        // data members, from how the methods use this: 16 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[12];
    };

    class QuestType::PrerequisiteStat {
    public:
        GetRequirement() const;
        GetID() const;
        PrerequisiteStat(int, unsigned int);
        PrerequisiteStat();
    };

    class QuestType::PrerequisiteVar {
    public:
        GetMax() const;
        GetMin() const;
        GetID() const;
        ~PrerequisiteVar();
        PrerequisiteVar(int, int, int, char const*);
        PrerequisiteVar* operator=(PrerequisiteVar&&);
        PrerequisiteVar(PrerequisiteVar&&);
        PrerequisiteVar();

        // data members, from how the methods use this: 24 bytes
        int field_0; // offset 0
        int field_4; // offset 4
        int field_8; // offset 8
        char _unknown_12[12];
    };

    // 0x1004af6b0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // EnvSkySettings::EnvSkySettings(): jumps straight to the base-object constructor

    // 0x1004af8d0, 32 bytes, inline, placed by class header (inline)
    // EnvSkySettings::Set(PacketT<Array<unsigned char, eastl::allocator> >&)
    void EnvSkySettings::Set(PacketT* param_1) {
        short sVar1;

        sVar1 = param_1->g2s();
        m_skyBoxID = (int)sVar1;
    }

    // 0x1004afa00, 80 bytes, inline, placed by class header (inline)
    // EnvSkySettings::ApplyOverride(EnvironmentOverride const&)
    void EnvSkySettings::ApplyOverride(EnvironmentOverride* param_1) {
        long lVar1;
        int iVar3;

        lVar1 = param_1->GetGLVertexBuffers();
        if (((lVar1 + 12))->IsActive()) {
            lVar1 = param_1->GetGLVertexBuffers();
            iVar3 = ((lVar1 + 12))->GetX();
            SetSkyBoxID(this, iVar3);
        }
    }

    // 0x1004afc50, 16 bytes, inline, placed by class header (inline)
    // EnvSkySettings::SetSkyBox(shared_ptr<SkyBoxType> const&)
    void EnvSkySettings::SetSkyBox(shared_ptr* param_1) {
        shared_ptr<SkyBoxType>::operator=((shared_ptr<SkyBoxType>*)&field_8, param_1);
    }

    // 0x1004aff40, 32 bytes, inline, placed by class header (inline)
    // EnvSkySettings::operator==(EnvSkySettings const&) const
    /* EnvSkySettings::TEMPNAMEPLACEHOLDERVALUE(EnvSkySettings const&) const */

    bool EnvSkySettings::operator==(EnvSkySettings* param_1) {
        shared_ptr* in_RDX;

        if (m_skyBoxID == param_1->m_skyBoxID) {
            return operator==((jag*)&field_8, (shared_ptr*)&param_1->field_8, in_RDX);
        }
        return false;
    }

    // 0x1004b0070, 48 bytes, inline, placed by class header (inline)
    // EnvSkySettings::hash() const
    ulong EnvSkySettings::hash() {
        ulong local_10;

        local_10 = 0;
        hash_combine<int>(&local_10, (int*)this);
        return local_10;
    }

    // 0x1004b07c0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // EnvSkySettings::EnvSkySettings()
    void EnvSkySettings::EnvSkySettings() {
        _func_decltype_nullptr* in_RSI;

        new (&field_8, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_24) BuildRequest<graphics::Model, BuildModelMain>();
        SetDefaults(this);
    }

    // 0x1004b0c80, 48 bytes, inline, placed by class header (inline)
    // EnvSkySettings::SetSkyBoxID(int)
    void EnvSkySettings::SetSkyBoxID(int param_1) {
        m_skyBoxID = param_1;
        shared_ptr<SkyBoxType>::reset();
        field_24->Clear();
    }

    // 0x1004f4750, 16 bytes, complete-object constructor, inline, placed by class name
    // QuestType::PrerequisiteVar::PrerequisiteVar(int, int, int, char const*): jumps straight to the base-object constructor

    // 0x1004f47e0, 48 bytes, inline, placed by class name
    // QuestType::PrerequisiteVar::operator=(QuestType::PrerequisiteVar&&)
    /* QuestType::PrerequisiteVar::TEMPNAMEPLACEHOLDERVALUE(QuestType::PrerequisiteVar&&)
    */

    PrerequisiteVar* QuestType::PrerequisiteVar::operator=(PrerequisiteVar* param_1) {
        int iVar1;

        field_8 = param_1->field_8;
        iVar1 = param_1->field_4;
        field_0 = param_1->field_0;
        field_4 = iVar1;
        eastl::string::operator=((eastl::string*)&field_16, (basic_string*)&param_1->field_16);
        return this;
    }

    // 0x1004f6b40, 32 bytes, deleting destructor, inline, placed by class name
    // QuestType::~QuestType()
    void QuestType::~QuestType() {
        ~QuestType(this);
        operator_delete(this);
    }

    // 0x1004f7020, 80 bytes, base-object constructor, inline, placed by class name
    // QuestType::PrerequisiteVar::PrerequisiteVar(int, int, int, char const*)
    void QuestType::PrerequisiteVar::PrerequisiteVar(int param_1, int param_2, int param_3, char* param_4) {
        allocator local_28[8];

        field_0 = param_1;
        field_4 = param_2;
        field_8 = param_3;
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (&field_16, param_4, local_28) eastl::string();
    }

    // 0x1004fcd50, 16 bytes, complete-object constructor, inline, placed by class name
    // QuestType::PrerequisiteVar::PrerequisiteVar(QuestType::PrerequisiteVar&&): jumps straight to the base-object constructor

    // 0x1004fcd60, 16 bytes, complete-object constructor, inline, placed by class name
    // QuestType::PrerequisiteVar::PrerequisiteVar(): jumps straight to the base-object constructor

    // 0x1004fcd70, 32 bytes, base-object constructor, inline, placed by class name
    // QuestType::PrerequisiteVar::PrerequisiteVar()
    void QuestType::PrerequisiteVar::PrerequisiteVar() {
        field_0 = -1;
        new (&field_16) eastl::string();
    }

    // 0x1004fcd90, 32 bytes, base-object constructor, inline, placed by class name
    // QuestType::PrerequisiteVar::PrerequisiteVar(QuestType::PrerequisiteVar&&)
    void QuestType::PrerequisiteVar::PrerequisiteVar(PrerequisiteVar* param_1) {
        int iVar1;

        field_8 = param_1->field_8;
        iVar1 = param_1->field_4;
        field_0 = param_1->field_0;
        field_4 = iVar1;
        new (&field_16, (basic_string*)&param_1->field_16) eastl::string();
    }

    // 0x1005b98a0, 16 bytes, complete-object destructor, inline, placed by class name
    // QuestType::~QuestType(): jumps straight to the base-object destructor

    // 0x1005b98b0, 144 bytes, base-object destructor, inline, placed by class name
    // QuestType::~QuestType()
    void QuestType::~QuestType() {
        field_0 = &PTR__QuestType_100f02bf0;
        (&field_312)->~Array();
        (&field_288)->~Array();
        (&field_256)->~Array();
        (&field_232)->~Array();
        (&field_192)->~Array();
        (&field_144)->~Array();
        (&field_120)->~Array();
        (&field_88)->~basic_string();
        (&field_56)->~basic_string();
        ~ConfigType();
    }

    // 0x1005b9dc0, 16 bytes, complete-object constructor, inline, placed by class name
    // QuestType::QuestType(BaseTemplateConfigTypeList<QuestType>*, int): jumps straight to the base-object constructor

    // 0x1005b9dd0, 416 bytes, base-object constructor, inline, placed by class name
    // QuestType::QuestType(BaseTemplateConfigTypeList<QuestType>*, int)
    void QuestType::QuestType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new (this) ConfigType<QuestType>(param_1, param_2);
        new (this) MakeSharedPool<QuestType, 128>();
        field_0 = &PTR__QuestType_100f02bf0;
        new (&field_56) eastl::string();
        new (&field_88) eastl::string();
        new (&field_120) Array<QuestType::MasterQuestVar, eastl::allocator>();
        new (&field_144) Array<QuestType::MasterQuestVar, eastl::allocator>();
        field_168 = 4294967295;
        field_184 = 0;
        field_172 = 0;
        field_176 = 0;
        field_180 = 0;
        new (&field_192) Array<CoordGrid, eastl::allocator>();
        new (field_216) game::CoordGrid();
        new (&field_232) Array<unsigned short, eastl::allocator>();
        new (&field_256) Array<QuestType::PrerequisiteStat, eastl::allocator>();
        field_280 = 0;
        new (&field_288) Array<QuestType::PrerequisiteVar, eastl::allocator>();
        new (&field_312) Array<QuestType::PrerequisiteVar, eastl::allocator>();
        field_336 = 4294967295;
    }

} // namespace jag::game

namespace jag {
    // 0x1004d90d0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::VarType* placement_new<game::VarType, game::BaseTemplateConfigTypeList<game::VarType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::VarType>*&, int&)
    /* game::VarType* placement_new<game::VarType,
   game::BaseTemplateConfigTypeList<game::VarType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::VarType>*&, unsigned int&) */

    VarType* jag::placement_new<game::VarType, game::BaseTemplateConfigTypeList<game::VarType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::VarType::VarType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1004d90f0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::VarType, MakeSharedPool<game::VarType, 5504> >* placement_new<MakeSharedPoolRefCounter<game::VarType, MakeSharedPool<game::VarType, 5504> >, MakeSharedPool<game::VarType, 5504>::RefCounterAndData*&, game::VarType*>(void*, MakeSharedPool<game::VarType, 5504>::RefCounterAndData*&, game::VarType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::VarType, MakeSharedPool<game::VarType, 5504>>,
                       MakeSharedPool<game::VarType, 5504>::RefCounterAndData*&, game::VarType*>(
        void* param_1, RefCounterAndData** param_2, VarType** param_3) {
        MakeSharedPoolRefCounter<game::VarType, MakeSharedPool<game::VarType, 5504>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1004d9110, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::VarType>(ref_counter_base*, game::VarType*, game::VarType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::VarType>(ref_counter_base* param_1, VarType* param_2,
                                                              enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x1004d9200, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::VarType, MakeSharedPool<game::VarType, 5504> >::MakeSharedPoolRefCounter(void*, game::VarType*): jumps straight to the base-object constructor

    // 0x1004d9210, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::VarType, MakeSharedPool<game::VarType, 5504> >::MakeSharedPoolRefCounter(void*, game::VarType*)
    void MakeSharedPoolRefCounter<game::VarType, MakeSharedPool<game::VarType, 5504>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::VarType, MakeSharedPool<game::VarType, 5504>>* this, void* param_1,
        VarType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7b28 + 16;
        *(void**)(this + 16) = param_1;
        *(VarType**)(this + 24) = param_2;
    }

    // 0x1004d9250, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::VarType, MakeSharedPool<game::VarType, 5504> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::VarType, MakeSharedPool<game::VarType, 5504>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::VarType, MakeSharedPool<game::VarType, 5504>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::VarType, 5504>::deallocate(pvVar1);
    }

} // namespace jag

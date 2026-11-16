// libs/game/runetek5/scene/ChangeLocationRequest.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ChangeLocationRequest {
    public:
        // virtual methods in vtable order
        virtual ~ChangeLocationRequest();
        GetSeqID() const;
        GetCoordGrid() const;
        GetLevel() const;
        GetServerGridZ() const;
        GetSourceServerCycle() const;
        GetServerGridX() const;
        GetLocTypeCustomisation() const;
        GetSeqDelay() const;
        GetLocationID() const;
        OverrideTransform() const;
        SetLocationID(int);
        GetSourceLogicTick() const;
        ChangeLocationRequest(ChangeLocationRequest const&);
        GetLocData() const;
        ChangeLocationRequest(ChangeLocationRequestType, int, int, CoordGrid const&, LocData const&, bool);
        ChangeLocationRequest(ChangeLocationRequestType, int, int, int, int, int, LocData const&);
        void Destruct();
        ActionRequest(LocationContainer&);

        // data members, from how the methods use this: 120 bytes
        undefined* field_0; // offset 0, vtable pointer
        undefined8 field_8; // offset 8
        uint field_16;      // offset 16
        LocData field_20;   // offset 20
        char _unknown_52[20];
        undefined1 field_72; // offset 72
        char _unknown_73[3];
        undefined4 field_76; // offset 76
        char _unknown_80[16];
        undefined4 field_96;   // offset 96
        undefined4 m_seqDelay; // offset 100
        undefined4 field_104;  // offset 104
        char _unknown_108[1];
        undefined8 field_109; // offset 109
        char _unknown_117[3];
    };

    // 0x10040f290, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ChangeLocationRequest::SetLocationID(int)
    /* graphics::ModelParticleSource::SetSourceModelExternalID(int) */

    void graphics::ModelParticleSource::SetSourceModelExternalID(int param_1) {
        m_sourceModelExternalID = param_1;
    }

    // 0x100410520, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ChangeLocationRequest::GetSourceLogicTick() const
    /* graphics::AnimationParameters::GetLoopBehaviour() const */

    int graphics::AnimationParameters::GetLoopBehaviour() {
        return m_loopBehaviour;
    }

    // 0x100410530, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ChangeLocationRequest::ChangeLocationRequest(ChangeLocationRequest const&): jumps straight to the base-object constructor

    // 0x10041cb80, 112 bytes, base-object constructor, inline, placed by class name
    // ChangeLocationRequest::ChangeLocationRequest(ChangeLocationRequest const&)
    void ChangeLocationRequest::ChangeLocationRequest(ChangeLocationRequest* param_1) {
        undefined8 uVar1;
        undefined3 uVar2;
        undefined4 uVar3;

        field_0 = PTR_vtable_100ee8000 + 16;
        field_8 = param_1->field_8;
        field_16 = param_1->field_16;
        new (field_20, (LocData*)param_1->field_20) LocData();
        uVar2 = *(undefined3*)&param_1->field_73;
        uVar3 = param_1->field_76;
        field_72 = param_1->field_72;
        *(undefined3*)&field_73 = uVar2;
        field_76 = uVar3;
        new (&field_80, (shared_ptr*)&param_1->field_80) shared_ptr<oldscape::dash3d::Decor>();
        field_109 = param_1->field_109;
        uVar3 = param_1->m_seqDelay;
        uVar1 = *(undefined8*)&param_1->field_104;
        field_96 = param_1->field_96;
        m_seqDelay = uVar3;
        *(undefined8*)&field_104 = uVar1;
    }

    // 0x10042e380, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ChangeLocationRequest::GetLocData() const
    /* ObjAppearanceData::GetOffset() const */

    undefined1* ObjAppearanceData::GetOffset() {
        return &field_20;
    }

    // 0x100438760, 16 bytes, complete-object destructor, inline, placed by class name
    // ChangeLocationRequest::~ChangeLocationRequest(): jumps straight to the base-object destructor

    // 0x100438770, 32 bytes, base-object destructor, inline, placed by class name
    // ChangeLocationRequest::~ChangeLocationRequest()
    void ChangeLocationRequest::~ChangeLocationRequest() {
        field_0 = PTR_vtable_100ee8000 + 16;
        (&field_80)->~shared_ptr();
    }

    // 0x100438790, 32 bytes, deleting destructor, inline, placed by class name
    // ChangeLocationRequest::~ChangeLocationRequest()
    void ChangeLocationRequest::~ChangeLocationRequest() {
        ~ChangeLocationRequest(this);
        operator_delete(this);
    }

    // 0x100438970, 32 bytes, complete-object constructor, inline, placed by class name
    // ChangeLocationRequest::ChangeLocationRequest(ChangeLocationRequestType, int, int, CoordGrid const&, LocData const&, bool)
    void ChangeLocationRequest::ChangeLocationRequest() {
        ChangeLocationRequest();
    }

    // 0x100438990, 144 bytes, base-object constructor, inline, placed by class name
    // ChangeLocationRequest::ChangeLocationRequest(ChangeLocationRequestType, int, int, CoordGrid const&, LocData const&, bool)
    void ChangeLocationRequest::ChangeLocationRequest(undefined4 param_2, undefined4 param_3, undefined4 param_4,
                                                      undefined8* param_5, LocData* param_6, undefined1 param_7) {
        new (this) MakeSharedPool<ChangeLocationRequest, 128>();
        field_0 = PTR_vtable_100ee8000 + 16;
        field_8 = *param_5;
        field_16 = *(uint*)(param_5 + 1);
        new (field_20, param_6) LocData();
        field_72 = param_7;
        field_76 = param_3;
        new (&field_80, (_func_decltype_nullptr*)param_6)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_96 = param_4;
        m_seqDelay = 0;
        field_104 = param_2;
        *(undefined8*)&field_108 = 0;
        *(undefined1*)((long)&field_109 + 7) = 1;
    }

    // 0x100444ad0, 32 bytes, complete-object constructor, inline, placed by class name
    // ChangeLocationRequest::ChangeLocationRequest(ChangeLocationRequestType, int, int, int, int, int, LocData const&)
    void ChangeLocationRequest::ChangeLocationRequest() {
        ChangeLocationRequest();
    }

    // 0x10044cba0, 144 bytes, base-object constructor, inline, placed by class name
    // ChangeLocationRequest::ChangeLocationRequest(ChangeLocationRequestType, int, int, int, int, int, LocData const&)
    void ChangeLocationRequest::ChangeLocationRequest(undefined4 param_2, undefined4 param_3, undefined4 param_4,
                                                      int param_5, int param_6, int param_7, LocData* param_8) {
        new (this) MakeSharedPool<ChangeLocationRequest, 128>();
        field_0 = PTR_vtable_100ee8000 + 16;
        new (&field_8, param_5, param_6, param_7) oldscape::rs2lib::worldmap::LocationData();
        new (field_20, param_8) LocData();
        field_76 = param_3;
        new (&field_80, (_func_decltype_nullptr*)param_8)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_96 = param_4;
        m_seqDelay = 0;
        field_104 = param_2;
        *(undefined8*)&field_108 = 0;
        *(undefined1*)((long)&field_109 + 7) = 1;
    }

} // namespace jag::game

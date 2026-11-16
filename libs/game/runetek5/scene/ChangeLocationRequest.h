// libs/game/runetek5/scene/ChangeLocationRequest.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class ChangeLocationRequest {
    public:
        // virtual methods in vtable order
        virtual ~ChangeLocationRequest();
        uint32_t GetSeqID() const;
        void GetCoordGrid() const;
        EnumOptionToggle GetLevel() const;
        unsigned int GetServerGridZ() const;
        uint32_t GetSourceServerCycle() const;
        uint64_t GetServerGridX() const;
        uint8_t* GetLocTypeCustomisation() const;
        uint32_t GetSeqDelay() const;
        unsigned int GetLocationID() const;
        uint8_t OverrideTransform() const;
        void SetLocationID(int arg1);
        AnimationLoopBehaviour GetSourceLogicTick() const;
        ChangeLocationRequest(const ChangeLocationRequest& changeLocationRequest);
        LocData GetLocData() const;
        ChangeLocationRequest(ChangeLocationRequestType arg1, int arg2, int arg3, const CoordGrid& arg4,
                              const LocData& arg5, bool arg6);
        ChangeLocationRequest(ChangeLocationRequestType arg1, int arg2, int arg3, int arg4, int arg5, int arg6,
                              const LocData& arg7);
        void Destruct();
        uint64_t ActionRequest(LocationContainer& locationContainer);

    private:
        uint64_t m_level;
        unsigned int m_serverGridZ;
        LocData m_locData;
        uint8_t _unknown_52[20];
        uint8_t field_72;
        uint8_t _unknown_73[3];
        unsigned int m_locationID;
        uint8_t _unknown_80[16];
        uint32_t m_seqID;
        uint32_t m_seqDelay;
        uint32_t field_104;
        uint8_t _unknown_108[1];
        uint64_t field_109;
        uint8_t _unknown_117[3];
    };

    // 0x10040f290
    void ChangeLocationRequest::SetLocationID(int arg1) {
        m_sourceModelExternalID = arg1;
    }

    // 0x100410520
    AnimationLoopBehaviour ChangeLocationRequest::GetSourceLogicTick() const {
        return m_loopBehaviour;
    }

    // 0x10041cb80
    ChangeLocationRequest::ChangeLocationRequest(const ChangeLocationRequest& changeLocationRequest)
        : m_level(changeLocationRequest.m_level), m_serverGridZ(changeLocationRequest.m_serverGridZ),
          m_locData(changeLocationRequest.m_locData) {
        uint32_t uVar2 = *(uint32_t*)&changeLocationRequest.field_73;
        unsigned int uVar3 = changeLocationRequest.m_locationID;
        field_72 = changeLocationRequest.field_72;
        *(uint32_t*)&field_73 = uVar2;
        m_locationID = uVar3;
        new (&field_80) shared_ptr(&changeLocationRequest.field_80);
        field_109 = changeLocationRequest.field_109;
        uint32_t uVar4 = changeLocationRequest.m_seqDelay;
        uint64_t uVar1 = *(uint64_t*)&changeLocationRequest.field_104;
        m_seqID = changeLocationRequest.m_seqID;
        m_seqDelay = uVar4;
        *(uint64_t*)&field_104 = uVar1;
    }

    // 0x10042e380
    LocData ChangeLocationRequest::GetLocData() const {
        return &field_20;
    }

    // 0x100438770
    ChangeLocationRequest::~ChangeLocationRequest() {
        field_80.~shared_ptr();
    }

    // 0x100438990
    ChangeLocationRequest::ChangeLocationRequest(ChangeLocationRequestType arg1, int arg2, int arg3,
                                                 const CoordGrid& arg4, const LocData& arg5, bool arg6)
        : MakeSharedPool<ChangeLocationRequest, 128>() {
        m_level = *param_5;
        m_serverGridZ = *(unsigned int*)(param_5 + 1);
        new (m_locData) LocData(*param_6);
        field_72 = param_7;
        m_locationID = param_3;
        new (&field_80) shared_ptr();
        m_seqID = param_4;
        m_seqDelay = 0;
        field_104 = param_2;
        *(uint64_t*)&field_108 = 0;
        *(uint8_t*)((long)&field_109 + 7) = 1;
    }

    // 0x10044cba0
    ChangeLocationRequest::ChangeLocationRequest(ChangeLocationRequestType arg1, int arg2, int arg3, int arg4, int arg5,
                                                 int arg6, const LocData& arg7)
        : MakeSharedPool<ChangeLocationRequest, 128>(), m_level(param_5, param_6, param_7), m_locData(*param_8),
          m_locationID(param_3) {
        new (&field_80) shared_ptr();
        m_seqID = param_4;
        m_seqDelay = 0;
        field_104 = param_2;
        *(uint64_t*)&field_108 = 0;
        *(uint8_t*)((long)&field_109 + 7) = 1;
    }

} // namespace jag::game

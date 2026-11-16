// libs/game/runetek5/config/bastype/BASType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class BASType {
    public:
        // virtual methods in vtable order
        virtual ~BASType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        GetHillRotateWidth() const;
        uint GetHillRotateLength() const;
        GetHillRotateXLimit() const;
        uint GetHillRotateZLimit() const;
        uint GetOverlayHeight() const;
        bool IsRunAnimation(int) const;
        bool IsCrawlAnimation(int) const;
        byte IsReadyRandom(int) const;
        ulong GetReadyAnim(int);
        GetRandomReadyAnimFromPrev(int);
        GetRandomReadyAnim();
        BASType(BaseTemplateConfigTypeList<BASType>*, int);
        GetReadyTurnLeft() const;
        GetReadyTurnRight() const;
        GetWalkForward() const;
        GetWalkBackward() const;
        GetWalkLeft() const;
        GetWalkRight() const;
        GetWalkTurnLeft() const;
        GetWalkTurnRight() const;
        GetRunForward() const;
        GetRunBackward() const;
        GetRunLeft() const;
        GetRunRight() const;
        GetRunTurnLeft() const;
        GetRunTurnRight() const;
        GetCrawlForward() const;
        GetCrawlBackward() const;
        GetCrawlLeft() const;
        GetCrawlRight() const;
        GetCrawlTurnLeft() const;
        GetCrawlTurnRight() const;

        // data members, from how the methods use this: 252 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[20];
        undefined4 field_56; // offset 56
        char _unknown_60[76];
        uint field_136;              // offset 136
        undefined4 m_readyTurnLeft;  // offset 140
        undefined4 m_readyTurnRight; // offset 144
        undefined4 m_walkForward;    // offset 148
        undefined4 m_walkBackward;   // offset 152
        undefined4 m_walkLeft;       // offset 156
        undefined4 m_walkRight;      // offset 160
        undefined4 m_walkTurnLeft;   // offset 164
        undefined4 m_walkTurnRight;  // offset 168
        undefined4 m_runForward;     // offset 172
        undefined4 m_runBackward;    // offset 176
        undefined4 m_runLeft;        // offset 180
        undefined4 m_runRight;       // offset 184
        undefined4 m_runTurnLeft;    // offset 188
        undefined4 m_runTurnRight;   // offset 192
        undefined4 m_crawlForward;   // offset 196
        undefined4 m_crawlBackward;  // offset 200
        undefined4 m_crawlLeft;      // offset 204
        undefined4 m_crawlRight;     // offset 208
        undefined4 m_crawlTurnLeft;  // offset 212
        undefined4 m_crawlTurnRight; // offset 216
        char _unknown_220[4];
        uint m_hillRotateLength; // offset 224
        char _unknown_228[4];
        uint m_hillRotateZLimit; // offset 232
        undefined4 field_236;    // offset 236
        undefined4 field_240;    // offset 240
        uint m_overlayHeight;    // offset 244
        undefined1 field_248;    // offset 248
        char _unknown_249[3];
    };

    // 0x1003f5190, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // BASType::GetHillRotateWidth() const
    /* SpotAnimation::GetEffectAnimID() const */

    undefined4 SpotAnimation::GetEffectAnimID() {
        return m_effectAnimID;
    }

    // 0x1003f51a0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // BASType::GetHillRotateLength() const
    /* LocationContainer::GetMinGridZ() const */

    int LocationContainer::GetMinGridZ() {
        return m_minGridZ;
    }

    // 0x1003f5b40, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // BASType::GetHillRotateXLimit() const
    /* GraphicsDefaults::GetObjStackColourTrillions() const */

    undefined4 GraphicsDefaults::GetObjStackColourTrillions() {
        return m_objStackColourTrillions;
    }

    // 0x1003f5b50, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // BASType::GetHillRotateZLimit() const
    /* Location::GetID() const */

    int Location::GetID() {
        return m_iD;
    }

    // 0x1003f6640, 16 bytes, inline, placed by class name
    // BASType::GetOverlayHeight() const
    uint BASType::GetOverlayHeight() {
        return m_overlayHeight;
    }

    // 0x100419c60, 64 bytes, inline, placed by class name
    // BASType::IsRunAnimation(int) const
    bool BASType::IsRunAnimation(int param_1) {
        bool bVar1;

        bVar1 = true;
        if ((((m_runForward != param_1) && (m_runBackward != param_1)) && (m_runLeft != param_1)) &&
            ((m_runRight != param_1 && (m_runTurnLeft != param_1)))) {
            bVar1 = m_runTurnRight == param_1;
        }
        return bVar1;
    }

    // 0x100419cb0, 64 bytes, inline, placed by class name
    // BASType::IsCrawlAnimation(int) const
    bool BASType::IsCrawlAnimation(int param_1) {
        bool bVar1;

        bVar1 = true;
        if ((((m_crawlForward != param_1) && (m_crawlBackward != param_1)) && (m_crawlLeft != param_1)) &&
            ((m_crawlRight != param_1 && (m_crawlTurnLeft != param_1)))) {
            bVar1 = m_crawlTurnRight == param_1;
        }
        return bVar1;
    }

    // 0x10055ae20, 32 bytes, deleting destructor, inline, placed by class name
    // BASType::~BASType()
    void BASType::~BASType() {
        ~BASType(this);
        operator_delete(this);
    }

    // 0x10058d080, 16 bytes, complete-object destructor, inline, placed by class name
    // BASType::~BASType(): jumps straight to the base-object destructor

    // 0x10058d090, 80 bytes, base-object destructor, inline, placed by class name
    // BASType::~BASType()
    void BASType::~BASType() {
        field_0 = &PTR__BASType_100f042c0;
        (&field_112)->~Array();
        (&field_88)->~Array();
        (&field_64)->~Array();
        ~ConfigType();
    }

    // 0x10058d2e0, 16 bytes, complete-object constructor, inline, placed by class name
    // BASType::BASType(BaseTemplateConfigTypeList<BASType>*, int): jumps straight to the base-object constructor

    // 0x10058d2f0, 240 bytes, base-object constructor, inline, placed by class name
    // BASType::BASType(BaseTemplateConfigTypeList<BASType>*, int)
    void BASType::BASType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new (this) ConfigType<BASType>(param_1, param_2);
        new (this) MakeSharedPool<BASType, 96>();
        field_0 = &PTR__BASType_100f042c0;
        field_56 = 4294967295;
        new (&field_64) Array<int, eastl::allocator>();
        new (&field_88) Array<unsigned int, eastl::allocator>();
        new (&field_112) Array<Array<int, eastl::allocator>, eastl::allocator>();
        field_136 = 0;
        m_readyTurnLeft = 4294967295;
        m_readyTurnRight = 4294967295;
        m_walkForward = 4294967295;
        m_walkBackward = 4294967295;
        m_walkLeft = 4294967295;
        m_walkRight = 4294967295;
        m_walkTurnLeft = 4294967295;
        m_walkTurnRight = 4294967295;
        m_runForward = 4294967295;
        m_runBackward = 4294967295;
        m_runLeft = 4294967295;
        m_runRight = 4294967295;
        m_runTurnLeft = 4294967295;
        m_runTurnRight = 4294967295;
        m_crawlForward = 4294967295;
        m_crawlBackward = 4294967295;
        m_crawlLeft = 4294967295;
        m_crawlRight = 4294967295;
        m_crawlTurnLeft = 4294967295;
        m_crawlTurnRight = 4294967295;
        *(undefined1(*)[16]) & field_220 = (undefined1[16])0;
        field_236 = 4294967295;
        field_240 = 4294967295;
        m_overlayHeight = 4294967295;
        field_248 = 1;
    }

    // 0x100659260, 16 bytes, inline, placed by class name
    // BASType::GetReadyTurnLeft() const
    undefined4 BASType::GetReadyTurnLeft() {
        return m_readyTurnLeft;
    }

    // 0x100659270, 16 bytes, inline, placed by class name
    // BASType::GetReadyTurnRight() const
    undefined4 BASType::GetReadyTurnRight() {
        return m_readyTurnRight;
    }

    // 0x100659280, 16 bytes, inline, placed by class name
    // BASType::GetWalkForward() const
    undefined4 BASType::GetWalkForward() {
        return m_walkForward;
    }

    // 0x100659290, 16 bytes, inline, placed by class name
    // BASType::GetWalkBackward() const
    undefined4 BASType::GetWalkBackward() {
        return m_walkBackward;
    }

    // 0x1006592a0, 16 bytes, inline, placed by class name
    // BASType::GetWalkLeft() const
    undefined4 BASType::GetWalkLeft() {
        return m_walkLeft;
    }

    // 0x1006592b0, 16 bytes, inline, placed by class name
    // BASType::GetWalkRight() const
    undefined4 BASType::GetWalkRight() {
        return m_walkRight;
    }

    // 0x1006592c0, 16 bytes, inline, placed by class name
    // BASType::GetWalkTurnLeft() const
    undefined4 BASType::GetWalkTurnLeft() {
        return m_walkTurnLeft;
    }

    // 0x1006592d0, 16 bytes, inline, placed by class name
    // BASType::GetWalkTurnRight() const
    undefined4 BASType::GetWalkTurnRight() {
        return m_walkTurnRight;
    }

    // 0x1006592e0, 16 bytes, inline, placed by class name
    // BASType::GetRunForward() const
    undefined4 BASType::GetRunForward() {
        return m_runForward;
    }

    // 0x1006592f0, 16 bytes, inline, placed by class name
    // BASType::GetRunBackward() const
    undefined4 BASType::GetRunBackward() {
        return m_runBackward;
    }

    // 0x100659300, 16 bytes, inline, placed by class name
    // BASType::GetRunLeft() const
    undefined4 BASType::GetRunLeft() {
        return m_runLeft;
    }

    // 0x100659310, 16 bytes, inline, placed by class name
    // BASType::GetRunRight() const
    undefined4 BASType::GetRunRight() {
        return m_runRight;
    }

    // 0x100659320, 16 bytes, inline, placed by class name
    // BASType::GetRunTurnLeft() const
    undefined4 BASType::GetRunTurnLeft() {
        return m_runTurnLeft;
    }

    // 0x100659330, 16 bytes, inline, placed by class name
    // BASType::GetRunTurnRight() const
    undefined4 BASType::GetRunTurnRight() {
        return m_runTurnRight;
    }

    // 0x100659340, 16 bytes, inline, placed by class name
    // BASType::GetCrawlForward() const
    undefined4 BASType::GetCrawlForward() {
        return m_crawlForward;
    }

    // 0x100659350, 16 bytes, inline, placed by class name
    // BASType::GetCrawlBackward() const
    undefined4 BASType::GetCrawlBackward() {
        return m_crawlBackward;
    }

    // 0x100659360, 16 bytes, inline, placed by class name
    // BASType::GetCrawlLeft() const
    undefined4 BASType::GetCrawlLeft() {
        return m_crawlLeft;
    }

    // 0x100659370, 16 bytes, inline, placed by class name
    // BASType::GetCrawlRight() const
    undefined4 BASType::GetCrawlRight() {
        return m_crawlRight;
    }

    // 0x100659380, 16 bytes, inline, placed by class name
    // BASType::GetCrawlTurnLeft() const
    undefined4 BASType::GetCrawlTurnLeft() {
        return m_crawlTurnLeft;
    }

    // 0x100659390, 16 bytes, inline, placed by class name
    // BASType::GetCrawlTurnRight() const
    undefined4 BASType::GetCrawlTurnRight() {
        return m_crawlTurnRight;
    }

} // namespace jag::game

// 0x1003f5b70, 16 bytes, placed by debug map only (low confidence)
// atan2(float, float)
void atan2(float param_1, float param_2) {
    _atan2f();
}

// 0x1003f5b80, 16 bytes, placed by debug map only (low confidence)
// sin(float)
void sin(float param_1) {
    _sinf();
}

// 0x1003f5b90, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}

// 0x1003f5ba0, 32 bytes, placed by debug map only (low confidence)
// fmod(float, float)
void fmod(float param_1, float param_2) {
    _fmodf(param_1, 1086918619);
}

namespace jag::math {
    // 0x1003f5d30, 112 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<double> Vector3TFromVector3<double>(Vector3T<float> const&)
    math* Vector3TFromVector3<double>(Vector3T* param_1) {
        float fVar1;
        float fVar2;
        vector* pvVar3;
        float* pfVar4;

        pvVar3 = param_1->SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar3;
        pfVar4 = (float*)param_1->y();
        fVar2 = *pfVar4;
        pfVar4 = (float*)param_1->second();
        new (this) Vector3T<double>((double)fVar1, (double)fVar2, (double)*pfVar4);
        return this;
    }

} // namespace jag::math

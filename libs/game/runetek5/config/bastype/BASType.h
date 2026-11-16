// libs/game/runetek5/config/bastype/BASType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class BASType {
    public:
        // virtual methods in vtable order
        virtual ~BASType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        uint32_t GetHillRotateWidth() const;
        unsigned int GetHillRotateLength() const;
        uint32_t GetHillRotateXLimit() const;
        unsigned int GetHillRotateZLimit() const;
        unsigned int GetOverlayHeight() const;
        bool IsRunAnimation(int arg1) const;
        bool IsCrawlAnimation(int arg1) const;
        bool IsReadyRandom(int arg1) const;
        unsigned long GetReadyAnim(int arg1);
        uint32_t GetRandomReadyAnimFromPrev(int arg1);
        uint32_t GetRandomReadyAnim();
        BASType(BaseTemplateConfigTypeList<BASType>* baseTemplateConfigTypeList, int arg2);
        uint32_t GetReadyTurnLeft() const;
        uint32_t GetReadyTurnRight() const;
        uint32_t GetWalkForward() const;
        uint32_t GetWalkBackward() const;
        uint32_t GetWalkLeft() const;
        uint32_t GetWalkRight() const;
        uint32_t GetWalkTurnLeft() const;
        uint32_t GetWalkTurnRight() const;
        uint32_t GetRunForward() const;
        uint32_t GetRunBackward() const;
        uint32_t GetRunLeft() const;
        uint32_t GetRunRight() const;
        uint32_t GetRunTurnLeft() const;
        uint32_t GetRunTurnRight() const;
        uint32_t GetCrawlForward() const;
        uint32_t GetCrawlBackward() const;
        uint32_t GetCrawlLeft() const;
        uint32_t GetCrawlRight() const;
        uint32_t GetCrawlTurnLeft() const;
        uint32_t GetCrawlTurnRight() const;

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<BASType>* field_24;
        int field_32;
        uint8_t _unknown_36[20];
        uint32_t field_56;
        uint8_t _unknown_60[76];
        unsigned int field_136;
        uint32_t m_readyTurnLeft;
        uint32_t m_readyTurnRight;
        uint32_t m_walkForward;
        uint32_t m_walkBackward;
        uint32_t m_walkLeft;
        uint32_t m_walkRight;
        uint32_t m_walkTurnLeft;
        uint32_t m_walkTurnRight;
        uint32_t m_runForward;
        uint32_t m_runBackward;
        uint32_t m_runLeft;
        uint32_t m_runRight;
        uint32_t m_runTurnLeft;
        uint32_t m_runTurnRight;
        uint32_t m_crawlForward;
        uint32_t m_crawlBackward;
        uint32_t m_crawlLeft;
        uint32_t m_crawlRight;
        uint32_t m_crawlTurnLeft;
        uint32_t m_crawlTurnRight;
        uint8_t _unknown_220[4];
        unsigned int m_hillRotateLength;
        uint8_t _unknown_228[4];
        unsigned int m_hillRotateZLimit;
        uint32_t field_236;
        uint32_t field_240;
        unsigned int m_overlayHeight;
        uint8_t field_248;
        uint8_t _unknown_249[3];
    };

    // 0x1003f5190
    uint32_t BASType::GetHillRotateWidth() const {
        return m_effectAnimID;
    }

    // 0x1003f51a0
    unsigned int BASType::GetHillRotateLength() const {
        return m_minGridZ;
    }

    // 0x1003f5b40
    uint32_t BASType::GetHillRotateXLimit() const {
        return m_objStackColourTrillions;
    }

    // 0x1003f5b50
    unsigned int BASType::GetHillRotateZLimit() const {
        return m_iD;
    }

    // 0x1003f6640
    unsigned int BASType::GetOverlayHeight() const {
        return m_overlayHeight;
    }

    // 0x100419c60
    bool BASType::IsRunAnimation(int arg1) const {
        bool bVar1 = true;
        if ((((m_runForward != arg1) && (m_runBackward != arg1)) && (m_runLeft != arg1)) &&
            ((m_runRight != arg1 && (m_runTurnLeft != arg1)))) {
            bVar1 = m_runTurnRight == arg1;
        }
        return bVar1;
    }

    // 0x100419cb0
    bool BASType::IsCrawlAnimation(int arg1) const {
        bool bVar1 = true;
        if ((((m_crawlForward != arg1) && (m_crawlBackward != arg1)) && (m_crawlLeft != arg1)) &&
            ((m_crawlRight != arg1 && (m_crawlTurnLeft != arg1)))) {
            bVar1 = m_crawlTurnRight == arg1;
        }
        return bVar1;
    }

    // 0x10058d090
    BASType::~BASType() {
        field_112.~Array();
        field_88.~Array();
        field_64.~Array();
    }

    // 0x10058d2f0
    BASType::BASType(BaseTemplateConfigTypeList<BASType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<BASType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<BASType, 96>(), field_56(4294967295),
          field_136(0), m_readyTurnLeft(4294967295), m_readyTurnRight(4294967295), m_walkForward(4294967295),
          m_walkBackward(4294967295), m_walkLeft(4294967295), m_walkRight(4294967295), m_walkTurnLeft(4294967295),
          m_walkTurnRight(4294967295), m_runForward(4294967295), m_runBackward(4294967295), m_runLeft(4294967295),
          m_runRight(4294967295), m_runTurnLeft(4294967295), m_runTurnRight(4294967295), m_crawlForward(4294967295),
          m_crawlBackward(4294967295), m_crawlLeft(4294967295), m_crawlRight(4294967295), m_crawlTurnLeft(4294967295),
          m_crawlTurnRight(4294967295) {
        *(uint8_t(*)[16]) & field_220 = (uint8_t[16])0;
        field_236 = 4294967295;
        field_240 = 4294967295;
        m_overlayHeight = 4294967295;
        field_248 = 1;
    }

    // 0x100659260
    uint32_t BASType::GetReadyTurnLeft() const {
        return m_readyTurnLeft;
    }

    // 0x100659270
    uint32_t BASType::GetReadyTurnRight() const {
        return m_readyTurnRight;
    }

    // 0x100659280
    uint32_t BASType::GetWalkForward() const {
        return m_walkForward;
    }

    // 0x100659290
    uint32_t BASType::GetWalkBackward() const {
        return m_walkBackward;
    }

    // 0x1006592a0
    uint32_t BASType::GetWalkLeft() const {
        return m_walkLeft;
    }

    // 0x1006592b0
    uint32_t BASType::GetWalkRight() const {
        return m_walkRight;
    }

    // 0x1006592c0
    uint32_t BASType::GetWalkTurnLeft() const {
        return m_walkTurnLeft;
    }

    // 0x1006592d0
    uint32_t BASType::GetWalkTurnRight() const {
        return m_walkTurnRight;
    }

    // 0x1006592e0
    uint32_t BASType::GetRunForward() const {
        return m_runForward;
    }

    // 0x1006592f0
    uint32_t BASType::GetRunBackward() const {
        return m_runBackward;
    }

    // 0x100659300
    uint32_t BASType::GetRunLeft() const {
        return m_runLeft;
    }

    // 0x100659310
    uint32_t BASType::GetRunRight() const {
        return m_runRight;
    }

    // 0x100659320
    uint32_t BASType::GetRunTurnLeft() const {
        return m_runTurnLeft;
    }

    // 0x100659330
    uint32_t BASType::GetRunTurnRight() const {
        return m_runTurnRight;
    }

    // 0x100659340
    uint32_t BASType::GetCrawlForward() const {
        return m_crawlForward;
    }

    // 0x100659350
    uint32_t BASType::GetCrawlBackward() const {
        return m_crawlBackward;
    }

    // 0x100659360
    uint32_t BASType::GetCrawlLeft() const {
        return m_crawlLeft;
    }

    // 0x100659370
    uint32_t BASType::GetCrawlRight() const {
        return m_crawlRight;
    }

    // 0x100659380
    uint32_t BASType::GetCrawlTurnLeft() const {
        return m_crawlTurnLeft;
    }

    // 0x100659390
    uint32_t BASType::GetCrawlTurnRight() const {
        return m_crawlTurnRight;
    }

} // namespace jag::game

// 0x1003f5b70
void atan2(float arg1, float arg2) {
    _atan2f();
}

// 0x1003f5b80
void sin(float arg1) {
    _sinf();
}

// 0x1003f5b90
void cos(float arg1) {
    _cosf();
}

// 0x1003f5ba0
void fmod(float arg1, float arg2) {
    _fmodf(arg1, 1086918619);
}

namespace jag::math {
    // 0x1003f5d30
    Vector3T<double> Vector3TFromVector3<double>(const Vector3T<float>& vector3) {
        Layout* in_RSI;

        auto pfVar3 = in_RSI->SSOBeginPtr();
        float fVar1 = *pfVar3;
        pfVar3 = (float*)in_RSI->y();
        float fVar2 = *pfVar3;
        pfVar3 = (float*)in_RSI->second();
        new (vector3) Vector3T((double)fVar1, (double)fVar2, (double)*pfVar3);
        return vector3;
    }

} // namespace jag::math

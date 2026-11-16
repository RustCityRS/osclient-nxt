// libs/game/runetek5/script/ClientScript.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class ClientScript {
    public:
        unsigned int GetLocalIntCount() const;
        unsigned int GetLocalObjCount() const;
        unsigned int GetLocalLongCount() const;
        uint8_t* Load(PacketT<Array<unsigned char>>& arg1, ConfigProvider& configProvider);
        void ProfilingScriptCalled();
        void ProfilingScriptFinished(unsigned long long arg1, unsigned long long arg2);
        void ProfilingChildScriptFinished(unsigned long long arg1, unsigned long long arg2);
        static OpObjValue m_nullOpObj; // = OpObjValue()

    private:
        unsigned long long field_0;
        unsigned long long field_8;
        unsigned long long field_16;
        unsigned long long field_24;
        int field_32;
        uint8_t _unknown_36[3852];
        unsigned int m_localIntCount;
        unsigned int m_localObjCount;
        unsigned int m_localLongCount;
        unsigned int field_3900;
        unsigned int field_3904;
        unsigned int field_3908;
        uint8_t _unknown_3912[4];
    };

    class OpObjValue {
    public:
        OpObjValue();
        ~OpObjValue();
        OpObjValue* operator=(const shared_ptr<VarType>& varType);
        OpObjValue* operator=(long long arg1);
        OpObjValue* operator=(eastl::string str);
        OpObjValue* operator=(const shared_ptr<VarBitType>& varBitType);

        uint8_t _unknown_0[1];
    };

    // 0x1003b6f10
    unsigned int ClientScript::GetLocalIntCount() const {
        return m_localIntCount;
    }

    // 0x1003b6f20
    unsigned int ClientScript::GetLocalObjCount() const {
        return m_localObjCount;
    }

    // 0x1003b6f40
    unsigned int ClientScript::GetLocalLongCount() const {
        return m_localLongCount;
    }

    // 0x1003d0400
    OpObjValue* OpObjValue::operator=(const shared_ptr<VarType>& varType) {
        operator=(varType);
        return this;
    }

    // 0x1003d0420
    OpObjValue* OpObjValue::operator=(long long arg1) {
        long long local_18 = arg1;
        operator=(&local_18);
        return this;
    }

    // 0x1003d0440
    OpObjValue* OpObjValue::operator=(eastl::basic_string<char, BucketAllocatorEASTL> str) {
        operator=(str);
        return this;
    }

    // 0x1003d0460
    OpObjValue* OpObjValue::operator=(const shared_ptr<VarBitType>& varBitType) {
        operator=(varBitType);
        return this;
    }

} // namespace jag::game

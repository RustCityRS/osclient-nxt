// libs/game/runetek5/script/ClientScript.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ClientScript {
    public:
        uint GetLocalIntCount() const;
        uint GetLocalObjCount() const;
        uint GetLocalLongCount() const;
        Load(PacketT<Array<unsigned char, eastl::allocator>>&, ConfigProvider&);
        void ProfilingScriptCalled();
        void ProfilingScriptFinished(unsigned long long, unsigned long long);
        void ProfilingChildScriptFinished(unsigned long long, unsigned long long);
        static OpObjValue /* 32 bytes */ m_nullOpObj; // = OpObjValue()

        // data members, from how the methods use this: 3916 bytes
        ulonglong field_0;  // offset 0
        ulonglong field_8;  // offset 8
        ulonglong field_16; // offset 16
        ulonglong field_24; // offset 24
        int field_32;       // offset 32
        char _unknown_36[3852];
        uint m_localIntCount;  // offset 3888
        uint m_localObjCount;  // offset 3892
        uint m_localLongCount; // offset 3896
        uint field_3900;       // offset 3900
        uint field_3904;       // offset 3904
        uint field_3908;       // offset 3908
        char _unknown_3912[4];
    };

    class OpObjValue {
    public:
        OpObjValue();
        ~OpObjValue();
        OpObjValue* operator=(shared_ptr<VarType> const&);
        OpObjValue* operator=(long long);
        OpObjValue* operator=(eastl::basic_string<char, BucketAllocatorEASTL>);
        OpObjValue* operator=(shared_ptr<VarBitType> const&);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1003b6f10, 16 bytes, inline, placed by class name and debug map
    // ClientScript::GetLocalIntCount() const
    uint ClientScript::GetLocalIntCount() {
        return m_localIntCount;
    }

    // 0x1003b6f20, 16 bytes, inline, placed by class name and debug map
    // ClientScript::GetLocalObjCount() const
    uint ClientScript::GetLocalObjCount() {
        return m_localObjCount;
    }

    // 0x1003b6f40, 16 bytes, inline, placed by class name and debug map
    // ClientScript::GetLocalLongCount() const
    uint ClientScript::GetLocalLongCount() {
        return m_localLongCount;
    }

    // 0x1003d0400, 32 bytes, inline, placed by class header (inline)
    // OpObjValue::operator=(shared_ptr<VarType> const&)
    /* OpObjValue::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<VarType> const&) */

    OpObjValue* OpObjValue::operator=(shared_ptr* param_1) {
        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, shared_ptr<VarType>,
                     shared_ptr<VarBitType>, OpObjValue::Dummy>::
        operator=((variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                           shared_ptr<VarType>, shared_ptr<VarBitType>, OpObjValue::Dummy>*)this,
                  param_1);
        return this;
    }

    // 0x1003d0420, 32 bytes, inline, placed by class header (inline)
    // OpObjValue::operator=(long long)
    /* OpObjValue::TEMPNAMEPLACEHOLDERVALUE(long long) */

    OpObjValue* OpObjValue::operator=(longlong param_1) {
        longlong local_18;

        local_18 = param_1;
        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, shared_ptr<VarType>,
                     shared_ptr<VarBitType>, OpObjValue::Dummy>::
        operator=((variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                           shared_ptr<VarType>, shared_ptr<VarBitType>, OpObjValue::Dummy>*)this,
                  &local_18);
        return this;
    }

    // 0x1003d0440, 32 bytes, inline, placed by class header (inline)
    // OpObjValue::operator=(eastl::basic_string<char, BucketAllocatorEASTL>)
    /* OpObjValue::TEMPNAMEPLACEHOLDERVALUE(eastl::basic_string<char,
   BucketAllocatorEASTL>) */

    OpObjValue* OpObjValue::operator=(basic_string* param_2) {
        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, shared_ptr<VarType>,
                     shared_ptr<VarBitType>, OpObjValue::Dummy>::
        operator=((variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                           shared_ptr<VarType>, shared_ptr<VarBitType>, OpObjValue::Dummy>*)this,
                  param_2);
        return this;
    }

    // 0x1003d0460, 32 bytes, inline, placed by class header (inline)
    // OpObjValue::operator=(shared_ptr<VarBitType> const&)
    /* OpObjValue::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<VarBitType> const&) */

    OpObjValue* OpObjValue::operator=(shared_ptr* param_1) {
        std::variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine, shared_ptr<VarType>,
                     shared_ptr<VarBitType>, OpObjValue::Dummy>::
        operator=((variant<int, long long, eastl::basic_string<char, BucketAllocatorEASTL>, CoordFine,
                           shared_ptr<VarType>, shared_ptr<VarBitType>, OpObjValue::Dummy>*)this,
                  param_1);
        return this;
    }

} // namespace jag::game

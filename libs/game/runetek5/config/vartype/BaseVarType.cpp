// libs/game/runetek5/config/vartype/BaseVarType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "BaseVarType.h"

namespace jag::game {
    // 0x1039bb7d0
    int64_t BaseVarType::INTEGER;

    // 0x1039bb7d8
    int64_t BaseVarType::LONG;

    // 0x1039bb7e0
    int64_t BaseVarType::STRING;

    // 0x1039bb7e8
    int64_t BaseVarType::COORDFINE;

    // 0x100009e70: BaseVarType::~BaseVarType() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1004cd710
    void BaseVarType::Initialise() {
        BaseVarTypeInteger* baseVarTypeInteger = (BaseVarTypeInteger*)operator new(8);
        new (baseVarTypeInteger) BaseVarTypeInteger();
        INTEGER = baseVarTypeInteger;
        BaseVarTypeLong* this_00 = (BaseVarTypeLong*)operator new(8);
        new (this_00) BaseVarTypeLong();
        LONG = this_00;
        BaseVarTypeString* this_01 = (BaseVarTypeString*)operator new(8);
        new (this_01) BaseVarTypeString();
        STRING = this_01;
        BaseVarTypeCoordFine* this_02 = (BaseVarTypeCoordFine*)operator new(8);
        new (this_02) BaseVarTypeCoordFine();
        COORDFINE = this_02;
    }

    // 0x1004cd7f0
    void BaseVarType::Destroy() {
        safe_delete<VarDomainType>((DebugPrimitiveCollectorBasic**)&INTEGER);
        safe_delete<VarDomainType>((DebugPrimitiveCollectorBasic**)&LONG);
        safe_delete<VarDomainType>((DebugPrimitiveCollectorBasic**)&STRING);
        safe_delete<VarDomainType>((DebugPrimitiveCollectorBasic**)&COORDFINE);
    }

    // 0x1004cd830
    void BaseVarTypeInteger::Decode(VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const {
        int local_14;

        arg2.g4s();
        varValue.Set<int>(local_14);
    }

    // 0x1004cd870
    void BaseVarTypeInteger::Decode(VarValue& varValue,
                                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) const {
        int local_14;

        arg2.g4s();
        varValue.Set<int>(local_14);
    }

    // 0x1004cd8a0
    void BaseVarTypeInteger::Encode(const VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const {
        unsigned int arg1 = varValue.GetInt();
        arg2.p4<int>(arg1);
    }

    // 0x1004cd8d0
    void BaseVarTypeInteger::Encode(const VarValue& varValue,
                                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) const {
        unsigned int uVar1 = varValue.GetInt();
        arg2.p4<int>((unsigned long)uVar1);
    }

    // 0x1004cd900
    void BaseVarTypeLong::Decode(VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const {
        long long local_18 = arg2.g8s();
        varValue.Set<long long>(local_18);
    }

    // 0x1004cd950
    void BaseVarTypeLong::Decode(VarValue& varValue, PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) const {
        long long local_18 = arg2.g8s();
        varValue.Set<long long>(local_18);
    }

    // 0x1004cd990
    void BaseVarTypeLong::Encode(const VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const {
        unsigned long long arg1 = varValue.GetInt64();
        arg2.p8<long long>(arg1);
    }

    // 0x1004cda10
    void BaseVarTypeLong::Encode(const VarValue& varValue,
                                 PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) const {
        unsigned long long arg1 = varValue.GetInt64();
        arg2.p8<long long>(arg1);
    }

    // 0x1004cda40
    void BaseVarTypeString::Decode(VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const {
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_30;

        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<
            eastl::basic_string<char, BucketAllocatorEASTL>>(&local_30, (uint8_t)arg2);
        varValue.Set<eastl::basic_string<char, BucketAllocatorEASTL>>(local_30);
    }

    // 0x1004cdae0
    void BaseVarTypeString::Decode(VarValue& varValue,
                                   PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) const {
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_30[24];

        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
            eastl::basic_string<char, BucketAllocatorEASTL>>(local_30, (uint8_t)arg2);
        varValue.Set<eastl::basic_string<char, BucketAllocatorEASTL>>(*local_30);
    }

    // 0x1004cdb80
    void BaseVarTypeString::Encode(const VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const {
        auto str = varValue.GetString();
        arg2.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(*str, true);
    }

    // 0x1004cdc00
    void BaseVarTypeString::Encode(const VarValue& varValue,
                                   PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) const {
        auto str = varValue.GetString();
        arg2.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(*str, true);
    }

    // 0x1004cdc30
    void BaseVarTypeCoordFine::Decode(VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const {
        uint8_t local_28[16];

        new (local_28) CoordFine(arg2);
        varValue.Set<CoordFine>(*local_28);
    }

    // 0x1004cdc80
    void BaseVarTypeCoordFine::Decode(VarValue& varValue,
                                      PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) const {
        uint8_t local_28[16];

        new (local_28) CoordFine(arg2);
        varValue.Set<CoordFine>(*local_28);
    }

    // 0x1004cdcc0
    void BaseVarTypeCoordFine::Encode(const VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const {
        varValue.GetCoordFine()->Serialise(arg2);
    }

    // 0x1004cdd40
    void BaseVarTypeCoordFine::Encode(const VarValue& varValue,
                                      PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) const {
        varValue.GetCoordFine()->Serialise(arg2);
    }

} // namespace jag::game

// libs/game/runetek5/config/vartype/BaseVarType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "BaseVarType.h"

namespace jag::game {
    // 0x1039bb7d0, 8 bytes, __common; zero-initialised
    BaseVarType::INTEGER;

    // 0x1039bb7d8, 8 bytes, __common; zero-initialised
    BaseVarType::LONG;

    // 0x1039bb7e0, 8 bytes, __common; zero-initialised
    BaseVarType::STRING;

    // 0x1039bb7e8, 8 bytes, __common; zero-initialised
    BaseVarType::COORDFINE;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BaseVarType::~BaseVarType();

    // 0x1004cd710, 160 bytes, placed by class name and debug map
    // BaseVarType::Initialise()
    void BaseVarType::Initialise() {
        BaseVarTypeInteger* this;
        BaseVarTypeLong* this_00;
        BaseVarTypeString* this_01;
        BaseVarTypeCoordFine* this_02;

        this = operator_new(8);
        BaseVarTypeInteger::BaseVarTypeInteger(this);
        INTEGER = this;
        this_00 = operator_new(8);
        BaseVarTypeLong::BaseVarTypeLong(this_00);
        LONG = this_00;
        this_01 = operator_new(8);
        BaseVarTypeString::BaseVarTypeString(this_01);
        STRING = this_01;
        this_02 = operator_new(8);
        BaseVarTypeCoordFine::BaseVarTypeCoordFine(this_02);
        COORDFINE = this_02;
    }

    // 0x1004cd7f0, 64 bytes, placed by class name and debug map
    // BaseVarType::Destroy()
    void BaseVarType::Destroy() {
        safe_delete<VarDomainType>((VarDomainType**)&INTEGER);
        safe_delete<VarDomainType>((VarDomainType**)&LONG);
        safe_delete<VarDomainType>((VarDomainType**)&STRING);
        safe_delete<VarDomainType>((VarDomainType**)&COORDFINE);
    }

    // 0x1004cd830, 48 bytes, placed by debug map only (low confidence)
    // BaseVarTypeInteger::Decode(VarValue&, PacketT<Array<unsigned char, eastl::allocator> >&) const
    void BaseVarTypeInteger::Decode(VarValue* param_1, PacketT* param_2) {
        int local_14;

        param_2->g4s();
        VarValue::Set<int>(param_1, &local_14);
    }

    // 0x1004cd870, 48 bytes, placed by debug map only (low confidence)
    // BaseVarTypeInteger::Decode(VarValue&, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&) const
    void BaseVarTypeInteger::Decode(VarValue* param_1, PacketT* param_2) {
        int local_14;

        param_2->g4s();
        VarValue::Set<int>(param_1, &local_14);
    }

    // 0x1004cd8a0, 48 bytes, placed by debug map only (low confidence)
    // BaseVarTypeInteger::Encode(VarValue const&, PacketT<Array<unsigned char, eastl::allocator> >&) const
    void BaseVarTypeInteger::Encode(VarValue* param_1, PacketT* param_2) {
        int iVar1;

        iVar1 = param_1->GetInt();
        PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_2, iVar1);
    }

    // 0x1004cd8d0, 48 bytes, placed by debug map only (low confidence)
    // BaseVarTypeInteger::Encode(VarValue const&, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&) const
    void BaseVarTypeInteger::Encode(VarValue* param_1, PacketT* param_2) {
        int iVar1;

        iVar1 = param_1->GetInt();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_2, iVar1);
    }

    // 0x1004cd900, 48 bytes, placed by debug map only (low confidence)
    // BaseVarTypeLong::Decode(VarValue&, PacketT<Array<unsigned char, eastl::allocator> >&) const
    void BaseVarTypeLong::Decode(VarValue* param_1, PacketT* param_2) {
        longlong local_18;

        local_18 = param_2->g8s();
        VarValue::Set<long long>(param_1, &local_18);
    }

    // 0x1004cd950, 48 bytes, placed by debug map only (low confidence)
    // BaseVarTypeLong::Decode(VarValue&, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&) const
    void BaseVarTypeLong::Decode(VarValue* param_1, PacketT* param_2) {
        longlong local_18;

        local_18 = param_2->g8s();
        VarValue::Set<long long>(param_1, &local_18);
    }

    // 0x1004cd990, 48 bytes, placed by debug map only (low confidence)
    // BaseVarTypeLong::Encode(VarValue const&, PacketT<Array<unsigned char, eastl::allocator> >&) const
    void BaseVarTypeLong::Encode(VarValue* param_1, PacketT* param_2) {
        longlong lVar1;

        lVar1 = param_1->GetInt64();
        PacketT<Array<unsigned char, eastl::allocator>>::p8<long long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_2, lVar1);
    }

    // 0x1004cda10, 48 bytes, placed by debug map only (low confidence)
    // BaseVarTypeLong::Encode(VarValue const&, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&) const
    void BaseVarTypeLong::Encode(VarValue* param_1, PacketT* param_2) {
        longlong lVar1;

        lVar1 = param_1->GetInt64();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_2, lVar1);
    }

    // 0x1004cda40, 80 bytes, placed by debug map only (low confidence)
    // BaseVarTypeString::Decode(VarValue&, PacketT<Array<unsigned char, eastl::allocator> >&) const
    void BaseVarTypeString::Decode(VarValue* param_1, PacketT* param_2) {
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_30[24];

        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
            eastl::basic_string<char, BucketAllocatorEASTL>>(local_30, SUB81(param_2, 0));
        VarValue::Set<eastl::basic_string<char, BucketAllocatorEASTL>>(param_1, (basic_string*)local_30);
        local_30->~basic_string();
    }

    // 0x1004cdae0, 80 bytes, placed by debug map only (low confidence)
    // BaseVarTypeString::Decode(VarValue&, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&) const
    void BaseVarTypeString::Decode(VarValue* param_1, PacketT* param_2) {
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_30[24];

        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
            eastl::basic_string<char, BucketAllocatorEASTL>>(local_30, SUB81(param_2, 0));
        VarValue::Set<eastl::basic_string<char, BucketAllocatorEASTL>>(param_1, (basic_string*)local_30);
        local_30->~basic_string();
    }

    // 0x1004cdb80, 48 bytes, placed by debug map only (low confidence)
    // BaseVarTypeString::Encode(VarValue const&, PacketT<Array<unsigned char, eastl::allocator> >&) const
    void BaseVarTypeString::Encode(VarValue* param_1, PacketT* param_2) {
        basic_string* pbVar1;

        pbVar1 = (basic_string*)param_1->GetString();
        PacketT<Array<unsigned char, eastl::allocator>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>((PacketT<Array<unsigned char, eastl::allocator>>*)param_2,
                                                             pbVar1, true);
    }

    // 0x1004cdc00, 48 bytes, placed by debug map only (low confidence)
    // BaseVarTypeString::Encode(VarValue const&, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&) const
    void BaseVarTypeString::Encode(VarValue* param_1, PacketT* param_2) {
        basic_string* pbVar1;

        pbVar1 = (basic_string*)param_1->GetString();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_2, pbVar1, true);
    }

    // 0x1004cdc30, 64 bytes, placed by debug map only (low confidence)
    // BaseVarTypeCoordFine::Decode(VarValue&, PacketT<Array<unsigned char, eastl::allocator> >&) const
    void BaseVarTypeCoordFine::Decode(VarValue* param_1, PacketT* param_2) {
        undefined1 local_28[16];

        new (local_28) CoordFine(param_2);
        VarValue::Set<CoordFine>(param_1, (CoordFine*)local_28);
    }

    // 0x1004cdc80, 64 bytes, placed by debug map only (low confidence)
    // BaseVarTypeCoordFine::Decode(VarValue&, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&) const
    void BaseVarTypeCoordFine::Decode(VarValue* param_1, PacketT* param_2) {
        undefined1 local_28[16];

        new (local_28) CoordFine(param_2);
        VarValue::Set<CoordFine>(param_1, (CoordFine*)local_28);
    }

    // 0x1004cdcc0, 48 bytes, placed by debug map only (low confidence)
    // BaseVarTypeCoordFine::Encode(VarValue const&, PacketT<Array<unsigned char, eastl::allocator> >&) const
    void BaseVarTypeCoordFine::Encode(VarValue* param_1, PacketT* param_2) {
        CoordFine* this_00;

        this_00 = (CoordFine*)param_1->GetCoordFine();
        this_00->Serialise(param_2);
    }

    // 0x1004cdd40, 48 bytes, placed by debug map only (low confidence)
    // BaseVarTypeCoordFine::Encode(VarValue const&, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&) const
    void BaseVarTypeCoordFine::Encode(VarValue* param_1, PacketT* param_2) {
        CoordFine* this_00;

        this_00 = (CoordFine*)param_1->GetCoordFine();
        this_00->Serialise(param_2);
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    BaseVarType::~BaseVarType();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    BaseVarType::~BaseVarType();

} // namespace jag::game

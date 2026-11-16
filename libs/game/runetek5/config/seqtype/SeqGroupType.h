// libs/game/runetek5/config/seqtype/SeqGroupType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class SeqGroupType {
    public:
        // virtual methods in vtable order
        virtual ~SeqGroupType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        virtual GetTransformMask() const;
        virtual GetJointWeights() const;
        IsWalkMerge() const;
        SeqGroupType(BaseTemplateConfigTypeList<SeqGroupType>*, int);

        // data members, from how the methods use this: 113 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[20];
        undefined** field_56; // offset 56
        char _unknown_64[48];
        bool field_112; // offset 112
    };

    // 0x1004de990, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SeqGroupType::IsWalkMerge() const
    /* NPCTypeList::IsMembersServer() const */

    undefined1 NPCTypeList::IsMembersServer() {
        return m_membersServer;
    }

    // 0x1004e13e0, 32 bytes, deleting destructor, inline, placed by class name
    // SeqGroupType::~SeqGroupType()
    void SeqGroupType::~SeqGroupType() {
        ~SeqGroupType(this);
        operator_delete(this);
    }

    // 0x1005bf490, 16 bytes, complete-object destructor, inline, placed by class name
    // SeqGroupType::~SeqGroupType(): jumps straight to the base-object destructor

    // 0x1005bf4a0, 80 bytes, base-object destructor, inline, placed by class name
    // SeqGroupType::~SeqGroupType()
    void SeqGroupType::~SeqGroupType() {
        field_0 = &PTR__SeqGroupType_100f02528;
        field_56 = &PTR__SeqGroupType_100f02570;
        (&field_88)->~Array();
        (&field_64)->~Array();
        (&field_56)->~AutoSingleton();
        ~ConfigType();
    }

    // 0x1005bf6f0, 16 bytes, complete-object constructor, inline, placed by class name
    // SeqGroupType::SeqGroupType(BaseTemplateConfigTypeList<SeqGroupType>*, int): jumps straight to the base-object constructor

    // 0x1005bf700, 144 bytes, base-object constructor, inline, placed by class name
    // SeqGroupType::SeqGroupType(BaseTemplateConfigTypeList<SeqGroupType>*, int)
    void SeqGroupType::SeqGroupType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new (this) ConfigType<SeqGroupType>(param_1, param_2);
        new (&field_56) graphics::WalkMergeDataProvider();
        new (this) MakeSharedPool<SeqGroupType, 64>();
        field_0 = &PTR__SeqGroupType_100f02528;
        field_56 = &PTR__SeqGroupType_100f02570;
        new (&field_64) Array<bool, eastl::allocator>();
        new (&field_88) Array<float, eastl::allocator>();
        field_112 = false;
    }

} // namespace jag::game

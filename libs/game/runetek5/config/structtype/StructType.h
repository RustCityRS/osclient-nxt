// libs/game/runetek5/config/structtype/StructType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class StructType {
    public:
        // virtual methods in vtable order
        virtual ~StructType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        StructType(BaseTemplateConfigTypeList<StructType>*, int);

        // data members, from how the methods use this: 56 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[4];
        shared_ptr field_40; // offset 40
    };

    // 0x1004e1460, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // StructType::~StructType()
    void StructType::~StructType() {
        ~StructType(this);
        operator_delete(this);
    }

    // 0x1005eb420, 16 bytes, complete-object destructor, inline, placed by class name
    // StructType::~StructType(): jumps straight to the base-object destructor

    // 0x1005eb430, 16 bytes, base-object destructor, inline, placed by class name
    // StructType::~StructType()
    void StructType::~StructType() {
        ~ConfigType();
    }

    // 0x1005eb640, 16 bytes, complete-object constructor, inline, placed by class name
    // StructType::StructType(BaseTemplateConfigTypeList<StructType>*, int): jumps straight to the base-object constructor

    // 0x1005eb650, 64 bytes, base-object constructor, inline, placed by class name
    // StructType::StructType(BaseTemplateConfigTypeList<StructType>*, int)
    void StructType::StructType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new (this) ConfigType<StructType>(param_1, param_2);
        new (this) MakeSharedPool<StructType, 1024>();
        field_0 = &PTR__StructType_100f025d8;
    }

} // namespace jag::game

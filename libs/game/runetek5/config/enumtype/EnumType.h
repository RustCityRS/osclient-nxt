// libs/game/runetek5/config/enumtype/EnumType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class EnumType {
    public:
        // virtual methods in vtable order
        virtual ~EnumType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        VarValue* GetOutputString(int) const;
        GetOutputType() const;
        GetOutputInner(bool&, int) const;
        ulong GetReverseLookup(eastl::vector<VarValue, eastl::allocator>*&, VarValue const&);
        void BuildOptionsReverse();
        EnumType(BaseTemplateConfigTypeList<EnumType>*, int);

        // data members, from how the methods use this: 232 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[20];
        undefined8 field_56;     // offset 56
        undefined8 m_outputType; // offset 64
        char _unknown_72[144];
        undefined4 field_216; // offset 216
        char _unknown_220[12];
    };

    // 0x1003f0e80, 112 bytes, inline, placed by class name and debug map
    // EnumType::GetOutputString(int) const
    VarValue* EnumType::GetOutputString(int param_1) {
        VarValue* this_00;
        bool local_19;

        this_00 = (VarValue*)GetOutputInner(this, &local_19, param_1);
        if (local_19 == false) {
            this_00 = (VarValue*)&field_104;
        } else {
            if (this_00->IsUndefined() != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("!out.IsUndefined()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "enumtype/EnumType.h",
                          58, (char*)0);
            }
        }
        return this_00;
    }

    // 0x100547a70, 32 bytes, deleting destructor, inline, placed by class name
    // EnumType::~EnumType()
    void EnumType::~EnumType() {
        ~EnumType(this);
        operator_delete(this);
    }

    // 0x1005df360, 16 bytes, complete-object destructor, inline, placed by class name
    // EnumType::~EnumType(): jumps straight to the base-object destructor

    // 0x1005df370, 96 bytes, base-object destructor, inline, placed by class name
    // EnumType::~EnumType()
    void EnumType::~EnumType() {
        field_0 = &PTR__EnumType_100f03fc0;
        (&field_224)->~hash_map();
        (&field_192)->~Array();
        (&field_136)->~hash_map();
        (&field_104)->~VarValue();
        (&field_72)->~VarValue();
        ~ConfigType();
    }

    // 0x1005df940, 16 bytes, complete-object constructor, inline, placed by class name
    // EnumType::EnumType(BaseTemplateConfigTypeList<EnumType>*, int): jumps straight to the base-object constructor

    // 0x1005df950, 352 bytes, base-object constructor, inline, placed by class name
    // EnumType::EnumType(BaseTemplateConfigTypeList<EnumType>*, int)
    void EnumType::EnumType(BaseTemplateConfigTypeList* param_1, int param_2) {
        int local_48[6];

        new (this) ConfigType<EnumType>(param_1, param_2);
        new (this) MakeSharedPool<EnumType, 128>();
        field_0 = &PTR__EnumType_100f03fc0;
        field_56 = 0;
        m_outputType = 0;
        new (&field_72) VarValue();
        new (&field_104) VarValue();
        new (local_48) eastl::allocator("EASTL hash_map");
        new (&field_136, (allocator*)local_48) eastl::hash_map<VarValue, VarValue, eastl::hash<VarValue>,
                                                               eastl::equal_to<VarValue>, eastl::allocator, false>();
        new (&field_192) Array<VarValue, eastl::allocator>();
        field_216 = 0;
        new (local_48) eastl::allocator("EASTL hash_map");
        new (&field_224, (allocator*)local_48)
            eastl::hash_map<VarValue, eastl::vector<VarValue, eastl::allocator>, eastl::hash<VarValue>,
                            eastl::equal_to<VarValue>, eastl::allocator, false>();
        local_48[0] = 0;
        VarValue::Set<int>((VarValue*)&field_72, local_48);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        VarValue::Set<eastl::basic_string<char, BucketAllocatorEASTL>>((VarValue*)&field_104, (basic_string*)local_48);
        local_48->~basic_string();
    }

} // namespace jag::game

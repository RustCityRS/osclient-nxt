// libs/game/runetek5/config/enumtype/EnumType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class EnumType {
    public:
        // virtual methods in vtable order
        virtual ~EnumType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        VarValue* GetOutputString(int arg1) const;
        uint64_t GetOutputType() const;
        uint8_t* GetOutputInner(bool& arg1, int arg2) const;
        uint32_t GetReverseLookup(eastl::vector<VarValue>*& arg1, const VarValue& varValue);
        void BuildOptionsReverse();
        EnumType(BaseTemplateConfigTypeList<EnumType>* baseTemplateConfigTypeList, int arg2);

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<EnumType>* field_24;
        int field_32;
        uint8_t _unknown_36[20];
        uint64_t field_56;
        uint64_t m_outputType;
        uint8_t _unknown_72[144];
        uint32_t field_216;
        uint8_t _unknown_220[12];
    };

    // 0x1003f0e80
    VarValue* EnumType::GetOutputString(int arg1) const {
        bool local_19;

        auto this_00 = GetOutputInner(local_19, arg1);
        if (local_19 == false) {
            this_00 = (VarValue*)&field_104;
        } else {
            if (this_00->IsUndefined() != '\0') {
                LogAssert("!out.IsUndefined()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "enumtype/EnumType.h",
                          58, nullptr);
            }
        }
        return this_00;
    }

    // 0x1005df370
    EnumType::~EnumType() {
        field_224.~hash_map();
        field_192.~Array();
        field_136.~hash_map();
        field_104.~VarValue();
        field_72.~VarValue();
    }

    // 0x1005df950
    EnumType::EnumType(BaseTemplateConfigTypeList<EnumType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<EnumType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<EnumType, 128>(), field_56(0),
          m_outputType(0) {
        int local_48[6];

        new (local_48) eastl::allocator("EASTL hash_map");
        new (&field_136) eastl::hash_map<VarValue, VarValue>(*local_48);
        new (&field_192) Array<VarValue>();
        field_216 = 0;
        new (local_48) eastl::allocator("EASTL hash_map");
        new (&field_224) eastl::hash_map<VarValue, eastl::vector<VarValue>>(*local_48);
        local_48[0] = 0;
        field_72.Set<int>(*local_48);
        new (local_48) eastl::basic_string<char, BucketAllocatorEASTL>();
        field_104.Set<eastl::basic_string<char, BucketAllocatorEASTL>>(*local_48);
    }

} // namespace jag::game

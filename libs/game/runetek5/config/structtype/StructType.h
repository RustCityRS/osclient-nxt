// libs/game/runetek5/config/structtype/StructType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class StructType {
    public:
        // virtual methods in vtable order
        virtual ~StructType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        StructType(BaseTemplateConfigTypeList<StructType>* baseTemplateConfigTypeList, int arg2);

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<StructType>* field_24;
        unsigned int field_32;
        uint8_t _unknown_36[4];
        shared_ptr field_40;
    };

    // 0x1005eb430
    StructType::~StructType() {}

    // 0x1005eb650
    StructType::StructType(BaseTemplateConfigTypeList<StructType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<StructType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<StructType, 1024>() {}

} // namespace jag::game

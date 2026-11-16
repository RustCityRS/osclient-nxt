// libs/game/runetek5/config/cursortype/CursorType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class CursorType {
    public:
        // virtual methods in vtable order
        virtual ~CursorType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        CursorType(BaseTemplateConfigTypeList<CursorType>* baseTemplateConfigTypeList, int arg2);

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<CursorType>* field_24;
        int field_32;
        uint8_t _unknown_36[20];
        uint32_t field_56;
        uint8_t field_60;
        uint8_t field_61;
        uint8_t _unknown_62[2];
    };

    // 0x1005d4490
    CursorType::~CursorType() {}

    // 0x1005d46b0
    CursorType::CursorType(BaseTemplateConfigTypeList<CursorType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<CursorType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<CursorType, 64>() {}

} // namespace jag::game

// libs/game/runetek5/config/paramtype/ParamType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class ParamType {
    public:
        // virtual methods in vtable order
        virtual ~ParamType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        unsigned int GetDefaultNumber() const;
        uint8_t GetAutoDisable() const;
        ParamType(BaseTemplateConfigTypeList<ParamType>* baseTemplateConfigTypeList, int arg2);

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<ParamType>* field_24;
        int field_32;
        uint8_t _unknown_36[20];
        uint64_t field_56;
        unsigned int m_defaultNumber;
        uint8_t _unknown_68[36];
        uint8_t m_autoDisable;
    };

    // 0x100509c20
    uint8_t ParamType::GetAutoDisable() const {
        return m_autoDisable;
    }

    // 0x100572b20
    ParamType::~ParamType() {
        field_72.~basic_string();
    }

    // 0x100572d60
    ParamType::ParamType(BaseTemplateConfigTypeList<ParamType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<ParamType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<ParamType, 640>(), m_defaultNumber(0),
          field_72(*((eastl::string*)&eastl::EMPTY_STRING)), m_autoDisable(1) {}

} // namespace jag::game

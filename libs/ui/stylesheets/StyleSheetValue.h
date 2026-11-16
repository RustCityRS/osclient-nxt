// libs/ui/stylesheets/StyleSheetValue.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class StyleSheetValue {
    public:
        StyleSheetValue(int arg1);
        int Get<int>() const;
        unsigned char Get<unsigned char>() const;
        unsigned int Get<unsigned int>() const;
        unsigned short Get<unsigned short>() const;
        signed char Get<signed char>() const;
        float Get<float>() const;
        bool Get<bool>() const;

    private:
        uint32_t field_0;
        int field_4;
        uint8_t _unknown_8[4];
    };

    class StyleSheetValueHelper {
    public:
        unsigned char Get<unsigned char>(int arg1, Type arg2);
        unsigned int Get<unsigned int>(int arg1, Type arg2);
        unsigned short Get<unsigned short>(int arg1, Type arg2);
        signed char Get<signed char>(int arg1, Type arg2);
        int Get<int>(int arg1, Type arg2);
        float Get<float>(int arg1, Type arg2);
        bool Get<bool>(int arg1, Type arg2);
    };

    // 0x10067b110
    StyleSheetValue::StyleSheetValue(int arg1) : field_0(0), field_4(arg1) {}

    // 0x10069f060
    int StyleSheetValue::Get<int>() const {
        return StyleSheetValueHelper::Get<int>(field_4, field_0);
    }

    // 0x1006c39e0
    unsigned char StyleSheetValue::Get<unsigned char>() const {
        return StyleSheetValueHelper::Get<unsigned char>(field_4, field_0);
    }

    // 0x1006c3a40
    unsigned int StyleSheetValue::Get<unsigned int>() const {
        return StyleSheetValueHelper::Get<unsigned int>(field_4, field_0);
    }

    // 0x1006c5cb0
    unsigned short StyleSheetValue::Get<unsigned short>() const {
        return StyleSheetValueHelper::Get<unsigned short>(field_4, field_0);
    }

    // 0x1006c7100
    signed char StyleSheetValue::Get<signed char>() const {
        return StyleSheetValueHelper::Get<signed char>(field_4, field_0);
    }

    // 0x1006d62e0
    float StyleSheetValue::Get<float>() const {
        return StyleSheetValueHelper::Get<float>(field_4, field_0);
    }

    // 0x1006d6330
    bool StyleSheetValue::Get<bool>() const {
        return StyleSheetValueHelper::Get<bool>(field_4, field_0);
    }

} // namespace jag::ui

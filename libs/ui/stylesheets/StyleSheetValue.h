// libs/ui/stylesheets/StyleSheetValue.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class StyleSheetValue {
    public:
        StyleSheetValue(int);
        int Get<int>() const;
        unsigned char Get<unsigned char>() const;
        unsigned int Get<unsigned int>() const;
        unsigned short Get<unsigned short>() const;
        signed char Get<signed char>() const;
        float Get<float>() const;
        bool Get<bool>() const;

        // data members, from how the methods use this: 12 bytes
        undefined4 field_0; // offset 0
        int field_4;        // offset 4
        char _unknown_8[4];
    };

    class StyleSheetValueHelper {
    public:
        unsigned char Get<unsigned char>(int, Type);
        unsigned int Get<unsigned int>(int, Type);
        unsigned short Get<unsigned short>(int, Type);
        signed char Get<signed char>(int, Type);
        int Get<int>(int, Type);
        float Get<float>(int, Type);
        bool Get<bool>(int, Type);
    };

    // 0x1006746f0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // StyleSheetValue::StyleSheetValue(int): jumps straight to the base-object constructor

    // 0x10067b110, 16 bytes, base-object constructor, inline, placed by class name
    // StyleSheetValue::StyleSheetValue(int)
    void StyleSheetValue::StyleSheetValue(int param_1) {
        field_0 = 0;
        field_4 = param_1;
    }

    // 0x10069f060, 16 bytes, inline, placed by class name
    // int StyleSheetValue::Get<int>() const
    int StyleSheetValue::Get<int>() {
        return StyleSheetValueHelper::Get<int>(field_4, field_0);
    }

    // 0x1006c39e0, 32 bytes, inline, placed by class name
    // unsigned char StyleSheetValue::Get<unsigned char>() const
    uchar StyleSheetValue::Get<unsigned char>() {
        return StyleSheetValueHelper::Get<unsigned char>(field_4, field_0);
    }

    // 0x1006c3a40, 16 bytes, inline, placed by class name
    // unsigned int StyleSheetValue::Get<unsigned int>() const
    uint StyleSheetValue::Get<unsigned int>() {
        return StyleSheetValueHelper::Get<unsigned int>(field_4, field_0);
    }

    // 0x1006c5cb0, 32 bytes, inline, placed by class name
    // unsigned short StyleSheetValue::Get<unsigned short>() const
    ushort StyleSheetValue::Get<unsigned short>() {
        return StyleSheetValueHelper::Get<unsigned short>(field_4, field_0);
    }

    // 0x1006c7100, 32 bytes, inline, placed by class name
    // signed char StyleSheetValue::Get<signed char>() const
    int StyleSheetValue::Get<signed char>() {
        char cVar1;

        cVar1 = StyleSheetValueHelper::Get<signed char>(field_4, field_0);
        return (int)cVar1;
    }

    // 0x1006d62e0, 16 bytes, inline, placed by class name
    // float StyleSheetValue::Get<float>() const
    float StyleSheetValue::Get<float>() {
        return StyleSheetValueHelper::Get<float>(field_4, field_0);
    }

    // 0x1006d6330, 16 bytes, inline, placed by class name
    // bool StyleSheetValue::Get<bool>() const
    bool StyleSheetValue::Get<bool>() {
        return StyleSheetValueHelper::Get<bool>(field_4, field_0);
    }

} // namespace jag::ui

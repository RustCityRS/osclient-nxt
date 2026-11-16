// libs/ui/stylesheets/StyleSheet.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class StyleSheet {
    public:
        class PropertyFindResult;
        bool HasParent() const;
        unsigned long LoadFromPacket(unsigned int arg1, PacketT<Array<unsigned char>>& arg2);
        unsigned long ResolveParent(const eastl::vector_map<int, shared_ptr<StyleSheet>>& arg1);
        auto FindProperty(const char* str, bool arg2) const;
        PropertyFindResult FindPropertyImpl(unsigned int arg1, bool arg2) const;
        bool IsPropertyKnown(const char* str);
        PropertyFindResult FindProperty(StyleEntryID styleEntryID, bool arg2) const;
        auto GetParent() const;
        bool LoadPropertyValueIfSet<unsigned char, bool>(bool& arg1, StyleEntryID styleEntryID, bool arg3) const;
        bool LoadPropertyValueIfSet<unsigned char, graphics::FontAlign>(graphics::FontAlign& fontAlign,
                                                                        StyleEntryID styleEntryID, bool arg3) const;
        char GetHierarchyDepth() const;
        bool LoadPropertyValueIfSet<unsigned int>(unsigned int& arg1, StyleEntryID styleEntryID, bool arg3) const;
        bool LoadPropertyValueIfSet<unsigned short>(unsigned short& arg1, StyleEntryID styleEntryID, bool arg3) const;
        bool LoadPropertyValueIfSet<signed char, Check::Alignment>(Check::Alignment& alignment,
                                                                   StyleEntryID styleEntryID, bool arg3) const;
        eastl::optional<int> GetPropertyValue<int>(StyleEntryID styleEntryID, bool arg2) const;
        bool LoadPropertyValueIfSet<int, GroupBox::HeaderAlignment>(GroupBox::HeaderAlignment& headerAlignment,
                                                                    StyleEntryID styleEntryID, bool arg3) const;
        eastl::optional<unsigned int> GetPropertyValue<unsigned int>(StyleEntryID styleEntryID, bool arg2) const;
        eastl::optional<unsigned char> GetPropertyValue<unsigned char>(StyleEntryID styleEntryID, bool arg2) const;
        bool LoadPropertyValueIfSet<float>(float& arg1, StyleEntryID styleEntryID, bool arg3) const;
        bool LoadPropertyValueIfSet<bool>(bool& arg1, StyleEntryID styleEntryID, bool arg3) const;
        eastl::optional<bool> GetPropertyValue<bool>(StyleEntryID styleEntryID, bool arg2) const;
        static eastl::basic_string::Layout STYLE_ENTRY_MAPPING;

    private:
        unsigned int field_0;
        int field_4;
        uint8_t _unknown_8[48];
    };

    class StyleSheet::PropertyFindResult {
    public:
        PropertyFindResult();
        PropertyFindResult(const StyleSheet* styleSheet, const StyleSheetValue* styleSheetValue);
        bool IsValid() const;

    private:
        StyleSheet* field_0;
        StyleSheetValue* field_8;
        uint8_t field_16;
    };

    // 0x100674a70
    auto StyleSheet::GetParent() const {
        auto result;
        result = field_48.lock();
        return result;
    }

    // 0x100678d30
    bool StyleSheet::LoadPropertyValueIfSet<unsigned char, bool>(bool& arg1, StyleEntryID styleEntryID,
                                                                 bool arg3) const {
        PropertyFindResult local_30;

        FindProperty(&local_30, this, styleEntryID, arg3);
        bool cVar1 = local_30.IsValid();
        if (cVar1) {
            arg1 = local_30.field_8->Get<unsigned char>() != '\0';
        }
        return (bool)cVar1;
    }

    // 0x10067a120
    bool StyleSheet::LoadPropertyValueIfSet<unsigned char, graphics::FontAlign>(graphics::FontAlign& fontAlign,
                                                                                StyleEntryID styleEntryID,
                                                                                bool arg3) const {
        uint8_t uVar2;
        PropertyFindResult local_30;

        FindProperty(&local_30, this, styleEntryID, arg3);
        bool cVar1 = local_30.IsValid();
        if (cVar1) {
            uVar2 = local_30.field_8->Get<unsigned char>();
            *(uint8_t*)fontAlign = uVar2;
        }
        return (bool)cVar1;
    }

    // 0x10067b120
    StyleSheet::PropertyFindResult::PropertyFindResult() : field_0(nullptr), field_8(nullptr), field_16(255) {}

    // 0x10067b130
    StyleSheet::PropertyFindResult::PropertyFindResult(const StyleSheet* styleSheet,
                                                       const StyleSheetValue* styleSheetValue)
        : field_0(styleSheet), field_8(styleSheetValue) {
        field_16 = GetHierarchyDepth(styleSheet);
    }

    // 0x10067b160
    char StyleSheet::GetHierarchyDepth() const {
        ReturnValue local_30;

        bool cVar1 = field_48.expired();
        char cVar2 = '\x01';
        if (!cVar1) {
            local_30 = GetTarget();
            cVar2 = GetHierarchyDepth((StyleSheet*)local_30.operator->());
            cVar2 = cVar2 + '\x01';
        }
        return cVar2;
    }

    // 0x100689920
    bool StyleSheet::LoadPropertyValueIfSet<unsigned int>(unsigned int& arg1, StyleEntryID styleEntryID,
                                                          bool arg3) const {
        PropertyFindResult local_30;

        FindProperty(&local_30, this, styleEntryID, arg3);
        bool cVar1 = local_30.IsValid();
        if (cVar1) {
            arg1 = local_30.field_8->Get<unsigned int>();
        }
        return (bool)cVar1;
    }

    // 0x10068c690
    bool StyleSheet::LoadPropertyValueIfSet<unsigned short>(unsigned short& arg1, StyleEntryID styleEntryID,
                                                            bool arg3) const {
        PropertyFindResult local_30;

        FindProperty(&local_30, this, styleEntryID, arg3);
        bool cVar1 = local_30.IsValid();
        if (cVar1) {
            arg1 = local_30.field_8->Get<unsigned short>();
        }
        return (bool)cVar1;
    }

    // 0x10068d410
    bool StyleSheet::LoadPropertyValueIfSet<signed char, Check::Alignment>(Check::Alignment& alignment,
                                                                           StyleEntryID styleEntryID, bool arg3) const {
        schar sVar2;
        PropertyFindResult local_30;

        FindProperty(&local_30, this, styleEntryID, arg3);
        bool cVar1 = local_30.IsValid();
        if (cVar1) {
            sVar2 = local_30.field_8->Get<signed char>();
            *(int*)alignment = (int)sVar2;
        }
        return (bool)cVar1;
    }

    // 0x100697870
    eastl::optional<int> StyleSheet::GetPropertyValue<int>(StyleEntryID styleEntryID, bool arg2) const {
        bool in_CL;
        uint32_t in_register_00000011;
        uint32_t in_register_00000034;
        PropertyFindResult local_38;
        unsigned int local_1c;

        FindProperty(&local_38, (StyleSheet*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)styleEntryID),
                     (((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2), in_CL);
        if (local_38.IsValid() == '\0') {
            new (this) eastl::optional();
        } else {
            local_1c = local_38.field_8->Get<int>();
            new (this) eastl::optional(local_1c);
        }
        return this;
    }

    // 0x1006985d0
    bool StyleSheet::LoadPropertyValueIfSet<int, GroupBox::HeaderAlignment>(GroupBox::HeaderAlignment& headerAlignment,
                                                                            StyleEntryID styleEntryID,
                                                                            bool arg3) const {
        PropertyFindResult local_30;

        FindProperty(&local_30, this, styleEntryID, arg3);
        bool cVar1 = local_30.IsValid();
        if (cVar1) {
            headerAlignment = local_30.field_8->Get<int>();
        }
        return (bool)cVar1;
    }

    // 0x10069a480
    eastl::optional<unsigned int> StyleSheet::GetPropertyValue<unsigned int>(StyleEntryID styleEntryID,
                                                                             bool arg2) const {
        bool in_CL;
        uint32_t in_register_00000011;
        uint32_t in_register_00000034;
        PropertyFindResult local_38;
        unsigned int local_1c;

        FindProperty(&local_38, (StyleSheet*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)styleEntryID),
                     (((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2), in_CL);
        if (local_38.IsValid() == '\0') {
            new (this) eastl::optional();
        } else {
            local_1c = local_38.field_8->Get<unsigned int>();
            new (this) eastl::optional(local_1c);
        }
        return this;
    }

    // 0x10069f030
    bool StyleSheet::PropertyFindResult::IsValid() const {
        if (field_0 == nullptr) {
            return false;
        }
        return field_8 != nullptr;
    }

    // 0x10069f070
    eastl::optional<unsigned char> StyleSheet::GetPropertyValue<unsigned char>(StyleEntryID styleEntryID,
                                                                               bool arg2) const {
        bool in_CL;
        uint32_t in_register_00000011;
        uint32_t in_register_00000034;
        PropertyFindResult local_38;
        unsigned char local_19;

        FindProperty(&local_38, (StyleSheet*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)styleEntryID),
                     (((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2), in_CL);
        if (local_38.IsValid() == '\0') {
            new (this) eastl::optional();
        } else {
            local_19 = local_38.field_8->Get<unsigned char>();
            new (this) eastl::optional(local_19);
        }
        return this;
    }

    // 0x1006a1c60
    bool StyleSheet::LoadPropertyValueIfSet<float>(float& arg1, StyleEntryID styleEntryID, bool arg3) const {
        PropertyFindResult local_30;

        FindProperty(&local_30, this, styleEntryID, arg3);
        bool cVar1 = local_30.IsValid();
        if (cVar1) {
            arg1 = local_30.field_8->Get<float>();
        }
        return (bool)cVar1;
    }

    // 0x1006a1cb0
    bool StyleSheet::LoadPropertyValueIfSet<bool>(bool& arg1, StyleEntryID styleEntryID, bool arg3) const {
        PropertyFindResult local_30;

        FindProperty(&local_30, this, styleEntryID, arg3);
        bool cVar1 = local_30.IsValid();
        if (cVar1) {
            arg1 = local_30.field_8->Get<bool>();
        }
        return (bool)cVar1;
    }

    // 0x1006a6ef0
    eastl::optional<bool> StyleSheet::GetPropertyValue<bool>(StyleEntryID styleEntryID, bool arg2) const {
        bool in_CL;
        uint32_t in_register_00000011;
        uint32_t in_register_00000034;
        PropertyFindResult local_38;
        unsigned char local_19;

        FindProperty(&local_38, (StyleSheet*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)styleEntryID),
                     (((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2), in_CL);
        if (local_38.IsValid() == '\0') {
            new (this) eastl::optional();
        } else {
            local_19 = local_38.field_8->Get<bool>();
            new (this) eastl::optional(local_19);
        }
        return this;
    }

} // namespace jag::ui

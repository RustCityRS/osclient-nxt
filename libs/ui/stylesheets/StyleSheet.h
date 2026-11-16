// libs/ui/stylesheets/StyleSheet.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class StyleSheet {
    public:
        class PropertyFindResult;
        bool HasParent() const;
        ulong LoadFromPacket(unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&);
        ulong ResolveParent(
            eastl::vector_map<int, shared_ptr<StyleSheet>, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, shared_ptr<StyleSheet>>, eastl::allocator>> const&);
        StyleSheet* FindProperty(char const*, bool) const;
        FindPropertyImpl(unsigned int, bool) const;
        bool IsPropertyKnown(char const*);
        StyleSheet* FindProperty(StyleEntryID, bool) const;
        GetParent() const;
        bool LoadPropertyValueIfSet<unsigned char, bool>(bool&, StyleEntryID, bool) const;
        bool LoadPropertyValueIfSet<unsigned char, graphics::FontAlign>(graphics::FontAlign&, StyleEntryID, bool) const;
        char GetHierarchyDepth() const;
        bool LoadPropertyValueIfSet<unsigned int>(unsigned int&, StyleEntryID, bool) const;
        bool LoadPropertyValueIfSet<unsigned short>(unsigned short&, StyleEntryID, bool) const;
        bool LoadPropertyValueIfSet<signed char, Check::Alignment>(Check::Alignment&, StyleEntryID, bool) const;
        eastl::optional<int> GetPropertyValue<int>(StyleEntryID, bool) const;
        bool LoadPropertyValueIfSet<int, GroupBox::HeaderAlignment>(GroupBox::HeaderAlignment&, StyleEntryID,
                                                                    bool) const;
        eastl::optional<unsigned int> GetPropertyValue<unsigned int>(StyleEntryID, bool) const;
        eastl::optional<unsigned char> GetPropertyValue<unsigned char>(StyleEntryID, bool) const;
        bool LoadPropertyValueIfSet<float>(float&, StyleEntryID, bool) const;
        bool LoadPropertyValueIfSet<bool>(bool&, StyleEntryID, bool) const;
        eastl::optional<bool> GetPropertyValue<bool>(StyleEntryID, bool) const;
        static /* 2428 bytes */ STYLE_ENTRY_MAPPING;

        // data members, from how the methods use this: 56 bytes
        uint field_0; // offset 0
        int field_4;  // offset 4
        long field_8; // offset 8
        char _unknown_16[40];
    };

    class StyleSheet::PropertyFindResult {
    public:
        PropertyFindResult();
        PropertyFindResult(StyleSheet const*, StyleSheetValue const*);
        bool IsValid() const;

        // data members, from how the methods use this: 17 bytes
        StyleSheet* field_0;      // offset 0
        StyleSheetValue* field_8; // offset 8
        undefined1 field_16;      // offset 16
    };

    // 0x100674a10, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // StyleSheet::PropertyFindResult::PropertyFindResult(): jumps straight to the base-object constructor

    // 0x100674a60, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // StyleSheet::PropertyFindResult::PropertyFindResult(StyleSheet const*, StyleSheetValue const*): jumps straight to the base-object constructor

    // 0x100674a70, 32 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // StyleSheet::GetParent() const
    /* DragState::GetTarget() const */

    DragState* DragState::GetTarget() {
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        return this;
    }

    // 0x100678d30, 80 bytes, inline, placed by class name
    // bool StyleSheet::LoadPropertyValueIfSet<unsigned char, bool>(bool&, StyleEntryID, bool) const
    bool StyleSheet::LoadPropertyValueIfSet<unsigned char, bool>(undefined8 param_1) {
        char cVar1;
        uchar uVar2;
        undefined1 local_30[8];
        StyleSheetValue* local_28;

        FindProperty((StyleSheet*)local_30, this);
        cVar1 = local_30->IsValid();
        if (cVar1 != '\0') {
            uVar2 = StyleSheetValue::Get<unsigned char>(local_28);
            *(bool*)param_1 = uVar2 != '\0';
        }
        return (bool)cVar1;
    }

    // 0x10067a120, 80 bytes, inline, placed by class name
    // bool StyleSheet::LoadPropertyValueIfSet<unsigned char, graphics::FontAlign>(graphics::FontAlign&, StyleEntryID, bool) const
    /* bool StyleSheet::LoadPropertyValueIfSet<unsigned char>(unsigned char&,
   StyleEntryID, bool) const */

    bool StyleSheet::LoadPropertyValueIfSet<unsigned char>(uchar* param_1) {
        char cVar1;
        uchar uVar2;
        undefined1 local_30[8];
        StyleSheetValue* local_28;

        FindProperty((StyleSheet*)local_30, this);
        cVar1 = local_30->IsValid();
        if (cVar1 != '\0') {
            uVar2 = StyleSheetValue::Get<unsigned char>(local_28);
            *param_1 = uVar2;
        }
        return (bool)cVar1;
    }

    // 0x10067b120, 16 bytes, base-object constructor, inline, placed by class name
    // StyleSheet::PropertyFindResult::PropertyFindResult()
    void StyleSheet::PropertyFindResult::PropertyFindResult() {
        field_0 = (StyleSheet*)0;
        field_8 = (StyleSheetValue*)0;
        field_16 = 255;
    }

    // 0x10067b130, 48 bytes, base-object constructor, inline, placed by class name
    // StyleSheet::PropertyFindResult::PropertyFindResult(StyleSheet const*, StyleSheetValue const*)
    void StyleSheet::PropertyFindResult::PropertyFindResult(StyleSheet* param_1, StyleSheetValue* param_2) {
        field_0 = param_1;
        field_8 = param_2;
        field_16 = GetHierarchyDepth(param_1);
    }

    // 0x10067b160, 128 bytes, inline, placed by class name
    // StyleSheet::GetHierarchyDepth() const
    char StyleSheet::GetHierarchyDepth() {
        char cVar1;
        char cVar2;
        StyleSheet* this_00;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_30[16];

        cVar1 = (&field_48)->expired();
        cVar2 = '\x01';
        if (cVar1 == '\0') {
            local_30->GetTarget();
            this_00 = (StyleSheet*)shared_ptr<StyleSheet>::operator->((shared_ptr<StyleSheet>*)local_30);
            cVar2 = GetHierarchyDepth(this_00);
            cVar2 = cVar2 + '\x01';
            local_30->~shared_ptr();
        }
        return cVar2;
    }

    // 0x100689920, 80 bytes, inline, placed by class name
    // bool StyleSheet::LoadPropertyValueIfSet<unsigned int>(unsigned int&, StyleEntryID, bool) const
    bool StyleSheet::LoadPropertyValueIfSet<unsigned int>(uint* param_1) {
        char cVar1;
        uint uVar2;
        undefined1 local_30[8];
        StyleSheetValue* local_28;

        FindProperty((StyleSheet*)local_30, this);
        cVar1 = local_30->IsValid();
        if (cVar1 != '\0') {
            uVar2 = StyleSheetValue::Get<unsigned int>(local_28);
            *param_1 = uVar2;
        }
        return (bool)cVar1;
    }

    // 0x10068c690, 80 bytes, inline, placed by class name
    // bool StyleSheet::LoadPropertyValueIfSet<unsigned short>(unsigned short&, StyleEntryID, bool) const
    bool StyleSheet::LoadPropertyValueIfSet<unsigned short>(ushort* param_1) {
        char cVar1;
        ushort uVar2;
        undefined1 local_30[8];
        StyleSheetValue* local_28;

        FindProperty((StyleSheet*)local_30, this);
        cVar1 = local_30->IsValid();
        if (cVar1 != '\0') {
            uVar2 = StyleSheetValue::Get<unsigned short>(local_28);
            *param_1 = uVar2;
        }
        return (bool)cVar1;
    }

    // 0x10068d410, 80 bytes, inline, placed by class name
    // bool StyleSheet::LoadPropertyValueIfSet<signed char, Check::Alignment>(Check::Alignment&, StyleEntryID, bool) const
    bool StyleSheet::LoadPropertyValueIfSet<signed char, Check::Alignment>(int* param_1) {
        char cVar1;
        char cVar2;
        undefined1 local_30[8];
        StyleSheetValue* local_28;

        FindProperty((StyleSheet*)local_30, this);
        cVar1 = local_30->IsValid();
        if (cVar1 != '\0') {
            cVar2 = StyleSheetValue::Get<signed char>(local_28);
            *param_1 = (int)cVar2;
        }
        return (bool)cVar1;
    }

    // 0x100697870, 96 bytes, inline, placed by class name
    // eastl::optional<int> StyleSheet::GetPropertyValue<int>(StyleEntryID, bool) const
    StyleSheet* StyleSheet::GetPropertyValue<int>() {
        undefined1 local_38[8];
        StyleSheetValue* local_30;
        int local_1c;

        FindProperty((StyleSheet*)local_38);
        if (local_38->IsValid() == '\0') {
            new (this) eastl::optional<game::option::EnumOptionToggle>();
        } else {
            local_1c = StyleSheetValue::Get<int>(local_30);
            new (this) eastl::optional<int>(&local_1c);
        }
        return this;
    }

    // 0x1006985d0, 80 bytes, inline, placed by class name
    // bool StyleSheet::LoadPropertyValueIfSet<int, GroupBox::HeaderAlignment>(GroupBox::HeaderAlignment&, StyleEntryID, bool) const
    /* bool StyleSheet::LoadPropertyValueIfSet<int>(int&, StyleEntryID, bool) const */

    bool StyleSheet::LoadPropertyValueIfSet<int>(int* param_1) {
        char cVar1;
        int iVar2;
        undefined1 local_30[8];
        StyleSheetValue* local_28;

        FindProperty((StyleSheet*)local_30, this);
        cVar1 = local_30->IsValid();
        if (cVar1 != '\0') {
            iVar2 = StyleSheetValue::Get<int>(local_28);
            *param_1 = iVar2;
        }
        return (bool)cVar1;
    }

    // 0x10069a480, 96 bytes, inline, placed by class name
    // eastl::optional<unsigned int> StyleSheet::GetPropertyValue<unsigned int>(StyleEntryID, bool) const
    StyleSheet* StyleSheet::GetPropertyValue<unsigned int>() {
        undefined1 local_38[8];
        StyleSheetValue* local_30;
        uint local_1c;

        FindProperty((StyleSheet*)local_38);
        if (local_38->IsValid() == '\0') {
            new (this) eastl::optional<game::option::EnumOptionToggle>();
        } else {
            local_1c = StyleSheetValue::Get<unsigned int>(local_30);
            new (this) eastl::optional<int>((int*)&local_1c);
        }
        return this;
    }

    // 0x10069f030, 32 bytes, inline, placed by class name
    // StyleSheet::PropertyFindResult::IsValid() const
    bool StyleSheet::PropertyFindResult::IsValid() {
        if (field_0 == (StyleSheet*)0) {
            return false;
        }
        return field_8 != (StyleSheetValue*)0;
    }

    // 0x10069f070, 96 bytes, inline, placed by class name
    // eastl::optional<unsigned char> StyleSheet::GetPropertyValue<unsigned char>(StyleEntryID, bool) const
    StyleSheet* StyleSheet::GetPropertyValue<unsigned char>() {
        undefined1 local_38[8];
        StyleSheetValue* local_30;
        bool local_19;

        FindProperty((StyleSheet*)local_38);
        if (local_38->IsValid() == '\0') {
            new (this) eastl::optional<bool>();
        } else {
            local_19 = (bool)StyleSheetValue::Get<unsigned char>(local_30);
            new (this) eastl::optional<bool>(&local_19);
        }
        return this;
    }

    // 0x1006a1c60, 80 bytes, inline, placed by class name
    // bool StyleSheet::LoadPropertyValueIfSet<float>(float&, StyleEntryID, bool) const
    bool StyleSheet::LoadPropertyValueIfSet<float>(float* param_1) {
        char cVar1;
        float fVar2;
        undefined1 local_30[8];
        StyleSheetValue* local_28;

        FindProperty((StyleSheet*)local_30, this);
        cVar1 = local_30->IsValid();
        if (cVar1 != '\0') {
            fVar2 = StyleSheetValue::Get<float>(local_28);
            *param_1 = fVar2;
        }
        return (bool)cVar1;
    }

    // 0x1006a1cb0, 80 bytes, inline, placed by class name
    // bool StyleSheet::LoadPropertyValueIfSet<bool>(bool&, StyleEntryID, bool) const
    bool StyleSheet::LoadPropertyValueIfSet<bool>(undefined8 param_1) {
        char cVar1;
        bool bVar2;
        undefined1 local_30[8];
        StyleSheetValue* local_28;

        FindProperty((StyleSheet*)local_30, this);
        cVar1 = local_30->IsValid();
        if (cVar1 != '\0') {
            bVar2 = StyleSheetValue::Get<bool>(local_28);
            *(bool*)param_1 = bVar2;
        }
        return (bool)cVar1;
    }

    // 0x1006a6ef0, 96 bytes, inline, placed by class name
    // eastl::optional<bool> StyleSheet::GetPropertyValue<bool>(StyleEntryID, bool) const
    StyleSheet* StyleSheet::GetPropertyValue<bool>() {
        undefined1 local_38[8];
        StyleSheetValue* local_30;
        bool local_19;

        FindProperty((StyleSheet*)local_38);
        if (local_38->IsValid() == '\0') {
            new (this) eastl::optional<bool>();
        } else {
            local_19 = StyleSheetValue::Get<bool>(local_30);
            new (this) eastl::optional<bool>(&local_19);
        }
        return this;
    }

} // namespace jag::ui

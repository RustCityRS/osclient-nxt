// libs/ui/utils/Margin.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "Margin.h"

namespace jag::ui {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    Margin::begin();

    // 0x10014e180: the linker folded this into math::Vector2T<float>::y() const, which has identical code
    Margin::end();

    // 0x100676e90, 80 bytes, base-object constructor, placed by class name and debug map
    // Margin::Margin(PacketT<Array<unsigned char, eastl::allocator> >&)
    void Margin::Margin(PacketT* param_1) {
        byte bVar1;

        bVar1 = param_1->g1();
        field_0 = bVar1;
        bVar1 = param_1->g1();
        field_1 = bVar1;
        bVar1 = param_1->g1();
        field_2 = bVar1;
        bVar1 = param_1->g1();
        field_3 = bVar1;
    }

    // 0x100676ee0, 16 bytes, complete-object constructor, placed by class name and debug map
    // Margin::Margin(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x100676ef0, 192 bytes, placed by class name and debug map
    // Margin::ApplyTo(int&, int&, int&, int&) const
    void Margin::ApplyTo(int* param_1, int* param_2, int* param_3, int* param_4) {
        byte bVar1;
        byte bVar2;
        int* piVar4;
        undefined8 local_38;

        if (Valid(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("Valid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/Margin.cpp", 16,
                      (char*)0);
        }
        bVar1 = field_0;
        *param_1 = *param_1 + (uint)bVar1;
        bVar2 = field_1;
        *param_2 = *param_2 + (uint)bVar2;
        local_38 = (ulong)(*param_3 - ((uint)field_2 + (uint)bVar1)) << 32;
        piVar4 = std::max<int>((int*)&local_38, (int*)((long)&local_38 + 4));
        *param_3 = *piVar4;
        local_38 = (ulong)(*param_4 - ((uint)field_3 + (uint)bVar2)) << 32;
        piVar4 = std::max<int>((int*)&local_38, (int*)((long)&local_38 + 4));
        *param_4 = *piVar4;
    }

    // 0x100676ff0, 112 bytes, placed by class name
    // Margin::GetValidOr(Margin const&) const
    Margin Margin::GetValidOr(Margin* param_1) {
        Margin local_1c;

        Margin(&local_1c);
        local_1c.field_0 = param_1->field_0;
        if (field_0 != 255) {
            local_1c.field_0 = field_0;
        }
        local_1c.field_1 = param_1->field_1;
        if (field_1 != 255) {
            local_1c.field_1 = field_1;
        }
        local_1c.field_2 = param_1->field_2;
        if (field_2 != 255) {
            local_1c.field_2 = field_2;
        }
        local_1c.field_3 = param_1->field_3;
        if (field_3 != 255) {
            local_1c.field_3 = field_3;
        }
        return local_1c;
    }

    // 0x100677060, 480 bytes, placed by class name
    // Margin::LoadFromStylesheet(StyleEntryID, StyleSheet const&)
    void Margin::LoadFromStylesheet(int param_2, undefined8 param_3) {
        char cVar1;
        byte bVar2;
        undefined1 local_d8[32];
        undefined1 local_b8[24];
        undefined1 local_a0[24];
        undefined1 local_88[32];
        undefined1 local_68[32];
        PropertyFindResult local_48;

        local_b8->FindProperty(param_3, param_2, 1);
        local_a0->FindProperty(param_3, param_2 + 1, 1);
        local_d8->FindProperty(param_3, param_2 + 2, 1);
        local_88->FindProperty(param_3, param_2 + 3, 1);
        local_68->FindProperty(param_3, param_2 + 4, 1);
        local_48.FindProperty(param_3, param_2 + 5, 1);
        cVar1 = local_d8->IsValid();
        if ((cVar1 == '\0') || (local_b8[16] <= local_d8[16])) {
            local_d8[16] = local_b8[16];
            local_d8._0_8_ = local_b8._0_8_;
            local_d8._8_8_ = local_b8._8_8_;
        }
        cVar1 = local_88->IsValid();
        if ((cVar1 == '\0') || (local_a0[16] <= local_88[16])) {
            local_88[16] = local_a0[16];
            local_88._0_8_ = local_a0._0_8_;
            local_88._8_8_ = local_a0._8_8_;
        }
        cVar1 = local_68->IsValid();
        if ((cVar1 == '\0') || (local_b8[16] <= local_68[16])) {
            local_68[16] = local_b8[16];
            local_68._0_8_ = local_b8._0_8_;
            local_68._8_8_ = local_b8._8_8_;
        }
        cVar1 = local_48.IsValid();
        if ((cVar1 == '\0') || (local_a0[16] <= local_48.field_16)) {
            local_48.field_16 = local_a0[16];
            local_48.field_0 = (StyleSheet*)local_a0._0_8_;
            local_48.field_8 = (StyleSheetValue*)local_a0._8_8_;
        }
        cVar1 = local_d8->IsValid();
        if (cVar1 != '\0') {
            bVar2 = StyleSheetValue::Get<unsigned char>((StyleSheetValue*)local_d8._8_8_);
            field_0 = bVar2;
        }
        cVar1 = local_88->IsValid();
        if (cVar1 != '\0') {
            bVar2 = StyleSheetValue::Get<unsigned char>((StyleSheetValue*)local_88._8_8_);
            field_1 = bVar2;
        }
        cVar1 = local_68->IsValid();
        if (cVar1 != '\0') {
            bVar2 = StyleSheetValue::Get<unsigned char>((StyleSheetValue*)local_68._8_8_);
            field_2 = bVar2;
        }
        cVar1 = local_48.IsValid();
        if (cVar1 != '\0') {
            bVar2 = StyleSheetValue::Get<unsigned char>(local_48.field_8);
            field_3 = bVar2;
        }
    }

} // namespace jag::ui

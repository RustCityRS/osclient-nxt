// libs/ui/utils/Margin.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "Margin.h"

namespace jag::ui {
    // 0x100009ca0: Margin::begin() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x10014e180: Margin::end() has the same machine code as math::Vector2T<float>::y() const

    // 0x100676e90
    Margin::Margin(PacketT<Array<unsigned char>>& arg1) {
        uint8_t bVar1 = arg1.g1();
        field_0 = bVar1;
        bVar1 = arg1.g1();
        field_1 = bVar1;
        bVar1 = arg1.g1();
        field_2 = bVar1;
        bVar1 = arg1.g1();
        field_3 = bVar1;
    }

    // 0x100676ef0
    void Margin::ApplyTo(int& arg1, int& arg2, int& arg3, int& arg4) const {
        if (Valid() == '\0') {
            LogAssert("Valid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/Margin.cpp", 16,
                      nullptr);
        }
        uint8_t bVar1 = field_0;
        arg1 = arg1 + (unsigned int)bVar1;
        uint8_t bVar2 = field_1;
        arg2 = arg2 + (unsigned int)bVar2;
        uint64_t local_38 = (unsigned long)(arg3 - ((unsigned int)field_2 + (unsigned int)bVar1)) << 32;
        auto piVar4 = std::max<int>(local_38, *((int*)((long)&local_38 + 4)));
        arg3 = *piVar4;
        local_38 = (unsigned long)(arg4 - ((unsigned int)field_3 + (unsigned int)bVar2)) << 32;
        piVar4 = std::max<int>(local_38, *((int*)((long)&local_38 + 4)));
        arg4 = *piVar4;
    }

    // 0x100676ff0
    Margin Margin::GetValidOr(const Margin& margin) const {
        Margin local_1c;

        Margin(&local_1c);
        local_1c.field_0 = margin.field_0;
        if (field_0 != 255) {
            local_1c.field_0 = field_0;
        }
        local_1c.field_1 = margin.field_1;
        if (field_1 != 255) {
            local_1c.field_1 = field_1;
        }
        local_1c.field_2 = margin.field_2;
        if (field_2 != 255) {
            local_1c.field_2 = field_2;
        }
        local_1c.field_3 = margin.field_3;
        if (field_3 != 255) {
            local_1c.field_3 = field_3;
        }
        return local_1c;
    }

    // 0x100677060
    void Margin::LoadFromStylesheet(StyleEntryID styleEntryID, const StyleSheet& styleSheet) {
        uint8_t bVar2;

        PropertyFindResult local_b8 = styleSheet.FindProperty(styleEntryID, true);
        PropertyFindResult local_a0 = styleSheet.FindProperty(styleEntryID + 1, true);
        PropertyFindResult local_d8 = styleSheet.FindProperty(styleEntryID + 2, true);
        PropertyFindResult local_88 = styleSheet.FindProperty(styleEntryID + 3, true);
        PropertyFindResult local_68 = styleSheet.FindProperty(styleEntryID + 4, true);
        PropertyFindResult local_48 = styleSheet.FindProperty(styleEntryID + 5, true);
        bool cVar1 = local_d8.IsValid();
        if ((!cVar1) || (local_b8.field_16 <= local_d8.field_16)) {
            local_d8.field_16 = local_b8.field_16;
            local_d8.field_0 = local_b8.field_0;
            local_d8.field_8 = local_b8.field_8;
        }
        cVar1 = local_88.IsValid();
        if ((!cVar1) || (local_a0.field_16 <= local_88.field_16)) {
            local_88.field_16 = local_a0.field_16;
            local_88.field_0 = local_a0.field_0;
            local_88.field_8 = local_a0.field_8;
        }
        cVar1 = local_68.IsValid();
        if ((!cVar1) || (local_b8.field_16 <= local_68.field_16)) {
            local_68.field_16 = local_b8.field_16;
            local_68.field_0 = local_b8.field_0;
            local_68.field_8 = local_b8.field_8;
        }
        cVar1 = local_48.IsValid();
        if ((!cVar1) || (local_a0.field_16 <= local_48.field_16)) {
            local_48.field_16 = local_a0.field_16;
            local_48.field_0 = local_a0.field_0;
            local_48.field_8 = local_a0.field_8;
        }
        cVar1 = local_d8.IsValid();
        if (cVar1) {
            bVar2 = local_d8.field_8->Get<unsigned char>();
            field_0 = bVar2;
        }
        cVar1 = local_88.IsValid();
        if (cVar1) {
            bVar2 = local_88.field_8->Get<unsigned char>();
            field_1 = bVar2;
        }
        cVar1 = local_68.IsValid();
        if (cVar1) {
            bVar2 = local_68.field_8->Get<unsigned char>();
            field_2 = bVar2;
        }
        cVar1 = local_48.IsValid();
        if (cVar1) {
            bVar2 = local_48.field_8->Get<unsigned char>();
            field_3 = bVar2;
        }
    }

} // namespace jag::ui

// libs/graphics/runetek7/fonts/FontHelpers.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    // 0x1008e11a0
    void FontHelpers::TruncateString<eastl::fixed_string<char, 256>>(eastl::fixed_string<char, 256>& str,
                                                                     StringView stringView,
                                                                     const FontMetrics& fontMetrics, unsigned int arg4,
                                                                     TextFlags textFlags, bool arg6) {
        unsigned int uVar3;
        type* ptVar5;
        type* ptVar6;
        unsigned long uVar8;
        uint64_t uVar9;
        char* pcVar10;
        uint32_t in_register_00000081;
        uint32_t in_register_00000089;
        unsigned int uVar12;
        StringView local_1f8;
        StringView local_1e8;
        StringView local_1d8;
        StringView local_1c8;
        uint64_t local_1b8;
        uint64_t local_1b0;
        unsigned long local_1a8;
        StringView* local_198;
        unsigned int local_190;
        unsigned int local_18c;
        unsigned int local_188;
        unsigned long local_180;
        unsigned long local_178;
        char local_161;
        StringView local_160;

        uint32_t local_184 = (((uint32_t)in_register_00000089 << 8) | (uint8_t)arg6);
        local_178 = (((uint64_t)local_178._4_4_ << 32) |
                     (uint32_t)((((uint32_t)in_register_00000081 << 8) | (uint8_t)textFlags.field_0)));
        local_1f8.StringView<eastl::fixed_string<char, 40>>(str);
        char cVar1 = stringView->is_subview_of(&local_1f8);
        bool cVar2 = stringView->empty();
        unsigned long uVar11 = 0;
        if (!cVar2) {
            uVar3 = GetEllipsisWidth(fontMetrics);
            local_18c = arg4 - uVar3;
            if (arg4 < uVar3) {
                local_18c = 0;
            }
            local_180 = 0;
            if (stringView->HeapBeginPtr() == 0) {
                uVar8 = 0;
            } else {
                uVar11 = 0;
                local_188 = (unsigned int)(uint8_t)local_178;
                uVar12 = 0;
                uVar3 = 0;
                local_198 = stringView;
                local_161 = cVar1;
                do {
                    local_1a8 = local_180;
                    local_190 = uVar3;
                    local_178 = uVar11;
                    local_1e8 = StringView(*stringView);
                    local_1b8 = GetNextElementLength(&local_1e8, &local_180, (TextFlags)(uint8_t)local_188);
                    std::get<0ul, unsigned int, unsigned int>(local_1b8);
                    ptVar5 = std::get<1ul, unsigned int, unsigned int>(local_1b8);
                    local_160 = ((unsigned long)stringView)->substr(local_1a8);
                    local_1d8 = StringView(local_160);
                    local_1b0 = GetElementWidth(&local_1d8, local_190, *(unsigned int*)ptVar5, fontMetrics);
                    ptVar6 = std::get<0ul, unsigned int, unsigned int>(local_1b0);
                    ptVar5 = std::get<1ul, unsigned int, unsigned int>(local_1b0);
                    uVar8 = local_180;
                    uVar3 = *(unsigned int*)ptVar5;
                    uVar12 = uVar12 + *(int*)ptVar6;
                    uVar11 = (uVar12 < local_18c && *(int*)ptVar6 != 0) + local_178;
                    if (stringView->HeapBeginPtr() <= uVar8)
                        break;
                } while (uVar12 <= arg4);
                uVar8 = 0;
                if (arg4 < uVar12) {
                    uVar8 = uVar11;
                }
                stringView = local_198;
                cVar1 = local_161;
            }
            if ((char)local_184 == '\0') {
                uVar11 = uVar8;
            }
        } else {
        }
        if (-1 < (long)*(int*)PTR_m_overrideTruncatedStringLength_100ee69a8) {
            uVar11 = (long)*(int*)PTR_m_overrideTruncatedStringLength_100ee69a8;
        }
        if (uVar11 == 0) {
            if (!cVar1) {
                pcVar10 = (char*)stringView->end();
                uVar11 = stringView->HeapBeginPtr();
                str.assign(pcVar10, uVar11);
            } else {
                local_1c8.StringView<eastl::fixed_string<char, 40>>(str);
                cVar1 = *stringView != &local_1c8;
                if (cVar1) {
                    local_160 = eastl::fixed_string<char, 256>();
                    pcVar10 = (char*)stringView->end();
                    uVar11 = stringView->HeapBeginPtr();
                    eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>::assign(
                        &local_160, pcVar10, uVar11);
                    std::swap<eastl::fixed_string<char, 256>>(local_160, str);
                    goto LAB_1008e14a3;
                }
            }
        } else {
            if (cVar1) {
                local_160 = eastl::fixed_string<char, 256>();
                uVar9 = stringView->end();
                local_160.sprintf("%.*s...", uVar11 & 4294967295, uVar9);
                std::swap<eastl::fixed_string<char, 256>>(local_160, str);
            LAB_1008e14a3:
            }
            uVar9 = stringView->end();
            str.sprintf("%.*s...", uVar11 & 4294967295, uVar9);
        }
    }

    // 0x1008e2940
    bool TextRunSlice::IsEmpty() const {
        return field_16 == field_8;
    }

} // namespace jag::graphics

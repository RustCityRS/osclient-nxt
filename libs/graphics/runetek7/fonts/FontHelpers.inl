// libs/graphics/runetek7/fonts/FontHelpers.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    // 0x1008e11a0, 928 bytes, inline, placed by class name and debug map
    // void FontHelpers::TruncateString<eastl::fixed_string<char, 256, true, eastl::allocator> >(eastl::fixed_string<char, 256, true, eastl::allocator>&, StringView, FontMetrics const&, unsigned int, TextFlags, bool)
    void FontHelpers::TruncateString<eastl::fixed_string<char, 256, true, eastl::allocator>>(
        fixed_string* param_1, StringView param_2, FontMetrics* param_3, uint param_4, TextFlags param_5,
        bool param_6) {
        char cVar1;
        char cVar2;
        uint uVar3;
        type* ptVar5;
        undefined8 extraout_RAX;
        type* ptVar6;
        ulong uVar8;
        undefined8 uVar9;
        char* pcVar10;
        ulong uVar11;
        uchar* extraout_RDX;
        uchar* extraout_RDX_00;
        StringView* this_00;
        undefined4 in_register_00000084;
        undefined3 in_register_00000089;
        undefined4 uVar12;
        StringView SVar13;
        StringView SVar14;
        StringView SVar15;
        StringView SVar16;
        StringView aSStack_9f8[128];
        TextFlags in_stack_fffffffffffffe08;
        StringView local_1e8;
        StringView local_1d8;
        StringView local_1c8;
        undefined8 local_1b8;
        undefined8 local_1b0;
        ulong local_1a8;
        FontMetrics* local_1a0;
        StringView* local_198;
        undefined4 local_190;
        uint local_18c;
        uint local_188;
        undefined4 local_184;
        ulong local_180;
        ulong local_178;
        char local_161;
        StringView local_160[18];
        long local_38;

        local_184 = CONCAT31(in_register_00000089, param_6);
        this_00 = (StringView*)param_2.field_0;
        local_178 = CONCAT44(local_178._4_4_, param_4);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(aSStack_9f8 + 128, param_1);
        SVar13.field_8 = extraout_RDX;
        SVar13.field_0 = (ulong)(aSStack_9f8 + 128);
        cVar1 = this_00->is_subview_of(SVar13);
        cVar2 = this_00->empty();
        uVar11 = 0;
        if (cVar2 == '\0') {
            local_1a0 = (FontMetrics*)param_2.field_8;
            uVar3 = GetEllipsisWidth((FontMetrics*)param_2.field_8);
            local_18c = (uint)param_3 - uVar3;
            if ((uint)param_3 < uVar3) {
                local_18c = 0;
            }
            local_180 = 0;
            if (this_00->HeapBeginPtr() == 0) {
                uVar8 = 0;
            } else {
                uVar11 = 0;
                local_188 = (uint)(byte)local_178;
                uVar3 = 0;
                uVar12 = 0;
                local_198 = this_00;
                local_161 = cVar1;
                do {
                    local_1a8 = local_180;
                    local_190 = uVar12;
                    local_178 = uVar11;
                    new (&local_1e8) StringView(this_00);
                    SVar15.field_8 = (uchar*)&local_180;
                    SVar15.field_0 = (ulong)&local_1e8;
                    local_1b8 = GetNextElementLength(SVar15, (ulong*)(ulong)local_188, in_stack_fffffffffffffe08);
                    std::get<0ul, unsigned int, unsigned int>((pair*)&local_1b8);
                    ptVar5 = std::get<1ul, unsigned int, unsigned int>((pair*)&local_1b8);
                    local_160->substr((ulong)this_00, local_1a8);
                    new (&local_1d8) StringView(local_160);
                    SVar16.field_8._0_4_ = local_190;
                    SVar16.field_0 = (ulong)&local_1d8;
                    SVar16.field_8._4_4_ = 0;
                    GetElementWidth(SVar16, *(uint*)ptVar5, (uint)local_1a0,
                                    (FontMetrics*)CONCAT44(in_register_00000084, param_4));
                    local_1b0 = extraout_RAX;
                    ptVar6 = std::get<0ul, unsigned int, unsigned int>((pair*)&local_1b0);
                    ptVar5 = std::get<1ul, unsigned int, unsigned int>((pair*)&local_1b0);
                    uVar8 = local_180;
                    uVar12 = *(undefined4*)ptVar5;
                    uVar3 = uVar3 + *(int*)ptVar6;
                    uVar11 = (uVar3 < local_18c && *(int*)ptVar6 != 0) + local_178;
                    if (this_00->HeapBeginPtr() <= uVar8)
                        break;
                } while (uVar3 <= (uint)param_3);
                uVar8 = 0;
                if ((uint)param_3 < uVar3) {
                    uVar8 = uVar11;
                }
                this_00 = local_198;
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
            if (cVar1 == '\0') {
                pcVar10 = (char*)this_00->end();
                uVar11 = this_00->HeapBeginPtr();
                param_1->assign(pcVar10, uVar11);
            } else {
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_1c8, param_1);
                SVar14.field_8 = extraout_RDX_00;
                SVar14.field_0 = (ulong)&local_1c8;
                cVar1 = StringView::operator!=(this_00, SVar14);
                if (cVar1 != '\0') {
                    new (local_160) eastl::fixed_string<char, 256, true, eastl::allocator>();
                    pcVar10 = (char*)this_00->end();
                    uVar11 = this_00->HeapBeginPtr();
                    local_160->assign(pcVar10, uVar11);
                    std::swap<eastl::fixed_string<char, 256, true, eastl::allocator>>((fixed_string*)local_160,
                                                                                      param_1);
                    goto LAB_1008e14a3;
                }
            }
        } else {
            if (cVar1 != '\0') {
                new (local_160) eastl::fixed_string<char, 256, true, eastl::allocator>();
                uVar9 = this_00->end();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf((char*)local_160, "%.*s...", uVar11 & 4294967295, uVar9);
                std::swap<eastl::fixed_string<char, 256, true, eastl::allocator>>((fixed_string*)local_160, param_1);
            LAB_1008e14a3:
                /* WARNING: Subroutine does not return */
                local_160->~fixed_string();
            }
            uVar9 = this_00->end();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)param_1, "%.*s...", uVar11 & 4294967295, uVar9);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008e2940, 32 bytes, inline, placed by debug map only (low confidence)
    // TextRunSlice::IsEmpty() const
    undefined8 TextRunSlice::IsEmpty() {
        return CONCAT71((int7)((ulong)field_16 >> 8), field_16 == field_8);
    }

} // namespace jag::graphics

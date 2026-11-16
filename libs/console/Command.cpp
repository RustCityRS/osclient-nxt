// libs/console/Command.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.console

#include "Command.h"

namespace jag::console {
    // 0x100c79ac0, 336 bytes, placed by debug map only (low confidence)
    // CommandData::AppendUsage(eastl::fixed_string<char, 512, true, eastl::allocator>&, StringView) const
    ulong CommandData::AppendUsage(fixed_string* param_1, StringView param_2) {
        char* pcVar1;
        char extraout_AL;
        undefined7 extraout_var;
        ulong uVar2;
        undefined8 uVar3;
        undefined8* puVar5;
        ulong uVar6;
        undefined8* puVar7;
        undefined7 uVar8;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_00;
        char* pcVar9;
        char* local_68;
        char* pcStack_60;
        char* local_58;
        char* pcStack_50;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* local_48;
        char local_31;

        (&field_56)->empty();
        local_31 = extraout_AL;
        uVar8 = extraout_var;
        if (extraout_AL == '\0') {
            uVar2 = param_2.field_0->p2_alt2();
            local_48 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)&field_56;
            uVar3 = param_2.field_0->end();
            this_00 = local_48;
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                append_sprintf((char*)param_1, "%.*s<col=448866FF>", uVar2 & 4294967295, uVar3);
            local_58 = " <lt>%s (%s)<gt>";
            pcStack_50 = " [<lt>%s (%s)<gt>]";
            local_68 = " %s<lt>%s<gt>";
            pcStack_60 = " %s[<lt>%s<gt>]";
            if (eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_00) != 0) {
                uVar2 = 0;
                do {
                    puVar5 = (undefined8*)eastl::vector<
                        CommandArgInfo, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<CommandArgInfo,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                        uVar2);
                    uVar6 = (&field_160)->size();
                    pcVar9 = "";
                    if (uVar2 < uVar6) {
                        puVar7 = (undefined8*)eastl::vector<
                            char const*, eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<char const*, eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true,
                                                                                      eastl::allocator>>*)&field_160,
                                   uVar2);
                        pcVar9 = (char*)*puVar7;
                    }
                    pcVar1 = (char*)*puVar5;
                    if (*pcVar1 != '\0' || *pcVar9 != '\0') {
                        puVar5 = (undefined8*)std::array<char const*, 4ul>::operator[](
                            (array<char const*, 4ul>*)&local_68,
                            (ulong) * (byte*)(puVar5 + 1) | (ulong)(*pcVar9 != '\0') * 2);
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                            append_sprintf((char*)param_1, *puVar5, pcVar9, pcVar1);
                    }
                    this_00 = local_48;
                    uVar2 = uVar2 + 1;
                    uVar6 =
                        eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(local_48);
                } while (uVar2 < uVar6);
            }
            uVar3 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                    append_sprintf((char*)param_1, "</col>");
            uVar8 = (undefined7)((ulong)uVar3 >> 8);
        }
        return CONCAT71(uVar8, local_31) ^ 1;
    }

    // 0x100c79ca0, 64 bytes, placed by debug map only (low confidence)
    // CommandData::AppendExample(eastl::fixed_string<char, 512, true, eastl::allocator>&) const
    bool CommandData::AppendExample(fixed_string* param_1) {
        long lVar1;

        lVar1 = field_232;
        if (lVar1 != 0) {
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                append_sprintf((char*)param_1, "<col=CCCCCCFF>for example: \'<col=33CC55FF>%s<col=CCCCCCFF>\'</col>",
                               lVar1);
        }
        return lVar1 != 0;
    }

} // namespace jag::console

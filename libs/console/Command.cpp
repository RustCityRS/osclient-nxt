// libs/console/Command.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.console

#include "Command.h"

namespace jag::console {
    // 0x100c79ac0
    unsigned long CommandData::AppendUsage(eastl::fixed_string<char, 512>& str, StringView stringView) const {
        char* pcVar1;
        char extraout_AL;
        uint64_t extraout_var;
        unsigned long uVar2;
        uint64_t uVar3;
        uint64_t* puVar5;
        unsigned long uVar6;
        uint64_t* puVar7;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_00;
        char* pcVar9;
        char* local_68;
        char* pcStack_60;
        char* local_58;
        char* pcStack_50;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* local_48;

        field_56.empty();
        char local_31 = extraout_AL;
        uint64_t uVar8 = extraout_var;
        if (extraout_AL == '\0') {
            uVar2 = ShuffledPacketFactory::p2_alt2();
            local_48 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)&field_56;
            uVar3 = stringView->end();
            this_00 = local_48;
            str.append_sprintf("%.*s<col=448866FF>", uVar2 & 4294967295, uVar3);
            local_58 = " <lt>%s (%s)<gt>";
            pcStack_50 = " [<lt>%s (%s)<gt>]";
            local_68 = " %s<lt>%s<gt>";
            pcStack_60 = " %s[<lt>%s<gt>]";
            if (this_00->size() != 0) {
                uVar2 = 0;
                do {
                    puVar5 = (uint64_t*)(*this_00)[uVar2];
                    uVar6 = field_160.size();
                    pcVar9 = "";
                    if (uVar2 < uVar6) {
                        puVar7 = &field_160[uVar2];
                        pcVar9 = (char*)*puVar7;
                    }
                    pcVar1 = (char*)*puVar5;
                    if (*pcVar1 != '\0' || *pcVar9 != '\0') {
                        puVar5 =
                            &local_68[(unsigned long)*(uint8_t*)(puVar5 + 1) | (unsigned long)(*pcVar9 != '\0') * 2];
                        str.append_sprintf(*puVar5, pcVar9, pcVar1);
                    }
                    this_00 = local_48;
                    uVar2 = uVar2 + 1;
                    uVar6 = local_48->size();
                } while (uVar2 < uVar6);
            }
            uVar3 = str.append_sprintf("</col>");
            uVar8 = (uint64_t)((unsigned long)uVar3 >> 8);
        }
        return local_31 ^ 1;
    }

    // 0x100c79ca0
    bool CommandData::AppendExample(eastl::fixed_string<char, 512>& str) const {
        long lVar1 = field_232;
        if (lVar1 != 0) {
            str.append_sprintf("<col=CCCCCCFF>for example: \'<col=33CC55FF>%s<col=CCCCCCFF>\'</col>", lVar1);
        }
        return lVar1 != 0;
    }

} // namespace jag::console

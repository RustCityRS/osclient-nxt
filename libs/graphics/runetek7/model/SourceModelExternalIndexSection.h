// libs/graphics/runetek7/model/SourceModelExternalIndexSection.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics::helpers {
    // 0x100865720
    unsigned int
    CheckSortSectionsContiguous(const eastl::vector<SourceModelExternalIndexSection>& sourceModelExternalIndexSections,
                                const eastl::multimap<unsigned char, unsigned long, eastl::less<unsigned char>,
                                                      BucketAllocatorEASTL>& multimap) {
        int iVar1;
        int iVar2;
        long lVar4;
        int* piVar5;
        unsigned long uVar6;

        uint64_t local_38 = multimap.begin();
        uint64_t local_40 = multimap.end();
        unsigned int uVar3 = local_38 != local_40;
        if ((char)uVar3 != '\0') {
            lVar4 = *local_38;
            uVar6 = *(unsigned long*)(lVar4 + 8);
            lVar4 = sourceModelExternalIndexSections[uVar6];
            piVar5 = (int*)(*((lVar4 + 20)))[uVar6];
            if (*piVar5 == 0 && *(int*)(lVar4 + 60) == 0) {
                while (true) {
                    iVar1 = piVar5[1];
                    iVar2 = *(int*)(lVar4 + 64);
                    ++local_38;
                    uVar3 = local_38 != local_40;
                    if ((char)uVar3 == '\0')
                        break;
                    lVar4 = *local_38;
                    uVar6 = *(unsigned long*)(lVar4 + 8);
                    lVar4 = sourceModelExternalIndexSections[uVar6];
                    piVar5 = (int*)(*((lVar4 + 20)))[uVar6];
                    if ((iVar1 != *piVar5) || (iVar2 != *(int*)(lVar4 + 60)))
                        break;
                }
            }
        }
        return uVar3 ^ 1;
    }

} // namespace jag::graphics::helpers

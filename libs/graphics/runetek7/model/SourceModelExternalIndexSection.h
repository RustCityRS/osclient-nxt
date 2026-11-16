// libs/graphics/runetek7/model/SourceModelExternalIndexSection.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics::helpers {
    // 0x100865720, 240 bytes, inline, placed by debug map only (low confidence)
    // CheckSortSectionsContiguous(eastl::vector<SourceModelExternalIndexSection, eastl::allocator> const&, eastl::multimap<unsigned char, unsigned long, eastl::less<unsigned char>, BucketAllocatorEASTL> const&)
    ulong CheckSortSectionsContiguous(vector* param_1, multimap* param_2) {
        int iVar1;
        int iVar2;
        bool bVar3;
        undefined7 extraout_var;
        long lVar4;
        int* piVar5;
        undefined7 extraout_var_00;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar6;
        undefined1 auVar7[16];
        undefined8 local_40;
        undefined8 local_38;

        local_38 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                 eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                 true>::begin();
        auVar7 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        local_40 = auVar7._0_8_;
        bVar3 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_40, auVar7._8_8_);
        uVar6 = CONCAT71(extraout_var, bVar3) & 4294967295;
        if (bVar3) {
            lVar4 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*((rbtree_iterator<
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                       eastl::pair<unsigned int const,
                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_38);
            lVar4 = eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::operator[](
                (vector<SourceModelExternalIndexSection, eastl::allocator>*)param_1, *(ulong*)(lVar4 + 8));
            piVar5 = (int*)std::array<IndexRange, 5ul>::operator[](lVar4 + 20);
            if (*piVar5 == 0 && *(int*)(lVar4 + 60) == 0) {
                while (true) {
                    iVar1 = piVar5[1];
                    iVar2 = *(int*)(lVar4 + 64);
                    eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator++(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                                       eastl::allocator>>&>*)&local_38);
                    bVar3 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_40, extraout_RDX);
                    uVar6 = CONCAT71(extraout_var_00, bVar3) & 4294967295;
                    if (!bVar3)
                        break;
                    lVar4 = eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator*(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                                       eastl::allocator>>&>*)&local_38);
                    lVar4 = eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::operator[](
                        (vector<SourceModelExternalIndexSection, eastl::allocator>*)param_1, *(ulong*)(lVar4 + 8));
                    piVar5 = (int*)std::array<IndexRange, 5ul>::operator[](lVar4 + 20);
                    if ((iVar1 != *piVar5) || (iVar2 != *(int*)(lVar4 + 60)))
                        break;
                }
            }
        }
        return uVar6 ^ 1;
    }

} // namespace jag::graphics::helpers

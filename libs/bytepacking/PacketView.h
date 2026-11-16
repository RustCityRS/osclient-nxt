// libs/bytepacking/PacketView.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag {
    class PacketView {
    public:
        GetPos() const;
        GetSize() const;
        GetDataPtr() const;
        PacketView(unsigned char const*, unsigned long);
        PacketView(WrapArray<unsigned char const>);
        ~PacketView();
        PacketView(PacketView&&);
        PacketView(PacketView const&);
        PacketView();
        PacketView<Array<unsigned char, eastl::allocator>>(
            shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&);
        PacketView* operator=(PacketView&&);
        PacketView<Array<unsigned char, eastl::allocator>>(PacketT<Array<unsigned char, eastl::allocator>> const&);
        void SetPos(unsigned long);

        // data members, from how the methods use this: 32 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[8];
        ulong field_16; // offset 16
        char _unknown_24[8];
    };

    // 0x100023f30: the linker folded this into oldscape::option::IOption::GetName() const, which has identical code
    PacketView::GetPos() const;

    // 0x10007e680: the linker folded this into eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>::get_name() const, which has identical code
    PacketView::GetSize() const;

    // 0x10017b8a0: the linker folded this into PacketT<Array<unsigned char, BucketAllocatorEASTL> >::GetSize() const, which has identical code
    PacketView::GetDataPtr() const;

    // 0x1002b4f70, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PacketView::PacketView(unsigned char const*, unsigned long): jumps straight to the base-object constructor

    // 0x1002b4f80, 144 bytes, placed by debug map only (low confidence)
    // LoadingScreenScript::Advance(unsigned int)
    void LoadingScreenScript::Advance(uint param_1) {
        ulong uVar1;
        ulong uVar2;
        LoadingScreenAnimation* pLVar3;
        LoadingScreenAnimation* this_00;
        uint uVar4;

        uVar2 = FrameTime::GetCurrentTimeMS();
        uVar1 = field_64;
        uVar4 = (int)uVar2 - (int)uVar1;
        if (uVar2 <= uVar1) {
            uVar4 = 0;
        }
        if (uVar1 == 0) {
            uVar4 = 0;
        }
        field_64 = uVar2;
        this_00 = (LoadingScreenAnimation*)(&field_120)->data();
        pLVar3 = (LoadingScreenAnimation*)(&field_120)->end();
        for (; this_00 != pLVar3; this_00 = this_00 + 1) {
            this_00->Advance(uVar4, param_1);
        }
    }

    // 0x1002b5030, 448 bytes, placed by debug map only (low confidence)
    // LoadingScreenScript::LoadingScreenAnimation::Advance(unsigned int, unsigned int)
    void LoadingScreenScript::LoadingScreenAnimation::Advance(uint param_1, uint param_2) {
        undefined1* this_00;
        uint uVar1;
        bool bVar2;
        char cVar3;
        long* plVar4;
        long lVar5;
        uint* puVar6;
        long lVar7;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        hashtable_iterator_base* phVar8;
        hashtable_iterator_base* extraout_RDX_03;
        hashtable_iterator_base* extraout_RDX_04;
        uint uVar9;
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        undefined8 local_60;
        undefined8 local_58;
        undefined8 uStack_50;
        hashtable_iterator_base local_40[16];

        if (field_8 == '\0') {
            field_4 = field_4 + param_1;
        } else {
            field_4 = (param_2 * field_0) / 100;
        }
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        bVar2 = eastl::operator!=((eastl*)&local_58, local_40, extraout_RDX);
        if (bVar2) {
            do {
                plVar4 = (long*)local_58.HeapBeginPtr();
                lVar7 = *plVar4;
                lVar5 = local_58.HeapBeginPtr();
                uVar1 = *(uint*)(lVar7 + 24);
                uVar9 = field_4;
                if (uVar1 < field_4) {
                    uVar9 = uVar1;
                }
                **(int**)(lVar7 + 8) =
                    (int)((uVar9 - *(int*)(lVar5 + 8)) * (*(int*)(lVar7 + 16) - *(int*)(lVar7 + 20))) /
                        (int)(uVar1 - *(int*)(lVar5 + 8)) +
                    *(int*)(lVar7 + 20);
                if (uVar9 == *(uint*)(lVar7 + 24)) {
                    new (&local_68)
                        eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                            (hashtable_iterator*)&local_58);
                    eastl::hashtable<LoadingScreenScript::Keyframe*,
                                     eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>>,
                                     eastl::equal_to<LoadingScreenScript::Keyframe*>,
                                     eastl::hash<LoadingScreenScript::Keyframe*>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::erase(&local_78, &field_72, local_68, local_60);
                    local_58 = local_78;
                    uStack_50 = uStack_70;
                    phVar8 = extraout_RDX_01;
                } else {
                    eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::operator++(
                        (hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>*)&local_58);
                    phVar8 = extraout_RDX_00;
                }
                bVar2 = eastl::operator!=((eastl*)&local_58, local_40, phVar8);
            } while (bVar2);
        }
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        this_00 = &field_224;
        bVar2 = eastl::operator!=((eastl*)this_00, local_40, extraout_RDX_02);
        if (bVar2) {
            do {
                puVar6 = (uint*)eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)this_00);
                if (field_4 < *puVar6)
                    break;
                lVar7 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)this_00);
                puVar6 = (uint*)eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)this_00);
                cVar3 = DoKeyframes(this, (vector*)(lVar7 + 8), *puVar6);
                phVar8 = extraout_RDX_03;
                if (cVar3 != '\0') {
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
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                            this_00);
                    phVar8 = extraout_RDX_04;
                }
                bVar2 = eastl::operator!=((eastl*)this_00, local_40, phVar8);
            } while (bVar2);
        }
        if (field_0 <= field_4) {
            if (field_12 == 1) {
                field_4 = field_0;
            } else if (field_12 == 0) {
                Reset(this);
            }
        }
    }

    // 0x1002b51f0, 144 bytes, placed by debug map only (low confidence)
    // LoadingScreenScript::LoadingScreenAnimation::Reset()
    void LoadingScreenScript::LoadingScreenAnimation::Reset() {
        unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>* this_00;
        unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>* puVar1;
        long* plVar2;
        rbtree_iterator local_20[8];

        (&field_72)->clear();
        field_4 = 0;
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
        operator=((rbtree_iterator<
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                      eastl::pair<unsigned int const,
                                  eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&field_224,
                  local_20);
        this_00 = (unique_ptr<LoadingScreenScript::AnimLayer,
                              std::default_delete<LoadingScreenScript::AnimLayer>>*)(&field_48)
                      ->data();
        puVar1 = (unique_ptr<LoadingScreenScript::AnimLayer,
                             std::default_delete<LoadingScreenScript::AnimLayer>>*)(&field_48)
                     ->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            plVar2 = (long*)std::unique_ptr<LoadingScreenScript::AnimLayer,
                                            std::default_delete<LoadingScreenScript::AnimLayer>>::operator->(this_00);
            (**(code**)(*plVar2 + 24))(plVar2);
        }
    }

    // 0x1002b5290, 480 bytes, placed by debug map only (low confidence)
    // LoadingScreenScript::LoadingScreenAnimation::DoKeyframes(eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>&, unsigned int)
    bool LoadingScreenScript::LoadingScreenAnimation::DoKeyframes(vector* param_1, uint param_2) {
        uint uVar1;
        long lVar2;
        LoadingScreenAnimation* pLVar3;
        bool bVar4;
        Keyframe* pKVar5;
        Keyframe* pKVar6;
        uint* puVar7;
        long* plVar8;
        long lVar9;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar10;
        hashtable_iterator_base* extraout_RDX_01;
        uint uVar11;
        undefined8 local_88;
        undefined8 uStack_80;
        undefined8 local_78;
        undefined8 local_70;
        Keyframe* local_68[2];
        undefined8 local_58;
        undefined8 uStack_50;

        pKVar5 = (Keyframe*)param_1->HeapBeginPtr();
        pKVar6 = (Keyframe*)param_1->end();
        if (pKVar5 == pKVar6) {
            uVar11 = 4294967295;
        } else {
            uVar11 = 4294967295;
            do {
                switch (*(undefined4*)pKVar5) {
                case 0:
                    *(bool*)*(undefined8*)(pKVar5 + 8) = *(int*)(pKVar5 + 16) != 0;
                    break;
                case 1:
                    **(undefined4**)(pKVar5 + 8) = *(undefined4*)(pKVar5 + 16);
                    break;
                case 2:
                    *(undefined4*)(pKVar5 + 20) = **(undefined4**)(pKVar5 + 8);
                    local_68[0] = pKVar5;
                    puVar7 = (uint*)eastl::hash_map<
                        LoadingScreenScript::Keyframe*, unsigned int, eastl::hash<LoadingScreenScript::Keyframe*>,
                        eastl::equal_to<LoadingScreenScript::Keyframe*>, eastl::allocator,
                        false>::operator[]((hash_map<LoadingScreenScript::Keyframe*, unsigned int,
                                                     eastl::hash<LoadingScreenScript::Keyframe*>,
                                                     eastl::equal_to<LoadingScreenScript::Keyframe*>, eastl::allocator,
                                                     false>*)&field_72,
                                           local_68);
                    *puVar7 = param_2;
                    break;
                case 3:
                    uVar11 = *(uint*)(pKVar5 + 16);
                    break;
                case 4:
                    (**(code**)(*((LoadingScreenAnimation*)this)->field_16 + 56))(
                        ((LoadingScreenAnimation*)this)->field_16, *(undefined8*)(pKVar5 + 8));
                }
                pKVar5 = pKVar5 + 32;
            } while (pKVar5 != pKVar6);
        }
        if (uVar11 != 4294967295) {
            eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            bVar4 = eastl::operator!=((eastl*)&local_58, (hashtable_iterator_base*)local_68, extraout_RDX);
            if (bVar4) {
                do {
                    plVar8 = (long*)local_58.HeapBeginPtr();
                    lVar2 = *plVar8;
                    lVar9 = local_58.HeapBeginPtr();
                    uVar1 = *(uint*)(lVar9 + 8);
                    if (*(uint*)(lVar2 + 24) <= uVar11) {
                        **(undefined4**)(lVar2 + 8) = *(undefined4*)(lVar2 + 16);
                    }
                    if ((uVar11 < uVar1) || (*(uint*)(lVar2 + 24) <= uVar11)) {
                        new (&local_78)
                            eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                                (hashtable_iterator*)&local_58);
                        eastl::hashtable<
                            LoadingScreenScript::Keyframe*,
                            eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>>,
                            eastl::equal_to<LoadingScreenScript::Keyframe*>,
                            eastl::hash<LoadingScreenScript::Keyframe*>, eastl::mod_range_hashing,
                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::erase(&local_88,
                                                                                                              &field_72,
                                                                                                              local_78,
                                                                                                              local_70);
                        local_58 = local_88;
                        uStack_50 = uStack_80;
                        phVar10 = extraout_RDX_00;
                    } else {
                        eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::operator++(
                            (hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>*)&local_58);
                        phVar10 = extraout_RDX_01;
                    }
                    bVar4 = eastl::operator!=((eastl*)&local_58, (hashtable_iterator_base*)local_68, phVar10);
                } while (bVar4);
            }
            pLVar3 = (LoadingScreenAnimation*)this;
            ((LoadingScreenAnimation*)this)->field_4 = uVar11;
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::lower_bound((uint*)&local_58);
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator=(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const,
                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&pLVar3->field_224,
                (rbtree_iterator*)&local_58);
        }
        return uVar11 == 4294967295;
    }

    // 0x1002b54b0, 112 bytes, placed by debug map only (low confidence)
    // LoadingScreenScript::LoadingScreenAnimation::OnTrigger(eastl::string const&)
    void LoadingScreenScript::LoadingScreenAnimation::OnTrigger(basic_string* param_1) {
        long lVar1;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_38[8];
        basic_string local_30[8];

        eastl::rbtree<eastl::string,
                      eastl::pair<eastl::stringconst, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<eastl::string>, eastl::allocator,
                      eastl::use_first<eastl::pair<eastl::stringconst,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::find(local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=((eastl*)local_30, local_38, extraout_RDX)) {
            lVar1 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            DoKeyframes((LoadingScreenAnimation*)param_1, (vector*)(lVar1 + 32), *(uint*)(param_1 + 4));
        }
    }

    // 0x1002b5600, 64 bytes, placed by debug map only (low confidence)
    // LoadingScreenScript::DestroyResources()
    void LoadingScreenScript::DestroyResources() {
        (&field_120)->clear();
        shared_ptr<oldscape::jstring::PixfontGeneric>::reset();
        *(undefined8*)(field_8 + 8) = 0;
        *(undefined8*)(field_8 + 32) = 0;
    }

    // 0x1002b5690, 32 bytes, placed by debug map only (low confidence)
    // LoadingScreenScript::Render(oldscape::graphics::Pix2D&, int, int)
    void LoadingScreenScript::Render(Pix2D* param_1, int param_2, int param_3) {
        undefined4 in_register_00000014;

        (field_8, param_1, (LoadingScreenAnimation*)CONCAT44(in_register_00000014)->Render(param_2), param_2, param_3);
    }

    // 0x1002b56b0, 144 bytes, placed by debug map only (low confidence)
    // LoadingScreenScript::ChildAnimLayer::Render(oldscape::graphics::Pix2D&, LoadingScreenScript::LoadingScreenAnimation const&, int, int) const
    void LoadingScreenScript::ChildAnimLayer::Render(Pix2D* param_1, LoadingScreenAnimation* param_2, int param_3,
                                                     int param_4) {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        LoadingScreenAnimation* pLVar3;
        unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>* this_01;
        unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>* puVar4;
        long* plVar5;

        if (field_24 != '\0') {
            iVar1 = field_16;
            iVar2 = field_20;
            pLVar3 = field_8;
            this_00 = &pLVar3->field_48;
            this_01 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
                          this_00->data();
            puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>*)
                         this_00->end();
            for (; this_01 != puVar4; this_01 = this_01 + 8) {
                plVar5 =
                    (long*)std::unique_ptr<LoadingScreenScript::AnimLayer,
                                           std::default_delete<LoadingScreenScript::AnimLayer>>::operator->(this_01);
                (**(code**)(*plVar5 + 16))(plVar5, param_1, pLVar3, param_3 + iVar1, param_4 + iVar2);
            }
        }
    }

    // 0x1002b5740, 160 bytes, placed by debug map only (low confidence)
    // LoadingScreenScript::BroadcastTrigger(char const*)
    void LoadingScreenScript::BroadcastTrigger(char* param_1) {
        basic_string* pbVar1;
        basic_string* pbVar2;
        eastl::string local_58[32];
        allocator local_38[8];

        pbVar1 = (basic_string*)(&field_120)->data();
        pbVar2 = (basic_string*)(&field_120)->end();
        if (pbVar1 != pbVar2) {
            do {
                eastl::allocator::allocator(local_38, "EASTL basic_string");
                eastl::string::basic_string(local_58, param_1, local_38);
                LoadingScreenAnimation::OnTrigger(pbVar1);
                eastl::string::~basic_string(local_58);
                pbVar1 = pbVar1 + 232;
            } while (pbVar1 != pbVar2);
        }
    }

    // 0x1002b57e0, 176 bytes, placed by debug map only (low confidence)
    // LoadingScreenScript::CreateFont(unsigned char const*, unsigned long, unsigned char const*, unsigned long)
    void LoadingScreenScript::CreateFont(uchar* param_1, ulong param_2, uchar* param_3, ulong param_4) {
        WindowSavedPosition local_70;
        WindowSavedPosition local_50;
        shared_ptr local_30;

        local_70.PacketT(param_1, param_2);
        local_50.PacketT(param_3, param_4);
        local_30.MakepixfontGeneric((PacketJ*)&local_70, (PacketJ*)&local_50);
        shared_ptr<oldscape::jstring::PixfontGeneric>::operator=(
            (shared_ptr<oldscape::jstring::PixfontGeneric>*)&field_72, &local_30);
        local_30.~shared_ptr();
        local_50.~WindowSavedPosition();
        local_70.~WindowSavedPosition();
    }

    // 0x1002b58a0, 144 bytes, placed by debug map only (low confidence)
    // LoadingScreenScript::SpriteLayer::Render(oldscape::graphics::Pix2D&, LoadingScreenScript::LoadingScreenAnimation const&, int, int) const
    void LoadingScreenScript::SpriteLayer::Render(Pix2D* param_1, LoadingScreenAnimation* param_2, int param_3,
                                                  int param_4) {
        int iVar1;
        int iVar2;
        undefined8 uVar3;

        if ((field_44 != '\0') && (field_36 != 0)) {
            iVar1 = field_12;
            iVar2 = field_16;
            uVar3 = Array<oldscape::graphics::Pix32, eastl::allocator>::operator[](
                (Array<oldscape::graphics::Pix32, eastl::allocator>*)&param_2->field_24, (ulong)field_8);
            (**(code**)(param_1->field_0 + 192))(param_1, uVar3, param_3 + iVar1, param_4 + iVar2, field_20, field_24,
                                                 field_28, field_32, field_36, field_40);
        }
    }

    // 0x1002b59b0, 192 bytes, placed by debug map only (low confidence)
    // LoadingScreenScript::RectLayer::Render(oldscape::graphics::Pix2D&, LoadingScreenScript::LoadingScreenAnimation const&, int, int) const
    void LoadingScreenScript::RectLayer::Render(Pix2D* param_1, LoadingScreenAnimation* param_2, int param_3,
                                                int param_4) {
        uint uVar1;
        int iVar2;
        int iVar3;

        if ((field_36 != '\0') && (field_32 != 0)) {
            iVar2 = param_3 + field_8;
            iVar3 = param_4 + field_12;
            uVar1 = field_28;
            if (16777215 < uVar1) {
                param_1->DrawRectTrans(iVar2, iVar3, field_16 + 2, field_20 + 2, uVar1 & 16777215, uVar1 >> 24);
                iVar2 = iVar2 + 1;
                iVar3 = iVar3 + 1;
            }
            uVar1 = field_24;
            if (16777215 < uVar1) {
                (**(code**)(param_1->field_0 + 24))(param_1, iVar2, iVar3, field_16, field_20, uVar1 & 16777215,
                                                    uVar1 >> 24);
            }
        }
    }

    // 0x1002b5a70, 208 bytes, placed by debug map only (low confidence)
    // LoadingScreenScript::TextLayer::Render(oldscape::graphics::Pix2D&, LoadingScreenScript::LoadingScreenAnimation const&, int, int) const
    void LoadingScreenScript::TextLayer::Render(Pix2D* param_1, LoadingScreenAnimation* param_2, int param_3,
                                                int param_4) {
        int iVar1;
        int iVar2;
        int iVar3;
        long lVar4;
        int* piVar6;
        PixfontGeneric* this_00;
        shared_ptr* this_01;

        if (field_40 != '\0') {
            iVar1 = field_8;
            iVar2 = field_12;
            this_01 = (shared_ptr*)(param_2->field_16 + 9);
            if (operator!=(this_01, (_func_decltype_nullptr*)0)) {
                piVar6 = (int*)shared_ptr<oldscape::jstring::PixfontGeneric>::operator->(
                    (shared_ptr<oldscape::jstring::PixfontGeneric>*)this_01);
                lVar4 = param_2->field_16[18];
                iVar3 = *piVar6;
                this_00 = (PixfontGeneric*)shared_ptr<oldscape::jstring::PixfontGeneric>::operator->(
                    (shared_ptr<oldscape::jstring::PixfontGeneric>*)this_01);
                this_00->DrawStringMultiline((basic_string*)(param_2->field_16 + 11), iVar1 + param_3, iVar2 + param_4,
                                             field_16, field_20, field_24, field_28, field_32, field_36,
                                             (int)lVar4 + iVar3, param_1);
            }
        }
    }

    // 0x1002d9e90, 16 bytes, complete-object constructor, inline, placed by class name
    // PacketView::PacketView(WrapArray<unsigned char const>): jumps straight to the base-object constructor

    // 0x1002d9ea0, 48 bytes, base-object constructor, inline, placed by class name
    // PacketView::PacketView(WrapArray<unsigned char const>)
    void PacketView::PacketView(_func_decltype_nullptr* param_2) {
        WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
            WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(
            (WrapArray<game::Cutscene2DAnimation<float>::Key_const>*)this, param_2);
        field_16 = 0;
        new (&field_24, param_2) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1002d9f10, 48 bytes, base-object constructor, inline, placed by class name
    // PacketView::PacketView(unsigned char const*, unsigned long)
    void PacketView::PacketView(uchar* param_1, ulong param_2) {
        new (this) WrapArray<unsigned char>(param_1, param_2);
        field_16 = 0;
        new (&field_24, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1003d5ab0: the linker folded this into game::WorldMap::TerrainUnderlayTexture::~TerrainUnderlayTexture(), which has identical code
    PacketView::~PacketView();

    // 0x1003d5ac0: the linker folded this into game::WorldMap::TerrainUnderlayTexture::~TerrainUnderlayTexture(), which has identical code
    PacketView::~PacketView();

    // 0x10054ce00, 16 bytes, complete-object constructor, inline, placed by class name
    // PacketView::PacketView(PacketView&&): jumps straight to the base-object constructor

    // 0x10054ce10, 64 bytes, base-object constructor, inline, placed by class name
    // PacketView::PacketView(PacketView&&)
    void PacketView::PacketView(PacketView* param_1) {
        new (this) WrapArray<unsigned char const>(param_1);
        field_16 = param_1->field_16;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_24, (shared_ptr*)&param_1->field_24);
    }

    // 0x10081b470, 16 bytes, complete-object constructor, inline, placed by class name
    // PacketView::PacketView(PacketView const&): jumps straight to the base-object constructor

    // 0x10082e500, 64 bytes, base-object constructor, inline, placed by class name
    // PacketView::PacketView(PacketView const&)
    void PacketView::PacketView(PacketView* param_1) {
        new (this) WrapArray<math::Matrix44T<float> const>(param_1);
        field_16 = param_1->field_16;
        new (&field_24, (shared_ptr*)&param_1->field_24) shared_ptr<oldscape::dash3d::Decor>();
    }

    // 0x1008cb910, 16 bytes, complete-object constructor, inline, placed by class name
    // PacketView::PacketView(): jumps straight to the base-object constructor

    // 0x1008cfc30, 48 bytes, base-object constructor, inline, placed by class name
    // PacketView::PacketView()
    void PacketView::PacketView() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        field_16 = 0;
        new (&field_24, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1008cfc60, 16 bytes, complete-object constructor, inline, placed by class name
    // PacketView::PacketView<Array<unsigned char, eastl::allocator> >(shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > > const&): jumps straight to the base-object constructor

    // 0x1008cfc70, 64 bytes, inline, placed by class name
    // PacketView::operator=(PacketView&&)
    /* PacketView::TEMPNAMEPLACEHOLDERVALUE(PacketView&&) */

    PacketView* PacketView::operator=(PacketView* param_1) {
        WrapArray<unsigned char const>::operator=((WrapArray<unsigned char const>*)this, (WrapArray*)param_1);
        field_16 = param_1->field_16;
        shared_ptr<void_const>::operator=((shared_ptr<void_const>*)&field_24, (shared_ptr*)&param_1->field_24);
        return this;
    }

    // 0x1008cfcb0, 176 bytes, base-object constructor, inline, placed by class name
    // PacketView::PacketView<Array<unsigned char, eastl::allocator> >(shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > > const&)
    void PacketView::PacketView<Array<unsigned char, eastl::allocator>>(shared_ptr* param_1) {
        Layout* this_00;
        vector* pvVar2;
        shared_ptr* extraout_RDX;
        shared_ptr local_30;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        field_16 = 0;
        new (&field_24, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        if (shared_ptr::operator_cast_to_bool(param_1)) {
            this_00 = (Layout*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
            pvVar2 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)param_1);
            WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(
                (WrapArray<unsigned char const>*)&local_30, (Array*)pvVar2);
            WrapArray<unsigned char const>::operator=((WrapArray<unsigned char const>*)this, (WrapArray*)&local_30);
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_30, (jag*)param_1,
                                                                                         extraout_RDX);
            shared_ptr<void_const>::operator=((shared_ptr<void_const>*)&field_24, &local_30);
            local_30.~shared_ptr();
        }
    }

    // 0x1009dfb70, 16 bytes, complete-object constructor, inline, placed by class name
    // PacketView::PacketView<Array<unsigned char, eastl::allocator> >(PacketT<Array<unsigned char, eastl::allocator> > const&): jumps straight to the base-object constructor

    // 0x1009fbbc0, 64 bytes, base-object constructor, inline, placed by class name
    // PacketView::PacketView<Array<unsigned char, eastl::allocator> >(PacketT<Array<unsigned char, eastl::allocator> > const&)
    void PacketView::PacketView<Array<unsigned char, eastl::allocator>>(PacketT* param_1) {
        vector* pvVar1;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(
            (WrapArray<unsigned char const>*)this, (Array*)pvVar1);
        field_16 = 0;
        new (&field_24, (_func_decltype_nullptr*)pvVar1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x100a0d120, 80 bytes, inline, placed by class name
    // PacketView::SetPos(unsigned long)
    void PacketView::SetPos(ulong param_1) {
        if (HeapBeginPtr() < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("_pos <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketView.h",
                      77, "Packet: Invalid pos");
        }
        field_16 = param_1;
    }

} // namespace jag

namespace jag::oldscape {
    // 0x1002b5890, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketJ<Array<unsigned char, eastl::allocator> >::PacketT(unsigned char const*, unsigned long)
    void PacketJ<Array<unsigned char, eastl::allocator>>::PacketT(PacketJ<Array<unsigned char, eastl::allocator>>* this,
                                                                  uchar* param_1, ulong param_2) {
        PacketT(this, param_1, param_2);
    }

} // namespace jag::oldscape

// libs/graphics/runetek7/effects/EffectUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class EffectStateSaveRestore {
    public:
        EffectStateSaveRestore(
            EffectManager&,
            eastl::fixed_map<EffectType, bool, 121ul, true, eastl::less<EffectType>, eastl::allocator> const&);
        ~EffectStateSaveRestore();

        // data members, from how the methods use this: 16 bytes
        EffectManager* field_0; // offset 0
        char _unknown_8[8];
    };

    // 0x10092c6b0, 1216 bytes, placed by debug map only (low confidence)
    // EnableStandardEffects(RT7Core&)
    void EnableStandardEffects(RT7Core* param_1) {
        NXTPixScreen* this;
        EffectManager* pEVar2;
        EffectManager* this_00;

        pEVar2 = (EffectManager*)param_1->GetEffectManager();
        pEVar2->EnableEffect(7, 1);
        pEVar2->EnableEffect(20, 1);
        pEVar2->EnableEffect(21, 1);
        pEVar2->EnableEffect(22, 1);
        pEVar2->EnableEffect(23, 1);
        pEVar2->EnableEffect(25, 1);
        pEVar2->EnableEffect(59, 1);
        pEVar2->EnableEffect(27, 1);
        pEVar2->EnableEffect(64, 1);
        pEVar2->EnableEffect(29, 1);
        pEVar2->EnableEffect(38, 1);
        pEVar2->EnableEffect(30, 1);
        pEVar2->EnableEffect(33, 1);
        pEVar2->EnableEffect(36, 1);
        pEVar2->EnableEffect(35, 1);
        pEVar2->EnableEffect(37, 1);
        pEVar2->EnableEffect(50, 1);
        pEVar2->EnableEffect(51, 1);
        pEVar2->EnableEffect(52, 1);
        pEVar2->EnableEffect(53, 1);
        pEVar2->EnableEffect(57, 1);
        pEVar2->EnableEffect(60, 1);
        pEVar2->EnableEffect(24, 1);
        pEVar2->EnableEffect(48, 1);
        pEVar2->EnableEffect(49, 1);
        pEVar2->EnableEffect(26, 1);
        pEVar2->EnableEffect(55, 1);
        pEVar2->EnableEffect(56, 1);
        pEVar2->EnableEffect(61, 1);
        pEVar2->EnableEffect(63, 1);
        pEVar2->EnableEffect(67, 1);
        pEVar2->EnableEffect(68, 1);
        pEVar2->EnableEffect(70, 1);
        pEVar2->EnableEffect(72, 1);
        pEVar2->EnableEffect(73, 1);
        pEVar2->EnableEffect(74, 1);
        pEVar2->EnableEffect(75, 1);
        pEVar2->EnableEffect(76, 1);
        pEVar2->EnableEffect(78, 1);
        pEVar2->EnableEffect(77, 1);
        pEVar2->EnableEffect(79, 1);
        pEVar2->EnableEffect(80, 1);
        pEVar2->EnableEffect(81, 1);
        pEVar2->EnableEffect(82, 1);
        pEVar2->EnableEffect(84, 1);
        pEVar2->EnableEffect(85, 1);
        pEVar2->EnableEffect(86, 1);
        pEVar2->EnableEffect(87, 1);
        pEVar2->EnableEffect(88, 1);
        this_00 = pEVar2;
        pEVar2->EnableEffect(94, 1);
        this = (NXTPixScreen*)this_00->Instance();
        if (GetUIHeight() != 5) {
            pEVar2->EnableEffect(95, 1);
        }
        pEVar2->EnableEffect(98, 1);
        pEVar2->EnableEffect(99, 1);
        pEVar2->EnableEffect(101, 1);
        pEVar2->EnableEffect(102, 1);
        pEVar2->EnableEffect(106, 1);
        pEVar2->EnableEffect(54, 1);
        pEVar2->EnableEffect(45, 1);
        pEVar2->EnableEffect(47, 1);
        pEVar2->EnableEffect(114, 1);
        pEVar2->EnableEffect(107, 1);
        pEVar2->EnableEffect(108, 1);
        pEVar2->EnableEffect(103, 1);
        pEVar2->EnableEffect(36, 0);
        pEVar2->EnableEffect(19, 0);
    }

    // 0x10092cb70, 112 bytes, placed by debug map only (low confidence)
    // SetEffectsQuality(RT7Core&, GraphicsQuality)
    void SetEffectsQuality(RT7Core* param_1, undefined4 param_2) {
        RenderContext* this;
        PostProcessController* pPVar1;
        long lVar2;
        EffectManager* pEVar3;

        this = (RenderContext*)param_1->GetRenderContext();
        if (IsMinCoreProfile() != '\0') {
            pPVar1 = (PostProcessController*)param_1->GetPostProcessController();
            lVar2 = pPVar1->GetCurrentConfig();
            *(undefined4*)(lVar2 + 532) = 0;
            pPVar1 = (PostProcessController*)param_1->GetPostProcessController();
            lVar2 = pPVar1->GetCurrentConfig();
            *(undefined4*)(lVar2 + 472) = 0;
        }
        pEVar3 = (EffectManager*)param_1->GetEffectManager();
        pEVar3->SetEffectsQuality(param_2);
    }

    // 0x10092cbf0, 208 bytes, base-object constructor, placed by debug map only (low confidence)
    // EffectStateSaveRestore::EffectStateSaveRestore(EffectManager&, eastl::fixed_map<EffectType, bool, 121ul, true, eastl::less<EffectType>, eastl::allocator> const&)
    void EffectStateSaveRestore::EffectStateSaveRestore(EffectManager* param_1, fixed_map* param_2) {
        undefined1* puVar1;
        undefined1 uVar3;
        EffectType* pEVar4;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar5;
        hashtable_iterator_base* extraout_RDX_00;
        undefined8 local_40;
        undefined8 local_38;

        field_0 = param_1;
        new (&field_8) eastl::fixed_map<EffectType, bool, 121ul, true, eastl::less<EffectType>, eastl::allocator>();
        local_40 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                 eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                 true>::begin();
        local_38 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        phVar5 = extraout_RDX;
        while (true) {
            if (!eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_38, phVar5))
                break;
            pEVar4 = (EffectType*)eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*((rbtree_iterator<
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                       eastl::pair<unsigned int const,
                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_40);
            uVar3 = param_1->IsEnabled(*pEVar4);
            puVar1 =
                (undefined1*)eastl::map<EffectType, bool, eastl::less<EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<EffectType, bool, eastl::less<EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)&field_8,
                           pEVar4);
            *puVar1 = uVar3;
            param_1->EnableEffect(*pEVar4, pEVar4[1]);
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const,
                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_40);
            phVar5 = extraout_RDX_00;
        }
    }

    // 0x10092cd80, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // EffectStateSaveRestore::EffectStateSaveRestore(EffectManager&, eastl::fixed_map<EffectType, bool, 121ul, true, eastl::less<EffectType>, eastl::allocator> const&): jumps straight to the base-object constructor

    // 0x10092cd90, 160 bytes, base-object destructor, placed by debug map only (low confidence)
    // EffectStateSaveRestore::~EffectStateSaveRestore()
    void EffectStateSaveRestore::~EffectStateSaveRestore() {
        undefined1* puVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar3;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_38[8];
        hashtable_iterator_base local_30[8];

        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        phVar3 = extraout_RDX;
        while (true) {
            if (!eastl::operator!=(local_38, local_30, phVar3))
                break;
            puVar2 = (undefined1*)eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_38);
            (field_0, *puVar2, puVar2[1])->EnableEffect();
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_38);
            phVar3 = extraout_RDX_00;
        }
        (&field_8)->~fixed_map();
    }

    // 0x10092ce30, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // EffectStateSaveRestore::~EffectStateSaveRestore(): jumps straight to the base-object destructor

} // namespace jag::graphics

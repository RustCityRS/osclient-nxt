// libs/jtl/TextConvert.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag {
    // 0x10002d970, 48 bytes, inline, placed by debug map only (low confidence)
    // bool FromString<eastl::fixed_string<char, 256, true, eastl::allocator>, int>(eastl::fixed_string<char, 256, true, eastl::allocator> const&, int&, int)
    /* bool FromString<eastl::fixed_string<char, 64, true, eastl::allocator>,
   int>(eastl::fixed_string<char, 64, true, eastl::allocator> const&, int&, int) */

    bool FromString<eastl::fixed_string<char, 64, true, eastl::allocator>, int>(fixed_string* param_1, int* param_2,
                                                                                int param_3) {
        char* pcVar1;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return (bool)FromText(pcVar1, param_2, param_3);
    }

    // 0x10002dbe0, 144 bytes, inline, placed by debug map only (low confidence)
    // char const* ToText<256, true>(eastl::fixed_string<char, 256, true, eastl::allocator>&, int, unsigned int)
    char* ToText<256, true>(fixed_string* param_1, int param_2, uint param_3) {
        void* pvVar1;
        void* pvVar2;
        char* pcVar3;
        uint local_4c;
        char local_48[40];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_4c = 32;
        pvVar1 = (void*)internal::itoa(local_48, &local_4c, (long)param_2, param_3);
        if (local_4c < 256) {
            pvVar2 = (void*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            _memcpy(pvVar2, pvVar1, (ulong)(local_4c + 1));
            param_1->force_size((ulong)local_4c);
        }
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return pcVar3;
    }

    // 0x10002e630, 48 bytes, inline, placed by debug map only (low confidence)
    // bool FromString<eastl::fixed_string<char, 256, true, eastl::allocator>, float>(eastl::fixed_string<char, 256, true, eastl::allocator> const&, float&, int)
    bool FromString<eastl::fixed_string<char, 256, true, eastl::allocator>, float>(fixed_string* param_1,
                                                                                   float* param_2, int param_3) {
        char* pcVar1;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return (bool)FromText(pcVar1, param_2, param_3);
    }

    // 0x10002e880, 96 bytes, inline, placed by debug map only (low confidence)
    // char const* ToText<256, true>(eastl::fixed_string<char, 256, true, eastl::allocator>&, float)
    char* ToText<256, true>(fixed_string* param_1, float param_2) {
        char* pcVar1;
        int iVar2;

        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, (double)param_2);
        pcVar1 = (char*)eastl::
            basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::operator[](
                (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                    param_1,
                0);
        iVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        iVar2 = TrimNumericZeros(pcVar1, iVar2);
        param_1->force_size((long)iVar2);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return pcVar1;
    }

} // namespace jag

namespace jag::oldscape::minimenu {
    // 0x10002ecd0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // MinimenuSubject::~MinimenuSubject()
    void MinimenuSubject::~MinimenuSubject() {
        (&field_56)->~VisibleShadowCastingLightInfo();
        ~basic_string();
    }

    // 0x10002ed00, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // MinimenuComponent::~MinimenuComponent(): jumps straight to the base-object destructor

    // 0x10002ed10, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MinimenuComponent::~MinimenuComponent()
    /* enable_shared_from_this<game::ConfigType<game::VarType>
   >::~enable_shared_from_this() */

    void enable_shared_from_this<game::ConfigType<game::VarType>>::~enable_shared_from_this() {
        ~weak_ptr();
    }

} // namespace jag::oldscape::minimenu

namespace jag::ui {
    // 0x10002ed00: the linker folded this into oldscape::minimenu::MinimenuComponent::~MinimenuComponent(), which has identical code
    ComponentDragConfig::~ComponentDragConfig();

    // 0x10002ed10: the linker folded this into oldscape::minimenu::MinimenuComponent::~MinimenuComponent(), which has identical code
    ComponentDragConfig::~ComponentDragConfig();

} // namespace jag::ui

namespace jag::game {
    // 0x10002ed00: the linker folded this into oldscape::minimenu::MinimenuComponent::~MinimenuComponent(), which has identical code
    VisibleShadowCastingLightInfo::~VisibleShadowCastingLightInfo();

    // 0x10002ed10: the linker folded this into oldscape::minimenu::MinimenuComponent::~MinimenuComponent(), which has identical code
    VisibleShadowCastingLightInfo::~VisibleShadowCastingLightInfo();

} // namespace jag::game

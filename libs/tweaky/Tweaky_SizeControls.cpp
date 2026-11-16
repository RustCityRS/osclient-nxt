// libs/tweaky/Tweaky_SizeControls.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.tweaky

#include "Tweaky_SizeControls.h"

namespace jag::tweak {
    // 0x100a4cdd0, 208 bytes, placed by debug map only (low confidence)
    // SizeControl::Initialise()
    void SizeControl::Initialise() {
        function local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<void(Event_const&)>::function<SizeControl::Initialise()::__20, void>(local_58, this);
        AddButton("Expand", local_58);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_58);
        std::function<void(Event_const&)>::function<SizeControl::Initialise()::__21, void>(local_58, this);
        AddButton("Detach", local_58);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_58);
        std::function<void(Event_const&)>::function<SizeControl::Initialise()::__22, void>(local_58, this);
        AddButton("Zoom", local_58);
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100a4ced0, 160 bytes, placed by debug map only (low confidence)
    // SizeControl::Draw(int, int)
    void SizeControl::Draw(int param_1, int param_2) {
        int iVar1;
        int iVar2;
        MapArea* pMVar3;
        long lVar4;
        shared_ptr local_30;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (shared_ptr::operator_cast_to_bool(&local_30)) {
            pMVar3 = (MapArea*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_30);
            lVar4 = pMVar3->GetOrigin();
            iVar1 = *(int*)(lVar4 + 8);
            iVar2 = field_36;
            pMVar3 = (MapArea*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_30);
            lVar4 = pMVar3->GetOrigin();
            Draw((iVar1 - iVar2) + -2, *(int*)(lVar4 + 4) + 2);
        }
        local_30.~shared_ptr();
    }

    // 0x100a4cf70, 32 bytes, placed by debug map only (low confidence)
    // SizeControl::GetControlSize(int&, int&)
    void SizeControl::GetControlSize(int* param_1, int* param_2) {
        if (GetControlSize(param_1, param_2) != '\0') {
            *param_2 = 0;
        }
    }

    // 0x100a4cf90, 48 bytes, placed by debug map only (low confidence)
    // SizeControl::SetTweaky(weak_ptr<Tweaky>)
    void SizeControl::SetTweaky(weak_ptr* param_2) {
        weak_ptr<Tweaky>::operator=((weak_ptr<Tweaky>*)&field_104, param_2);
        Initialise(this);
    }

} // namespace jag::tweak

namespace jag {
    // 0x100a4cfe0, 96 bytes, inline, placed by debug map only (low confidence)
    // char const* ToText<16, true>(eastl::fixed_string<char, 16, true, eastl::allocator>&, float)
    char* ToText<16, true>(fixed_string* param_1, float param_2) {
        char* pcVar1;
        int iVar2;

        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, (double)param_2);
        pcVar1 = (char*)eastl::
            basic_string<char, eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true, eastl::allocator>>::operator[](
                (basic_string<char, eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true, eastl::allocator>>*)
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

// libs/tweaky/Tweaky_SizeControls.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.tweaky

#include "Tweaky_SizeControls.h"

namespace jag::tweak {
    // 0x100a4cdd0
    void SizeControl::Initialise() {
        function<void(Event const&)> local_58[56];
        long local_20;

        std::function<void(Event const&)>::function<SizeControl::Initialise()::__20, void>(local_58, (__20*)this);
        AddButton("Expand", *local_58);
        std::function<void(Event const&)>::function<SizeControl::Initialise()::__21, void>(local_58, (__21*)this);
        AddButton("Detach", *local_58);
        std::function<void(Event const&)>::function<SizeControl::Initialise()::__22, void>(local_58, (__22*)this);
        AddButton("Zoom", *local_58);
    }

    // 0x100a4ced0
    void SizeControl::Draw(int arg1, int arg2) {
        int iVar1;
        ShaderVariablePrecision SVar2;
        MapArea* pMVar4;
        long lVar5;

        shared_ptr local_30 = field_104.lock();
        if (shared_ptr::operator_cast_to_bool(&local_30) != '\0') {
            pMVar4 = (MapArea*)local_30.operator->();
            lVar5 = pMVar4->GetOrigin();
            iVar1 = *(int*)(lVar5 + 8);
            SVar2 = field_36;
            pMVar4 = (MapArea*)local_30.operator->();
            lVar5 = pMVar4->GetOrigin();
            Draw((iVar1 - SVar2) - 2, *(int*)(lVar5 + 4) + 2);
        }
    }

    // 0x100a4cf70
    void SizeControl::GetControlSize(int& arg1, int& arg2) {
        if (GetControlSize(arg1, arg2) != '\0') {
            arg2 = 0;
        }
    }

    // 0x100a4cf90
    void SizeControl::SetTweaky(weak_ptr<Tweaky> tweaky) {
        field_104 = *tweaky;
        Initialise();
    }

} // namespace jag::tweak

namespace jag {
    // 0x100a4cfe0
    char const* ToText<16, true>(eastl::fixed_string<char, 16>& str, float arg2) {
        str.sprintf("%f", (double)arg2);
        char* pcVar1 = &str[0];
        int iVar2 = str.size();
        iVar2 = TrimNumericZeros(pcVar1, iVar2);
        str.force_size((long)iVar2);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return pcVar1;
    }

} // namespace jag

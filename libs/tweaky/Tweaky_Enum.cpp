// libs/tweaky/Tweaky_Enum.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.tweaky

#include "Tweaky_Enum.h"

namespace jag::tweak {
    // 0x100a476e0, 272 bytes, base-object constructor, placed by class name and debug map
    // Enum::Enum(char const*, StringEnum const*, int*)
    void Enum::Enum(char* param_1, StringEnum* param_2, int* param_3) {
        allocator local_38[8];

        new (this) Control(0, 0, 4, param_1);
        field_0 = &PTR__Enum_100f1d3c8;
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&field_216, param_1, local_38) eastl::string();
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&field_248, "Default size", local_38) eastl::string();
        field_280 = param_2;
        field_288 = false;
        field_296 = param_3;
        field_304 = 0;
        field_308 = 12;
        field_312 = 12;
        field_316 = 0;
        field_320 = 0;
        field_324 = 0;
        if (param_3 != (int*)0) {
            field_304 = *param_3;
        }
        GetLargestName(this);
    }

    // 0x100a477f0, 304 bytes, placed by class name and debug map
    // Enum::GetLargestName()
    void Enum::GetLargestName() {
        undefined1* this_00;
        int iVar1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        long lVar2;
        char* pcVar3;
        ulong uVar4;
        long lVar6;
        eastl::string local_58[32];
        Enum* local_38;

        local_38 = this;
        this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_280->HeapBeginPtr();
        if (this_01 == (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pEnumEntries != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/Tweaky_Enum.cpp",
                      142, (char*)0);
        }
        eastl::string::basic_string(local_58);
        eastl::string::reserve(local_58, 64);
        iVar1 = local_38->field_280->GetPos();
        if (0 < iVar1) {
            this_00 = &local_38->field_248;
            lVar6 = 0;
            do {
                lVar2 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
                if (lVar2 != 0) {
                    pcVar3 =
                        (char*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
                    eastl::string::assign(local_58, pcVar3);
                    uVar4 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    if (eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() <
                        uVar4) {
                        eastl::string::operator=((eastl::string*)this_00, (basic_string*)local_58);
                    }
                }
                lVar6 = lVar6 + 1;
                iVar1 = local_38->field_280->GetPos();
                this_01 = this_01 + 16;
            } while (lVar6 < iVar1);
        }
        eastl::string::~basic_string(local_58);
    }

    // 0x100a47970, 16 bytes, complete-object constructor, placed by class name and debug map
    // Enum::Enum(char const*, StringEnum const*, int*): jumps straight to the base-object constructor

    // 0x100a47980, 640 bytes, placed by class name and debug map
    // Enum::Draw(int, int)
    void Enum::Draw(int param_1, int param_2) {
        int iVar1;
        int iVar2;
        shared_ptr sVar3;
        int iVar5;
        Tweaky* pTVar6;
        char* pcVar7;
        int* piVar8;
        undefined1 in_stack_ffffffffffffffac[12];
        shared_ptr<oldscape::dash3d::Decor> asStack_46[6];
        shared_ptr local_40;

        new (&local_40) oldscape::dash3d::GridRect(param_1, param_2, field_36 + param_1, field_40 + param_2);
        field_136 = local_40._0_4_;
        field_140 = local_40._4_4_;
        *(long*)&field_144 = local_40.field_8;
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (shared_ptr::operator_cast_to_bool(&local_40)) {
            field_316 = field_312 + param_1 + 3;
            field_320 = param_2;
            pTVar6 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            iVar5 = pTVar6->GetTextCenterYOffset(field_40);
            SetColour(4294967295, false);
            pTVar6 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            pTVar6->FillRect(param_1, param_2, field_312, field_40);
            pTVar6 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            pTVar6->FillRect(field_316, field_320, field_324, field_40);
            SetColour(1886417151, field_208);
            pTVar6 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            pTVar6->DrawRect(param_1, param_2, field_312, field_40, false);
            pTVar6 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            pTVar6->DrawRect(field_316, field_320, field_324, field_40, false);
            SetColour(255, false);
            pTVar6 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            piVar8 = &field_304;
            if (field_296 != (int*)0) {
                piVar8 = field_296;
            }
            pcVar7 = (char*)(field_280, *piVar8)->GetName();
            pTVar6->TextDraw(param_1, iVar5 + param_2, pcVar7, -1, -1, false);
            iVar1 = field_316;
            iVar2 = field_320;
            shared_ptr<oldscape::dash3d::Decor>::shared_ptr(asStack_46 + -10, &local_40);
            sVar3._4_12_ = in_stack_ffffffffffffffac;
            sVar3._0_4_ = 0;
            DrawScrollDirection(this, iVar1, iVar2, sVar3);
            ((asStack_46 + -10))->~shared_ptr();
            SetColour(3772834047, field_208);
            pTVar6 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            Tweaky::TextDraw<eastl::string>(pTVar6, field_312 + param_1 + field_324 + 5, iVar5 + param_2,
                                            (basic_string*)&field_216, -1, -1, false);
        }
        local_40.~shared_ptr();
    }

    // 0x100a47c60, 368 bytes, placed by class name and debug map
    // Enum::DrawScrollDirection(int, int, shared_ptr<Tweaky>)
    void Enum::DrawScrollDirection(int param_1, int param_2, shared_ptr param_3) {
        int iVar1;
        uint uVar2;
        int iVar3;
        int iVar4;
        Tweaky* pTVar5;
        int iVar6;
        shared_ptr<Tweaky>* in_RCX;
        int iVar7;
        int iVar8;

        if (field_296 != (int*)0) {
            uVar2 = field_40;
            iVar8 = (int)((uVar2 - ((int)(uVar2 - 4) >> 31)) + -4) >> 1;
            iVar3 = field_28 + param_2 + 2;
            iVar1 = (uVar2 - 2) + field_28 + param_2;
            iVar6 = iVar8 + 2 + param_1;
            SetColour(808464639, false);
            iVar7 = *field_296;
            iVar4 = field_280->GetPos();
            if (iVar7 < iVar4 + -1) {
                pTVar5 = (Tweaky*)shared_ptr<Tweaky>::operator->(in_RCX);
                pTVar5->DrawLine(param_1 + 2, iVar3, iVar6, iVar1, true);
                pTVar5 = (Tweaky*)shared_ptr<Tweaky>::operator->(in_RCX);
                pTVar5->DrawLine(iVar6, iVar1, iVar6 + iVar8, iVar3, true);
            }
            if (0 < *field_296) {
                iVar7 = iVar6 + iVar8 + iVar8 + 4;
                pTVar5 = (Tweaky*)shared_ptr<Tweaky>::operator->(in_RCX);
                pTVar5->DrawLine(iVar6 + iVar8 + 4, iVar1, iVar7, iVar3, true);
                pTVar5 = (Tweaky*)shared_ptr<Tweaky>::operator->(in_RCX);
                pTVar5->DrawLine(iVar7, iVar3, iVar8 + iVar7, iVar1, true);
            }
        }
    }

    // 0x100a47dd0, 368 bytes, placed by class name and debug map
    // Enum::GetControlSize(int&, int&)
    ulong Enum::GetControlSize(int* param_1, int* param_2) {
        int iVar1;
        bool bVar2;
        char cVar3;
        uint uVar4;
        Tweaky* pTVar5;
        ulong uVar6;
        int in_R9D;
        StringView SVar7;
        StringView SVar8;
        StringView local_68;
        StringView local_58;
        shared_ptr local_48;
        int local_34;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        bVar2 = shared_ptr::operator_cast_to_bool(&local_48);
        if (bVar2) {
            local_34 = 0;
            bVar2 = shared_ptr::operator_cast_to_bool(&local_48);
            if (bVar2) {
                pTVar5 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                    &local_68, (fixed_string*)&field_216);
                SVar7.field_8 = (uchar*)4294967295;
                SVar7.field_0 = (ulong)&local_68;
                cVar3 = pTVar5->GetTextSize(&field_308, &local_34, SVar7, in_R9D);
                if (cVar3 != '\0') {
                    pTVar5 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
                    StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                        &local_58, (fixed_string*)&field_248);
                    SVar8.field_8 = (uchar*)4294967295;
                    SVar8.field_0 = (ulong)&local_58;
                    cVar3 = pTVar5->GetTextSize(&field_312, &local_34, SVar8, in_R9D);
                    if (cVar3 != '\0') {
                        pTVar5 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
                        uVar4 = pTVar5->GetMinControlHeight();
                        field_40 = uVar4;
                        iVar1 = field_308;
                        field_308 = iVar1 + 5;
                        field_324 = uVar4 * 2;
                        field_36 = iVar1 + uVar4 * 2 + field_312 + 10;
                    }
                }
            }
            if ((0 < (int)field_36) && (0 < (int)field_40)) {
                *param_1 = field_36;
                *param_2 = field_40;
                uVar6 = CONCAT71((int7)((ulong)&local_48 >> 8), 1);
                goto LAB_100a47f05;
            }
        }
        uVar6 = 0;
    LAB_100a47f05:
        local_48.~shared_ptr();
        return uVar6 & 4294967295;
    }

    // 0x100a47f40, 256 bytes, placed by class name and debug map
    // Enum::OnClick(float, float, bool)
    undefined1 Enum::OnClick(float param_1, float param_2, bool param_3) {
        Tweaky* this_00;
        undefined7 in_register_00000031;
        enable_shared_from_this<PathingEntity> local_48[16];
        Event local_38;

        field_288 = param_3;
        if ((int)CONCAT71(in_register_00000031, param_3) == 0) {
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            if (local_38.operator_cast_to_bool()) {
                this_00 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_38);
                this_00->ClearFocus();
            }
            local_38.~shared_ptr();
        } else {
            Control::SetFocus();
            CheckScrollBoxBounds(this, param_1, param_2);
        }
        local_48->shared_from_this();
        new (&local_38) Event(local_48, 2);
        DoCallback(&local_38);
        local_38.~LRUHashCacheWrapper();
        local_48->~shared_ptr();
        return 1;
    }

    // 0x100a48040, 144 bytes, placed by class name and debug map
    // Enum::CheckScrollBoxBounds(float, float)
    void Enum::CheckScrollBoxBounds(float param_1, float param_2) {
        int iVar1;
        int iVar2;
        int iVar3;
        float fVar4;
        float fVar5;
        float fVar6;

        iVar2 = (int)field_324 / 2;
        iVar1 = iVar2 + field_316;
        fVar6 = (float)iVar1;
        fVar5 = (float)field_320;
        fVar4 = (float)(int)(field_40 + field_320);
        if ((((((float)field_316 < param_1) && (param_1 < fVar6)) && (fVar5 < param_2)) &&
             (iVar3 = -1, param_2 < fVar4)) ||
            (((fVar6 < param_1 && (param_1 < (float)(iVar1 + iVar2))) &&
              ((fVar5 < param_2 && (iVar3 = 1, param_2 < fVar4)))))) {
            ChangeValue(this, iVar3);
        }
    }

    // 0x100a480d0, 128 bytes, placed by class name and debug map
    // Enum::OnMouseOver(float, float)
    undefined8 Enum::OnMouseOver(float param_1, float param_2) {
        undefined8 uVar3;
        Tweaky* this_00;
        shared_ptr local_28;

        if (BoundsCheck(param_1, param_2) == '\0') {
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            if (shared_ptr::operator_cast_to_bool(&local_28)) {
                this_00 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_28);
                this_00->ClearFocus();
            }
            local_28.~shared_ptr();
            uVar3 = 0;
        } else {
            Control::SetFocus();
            uVar3 = 1;
        }
        return uVar3;
    }

    // 0x100a48150, 32 bytes, placed by class name and debug map
    // Enum::OnMouseWheel(float, float, float)
    undefined1 Enum::OnMouseWheel(float param_1, float param_2, float param_3) {
        ChangeValue(this, (int)param_3);
        return 1;
    }

    // 0x100a48170, 176 bytes, placed by class name and debug map
    // Enum::ChangeValue(int)
    void Enum::ChangeValue(int param_1) {
        int iVar1;
        int iVar2;
        Event local_48;
        enable_shared_from_this<PathingEntity> local_30[16];

        if ((field_296 != (int*)0) && (iVar2 = *field_296 - param_1, -1 < iVar2)) {
            iVar1 = field_280->GetPos();
            if (iVar2 < iVar1) {
                *field_296 = *field_296 - param_1;
                local_30->shared_from_this();
                new (&local_48) Event(local_30, 3);
                DoCallback(&local_48);
                local_48.~LRUHashCacheWrapper();
                local_30->~shared_ptr();
            }
        }
    }

    // 0x100a48220, 32 bytes, placed by class name and debug map
    // Enum::OnFocusChanged(bool)
    void Enum::OnFocusChanged(bool param_1) {
        undefined3 in_register_00000031;

        if (CONCAT31(in_register_00000031, param_1) == 0) {
            field_288 = false;
        }
    }

    // 0x100a48240, 144 bytes, placed by class name and debug map
    // Enum::ResetToDefault()
    void Enum::ResetToDefault() {
        int* piVar1;
        Event local_40;
        enable_shared_from_this<PathingEntity> local_28[16];

        piVar1 = field_296;
        if ((piVar1 != (int*)0) && (*piVar1 != field_304)) {
            *piVar1 = field_304;
            local_28->shared_from_this();
            new (&local_40) Event(local_28, 3);
            DoCallback(&local_40);
            local_40.~LRUHashCacheWrapper();
            local_28->~shared_ptr();
        }
    }

    // 0x100a482d0, 96 bytes, placed by class name and debug map
    // Enum::SaveSettings(TweakSettingsValue&)
    void Enum::SaveSettings(TweakSettingsValue* param_1) {
        jag local_38[32];

        ToString<eastl::string, int>(local_38, field_296, 10);
        eastl::string::operator=((eastl::string*)param_1, (basic_string*)local_38);
        local_38->~basic_string();
    }

    // 0x100a48330, 160 bytes, placed by class name and debug map
    // Enum::LoadSettings(TweakSettingsValue const&)
    undefined4 Enum::LoadSettings(TweakSettingsValue* param_1) {
        int* piVar1;
        int iVar2;
        Event local_40;
        enable_shared_from_this<PathingEntity> local_28[16];

        iVar2 = eastl::stoi<eastl::string>((basic_string*)param_1, 10);
        piVar1 = field_296;
        if ((piVar1 != (int*)0) && (*piVar1 != iVar2)) {
            *piVar1 = iVar2;
            local_28->shared_from_this();
            new (&local_40) Event(local_28, 3);
            DoCallback(&local_40);
            local_40.~LRUHashCacheWrapper();
            local_28->~shared_ptr();
        }
        return 1;
    }

} // namespace jag::tweak

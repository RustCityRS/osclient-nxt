// libs/oldscape/jagex3/js5/Js5Key.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "Js5Key.h"

namespace jag::oldscape::jagex3 {
    // 0x1002b71b0, 208 bytes, placed by class name and debug map
    // Js5Key::ReadInt()
    uint Js5Key::ReadInt() {
        undefined1* this_00;
        undefined1* this_01;
        byte bVar1;
        byte bVar2;
        byte bVar3;
        long lVar4;
        uint uVar5;
        long lVar6;
        byte* pbVar7;

        lVar4 = field_40;
        this_00 = field_48;
        lVar6 = this_00->length(0);
        uVar5 = 4294967295;
        if (lVar4 + 4 < lVar6) {
            this_00->seek(field_40, 0, (Error*)0);
            this_01 = &field_360;
            this_00->read(this_01, 4, 0, field_32);
            field_40 = field_40 + 4;
            pbVar7 = (byte*)eastl::vector<unsigned char, eastl::allocator>::operator[](
                (vector<unsigned char, eastl::allocator>*)this_01, 0);
            bVar1 = *pbVar7;
            pbVar7 = (byte*)eastl::vector<unsigned char, eastl::allocator>::operator[](
                (vector<unsigned char, eastl::allocator>*)this_01, 1);
            bVar2 = *pbVar7;
            pbVar7 = (byte*)eastl::vector<unsigned char, eastl::allocator>::operator[](
                (vector<unsigned char, eastl::allocator>*)this_01, 2);
            bVar3 = *pbVar7;
            pbVar7 = (byte*)eastl::vector<unsigned char, eastl::allocator>::operator[](
                (vector<unsigned char, eastl::allocator>*)this_01, 3);
            uVar5 = (uint)*pbVar7 | (uint)bVar3 << 8 | (uint)bVar2 << 16 | (uint)bVar1 << 24;
        }
        return uVar5;
    }

    // 0x1002b7280, 688 bytes, base-object constructor, placed by class name
    // Js5Key::Js5Key(eastl::basic_string<char, BucketAllocatorEASTL> const&)
    void Js5Key::Js5Key(basic_string* param_1) {
        undefined1* this_00;
        int iVar2;
        int iVar3;
        undefined4 uVar4;
        undefined8 uVar5;
        array<int, 4ul>* paVar6;
        undefined4* puVar7;
        ulong uVar8;
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (this) eastl::vector<std::array<int, 4ul>, eastl::allocator>();
        this_00 = field_32;
        new (this_00) callstack::Callstack();
        field_40 = 0;
        Filename::Filename(local_168, param_1);
        new (field_48, local_168, 0, (Error*)this_00) File();
        local_168->~pair();
        new (local_168) eastl::allocator("EASTL vector");
        new (&field_360, 4, (allocator*)local_168) eastl::vector<unsigned char, eastl::allocator>();
        if (this_00->IsValid() != '\0') {
            local_168->GetErrorString();
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            LogAndAbort(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/Js5Key.cpp",
                37, "Error while reading Js5Key: %s", uVar5);
            local_168->~basic_string();
        }
        iVar3 = 0;
        do {
            iVar2 = ReadInt(this);
            if (iVar2 != -1) {
                ReadInt(this);
                ReadInt(this);
                ReadInt(this);
                ReadInt(this);
                if (iVar3 < iVar2) {
                    iVar3 = iVar2;
                }
            }
        } while (iVar2 != -1);
        field_40 = 0;
        eastl::vector<std::array<int, 4ul>, eastl::allocator>::resize((ulong)this);
        while (iVar3 = ReadInt(this), iVar3 != -1) {
            uVar4 = ReadInt(this);
            uVar8 = (ulong)iVar3;
            paVar6 = (array<int, 4ul>*)eastl::vector<std::array<int, 4ul>, eastl::allocator>::operator[](
                (vector<std::array<int, 4ul>, eastl::allocator>*)this, uVar8);
            puVar7 = (undefined4*)std::array<int, 4ul>::operator[](paVar6, 0);
            *puVar7 = uVar4;
            uVar4 = ReadInt(this);
            paVar6 = (array<int, 4ul>*)eastl::vector<std::array<int, 4ul>, eastl::allocator>::operator[](
                (vector<std::array<int, 4ul>, eastl::allocator>*)this, uVar8);
            puVar7 = (undefined4*)std::array<int, 4ul>::operator[](paVar6, 1);
            *puVar7 = uVar4;
            uVar4 = ReadInt(this);
            paVar6 = (array<int, 4ul>*)eastl::vector<std::array<int, 4ul>, eastl::allocator>::operator[](
                (vector<std::array<int, 4ul>, eastl::allocator>*)this, uVar8);
            puVar7 = (undefined4*)std::array<int, 4ul>::operator[](paVar6, 2);
            *puVar7 = uVar4;
            uVar4 = ReadInt(this);
            paVar6 = (array<int, 4ul>*)eastl::vector<std::array<int, 4ul>, eastl::allocator>::operator[](
                (vector<std::array<int, 4ul>, eastl::allocator>*)this, uVar8);
            puVar7 = (undefined4*)std::array<int, 4ul>::operator[](paVar6, 3);
            *puVar7 = uVar4;
        }
        (field_48, (Error*)0)->close();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1002b75f0, 16 bytes, complete-object constructor, placed by class name
    // Js5Key::Js5Key(eastl::basic_string<char, BucketAllocatorEASTL> const&): jumps straight to the base-object constructor

    // 0x1002b7600, 112 bytes, placed by class name
    // Js5Key::GetKey(int)
    undefined1* Js5Key::GetKey(int param_1) {
        int iVar1;
        undefined1* puVar2;

        if (param_1 < 0) {
        LAB_1002b7632:
            /* WARNING: Subroutine does not return */
            LogAssert(
                "groupid >= 0 && groupid < (int)m_keys.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/Js5Key.cpp",
                94, "TinyKey not found for %i", param_1);
        }
        iVar1 = size();
        if (param_1 < iVar1) {
            puVar2 = (undefined1*)eastl::vector<std::array<int, 4ul>, eastl::allocator>::operator[](
                (vector<std::array<int, 4ul>, eastl::allocator>*)this, (long)param_1);
        } else {
            iVar1 = size();
            if (iVar1 <= param_1)
                goto LAB_1002b7632;
            puVar2 = &GetKey(int)::dummyResult;
        }
        return puVar2;
    }

} // namespace jag::oldscape::jagex3

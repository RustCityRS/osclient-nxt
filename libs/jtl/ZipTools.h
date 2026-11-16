// libs/jtl/ZipTools.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag {
    // 0x1001db4a0, 464 bytes, placed by debug map only (low confidence)
    // bool ZipInflate<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> >, eastl::vector<unsigned char, BucketAllocatorEASTL> >(std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> >&, eastl::vector<unsigned char, BucketAllocatorEASTL> const&)
    /* bool ZipInflate<std::basic_string<char, std::char_traits<char>,
   BucketAllocatorSTL<char> >, eastl::vector<unsigned char, BucketAllocatorEASTL>
   >(std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> >&,
   eastl::vector<unsigned char, BucketAllocatorEASTL> const&) */

    bool jag::ZipInflate<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>,
                         eastl::vector<unsigned char, BucketAllocatorEASTL>>(basic_string* param_1, vector* param_2) {
        uInt uVar1;
        int iVar2;
        Bytef* pBVar3;
        long lVar4;
        undefined8 uVar5;
        char* pcVar6;
        uint uVar7;
        bool bVar8;
        z_stream local_10b8;
        undefined8 local_1048;
        undefined8 local_1040;
        array<unsigned char, 4096ul> local_1038[4096];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_10b8.adler = 0;
        local_10b8.reserved = 0;
        local_10b8.opaque = (voidpf)0;
        local_10b8.data_type = 0;
        local_10b8._92_4_ = 0;
        local_10b8.zalloc = (alloc_func)0;
        local_10b8.zfree = (free_func)0;
        local_10b8.msg = (char*)0;
        local_10b8.state = (internal_state*)0;
        local_10b8.avail_out = 0;
        local_10b8._36_4_ = 0;
        local_10b8.total_out = 0;
        local_10b8.total_in = 0;
        local_10b8.next_out = (Bytef*)0;
        local_10b8.next_in = (Bytef*)0;
        local_10b8.avail_in = 0;
        local_10b8._12_4_ = 0;
        local_10b8.next_in = (Bytef*)param_2->HeapBeginPtr();
        uVar1 = param_2->size();
        local_10b8.avail_in = uVar1;
        bVar8 = false;
        iVar2 = _inflateInit2_(&local_10b8, 0, "1.2.11", 112);
        if (iVar2 == 0) {
            pBVar3 = (Bytef*)std::array<unsigned char, 4096ul>::data(local_1038);
            do {
                local_10b8.avail_out = 4096;
                local_10b8.next_out = pBVar3;
                iVar2 = _inflate(&local_10b8, 0);
                if ((iVar2 + 4U < 7) && ((67U >> (iVar2 + 4U & 31) & 1) != 0))
                    break;
                uVar7 = 4096 - local_10b8.avail_out;
                local_1040 = param_1->end();
                std::__wrap_iter<char const*>::__wrap_iter<char*>((__wrap_iter*)&local_1048, (type*)&local_1040);
                lVar4 = std::array<unsigned char, 4096ul>::begin(local_1038);
                std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::insert<unsigned char*>(
                    (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)param_1, local_1048, lVar4,
                    (ulong)uVar7 + lVar4);
            } while (iVar2 != 1);
            bVar8 = iVar2 == 1;
            if (!bVar8) {
                uVar5 = logger::default_logger();
                pcVar6 = "(no message)";
                if (local_10b8.msg != (char*)0) {
                    pcVar6 = local_10b8.msg;
                }
                logger::Logger::Log(
                    uVar5, 0, 2, "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ZipTools.h",
                    46, "inflate error %d: %s", iVar2, pcVar6);
            }
            _inflateEnd(&local_10b8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return bVar8;
    }

} // namespace jag

// libs/jtl/ZipTools.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag {
    // 0x1001db4a0
    bool ZipInflate<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>,
                    eastl::vector<unsigned char, BucketAllocatorEASTL>>(
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>& str,
        const eastl::vector<unsigned char, BucketAllocatorEASTL>& arg2) {
        unsigned int uVar3;
        Bytef* pBVar4;
        unsigned char* arg2_00;
        Logger* logger;
        char* pcVar5;
        unsigned int uVar6;
        uint8_t auVar8[16];
        z_stream local_10b8;
        __wrap_iter<char const*>* local_1048;
        uint64_t local_1040;
        array<unsigned char, 4096ul> local_1038;

        local_10b8.adler = 0;
        local_10b8.reserved = 0;
        local_10b8.opaque = (voidpf)0;
        local_10b8.data_type = 0;
        local_10b8._92_4_ = 0;
        local_10b8.zalloc = (alloc_func)0;
        local_10b8.zfree = (free_func)0;
        local_10b8.msg = nullptr;
        local_10b8.state = nullptr;
        local_10b8.avail_out = 0;
        local_10b8._36_4_ = 0;
        local_10b8.total_out = 0;
        local_10b8.total_in = 0;
        local_10b8.next_out = nullptr;
        local_10b8.next_in = nullptr;
        local_10b8.avail_in = 0;
        local_10b8._12_4_ = 0;
        local_10b8.next_in = (Bytef*)arg2.HeapBeginPtr();
        local_10b8.avail_in = arg2.size();
        bool bVar7 = false;
        if (_inflateInit2_(&local_10b8, 0, "1.2.11", 112) == 0) {
            pBVar4 = (Bytef*)local_1038.data();
            do {
                local_10b8.avail_out = 4096;
                local_10b8.next_out = pBVar4;
                uVar3 = _inflate(&local_10b8, 0);
                if ((uVar3 + 4 < 7) && ((67U >> (uVar3 + 4 & 31) & 1) != 0))
                    break;
                uVar6 = 4096 - local_10b8.avail_out;
                auVar8 = str.end();
                local_1040 = auVar8._0_8_;
                local_1048.__wrap_iter<char*>(local_1040, auVar8._8_8_);
                arg2_00 = (unsigned char*)std::array<unsigned char, 4096ul>::begin();
                str.insert<unsigned char*>(local_1048, arg2_00, arg2_00 + uVar6);
            } while (uVar3 != 1);
            bVar7 = uVar3 == 1;
            if (!bVar7) {
                logger = logger::default_logger();
                pcVar5 = "(no message)";
                if (local_10b8.msg != nullptr) {
                    pcVar5 = local_10b8.msg;
                }
                logger->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/ZipTools.h", 46,
                            "inflate error %d: %s", (unsigned long)uVar3, pcVar5);
            }
            _inflateEnd(&local_10b8);
        }
        return bVar7;
    }

} // namespace jag

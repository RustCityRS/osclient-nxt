// libs/oldscape/jagex3/javapal/DirectoryLocator.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::javapal {
    class DirectoryLocator {
    public:
        // virtual methods in vtable order
        virtual GetCacheLocation(eastl::string const&, eastl::string const&, int);
        virtual GetHomeDirectory();
        virtual GetUIDLocation(int);
        uint CheckWritable(Filename const&, bool);
        GetCacheDirectory(eastl::string const&, eastl::string const&, int, int);
        void SetupHistoricDirectories(int);
        void ReadCacheLocatorFile(Filename const&);
        bool SearchHistoricDirectories(eastl::string const&);
        void TransferOldCache(Filename const&, Filename const&);
        void WriteCacheLocator(Filename const&, Filename const&);

        // data members, from how the methods use this: 408 bytes
        long field_0;     // offset 0, vtable pointer
        Filename field_8; // offset 8
        char _unknown_24[384];
    };

    // 0x1002b0cb0, 208 bytes, placed by class name and debug map
    // DirectoryLocator::CheckWritable(Filename const&, bool)
    uint DirectoryLocator::CheckWritable(Filename* param_1, bool param_2) {
        uint uVar1;
        undefined1 local_168[320];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (local_168) callstack::Callstack();
        new ((local_168 + 8)) File(param_1, 1538, local_168);
        uVar1 = local_168->IsValid();
        if ((char)uVar1 == '\0') {
            ((local_168 + 8))->close(0);
            if (param_2) {
                param_1->Remove(0);
            }
        }
        ((local_168 + 8))->~File();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar1 ^ 1;
    }

    // 0x1002b0d80, 752 bytes, placed by class name and debug map
    // DirectoryLocator::GetCacheLocation(eastl::string const&, eastl::string const&, int)
    DirectoryLocator* DirectoryLocator::GetCacheLocation(basic_string* param_1, basic_string* param_2, int param_3) {
        bool bVar1;
        char cVar2;
        bool bVar3;
        char cVar4;
        int iVar5;
        FileListContents* pFVar6;
        undefined4 in_register_0000000c;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        list<filesystem::FileListContents, eastl::allocator> local_450[32];
        list<console::Line, eastl::allocator> local_430[8];
        list<console::Line, eastl::allocator> local_428[8];
        undefined8 local_420;
        uint local_3fc;
        undefined1 local_3f8[16];
        ClientCompositeZone local_3e8[13];
        undefined1 local_2b0[632];
        long local_38;

        local_420 = CONCAT44(in_register_0000000c, param_3);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        (**(code**)(*(long*)param_1 + 8))(
            (pair<eastl::fixed_string<char, 16, true, eastl::allocator>, unsigned int>*)(local_2b0 + 328));
        ((local_2b0 + 328))->~pair();
        new (this) Filename();
        local_3fc = 0;
        local_3f8._8_8_ = this;
        do {
            GetCacheDirectory((DirectoryLocator*)local_2b0, param_1, param_2, (int)local_420, local_3fc);
            Filename::operator=((Filename*)this, (Filename*)local_2b0);
            local_2b0->~pair();
            cVar2 = Exists();
            if ((cVar2 != '\0') || (cVar2 = CreateDirectories(0), cVar2 != '\0')) {
                eastl::list<filesystem::FileListContents, eastl::allocator>::list(local_450);
                iVar5 = FileSystem::GetFileList((Filename*)this, (list*)local_450, false, (Filename*)0);
                if (iVar5 < 1) {
                LAB_1002b0fb0:
                    iVar5 = 2;
                } else {
                    new (local_3f8) callstack::Callstack();
                    eastl::list<console::Line, eastl::allocator>::begin(local_430);
                    eastl::list<console::Line, eastl::allocator>::end(local_428);
                    bVar3 = eastl::operator!=((eastl*)local_430, (hashtable_iterator_base*)local_428, extraout_RDX);
                    bVar1 = true;
                    if (bVar3) {
                        bVar1 = true;
                        do {
                            pFVar6 = (FileListContents*)
                                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_430);
                            new (local_2b0) filesystem::FileListContents(pFVar6);
                            new (local_3e8) File(local_2b0, 2, local_3f8);
                            cVar2 = local_3f8->IsValid();
                            cVar4 = '\0';
                            bVar3 = false;
                            if (cVar2 == '\0') {
                                cVar4 = local_3e8->IsValid();
                                bVar3 = bVar1;
                                if (cVar4 == '\0') {
                                    bVar3 = false;
                                }
                            }
                            bVar1 = bVar3;
                            local_3e8->~File();
                            local_2b0->~__alt();
                            if (cVar4 == '\0')
                                break;
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)local_430);
                            bVar3 = eastl::operator!=((eastl*)local_430, (hashtable_iterator_base*)local_428,
                                                      extraout_RDX_00);
                        } while (bVar3);
                    }
                    if (bVar1)
                        goto LAB_1002b0fb0;
                    iVar5 = 4;
                }
                eastl::list<filesystem::FileListContents, eastl::allocator>::~list(local_450);
                this = (DirectoryLocator*)local_3f8._8_8_;
                if (iVar5 != 4) {
                LAB_1002b0fea:
                    if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                        /* WARNING: Subroutine does not return */
                        ___stack_chk_fail();
                    }
                    return this;
                }
            }
            if (2 < local_3fc)
                goto LAB_1002b0fea;
            local_3fc = local_3fc + 1;
        } while (true);
    }

    // 0x1002b1070, 1008 bytes, placed by class name and debug map
    // DirectoryLocator::GetCacheDirectory(eastl::string const&, eastl::string const&, int, int)
    DirectoryLocator* DirectoryLocator::GetCacheDirectory(basic_string* param_1, basic_string* param_2, int param_3,
                                                          int param_4) {
        char cVar1;
        char cVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        char* pcVar6;
        undefined4 in_register_0000000c;
        DirectoryLocator* pDVar7;
        int in_R9D;
        DirectoryLocator* pDVar8;
        fixed_string local_578[32];
        fixed_string local_558[32];
        eastl::string local_538[32];
        Filename* local_518;
        int local_504;
        Filename local_4f8[19];
        Filename local_3c8[19];
        undefined1 local_298[304];
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_518 = (Filename*)(param_1 + 8);
        local_504 = in_R9D;
        cVar1 = local_518->IsEmpty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_homeDirectory.IsEmpty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/javapal/"
                      "DirectoryLocator.cpp",
                      148, (char*)0);
        }
        eastl::string::basic_string(local_538);
        if (param_4 != 0) {
            eastl::string::append_sprintf((char*)local_538, "%d", param_4);
        }
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string::basic_string(local_578, "jagex_cl_%s_%s%s.dat", uVar3, uVar4, uVar5);
        Filename::operator/((Filename*)(local_298 + 304), local_518, local_578);
        cVar1 = ((local_298 + 304))->Exists();
        if (cVar1 != '\0') {
            ReadCacheLocatorFile((DirectoryLocator*)param_1, (Filename*)(local_298 + 304));
        }
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        cVar2 = '\0';
        if ((cVar1 != '\0') && (param_4 == 0)) {
            SetupHistoricDirectories((DirectoryLocator*)param_1, local_504);
            cVar2 = SearchHistoricDirectories(param_1);
        }
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 != '\0') {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "javapal/DirectoryLocator.cpp",
                                179, "Cache: No previous cache found, using default.");
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::string::basic_string(local_558, "jagexcache%s", uVar3);
            Filename::operator/(local_4f8, local_518, local_558);
            Filename::operator/(local_3c8, local_4f8, (fixed_string*)param_2);
            Filename::operator/((Filename*)local_298, local_3c8,
                                (fixed_string*)CONCAT44(in_register_0000000c, param_3));
            pcVar6 = local_298->operator_cast_to_char_();
            ((param_1 + 312))->assign(pcVar6);
            local_298->~pair();
            local_3c8->~pair();
            local_4f8->~pair();
            local_558->~basic_string();
            cVar2 = '\x01';
        }
        new ((DirectoryLocator*)this) Filename(param_1 + 312);
        pDVar7 = (DirectoryLocator*)(param_1 + 344);
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            pDVar7 = (DirectoryLocator*)local_298;
            new (pDVar7) Filename(param_1 + 344);
            pDVar8 = (DirectoryLocator*)this;
            TransferOldCache(pDVar7, (Filename*)local_298, (Filename*)(DirectoryLocator*)this);
            pDVar7 = (DirectoryLocator*)local_298;
            pDVar7->~pair();
        } else {
            pDVar8 = (DirectoryLocator*)this;
            if (cVar2 == '\0')
                goto LAB_1002b132f;
        }
        WriteCacheLocator(pDVar7, (Filename*)(local_298 + 304), (Filename*)pDVar8);
    LAB_1002b132f:
        uVar3 = logger::default_logger();
        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(uVar3, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "javapal/DirectoryLocator.cpp",
                            201, "Cache: Using cache at: %s", uVar4);
        ((local_298 + 304))->~pair();
        local_578->~basic_string();
        eastl::string::~basic_string(local_538);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return pDVar8;
    }

    // 0x1002b14a0, 384 bytes, placed by class name
    // DirectoryLocator::GetHomeDirectory()
    /* WARNING: Removing unreachable block (ram,4297790824) */
    /* DirectoryLocator::GetHomeDirectory() */

    DirectoryLocator* DirectoryLocator::GetHomeDirectory() {
        char cVar1;
        Filename* pFVar2;
        long in_RSI;
        Filename* this_00;
        Filename local_3c8[19];
        Filename local_298[19];
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (Filename*)(in_RSI + 8);
        pFVar2 = this_00;
        cVar1 = this_00->IsEmpty();
        if (cVar1 == '\0') {
            new (this) Filename(this_00);
        } else {
            pFVar2 = (Filename*)pFVar2->GetUserFolder();
            Filename::Filename(local_168, pFVar2);
            while (pFVar2 = local_168, cVar1 = local_168->IsEmpty(), cVar1 == '\0') {
                Filename::operator/(local_298, (char*)local_168);
                cVar1 = local_298->Exists();
                if (cVar1 != '\0') {
                    pFVar2 = local_298;
                    pFVar2->~pair();
                    break;
                }
                local_3c8->GetParentPath();
                Filename::operator=(local_168, local_3c8);
                local_3c8->~pair();
                local_298->~pair();
            }
            pFVar2 = (Filename*)pFVar2->GetUserFolder();
            Filename::operator=(this_00, pFVar2);
            new (this) Filename(this_00);
            local_168->~pair();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x1002b1620, 784 bytes, placed by class name
    // DirectoryLocator::GetUIDLocation(int)
    DirectoryLocator* DirectoryLocator::GetUIDLocation(int param_1) {
        undefined1* this_00;
        char cVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        long lVar4;
        ulong uVar5;
        Filename* this_01;
        fixed_string* pfVar6;
        ulong uVar7;
        int iVar8;
        int in_EDX;
        undefined4 in_register_00000034;
        DirectoryLocator* this_02;
        uint uVar9;
        undefined1* this_03;
        bool bVar10;
        ulong local_3d8;
        Filename local_3c8[19];
        Filename local_298[19];
        pair<eastl::fixed_string<char, 16, true, eastl::allocator>, unsigned int> local_168[304];
        long local_38;

        this_02 = (DirectoryLocator*)CONCAT44(in_register_00000034, param_1);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        (**(code**)(this_02->field_0 + 8))(local_168);
        eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, unsigned int>::~pair(local_168);
        SetupHistoricDirectories(this_02, in_EDX);
        Filename::operator/(local_298, this_02->field_8);
        cVar1 = local_298->Exists();
        if (cVar1 == '\0') {
            this_00 = &this_02->field_400;
            lVar4 = this_00->end();
            if (lVar4 != 0) {
                this_03 = &this_02->field_376;
                local_3d8 = 0;
                do {
                    lVar4 = this_03->end();
                    iVar8 = 5;
                    bVar10 = lVar4 != 0;
                    if (bVar10) {
                        uVar9 = 1;
                        uVar7 = 0;
                        do {
                            this_01 = (Filename*)Array<Filename, eastl::allocator>::operator[](
                                (Array<Filename, eastl::allocator>*)this_03, uVar7);
                            pfVar6 = (fixed_string*)Array<eastl::string, eastl::allocator>::operator[](
                                (Array<eastl::string, eastl::allocator>*)this_00, local_3d8);
                            Filename::operator/(local_3c8, this_01, pfVar6);
                            Filename::operator/((Filename*)this, (char*)local_3c8);
                            local_3c8->~pair();
                            cVar1 = Exists();
                            if (cVar1 != '\0') {
                                uVar2 = logger::default_logger();
                                uVar3 = GetName();
                                logger::Logger::Log(uVar2, 0, 7,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/oldscape/jagex3/javapal/DirectoryLocator.cpp",
                                                    136, "UID: Opening UID in historic directory: %s", uVar3);
                                if (cVar1 != '\0') {
                                    iVar8 = 1;
                                    goto LAB_1002b185f;
                                }
                            }
                            ~pair();
                            uVar7 = (ulong)uVar9;
                            uVar5 = this_03->end();
                            uVar9 = uVar9 + 1;
                            bVar10 = uVar7 < uVar5;
                        } while (uVar7 < uVar5);
                        iVar8 = 5;
                    }
                LAB_1002b185f:
                    if (bVar10)
                        goto LAB_1002b1892;
                    local_3d8 = (ulong)((int)local_3d8 + 1);
                    uVar7 = this_00->end();
                } while (local_3d8 < uVar7);
                iVar8 = 2;
            LAB_1002b1892:
                if (iVar8 != 2)
                    goto LAB_1002b18b2;
            }
            new (this) Filename(local_298);
        } else {
            uVar2 = logger::default_logger();
            uVar3 = local_298->GetName();
            logger::Logger::Log(uVar2, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "javapal/DirectoryLocator.cpp",
                                124, "UID: Found UID in user\'s home directory: %s", uVar3);
            new (this) Filename(local_298);
        }
    LAB_1002b18b2:
        local_298->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x1002b1930, 1056 bytes, placed by class name
    // DirectoryLocator::SetupHistoricDirectories(int)
    void DirectoryLocator::SetupHistoricDirectories(int param_1) {
        char* pcVar1;
        long lVar2;
        Array<eastl::string, eastl::allocator> local_b60[24];
        Filename* local_b48;
        undefined8 local_b40;
        Filename* local_b38;
        undefined8 local_b30;
        Array<Filename, eastl::allocator> local_b18[32];
        allocator local_af8[8];
        allocator local_af0[8];
        Filename local_ae8[2];
        eastl::string local_ac8[272];
        Filename local_9b8[19];
        Filename local_888[19];
        Filename local_758[19];
        Filename local_628[19];
        Filename local_4f8[19];
        Filename local_3c8[19];
        Filename local_298[19];
        pair<eastl::fixed_string<char, 16, true, eastl::allocator>, unsigned int> local_168[304];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        (**(code**)(field_0 + 8))(local_168, this);
        eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, unsigned int>::~pair(local_168);
        Filename::Filename(local_ae8, "c:/rscache/");
        Filename::Filename(local_9b8, "/rscache/");
        Filename::Filename(local_888, "c:/windows/");
        Filename::Filename(local_758, "c:/winnt/");
        Filename::Filename(local_628, "c:/");
        pcVar1 = (char*)field_8->GetName();
        Filename::Filename(local_4f8, pcVar1);
        Filename::Filename(local_3c8, "/tmp/");
        Filename::Filename(local_298, "");
        local_b38 = local_ae8;
        local_b30 = 8;
        Array<Filename, eastl::allocator>::Array(local_b18, (initializer_list*)&local_b38);
        Array<Filename, eastl::allocator>::operator=((Array<Filename, eastl::allocator>*)&field_376, (Array*)local_b18);
        local_b18->~Array();
        lVar2 = 2128;
        do {
            ((&local_ae8[0].field_0 + lVar2))->~pair();
            lVar2 = lVar2 + -304;
        } while (lVar2 != -304);
        eastl::string::basic_string(local_b18, ".jagex_cache_%d", param_1);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::allocator::allocator(local_af8, "EASTL basic_string");
        new (local_ae8) eastl::string(pcVar1, local_af8);
        new (&local_b38) eastl::string(".file_store_%d", param_1);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::allocator::allocator(local_af0, "EASTL basic_string");
        eastl::string::basic_string(local_ac8, pcVar1, local_af0);
        local_b40 = 2;
        local_b48 = local_ae8;
        Array<eastl::string, eastl::allocator>::Array(local_b60, (initializer_list*)&local_b48);
        Array<eastl::string, eastl::allocator>::operator=((Array<eastl::string, eastl::allocator>*)&field_400,
                                                          (Array*)local_b60);
        local_b60->~Array();
        lVar2 = 32;
        do {
            ((&local_ae8[0].field_0 + lVar2))->~basic_string();
            lVar2 = lVar2 + -32;
        } while (lVar2 != -32);
        local_b38.~basic_string();
        local_b18->~basic_string();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1002b1dd0, 1296 bytes, placed by class name
    // DirectoryLocator::ReadCacheLocatorFile(Filename const&)
    void DirectoryLocator::ReadCacheLocatorFile(Filename* param_1) {
        undefined1* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        basic_string* this_02;
        char cVar1;
        byte bVar2;
        byte bVar3;
        int iVar4;
        uint uVar5;
        ulong uVar6;
        ulong uVar7;
        uchar* puVar8;
        long lVar9;
        long lVar10;
        undefined8 uVar11;
        undefined8 uVar12;
        undefined8 uVar13;
        undefined8 in_stack_fffffffffffffd10;
        undefined4 uVar14;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_2e0[32];
        DirectoryLocator* local_2c0;
        Filename* local_2b8;
        basic_string* local_2b0;
        undefined1 local_2a8[8];
        WindowSavedPosition local_2a0[9];
        File local_170[13];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = &field_312;
        local_2c0 = this;
        this_00->assign("");
        new (local_2a8) callstack::Callstack();
        local_2b8 = param_1;
        File::File(local_170, param_1, 0, (Error*)local_2a8);
        cVar1 = local_2a8->IsValid();
        local_2b0 = (basic_string*)this_00;
        if (cVar1 == '\0') {
            uVar6 = local_170->length(0);
            ((local_2a8 + 8))->PacketT(uVar6);
            this_01 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)(local_2a8 + 8);
            while (true) {
                uVar7 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::size(this_01);
                uVar14 = (undefined4)((ulong)in_stack_fffffffffffffd10 >> 32);
                if (uVar6 <= uVar7)
                    break;
                puVar8 = (uchar*)this_01->GetDataPtr();
                iVar4 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::size(this_01);
                uVar5 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::size(this_01);
                lVar9 = local_170->read(puVar8, (int)uVar6 - iVar4, uVar5, local_2a8);
                cVar1 = local_2a8->IsValid();
                uVar14 = (undefined4)((ulong)in_stack_fffffffffffffd10 >> 32);
                if (cVar1 != '\0')
                    break;
                lVar10 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                          eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                          eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                          eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                          true>::size(this_01);
                this_01->SetPos(lVar9 + lVar10);
            }
            cVar1 = local_2a8->IsValid();
            if (cVar1 == '\0') {
                ((local_2a8 + 8))->SetPos(0);
                bVar2 = ((local_2a8 + 8))->g1();
                if ((byte)(bVar2 - 1) < 3) {
                    uVar5 = 0;
                    if (1 < bVar2) {
                        bVar3 = ((local_2a8 + 8))->g1();
                        uVar5 = (uint)bVar3;
                    }
                    if (bVar2 < 3) {
                        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                            eastl::string>(local_2e0, (bool)((char)local_2a8 + '\b'));
                        eastl::string::operator=((eastl::string*)local_2b0, (basic_string*)local_2e0);
                        local_2e0->~basic_string();
                        if (uVar5 == 1) {
                            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                                eastl::string>(local_2e0, (bool)((char)local_2a8 + '\b'));
                            eastl::string::operator=((eastl::string*)&local_2c0->field_344, (basic_string*)local_2e0);
                            local_2e0->~basic_string();
                        }
                    } else {
                        cVar1 = Packet_gUTF8(local_2b0, (PacketJ*)(local_2a8 + 8));
                        if ((cVar1 == '\0') ||
                            ((uVar5 == 1 &&
                              (cVar1 = Packet_gUTF8(local_2b0, (PacketJ*)(local_2a8 + 8)), cVar1 == '\0'))))
                            goto LAB_1002b1f37;
                    }
                    local_170->close(0);
                    uVar11 = logger::default_logger();
                    uVar12 = local_2b8->GetName();
                    logger::Logger::Log(uVar11, 0, 7,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "oldscape/jagex3/javapal/DirectoryLocator.cpp",
                                        297, "Cache: Read cache locator file from: %s, state: %d ", uVar12,
                                        CONCAT44(uVar14, uVar5));
                    ((local_2a8 + 8))->~WindowSavedPosition();
                    local_170->~File();
                    goto LAB_1002b1fbe;
                }
            }
        LAB_1002b1f37:
            ((local_2a8 + 8))->~WindowSavedPosition();
        }
        local_170->~File();
        uVar11 = logger::default_logger();
        uVar12 = local_2b8->GetName();
        local_170->GetErrorString();
        uVar13 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(uVar11, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "javapal/DirectoryLocator.cpp",
                            302, "Cache: Error opening cache locator file (%s): %s", uVar12, uVar13);
        local_170->~basic_string();
    LAB_1002b1fbe:
        this_02 = local_2b0;
        new (local_170) Filename(local_2b0);
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if ((cVar1 == '\0') && (cVar1 = local_170->Exists(), cVar1 == '\0')) {
            uVar11 = logger::default_logger();
            uVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar11, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "javapal/DirectoryLocator.cpp",
                                312, "Cache: Cache locator location does not exist: %s", uVar12);
            this_02->assign("");
        }
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            Filename::operator/((Filename*)(local_2a8 + 8), (char*)local_170);
            cVar1 = CheckWritable((Filename*)(local_2a8 + 8), true);
            ((local_2a8 + 8))->~pair();
            if (cVar1 == '\0') {
                uVar11 = logger::default_logger();
                uVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar11, 0, 7,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "jagex3/javapal/DirectoryLocator.cpp",
                                    323, "Cache: Cache locator location not writable: %s", uVar12);
                this_02->assign("");
            }
        }
        local_170->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1002b22e0, 640 bytes, placed by class name
    // DirectoryLocator::SearchHistoricDirectories(eastl::string const&)
    bool DirectoryLocator::SearchHistoricDirectories(basic_string* param_1) {
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;
        bool bVar1;
        char cVar2;
        long lVar3;
        Filename* this_00;
        fixed_string* pfVar4;
        char* pcVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        ulong uVar8;
        int iVar9;
        fixed_string* in_RSI;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        ulong uVar10;
        bool bVar11;
        ulong local_2a8;
        Filename local_298[19];
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_01 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(param_1 + 400);
        lVar3 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
        if (lVar3 != 0) {
            this = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(param_1 + 376);
            local_2a8 = 0;
            do {
                lVar3 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this);
                iVar9 = 5;
                bVar11 = lVar3 != 0;
                if (bVar11) {
                    uVar8 = 0;
                    uVar10 = 1;
                    do {
                        this_00 = (Filename*)Array<Filename, eastl::allocator>::operator[](
                            (Array<Filename, eastl::allocator>*)this, uVar8);
                        pfVar4 = (fixed_string*)Array<eastl::string, eastl::allocator>::operator[](
                            (Array<eastl::string, eastl::allocator>*)this_01, local_2a8);
                        Filename::operator/(local_298, this_00, pfVar4);
                        Filename::operator/(local_168, local_298, in_RSI);
                        local_298->~pair();
                        cVar2 = local_168->Exists();
                        if (cVar2 != '\0') {
                            Filename::operator/(local_298, (char*)local_168);
                            cVar2 = CheckWritable(local_298, true);
                            local_298->~pair();
                            if (cVar2 != '\0') {
                                pcVar5 = Filename::operator_cast_to_char_(local_168);
                                ((param_1 + 312))->assign(pcVar5);
                                uVar6 = logger::default_logger();
                                uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                logger::Logger::Log(uVar6, 0, 7,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/oldscape/jagex3/javapal/DirectoryLocator.cpp",
                                                    366, "Cache: Legacy cache found: %s", uVar7);
                                local_168->~pair();
                                iVar9 = 1;
                                goto LAB_1002b24c8;
                            }
                        }
                        local_168->~pair();
                        uVar8 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this);
                        bVar11 = uVar10 < uVar8;
                        bVar1 = uVar10 < uVar8;
                        uVar8 = uVar10;
                        uVar10 = (ulong)((int)uVar10 + 1);
                    } while (bVar1);
                    iVar9 = 5;
                }
            LAB_1002b24c8:
                if (bVar11)
                    goto LAB_1002b24f9;
                local_2a8 = (ulong)((int)local_2a8 + 1);
                uVar8 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
            } while (local_2a8 < uVar8);
        }
        iVar9 = 2;
    LAB_1002b24f9:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return iVar9 != 2;
    }

    // 0x1002b2560, 800 bytes, placed by class name
    // DirectoryLocator::TransferOldCache(Filename const&, Filename const&)
    void DirectoryLocator::TransferOldCache(Filename* param_1, Filename* param_2) {
        bool bVar1;
        char cVar2;
        int iVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        FileListContents* pFVar6;
        undefined8 uVar7;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        Filename local_438;
        list<filesystem::FileListContents, eastl::allocator> local_420[32];
        list<console::Line, eastl::allocator> local_400[8];
        list<console::Line, eastl::allocator> local_3f8[8];
        undefined1 local_3e8[312];
        Filename local_2b0[19];
        FileListContents local_180;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar4 = logger::default_logger();
        uVar5 = param_1->GetName();
        logger::Logger::Log(uVar4, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "javapal/DirectoryLocator.cpp",
                            377, "Cache: Copying cache from old location: %s", uVar5);
        new (local_3e8) callstack::Callstack();
        eastl::list<filesystem::FileListContents, eastl::allocator>::list(local_420);
        iVar3 = FileSystem::GetFileList(param_1, (list*)local_420, false, (Filename*)0);
        if (0 < iVar3) {
            eastl::list<console::Line, eastl::allocator>::begin(local_400);
            eastl::list<console::Line, eastl::allocator>::end(local_3f8);
            bVar1 = eastl::operator!=((eastl*)local_400, (hashtable_iterator_base*)local_3f8, extraout_RDX);
            if (bVar1) {
                do {
                    pFVar6 = (FileListContents*)
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_400);
                    new (&local_180) filesystem::FileListContents(pFVar6);
                    local_438.GetFile();
                    new ((local_3e8 + 8)) Filename((basic_string*)&local_438);
                    Filename::operator/(local_2b0, param_2);
                    ((local_3e8 + 8))->~pair();
                    local_438.~basic_string();
                    uVar4 = logger::default_logger();
                    uVar5 = local_180.GetName();
                    uVar7 = local_2b0->GetName();
                    logger::Logger::Log(uVar4, 0, 7,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "oldscape/jagex3/javapal/DirectoryLocator.cpp",
                                        387, "Cache: Copying old file: %s to %s", uVar5, uVar7);
                    local_180.Copy(local_2b0, false, local_3e8);
                    cVar2 = local_3e8->IsValid();
                    local_2b0->~pair();
                    local_180.~__alt();
                    if (cVar2 != '\0')
                        break;
                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_400);
                    bVar1 = eastl::operator!=((eastl*)local_400, (hashtable_iterator_base*)local_3f8, extraout_RDX_00);
                } while (bVar1);
            }
        }
        cVar2 = local_3e8->IsValid();
        if (cVar2 != '\0') {
            uVar4 = logger::default_logger();
            local_180.GetErrorString();
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar4, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "javapal/DirectoryLocator.cpp",
                                397, "Cache: Error when copying cache from old location. %s", uVar5);
            local_180.~basic_string();
        }
        eastl::list<filesystem::FileListContents, eastl::allocator>::~list(local_420);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1002b2880, 544 bytes, placed by class name
    // DirectoryLocator::WriteCacheLocator(Filename const&, Filename const&)
    void DirectoryLocator::WriteCacheLocator(Filename* param_1, Filename* param_2) {
        char cVar1;
        uint uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        char* pcVar5;
        uchar* puVar6;
        WindowSavedPosition local_188;
        undefined1 local_168[320];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar3 = logger::default_logger();
        uVar4 = param_2->GetName();
        logger::Logger::Log(uVar3, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "javapal/DirectoryLocator.cpp",
                            403, "Cache: Writing cache locator file with new location: %s", uVar4);
        new (local_168) callstack::Callstack();
        new ((local_168 + 8)) File(param_1, 1538, local_168);
        cVar1 = local_168->IsValid();
        if (cVar1 == '\0') {
            local_188.PacketT(500);
            PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)&local_188, 3);
            PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)&local_188, 0);
            param_2->SSOBeginPtr(0);
            pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar2 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            Packet_pUTF8((PacketJ*)&local_188, pcVar5, uVar2);
            puVar6 = (uchar*)local_188.GetDataPtr();
            uVar2 = local_188.size();
            ((local_168 + 8))->write(puVar6, uVar2, local_168);
            ((local_168 + 8))->close(0);
            local_188.~WindowSavedPosition();
        }
        cVar1 = local_168->IsValid();
        if (cVar1 != '\0') {
            uVar3 = logger::default_logger();
            local_188.GetErrorString();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar3, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "javapal/DirectoryLocator.cpp",
                                421, "Cache: Error writing cache locator file. %s", uVar4);
            local_188.~basic_string();
        }
        ((local_168 + 8))->~File();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::oldscape::javapal

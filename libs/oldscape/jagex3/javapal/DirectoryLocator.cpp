// libs/oldscape/jagex3/javapal/DirectoryLocator.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::javapal {
    class DirectoryLocator {
    public:
        // virtual methods in vtable order
        virtual Filename GetCacheLocation(const eastl::string& str1, const eastl::string& str2, int arg3);
        virtual Filename GetHomeDirectory();
        virtual auto GetUIDLocation(int arg1);
        unsigned int CheckWritable(const Filename& filename, bool arg2);
        DirectoryLocator* GetCacheDirectory(const eastl::string& str1, const eastl::string& str2, int arg3, int arg4);
        void SetupHistoricDirectories(int arg1);
        void ReadCacheLocatorFile(const Filename& filename);
        bool SearchHistoricDirectories(const eastl::string& str);
        void TransferOldCache(const Filename& filename1, const Filename& filename2);
        void WriteCacheLocator(const Filename& filename1, const Filename& filename2);

    private:
        uint8_t _unknown_8[400];
    };

    // 0x1002b0cb0
    unsigned int DirectoryLocator::CheckWritable(const Filename& filename, bool arg2) {
        uint8_t local_168[320];

        new (local_168) callstack::Callstack();
        new ((local_168 + 8)) File(filename, 1538, local_168);
        unsigned int uVar1 = local_168->IsValid();
        if ((char)uVar1 == '\0') {
            ((local_168 + 8))->close(nullptr);
            if (arg2) {
                filename.Remove(nullptr);
            }
        }
        ((local_168 + 8))->~File();
        return uVar1 ^ 1;
    }

    // 0x1002b0d80
    Filename DirectoryLocator::GetCacheLocation(const eastl::string& str1, const eastl::string& str2, int arg3) {
        bool bVar1;
        bool bVar2;
        bool cVar3;
        char cVar4;
        int iVar5;
        FileListContents* fileListContents;
        list<filesystem::FileListContents> local_450;
        ReturnValue local_430;
        ReturnValue local_428;
        uint8_t local_3f8[16];
        ClientCompositeZone local_3e8;
        uint8_t local_2b0[632];

        int local_400 = arg3;
        GetHomeDirectory((Filename*)(local_2b0 + 328), this);
        ((local_2b0 + 328))->~pair();
        Filename result;
        unsigned int local_3fc = 0;
        local_3f8._8_8_ = &result;
        do {
            GetCacheDirectory((DirectoryLocator*)local_2b0, (eastl::string*)this, str1, (int)str2, local_3fc);
            result = *local_2b0;
            cVar3 = result.Exists();
            if ((cVar3) || (cVar3 = result.CreateDirectories(nullptr), cVar3)) {
                local_450 = eastl::list<filesystem::FileListContents>();
                iVar5 = FileSystem::GetFileList(result, local_450, false, nullptr);
                if (iVar5 < 1) {
                LAB_1002b0fb0:
                    iVar5 = 2;
                } else {
                    new (local_3f8) callstack::Callstack();
                    local_430 = local_450.begin();
                    local_428 = local_450.end();
                    cVar3 = local_430 != local_428;
                    bVar1 = true;
                    if (cVar3) {
                        bVar1 = true;
                        do {
                            fileListContents = (FileListContents*)*local_430;
                            new (local_2b0) filesystem::FileListContents(*fileListContents);
                            local_3e8 = File(local_2b0, 2, local_3f8);
                            cVar3 = local_3f8->IsValid();
                            cVar4 = '\0';
                            bVar2 = false;
                            if (!cVar3) {
                                cVar4 = local_3e8.IsValid();
                                bVar2 = bVar1;
                                if (!cVar4) {
                                    bVar2 = false;
                                }
                            }
                            bVar1 = bVar2;
                            if (!cVar4)
                                break;
                            ++local_430;
                            cVar3 = local_430 != local_428;
                        } while (cVar3);
                    }
                    if (bVar1)
                        goto LAB_1002b0fb0;
                    iVar5 = 4;
                }
                &result = (Filename*)local_3f8._8_8_;
                if (iVar5 != 4) {
                LAB_1002b0fea:
                    return result;
                }
            }
            if (2 < local_3fc)
                goto LAB_1002b0fea;
            local_3fc = local_3fc + 1;
        } while (true);
    }

    // 0x1002b1070
    DirectoryLocator* DirectoryLocator::GetCacheDirectory(const eastl::string& str1, const eastl::string& str2,
                                                          int arg3, int arg4) {
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>* this_00;
        Logger* pLVar6;
        uint32_t in_register_0000000c;
        int in_R9D;
        eastl::string local_558;
        ReturnValue local_4f8;
        ReturnValue local_3c8;
        uint8_t local_298[304];

        Filename* local_518 = (Filename*)(str1 + 8);
        int local_504 = in_R9D;
        bool cVar1 = local_518->IsEmpty();
        if (cVar1) {
            LogAssert("!m_homeDirectory.IsEmpty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/javapal/"
                      "DirectoryLocator.cpp",
                      148, nullptr);
        }
        eastl::string local_538;
        if (arg4 != 0) {
            local_538.append_sprintf("%d", arg4);
        }
        char* pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint64_t uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint64_t uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string local_578((CtorSprintf*)"jagex_cl_%s_%s%s.dat", pcVar3, uVar4, uVar5);
        *((local_298 + 304)) = *local_518 / &local_578;
        cVar1 = ((local_298 + 304))->Exists();
        if (cVar1) {
            ReadCacheLocatorFile((DirectoryLocator*)str1, (Filename*)(local_298 + 304));
        }
        this_00 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)(str1 + 312);
        cVar1 = this_00->empty();
        char cVar2 = '\0';
        if ((cVar1) && (arg4 == 0)) {
            SetupHistoricDirectories((DirectoryLocator*)str1, local_504);
            cVar2 = SearchHistoricDirectories((DirectoryLocator*)str1, str2);
        }
        cVar1 = this_00->empty();
        if (cVar1) {
            pLVar6 = logger::default_logger();
            pLVar6->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/javapal/"
                        "DirectoryLocator.cpp",
                        179, "Cache: No previous cache found, using default.");
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_558 = eastl::string((CtorSprintf*)"jagexcache%s", pcVar3);
            local_4f8 = *local_518 / &local_558;
            local_3c8 = local_4f8 / str2;
            *local_298 = local_3c8 / ((eastl::string*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg3));
            pcVar3 = (char*)local_298->operator_cast_to_char_();
            this_00->assign(pcVar3);
            cVar2 = '\x01';
        }
        new (this) Filename(this_00);
        DirectoryLocator* pDVar8 = (DirectoryLocator*)(str1 + 344);
        DirectoryLocator* pDVar7 = pDVar8;
        cVar1 = pDVar8->empty();
        if (!cVar1) {
            pDVar7 = (DirectoryLocator*)local_298;
            new (pDVar7) Filename(pDVar8);
            pDVar8 = this;
            TransferOldCache(pDVar7, (Filename*)local_298, (Filename*)this);
            pDVar7 = (DirectoryLocator*)local_298;
            pDVar7->~pair();
        } else {
            pDVar8 = this;
            if (!cVar2)
                goto LAB_1002b132f;
        }
        WriteCacheLocator(pDVar7, (Filename*)(local_298 + 304), (Filename*)pDVar8);
    LAB_1002b132f:
        pLVar6 = logger::default_logger();
        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pLVar6->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/javapal/"
                    "DirectoryLocator.cpp",
                    201, "Cache: Using cache at: %s", uVar4);
        ((local_298 + 304))->~pair();
        return pDVar8;
    }

    // 0x1002b14a0
    Filename DirectoryLocator::GetHomeDirectory() {
        Filename* pFVar2;
        Filename local_3c8;
        Filename local_298;
        Filename local_168;

        uint8_t* this_00 = &field_8;
        bool cVar1 = this_00->IsEmpty();
        if (!cVar1) {
            Filename result(this_00);
        } else {
            pFVar2 = SystemPaths::GetUserFolder();
            local_168 = Filename(pFVar2);
            while (cVar1 = local_168.IsEmpty(), !cVar1) {
                local_298 = local_168 / "jagexcache";
                cVar1 = local_298.Exists();
                if (cVar1) {
                    break;
                }
                local_3c8 = local_168.GetParentPath();
                local_168 = local_3c8;
                local_3c8.~pair();
                local_298.~pair();
            }
            pFVar2 = SystemPaths::GetUserFolder();
            *this_00 = *pFVar2;
            new (&result) Filename(this_00);
        }
        return result;
    }

    // 0x1002b1620
    auto DirectoryLocator::GetUIDLocation(int arg1) {
        uint8_t* this_00;
        Logger* pLVar2;
        char* pcVar3;
        long lVar4;
        unsigned long uVar5;
        Filename* this_01;
        eastl::string* str;
        unsigned long uVar6;
        int iVar7;
        unsigned int uVar8;
        uint8_t* this_02;
        bool bVar9;
        unsigned long local_3d8;
        ReturnValue local_3c8;
        Filename local_168;

        GetHomeDirectory(&local_168, this);
        SetupHistoricDirectories(arg1);
        Filename local_298 = field_8 / "random.dat";
        bool cVar1 = local_298.Exists();
        if (!cVar1) {
            this_00 = &field_400;
            lVar4 = this_00->end();
            if (lVar4 != 0) {
                this_02 = &field_376;
                local_3d8 = 0;
                do {
                    lVar4 = this_02->end();
                    iVar7 = 5;
                    bVar9 = lVar4 != 0;
                    if (bVar9) {
                        uVar8 = 1;
                        uVar6 = 0;
                        do {
                            this_01 = (Filename*)(*this_02)[uVar6];
                            str = (eastl::string*)(*this_00)[local_3d8];
                            local_3c8 = *this_01 / str;
                            result = local_3c8 / "random.dat";
                            cVar1 = result.Exists();
                            if (cVar1) {
                                pLVar2 = logger::default_logger();
                                pcVar3 = result.GetName();
                                pLVar2->Log(false, 7,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "oldscape/jagex3/javapal/DirectoryLocator.cpp",
                                            136, "UID: Opening UID in historic directory: %s", pcVar3);
                                if (cVar1) {
                                    iVar7 = 1;
                                    goto LAB_1002b185f;
                                }
                            }
                            result.~pair();
                            uVar6 = (unsigned long)uVar8;
                            uVar5 = this_02->end();
                            uVar8 = uVar8 + 1;
                            bVar9 = uVar6 < uVar5;
                        } while (uVar6 < uVar5);
                        iVar7 = 5;
                    }
                LAB_1002b185f:
                    if (bVar9)
                        goto LAB_1002b1892;
                    local_3d8 = (unsigned long)((int)local_3d8 + 1);
                    uVar6 = this_00->end();
                } while (local_3d8 < uVar6);
                iVar7 = 2;
            LAB_1002b1892:
                if (iVar7 != 2)
                    goto LAB_1002b18b2;
            }
            auto result(&local_298);
        } else {
            pLVar2 = logger::default_logger();
            pcVar3 = local_298.GetName();
            pLVar2->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/javapal/"
                        "DirectoryLocator.cpp",
                        124, "UID: Found UID in user\'s home directory: %s", pcVar3);
            new (&result) Filename(&local_298);
        }
    LAB_1002b18b2:
        return result;
    }

    // 0x1002b1930
    void DirectoryLocator::SetupHistoricDirectories(int arg1) {
        Array<eastl::string> local_b60;
        pair<eastl::fixed_string<char, 16>, unsigned int> local_168;

        GetHomeDirectory(&local_168, this);
        Filename local_ae8("c:/rscache/");
        Filename local_9b8("/rscache/");
        Filename local_888("c:/windows/");
        Filename local_758("c:/winnt/");
        Filename local_628("c:/");
        auto pcVar1 = field_8.GetName();
        Filename local_4f8(pcVar1);
        Filename local_3c8("/tmp/");
        Filename local_298("");
        Filename* local_b38 = &local_ae8;
        uint64_t local_b30 = 8;
        Array<Filename> local_b18(local_b38);
        field_376 = local_b18;
        long lVar2 = 2128;
        do {
            ((&local_ae8 + lVar2))->~pair();
            lVar2 = lVar2 - 304;
        } while (lVar2 != -304);
        local_b18 = eastl::string((CtorSprintf*)".jagex_cache_%d", (char*)(unsigned long)(unsigned int)arg1);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_ae8 = eastl::string(pcVar1);
        new (&local_b38) eastl::string((CtorSprintf*)".file_store_%d", (char*)(unsigned long)(unsigned int)arg1);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string local_ac8(pcVar1);
        uint64_t local_b40 = 2;
        eastl::string* local_b48 = &local_ae8;
        new (&local_b60) Array<eastl::string>(&local_b48);
        field_400 = local_b60;
        lVar2 = 32;
        do {
            ((&local_ae8 + lVar2))->~basic_string();
            lVar2 = lVar2 - 32;
        } while (lVar2 != -32);
    }

    // 0x1002b1dd0
    void DirectoryLocator::ReadCacheLocatorFile(const Filename& filename) {
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        uint8_t bVar2;
        uint8_t bVar3;
        int iVar4;
        unsigned int uVar5;
        unsigned long arg1;
        unsigned long uVar6;
        unsigned char* arg1_00;
        long lVar7;
        long lVar8;
        Logger* pLVar9;
        char* pcVar10;
        uint64_t in_stack_fffffffffffffd10;
        uint32_t uVar12;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_2e0;
        uint8_t local_2a8[312];

        uint8_t* this_00 = &field_312;
        this_00->assign("");
        new (local_2a8) callstack::Callstack();
        File local_170(filename, 0, local_2a8);
        bool cVar1 = local_2a8->IsValid();
        fixed_string<char, _24>* local_2b0 = (fixed_string<char, _24>*)this_00;
        if (!cVar1) {
            arg1 = local_170.length(nullptr);
            ((local_2a8 + 8))->PacketT(arg1);
            this_01 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)(local_2a8 + 8);
            while (true) {
                uVar6 = this_01->size();
                uVar12 = (uint32_t)((unsigned long)in_stack_fffffffffffffd10 >> 32);
                if (arg1 <= uVar6)
                    break;
                arg1_00 = (unsigned char*)this_01->GetDataPtr();
                iVar4 = this_01->size();
                uVar5 = this_01->size();
                lVar7 = local_170.read(arg1_00, (int)arg1 - iVar4, uVar5, local_2a8);
                cVar1 = local_2a8->IsValid();
                uVar12 = (uint32_t)((unsigned long)in_stack_fffffffffffffd10 >> 32);
                if (cVar1)
                    break;
                lVar8 = this_01->size();
                this_01->SetPos(lVar7 + lVar8);
            }
            cVar1 = local_2a8->IsValid();
            if (!cVar1) {
                ((local_2a8 + 8))->SetPos(0);
                bVar2 = ((local_2a8 + 8))->g1();
                if ((uint8_t)(bVar2 - 1) < 3) {
                    uVar5 = 0;
                    if (1 < bVar2) {
                        bVar3 = ((local_2a8 + 8))->g1();
                        uVar5 = (unsigned int)bVar3;
                    }
                    if (bVar2 < 3) {
                        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(
                            &local_2e0, (bool)((char)local_2a8 + '\b'));
                        *local_2b0 = &local_2e0;
                        if (uVar5 == 1) {
                            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(
                                &local_2e0, (bool)((char)local_2a8 + '\b'));
                            field_344 = &local_2e0;
                        }
                    } else {
                        cVar1 =
                            Packet_gUTF8((eastl::string*)local_2b0, (PacketJ<Array<unsigned char> _>*)(local_2a8 + 8));
                        if ((!cVar1) ||
                            ((uVar5 == 1 && (cVar1 = Packet_gUTF8((eastl::string*)local_2b0,
                                                                  (PacketJ<Array<unsigned char> _>*)(local_2a8 + 8)),
                                             !cVar1))))
                            goto LAB_1002b1f37;
                    }
                    local_170.close(nullptr);
                    pLVar9 = logger::default_logger();
                    pcVar10 = filename.GetName();
                    pLVar9->Log(false, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "javapal/DirectoryLocator.cpp",
                                297, "Cache: Read cache locator file from: %s, state: %d ", pcVar10,
                                (((uint64_t)uVar12 << 32) | (uint32_t)uVar5));
                    ((local_2a8 + 8))->~WindowSavedPosition();
                    goto LAB_1002b1fbe;
                }
            }
        LAB_1002b1f37:
            ((local_2a8 + 8))->~WindowSavedPosition();
        }
        pLVar9 = logger::default_logger();
        pcVar10 = filename.GetName();
        local_170 = local_2a8->GetErrorString();
        uint64_t uVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pLVar9->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/javapal/"
                    "DirectoryLocator.cpp",
                    302, "Cache: Error opening cache locator file (%s): %s", pcVar10, uVar11);
    LAB_1002b1fbe:
        fixed_string<char, _24>* this_02 = local_2b0;
        local_170 = Filename(local_2b0);
        cVar1 = this_02->empty();
        if ((!cVar1) && (cVar1 = local_170.Exists(), !cVar1)) {
            pLVar9 = logger::default_logger();
            uVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar9->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/javapal/"
                        "DirectoryLocator.cpp",
                        312, "Cache: Cache locator location does not exist: %s", uVar11);
            this_02->assign("");
        }
        cVar1 = this_02->empty();
        if (!cVar1) {
            *((local_2a8 + 8)) = local_170 / "test.dat";
            cVar1 = CheckWritable((Filename*)(local_2a8 + 8), true);
            ((local_2a8 + 8))->~pair();
            if (!cVar1) {
                pLVar9 = logger::default_logger();
                uVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pLVar9->Log(false, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "javapal/DirectoryLocator.cpp",
                            323, "Cache: Cache locator location not writable: %s", uVar11);
                this_02->assign("");
            }
        }
    }

    // 0x1002b22e0
    bool DirectoryLocator::SearchHistoricDirectories(const eastl::string& str) {
        uint8_t* this_00;
        bool bVar1;
        bool cVar2;
        Filename* this_01;
        eastl::string* str_00;
        char* str_01;
        Logger* this_02;
        uint64_t uVar4;
        unsigned long uVar5;
        int iVar6;
        unsigned long uVar7;
        bool bVar8;
        unsigned long local_2a8;
        ReturnValue local_298;
        ReturnValue local_168;

        uint8_t* this_03 = &field_400;
        long lVar3 = this_03->end();
        if (lVar3 != 0) {
            this_00 = &field_376;
            local_2a8 = 0;
            do {
                lVar3 = this_00->end();
                iVar6 = 5;
                bVar8 = lVar3 != 0;
                if (bVar8) {
                    uVar5 = 0;
                    uVar7 = 1;
                    do {
                        this_01 = (Filename*)(*this_00)[uVar5];
                        str_00 = (eastl::string*)(*this_03)[local_2a8];
                        local_298 = *this_01 / str_00;
                        local_168 = local_298 / str;
                        cVar2 = local_168.Exists();
                        if (cVar2) {
                            local_298 = local_168 / "test.dat";
                            cVar2 = CheckWritable(&local_298, true);
                            if (cVar2) {
                                str_01 = (char*)Filename::operator_cast_to_char_(&local_168);
                                (&field_312)->assign(str_01);
                                this_02 = logger::default_logger();
                                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                this_02->Log(false, 7,
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "oldscape/jagex3/javapal/DirectoryLocator.cpp",
                                             366, "Cache: Legacy cache found: %s", uVar4);
                                iVar6 = 1;
                                goto LAB_1002b24c8;
                            }
                        }
                        uVar5 = this_00->end();
                        bVar8 = uVar7 < uVar5;
                        bVar1 = uVar7 < uVar5;
                        uVar5 = uVar7;
                        uVar7 = (unsigned long)((int)uVar7 + 1);
                    } while (bVar1);
                    iVar6 = 5;
                }
            LAB_1002b24c8:
                if (bVar8)
                    goto LAB_1002b24f9;
                local_2a8 = (unsigned long)((int)local_2a8 + 1);
                uVar5 = this_03->end();
            } while (local_2a8 < uVar5);
        }
        iVar6 = 2;
    LAB_1002b24f9:
        return iVar6 != 2;
    }

    // 0x1002b2560
    void DirectoryLocator::TransferOldCache(const Filename& filename1, const Filename& filename2) {
        bool cVar1;
        FileListContents* fileListContents;
        char* pcVar5;
        uint64_t uVar6;
        uint8_t* this_00;
        ReturnValue local_438;
        ReturnValue local_400;
        ReturnValue local_3f8;
        ReturnValue local_2b0;
        FileListContents local_180;

        auto pLVar3 = logger::default_logger();
        auto pcVar4 = filename1.GetName();
        pLVar3->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/javapal/"
                    "DirectoryLocator.cpp",
                    377, "Cache: Copying cache from old location: %s", pcVar4);
        Callstack local_3e8;
        list<filesystem::FileListContents> local_420;
        int iVar2 = FileSystem::GetFileList(filename1, local_420, false, nullptr);
        if (0 < iVar2) {
            local_400 = local_420.begin();
            local_3f8 = local_420.end();
            cVar1 = local_400 != local_3f8;
            if (cVar1) {
                do {
                    this_00 = &local_3e8[0].field_8;
                    fileListContents = (FileListContents*)*local_400;
                    local_180 = filesystem::FileListContents(*fileListContents);
                    local_438.GetFile(&local_180);
                    new (this_00) Filename(&local_438);
                    local_2b0 = filename2 / this_00;
                    this_00->~pair();
                    pLVar3 = logger::default_logger();
                    pcVar4 = local_180.GetName();
                    pcVar5 = local_2b0.GetName();
                    pLVar3->Log(false, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "javapal/DirectoryLocator.cpp",
                                387, "Cache: Copying old file: %s to %s", pcVar4, pcVar5);
                    local_180.Copy(local_2b0, false, &local_3e8);
                    cVar1 = local_3e8.IsValid();
                    if (cVar1)
                        break;
                    ++local_400;
                    cVar1 = local_400 != local_3f8;
                } while (cVar1);
            }
        }
        cVar1 = local_3e8.IsValid();
        if (cVar1) {
            pLVar3 = logger::default_logger();
            local_180 = local_3e8.GetErrorString();
            uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar3->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/javapal/"
                        "DirectoryLocator.cpp",
                        397, "Cache: Error when copying cache from old location. %s", uVar6);
        }
    }

    // 0x1002b2880
    void DirectoryLocator::WriteCacheLocator(const Filename& filename1, const Filename& filename2) {
        unsigned int uVar2;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* this_00;
        unsigned char* arg1;
        uint64_t uVar5;
        WindowSavedPosition local_188;
        uint8_t local_168[320];

        auto pLVar3 = logger::default_logger();
        auto pcVar4 = filename2.GetName();
        pLVar3->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/javapal/"
                    "DirectoryLocator.cpp",
                    403, "Cache: Writing cache locator file with new location: %s", pcVar4);
        new (local_168) callstack::Callstack();
        new ((local_168 + 8)) File(filename1, 1538, local_168);
        if (!(local_168->IsValid())) {
            local_188.PacketT(500);
            local_188.p1<unsigned long>(3);
            local_188.p1<unsigned long>(0);
            this_00 =
                (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)filename2.SSOBeginPtr();
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar2 = this_00->size();
            Packet_pUTF8((PacketJ<Array<unsigned char> _>*)&local_188, pcVar4, uVar2);
            arg1 = (unsigned char*)local_188.GetDataPtr();
            uVar2 = local_188.size();
            ((local_168 + 8))->write(arg1, uVar2, local_168);
            ((local_168 + 8))->close(nullptr);
        }
        if (local_168->IsValid()) {
            pLVar3 = logger::default_logger();
            local_188 = local_168->GetErrorString();
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar3->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/javapal/"
                        "DirectoryLocator.cpp",
                        421, "Cache: Error writing cache locator file. %s", uVar5);
        }
        ((local_168 + 8))->~File();
    }

} // namespace jag::oldscape::javapal

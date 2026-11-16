// libs/graphics/shaderlib/ShaderSourceProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.shaderlib

namespace jag::graphics::shadersourceprovider {
    // 0x100bb2570, 656 bytes, placed by class name
    // GetRawResourceData(ShaderResource)
    shadersourceprovider* GetRawResourceData(undefined4 param_2) {
        char cVar1;
        uint uVar2;
        char* pcVar3;
        long lVar4;
        long lVar5;
        undefined8 uVar6;
        _anonymous_namespace_ local_3e0[24];
        ClientCompositeZone local_3c8[13];
        Filename local_290[19];
        Filename local_160[19];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pcVar3 = (char*)GetResourcePath(param_2);
        Filename::Filename(local_160, pcVar3);
        lVar4 = local_160->GetLastModified();
        Filename::Filename(local_290, "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "shaderlib/ShaderSourceData.h");
        cVar1 = local_290->Exists();
        if (cVar1 == '\0') {
            lVar5 = datetools::GetCompilationDate();
        } else {
            lVar5 = local_290->GetLastModified();
        }
        if (((anonymous namespace)::g_forceFileLoading == '\x01') || (lVar5 <= lVar4)) {
            new (local_3c8) File(local_160, 2, 0);
            cVar1 = local_3c8->IsValid();
            if (cVar1 == '\0') {
                uVar6 = logger::default_logger();
                logger::Logger::Log(uVar6, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "shaderlib/ShaderSourceProvider.cpp",
                                    94, "Raw Resource file not found at %s", pcVar3);
                pcVar3 = (char*)GetResourceInline(param_2);
                (anonymous namespace)::ConvertEncodedShader((_anonymous_namespace_*)this, pcVar3);
            } else {
                std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string();
                local_3c8->seek(0, 2, 0);
                uVar2 = local_3c8->tell();
                if ((int)uVar2 < 1) {
                    uVar6 = logger::default_logger();
                    logger::Logger::Log(uVar6, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/shaderlib/ShaderSourceProvider.cpp",
                                        87, "Raw Resource file has 0 length at %s", pcVar3);
                    pcVar3 = (char*)GetResourceInline(param_2);
                    (anonymous namespace)::ConvertEncodedShader(local_3e0, pcVar3);
                    std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::operator=(
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this,
                        (basic_string*)local_3e0);
                    local_3e0->~basic_string();
                } else {
                    resize((long)(int)uVar2);
                    local_3c8->seek(0, 0, 0);
                    pcVar3 =
                        (char*)std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::operator[](
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this, 0);
                    local_3c8->read(pcVar3, uVar2, 0, 0);
                }
            }
            local_3c8->~File();
        } else {
            pcVar3 = (char*)GetResourceInline(param_2);
            (anonymous namespace)::ConvertEncodedShader((_anonymous_namespace_*)this, pcVar3);
        }
        local_290->~pair();
        local_160->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x100bb28f0, 928 bytes, placed by class name
    // GetShaderString(ShaderResource)
    undefined8 GetShaderString(int param_1) {
        bool bVar2;
        int iVar3;
        eastl::string* pbVar4;
        long lVar5;
        char* pcVar6;
        undefined8 uVar7;
        bool bVar8;
        int iVar9;
        bool bVar10;
        basic_string local_d0[24];
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_b8[24];
        ulong local_a0;
        long local_98;
        eastl::string* local_90;
        basic_string local_88[24];
        shadersourceprovider local_70[24];
        basic_string local_58[28];
        int local_3c;
        int local_34;

        pbVar4 = (eastl::string*)std::array<eastl::string, 119ul>::operator[]((long)param_1);
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
            '\0') {
            uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        } else {
            GetRawResourceData(local_70, param_1);
            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
                local_b8, "// ");
            GetResourcePath(param_1);
            std::operator+(local_d0, (char*)local_b8);
            std::operator+(local_58, (char*)local_d0);
            local_90 = pbVar4;
            std::operator+(local_88, local_58);
            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::operator=(
                (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)local_70, local_88);
            local_88->~basic_string();
            local_58->~basic_string();
            local_d0->~basic_string();
            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(local_b8);
            iVar3 = 0;
            local_34 = 0;
            do {
                lVar5 = std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::find((char*)local_70,
                                                                                                        (long)local_34);
                if ((int)lVar5 == -1)
                    break;
                local_3c = iVar3;
                iVar3 = local_70->find('\"', (lVar5 << 32) + 34359738368 >> 32);
                iVar3 = local_70->find('\"', (long)(iVar3 + 1));
                std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::substr((ulong)local_88,
                                                                                                  (ulong)local_70);
                std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string();
                local_a0 = (ulong)((iVar3 - (int)lVar5) + 1);
                iVar9 = 0;
                bVar8 = false;
                local_98 = lVar5;
                do {
                    pcVar6 = (char*)GetResourceFilename(iVar9);
                    pcVar6 = (anonymous namespace)::ConvertEncodedResourceFilename<
                        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(local_58, pcVar6);
                    std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<
                        decltype(nullptr)>(
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)local_d0, pcVar6);
                    bVar2 = std::operator==(local_88, local_d0);
                    if (bVar2) {
                        pcVar6 = (char*)GetShaderString(iVar9);
                        std::basic_string<char, std::char_traits<char>,
                                          BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(local_b8, pcVar6);
                        local_70->replace((lVar5 << 32) >> 32, local_a0, local_b8);
                        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(
                            local_b8);
                        bVar8 = true;
                        local_34 = (int)local_98;
                    }
                    local_d0->~basic_string();
                    iVar3 = local_3c;
                    bVar10 = iVar9 != 118;
                    iVar9 = iVar9 + 1;
                } while (!bVar2 && bVar10);
                if (!bVar8) {
                    uVar7 = local_88->c_str();
                    pcVar6 = (char*)GetResourceFilename(param_1);
                    pcVar6 = (anonymous namespace)::ConvertEncodedResourceFilename<
                        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(
                        local_58, pcVar6); /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "shaderlib/ShaderSourceProvider.cpp",
                                    144,
                                    "ShaderSourceProvider couldn\'t find resource to match include %s when building %s",
                                    uVar7, pcVar6);
                }
                local_58->~basic_string();
                local_88->~basic_string();
                iVar3 = iVar3 + 1;
            } while (iVar3 != 100);
            pcVar6 = (char*)local_70->c_str();
            eastl::string::assign(local_90, pcVar6);
            uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_70->~basic_string();
        }
        return uVar7;))

// 0x100bb2ef0, 352 bytes, placed by class name
// GetCompletedShader(ShaderResource, render::ShaderType)
shadersourceprovider * GetCompletedShader
          (undefined4 param_2,int param_3)
{
            char* pcVar1;
            undefined1 local_130[280];

            if (param_3 == 35632) {
                new (local_130) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
                pcVar1 = (char*)GetShaderString(param_2);
                std::operator<<((ostream*)(local_130 + 16), pcVar1);
                str();
                local_130->~PixelShaderSourceStream();
            } else {
                if (param_3 != 35633) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "shaderlib/ShaderSourceProvider.cpp",
                                    173, (char*)0);
                }
                new (local_130) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
                pcVar1 = (char*)GetShaderString(param_2);
                std::operator<<((ostream*)(local_130 + 16), pcVar1);
                str();
                local_130->~VertexShaderSourceStream();
            }
            return this;
        }

        // 0x100bb3070, 304 bytes, placed by class name
        // GetCompletedShader(ShaderResource)
        shadersourceprovider* GetCompletedShader(undefined4 param_2) {
            bool bVar1;
            char* pcVar2;
            undefined8 uVar3;
            basic_string local_70[24];
            basic_string local_58[24];
            basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_40[24];

            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string();
            pcVar2 = (char*)GetResourceFilename(param_2);
            pcVar2 = (anonymous namespace)::ConvertEncodedResourceFilename<
                std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(local_70, pcVar2);
            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
                local_40, pcVar2);
            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::size(local_40);
            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::substr((ulong)local_58,
                                                                                              (ulong)local_40);
            bVar1 = std::operator==(local_58, ".fs");
            local_58->~basic_string();
            uVar3 = 35632;
            if (!bVar1) {
                std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::size(local_40);
                std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::substr((ulong)local_58,
                                                                                                  (ulong)local_40);
                bVar1 = std::operator==(local_58, ".vs");
                local_58->~basic_string();
                uVar3 = 4294967295;
                if (bVar1) {
                    uVar3 = 35633;
                }
            }
            GetCompletedShader(this, param_2, uVar3);
            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(local_40);
            local_70->~basic_string();
            return this;
        }

        // 0x100bb3230, 64 bytes, placed by class name
        // ClearResourceCache()
        void ClearResourceCache() {
            ulong uVar1;

            uVar1 = 0;
            do {
                std::array<eastl::string, 119ul>::operator[](uVar1);
                eastl::string::clear();
                uVar1 = uVar1 + 1;
            } while (uVar1 != 119);
        }

        // 0x100bb3270, 80 bytes, placed by class name
        // ForceFileLoading()
        void ForceFileLoading() {
            undefined8 uVar1;

            (anonymous namespace)::g_forceFileLoading = 1;
            uVar1 = logger::default_logger();
            logger::Logger::Log(uVar1, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "shaderlib/ShaderSourceProvider.cpp",
                                208, "Forcing shaders to be loaded from disk. NXT_ROOT: %s",
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR");
        }

    } // namespace jag::graphics::shadersourceprovider

    namespace jag::osrsgraphics::shadersourceprovider {
        // 0x1001c0d80, 928 bytes, placed by __FILE__ string
        // GetShaderString(ShaderResource)
        undefined8 GetShaderString(int param_1) {
            bool bVar2;
            int iVar3;
            eastl::string* pbVar4;
            long lVar5;
            char* pcVar6;
            undefined8 uVar7;
            bool bVar8;
            int iVar9;
            bool bVar10;
            basic_string local_d0[24];
            basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_b8[24];
            ulong local_a0;
            long local_98;
            eastl::string* local_90;
            basic_string local_88[24];
            shadersourceprovider local_70[24];
            basic_string local_58[28];
            int local_3c;
            int local_34;

            pbVar4 = (eastl::string*)std::array<eastl::string, 11ul>::operator[]((long)param_1);
            if (eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
                '\0') {
                uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            } else {
                GetRawResourceData(local_70, param_1);
                std::basic_string<char, std::char_traits<char>,
                                  BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(local_b8, "// ");
                GetResourcePath(param_1);
                std::operator+(local_d0, (char*)local_b8);
                std::operator+(local_58, (char*)local_d0);
                local_90 = pbVar4;
                std::operator+(local_88, local_58);
                std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::operator=(
                    (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)local_70, local_88);
                local_88->~basic_string();
                local_58->~basic_string();
                local_d0->~basic_string();
                std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(local_b8);
                iVar3 = 0;
                local_34 = 0;
                do {
                    lVar5 = std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::find(
                        (char*)local_70, (long)local_34);
                    if ((int)lVar5 == -1)
                        break;
                    local_3c = iVar3;
                    iVar3 = local_70->find('\"', (lVar5 << 32) + 34359738368 >> 32);
                    iVar3 = local_70->find('\"', (long)(iVar3 + 1));
                    std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::substr((ulong)local_88,
                                                                                                      (ulong)local_70);
                    std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string();
                    local_a0 = (ulong)((iVar3 - (int)lVar5) + 1);
                    iVar9 = 0;
                    bVar8 = false;
                    local_98 = lVar5;
                    do {
                        pcVar6 = (char*)GetResourceFilename(iVar9);
                        pcVar6 = (anonymous namespace)::ConvertEncodedResourceFilename<
                            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(local_58,
                                                                                                       pcVar6);
                        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<
                            decltype(nullptr)>(
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)local_d0, pcVar6);
                        bVar2 = std::operator==(local_88, local_d0);
                        if (bVar2) {
                            pcVar6 = (char*)GetShaderString(iVar9);
                            std::basic_string<char, std::char_traits<char>,
                                              BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(local_b8,
                                                                                                         pcVar6);
                            local_70->replace((lVar5 << 32) >> 32, local_a0, local_b8);
                            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(
                                local_b8);
                            bVar8 = true;
                            local_34 = (int)local_98;
                        }
                        local_d0->~basic_string();
                        iVar3 = local_3c;
                        bVar10 = iVar9 != 10;
                        iVar9 = iVar9 + 1;
                    } while (!bVar2 && bVar10);
                    if (!bVar8) {
                        uVar7 = local_88->c_str();
                        pcVar6 = (char*)GetResourceFilename(param_1);
                        pcVar6 = (anonymous namespace)::ConvertEncodedResourceFilename<
                            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(
                            local_58, pcVar6); /* WARNING: Subroutine does not return */
                        LogAssertAlways(
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/shaderlib/"
                            "ShaderSourceProvider.cpp",
                            144, "ShaderSourceProvider couldn\'t find resource to match include %s when building %s",
                            uVar7, pcVar6);
                    }
                    local_58->~basic_string();
                    local_88->~basic_string();
                    iVar3 = iVar3 + 1;
                } while (iVar3 != 100);
                pcVar6 = (char*)local_70->c_str();
                eastl::string::assign(local_90, pcVar6);
                uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_70->~basic_string();
            }
            return uVar7;))

// 0x1001c4e70, 656 bytes, placed by __FILE__ string
// GetRawResourceData(ShaderResource)
shadersourceprovider * GetRawResourceData
          (undefined4 param_2)
{
                char cVar1;
                uint uVar2;
                char* pcVar3;
                long lVar4;
                long lVar5;
                undefined8 uVar6;
                _anonymous_namespace_ local_3e0[24];
                ClientCompositeZone local_3c8[13];
                Filename local_290[19];
                Filename local_160[19];
                long local_30;

                local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
                pcVar3 = (char*)GetResourcePath(param_2);
                Filename::Filename(local_160, pcVar3);
                lVar4 = local_160->GetLastModified();
                Filename::Filename(local_290, "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/shaderlib/ShaderSourceData.h");
                cVar1 = local_290->Exists();
                if (cVar1 == '\0') {
                    lVar5 = datetools::GetCompilationDate();
                } else {
                    lVar5 = local_290->GetLastModified();
                }
                if (((anonymous namespace)::g_forceFileLoading == '\x01') || (lVar5 <= lVar4)) {
                    new (local_3c8) File(local_160, 2, 0);
                    cVar1 = local_3c8->IsValid();
                    if (cVar1 == '\0') {
                        uVar6 = logger::default_logger();
                        logger::Logger::Log(uVar6, 0, 8,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/shaderlib/ShaderSourceProvider.cpp",
                                            94, "Raw Resource file not found at %s", pcVar3);
                        pcVar3 = (char*)GetResourceInline(param_2);
                        (anonymous namespace)::ConvertEncodedShader((_anonymous_namespace_*)this, pcVar3);
                    } else {
                        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string();
                        local_3c8->seek(0, 2, 0);
                        uVar2 = local_3c8->tell();
                        if ((int)uVar2 < 1) {
                            uVar6 = logger::default_logger();
                            logger::Logger::Log(uVar6, 0, 8,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "graphics/shaderlib/ShaderSourceProvider.cpp",
                                                87, "Raw Resource file has 0 length at %s", pcVar3);
                            pcVar3 = (char*)GetResourceInline(param_2);
                            (anonymous namespace)::ConvertEncodedShader(local_3e0, pcVar3);
                            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::operator=(
                                (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this,
                                (basic_string*)local_3e0);
                            local_3e0->~basic_string();
                        } else {
                            resize((long)(int)uVar2);
                            local_3c8->seek(0, 0, 0);
                            pcVar3 = (char*)
                                std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::operator[](
                                    (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this, 0);
                            local_3c8->read(pcVar3, uVar2, 0, 0);
                        }
                    }
                    local_3c8->~File();
                } else {
                    pcVar3 = (char*)GetResourceInline(param_2);
                    (anonymous namespace)::ConvertEncodedShader((_anonymous_namespace_*)this, pcVar3);
                }
                local_290->~pair();
                local_160->~pair();
                if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
                    /* WARNING: Subroutine does not return */
                    ___stack_chk_fail();
                }
                return this;
            }

            // 0x1001c5460, 352 bytes, placed by __FILE__ string
            // GetCompletedShader(ShaderResource, render::ShaderType)
            shadersourceprovider* GetCompletedShader(undefined4 param_2, int param_3) {
                char* pcVar1;
                undefined1 local_130[280];

                if (param_3 == 35632) {
                    new (local_130) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
                    pcVar1 = (char*)GetShaderString(param_2);
                    std::operator<<((ostream*)(local_130 + 16), pcVar1);
                    str();
                    local_130->~PixelShaderSourceStream();
                } else {
                    if (param_3 != 35633) {
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/shaderlib/ShaderSourceProvider.cpp",
                                        173, (char*)0);
                    }
                    new (local_130) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
                    pcVar1 = (char*)GetShaderString(param_2);
                    std::operator<<((ostream*)(local_130 + 16), pcVar1);
                    str();
                    local_130->~VertexShaderSourceStream();
                }
                return this;
            }

            // 0x1001c5650, 64 bytes, placed by neighbouring functions
            // ClearResourceCache()
            void ClearResourceCache() {
                ulong uVar1;

                uVar1 = 0;
                do {
                    std::array<eastl::string, 11ul>::operator[](uVar1);
                    eastl::string::clear();
                    uVar1 = uVar1 + 1;
                } while (uVar1 != 11);
            }

            // 0x1001c5690, 80 bytes, placed by __FILE__ string
            // ForceFileLoading()
            void ForceFileLoading() {
                undefined8 uVar1;

                (anonymous namespace)::g_forceFileLoading = 1;
                uVar1 = logger::default_logger();
                logger::Logger::Log(uVar1, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "shaderlib/ShaderSourceProvider.cpp",
                                    208, "Forcing shaders to be loaded from disk. NXT_ROOT: %s",
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR");
            }

        } // namespace jag::osrsgraphics::shadersourceprovider

        namespace jag::osrsgraphics {
            namespace {
                // 0x1001c5100, 160 bytes, placed by neighbouring functions
                // ConvertEncodedShader(char const*)
                _anonymous_namespace_* ConvertEncodedShader(char* param_1) {
                    bool bVar1;
                    Base64* this_00;
                    vector local_30[24];

                    eastl::vector<unsigned char, BucketAllocatorEASTL>::vector();
                    this_00 = (Base64*)Base64::Instance();
                    bVar1 = Base64::DecodeString<eastl::vector<unsigned char, BucketAllocatorEASTL>>(this_00, local_30,
                                                                                                     param_1);
                    if (bVar1) {
                        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string();
                        bVar1 = ZipInflate<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>,
                                           eastl::vector<unsigned char, BucketAllocatorEASTL>>((basic_string*)this,
                                                                                               local_30);
                        if (bVar1)
                            goto LAB_1001c5161;
                        ~basic_string();
                    }
                    std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<
                        decltype(nullptr)>((basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this,
                                           "");
                LAB_1001c5161:
                    local_30->~vector();
                    return this;
                }

            } // namespace (anonymous)

        } // namespace jag::osrsgraphics

        namespace jag::graphics {
            namespace {
                // 0x100bb2800, 160 bytes, placed by neighbouring functions
                // ConvertEncodedShader(char const*)
                _anonymous_namespace_* ConvertEncodedShader(char* param_1) {
                    bool bVar1;
                    Base64* this_00;
                    vector local_30[24];

                    eastl::vector<unsigned char, BucketAllocatorEASTL>::vector();
                    this_00 = (Base64*)Base64::Instance();
                    bVar1 = Base64::DecodeString<eastl::vector<unsigned char, BucketAllocatorEASTL>>(this_00, local_30,
                                                                                                     param_1);
                    if (bVar1) {
                        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string();
                        bVar1 = ZipInflate<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>,
                                           eastl::vector<unsigned char, BucketAllocatorEASTL>>((basic_string*)this,
                                                                                               local_30);
                        if (bVar1)
                            goto LAB_100bb2861;
                        ~basic_string();
                    }
                    std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<
                        decltype(nullptr)>((basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this,
                                           "");
                LAB_100bb2861:
                    local_30->~vector();
                    return this;
                }

            } // namespace (anonymous)

        } // namespace jag::graphics

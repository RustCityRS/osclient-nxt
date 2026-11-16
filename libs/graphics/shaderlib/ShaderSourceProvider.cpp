// libs/graphics/shaderlib/ShaderSourceProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.shaderlib

namespace jag::graphics::shadersourceprovider {
    // 0x100bb2570
    auto GetRawResourceData(ShaderResource shaderResource) {
        unsigned int arg2;
        long lVar4;
        Logger* pLVar5;
        ReturnValue local_3e0;
        ClientCompositeZone local_3c8;

        auto pcVar2 = GetResourcePath(shaderResource);
        Filename local_160(pcVar2);
        long lVar3 = local_160.GetLastModified();
        Filename local_290("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/shaderlib/"
                           "ShaderSourceData.h");
        if (!(local_290.Exists())) {
            lVar4 = datetools::GetCompilationDate();
        } else {
            lVar4 = local_290.GetLastModified();
        }
        if (((anonymous namespace)::g_forceFileLoading == '\x01') || (lVar4 <= lVar3)) {
            local_3c8 = File(&local_160, 2, nullptr);
            if (!(local_3c8.IsValid())) {
                pLVar5 = logger::default_logger();
                pLVar5->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/shaderlib/"
                            "ShaderSourceProvider.cpp",
                            94, "Raw Resource file not found at %s", pcVar2);
                pcVar2 = (char*)GetResourceInline(shaderResource);
                (anonymous namespace)::ConvertEncodedShader(&result, pcVar2);
            } else {
                auto result;
                local_3c8.seek(0, 2, nullptr);
                arg2 = local_3c8.tell();
                if ((int)arg2 < 1) {
                    pLVar5 = logger::default_logger();
                    pLVar5->Log(false, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "shaderlib/ShaderSourceProvider.cpp",
                                87, "Raw Resource file has 0 length at %s", pcVar2);
                    pcVar2 = (char*)GetResourceInline(shaderResource);
                    (anonymous namespace)::ConvertEncodedShader(&local_3e0, pcVar2);
                    result = local_3e0;
                } else {
                    result.resize((long)(int)arg2);
                    local_3c8.seek(0, 0, nullptr);
                    pcVar2 = (char*)(result)[0];
                    local_3c8.read(pcVar2, arg2, 0, nullptr);
                }
            }
        } else {
            pcVar2 = (char*)GetResourceInline(shaderResource);
            (anonymous namespace)::ConvertEncodedShader(&result, pcVar2);
        }
        return result;
    }

    // 0x100bb28f0
    char* GetShaderString(ShaderResource shaderResource) {
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>* basic_string;
        char* pcVar6;
        unsigned long in_RSI;

        basic_string = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)(*(
            (array<eastl::string, 119ul>*)(long)(int)shaderResource))[in_RSI];
        if (basic_string->empty() == '\0') {
            pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        } else {
            GetRawResourceData(&local_70, shaderResource);
            local_b8.basic_string<decltype(nullptr)>("// ");
            GetResourcePath(shaderResource);
            local_d0 + local_b8;
            local_58 + local_d0;
            local_88 + local_58;
            local_70 = local_88;
            iVar3 = 0;
            local_34 = 0;
            arg2 = extraout_RDX;
            do {
                lVar5 = local_70.find((char*)(long)local_34, arg2);
                if ((int)lVar5 == -1)
                    break;
                local_3c = iVar3;
                iVar3 = local_70.find('\"', (lVar5 << 32) + 34359738368 >> 32);
                iVar3 = iVar3 + 1;
                iVar4 = local_70.find('\"', (long)iVar3);
                local_88 = local_70.substr((long)iVar3, (long)(iVar4 - iVar3));
                new (&local_58) std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>();
                local_a0 = (unsigned long)((iVar4 - (int)lVar5) + 1);
                shaderResource_00 = 0;
                bVar8 = false;
                local_98 = lVar5;
                do {
                    pcVar6 = (char*)GetResourceFilename(shaderResource_00);
                    pcVar6 = (anonymous namespace)::ConvertEncodedResourceFilename<
                        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(&local_58, pcVar6);
                    local_d0.basic_string<decltype(nullptr)>(pcVar6);
                    bVar2 = &local_88 == &local_d0;
                    if (bVar2) {
                        pcVar6 = GetShaderString(shaderResource_00);
                        local_b8.basic_string<decltype(nullptr)>(pcVar6);
                        local_70.replace((lVar5 << 32) >> 32, local_a0, local_b8);
                        local_b8.~basic_string();
                        bVar8 = true;
                        local_34 = (int)local_98;
                    }
                    local_d0.~basic_string();
                    iVar3 = local_3c;
                    bVar9 = shaderResource_00 != 118;
                    shaderResource_00 = shaderResource_00 + 1;
                } while (!bVar2 && bVar9);
                if (!bVar8) {
                    uVar7 = local_88.c_str();
                    pcVar6 = (char*)GetResourceFilename(shaderResource);
                    pcVar6 = (anonymous namespace)::ConvertEncodedResourceFilename<
                        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(&local_58, pcVar6);
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "shaderlib/ShaderSourceProvider.cpp",
                                    144,
                                    "ShaderSourceProvider couldn\'t find resource to match include %s when building %s",
                                    uVar7, pcVar6);
                }
                local_58.~basic_string();
                local_88.~basic_string();
                iVar3 = iVar3 + 1;
                arg2 = extraout_RDX_00;
            } while (iVar3 != 100);
            pcVar6 = (char*)local_70.c_str();
            basic_string->assign(pcVar6);
            pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_70.~basic_string();
        }
        return pcVar6;))

// 0x100bb2ef0
auto GetCompletedShader(ShaderResource shaderResource, render::ShaderType shaderType)
{
            auto result;
            char* pcVar1;
            uint8_t local_130[280];

            if (shaderType == 35632) {
                new (local_130) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
                pcVar1 = GetShaderString(shaderResource);
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_130 + 16), pcVar1);
                result = local_130->str();
            } else {
                if (shaderType != 35633) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "shaderlib/ShaderSourceProvider.cpp",
                                    173, nullptr);
                }
                new (local_130) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
                pcVar1 = GetShaderString(shaderResource);
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_130 + 16), pcVar1);
                result = local_130->str();
            }
            return result;
        }

        // 0x100bb3070
        auto GetCompletedShader(ShaderResource shaderResource) {
            auto result;
            basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_40;

            basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_70;
            auto pcVar2 = GetResourceFilename(shaderResource);
            pcVar2 = (anonymous namespace)::ConvertEncodedResourceFilename<
                std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(
                (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_70, pcVar2);
            local_40.basic_string<decltype(nullptr)>(pcVar2);
            long lVar3 = local_40.size();
            auto local_58 = local_40.substr(lVar3 - 3, 18446744073709551615);
            bool bVar1 = &local_58 == ".fs";
            ShaderType shaderType = 35632;
            if (!bVar1) {
                lVar3 = local_40.size();
                local_58 = local_40.substr(lVar3 - 3, 18446744073709551615);
                bVar1 = &local_58 == ".vs";
                shaderType = 4294967295;
                if (bVar1) {
                    shaderType = 35633;
                }
            }
            GetCompletedShader(&result, shaderResource, shaderType);
            return result;
        }

        // 0x100bb3230
        void ClearResourceCache() {
            eastl::string* basic_string;
            unsigned long in_RSI;

            array<eastl::string, 119ul>* this_00 = nullptr;
            do {
                basic_string = (eastl::string*)(*this_00)[in_RSI];
                basic_string->clear();
                this_00 = this_00 + 1;
            } while (this_00 != (array<eastl::string, 119ul>*)119);
        }

        // 0x100bb3270
        void ForceFileLoading() {
            (anonymous namespace)::g_forceFileLoading = 1;
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/shaderlib/"
                      "ShaderSourceProvider.cpp",
                      208, "Forcing shaders to be loaded from disk. NXT_ROOT: %s",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR");
        }

    } // namespace jag::graphics::shadersourceprovider

    namespace jag::osrsgraphics::shadersourceprovider {
        // 0x1001c0d80
        char* GetShaderString(ShaderResource shaderResource) {
            basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>* basic_string;
            char* pcVar6;
            unsigned long in_RSI;

            basic_string = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)(*(
                (array<eastl::string, 11ul>*)(long)(int)shaderResource))[in_RSI];
            if (basic_string->empty() == '\0') {
                pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            } else {
                GetRawResourceData(&local_70, shaderResource);
                local_b8.basic_string<decltype(nullptr)>("// ");
                GetResourcePath(shaderResource);
                local_d0 + local_b8;
                local_58 + local_d0;
                local_88 + local_58;
                local_70 = local_88;
                iVar3 = 0;
                local_34 = 0;
                arg2 = extraout_RDX;
                do {
                    lVar5 = local_70.find((char*)(long)local_34, arg2);
                    if ((int)lVar5 == -1)
                        break;
                    local_3c = iVar3;
                    iVar3 = local_70.find('\"', (lVar5 << 32) + 34359738368 >> 32);
                    iVar3 = iVar3 + 1;
                    iVar4 = local_70.find('\"', (long)iVar3);
                    local_88 = local_70.substr((long)iVar3, (long)(iVar4 - iVar3));
                    new (&local_58) std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>();
                    local_a0 = (unsigned long)((iVar4 - (int)lVar5) + 1);
                    shaderResource_00 = 0;
                    bVar8 = false;
                    local_98 = lVar5;
                    do {
                        pcVar6 = (char*)GetResourceFilename(shaderResource_00);
                        pcVar6 = (anonymous namespace)::ConvertEncodedResourceFilename<
                            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(&local_58,
                                                                                                       pcVar6);
                        local_d0.basic_string<decltype(nullptr)>(pcVar6);
                        bVar2 = &local_88 == &local_d0;
                        if (bVar2) {
                            pcVar6 = GetShaderString(shaderResource_00);
                            local_b8.basic_string<decltype(nullptr)>(pcVar6);
                            local_70.replace((lVar5 << 32) >> 32, local_a0, local_b8);
                            local_b8.~basic_string();
                            bVar8 = true;
                            local_34 = (int)local_98;
                        }
                        local_d0.~basic_string();
                        iVar3 = local_3c;
                        bVar9 = shaderResource_00 != 10;
                        shaderResource_00 = shaderResource_00 + 1;
                    } while (!bVar2 && bVar9);
                    if (!bVar8) {
                        uVar7 = local_88.c_str();
                        pcVar6 = (char*)GetResourceFilename(shaderResource);
                        pcVar6 = (anonymous namespace)::ConvertEncodedResourceFilename<
                            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(&local_58,
                                                                                                       pcVar6);
                        LogAssertAlways(
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/shaderlib/"
                            "ShaderSourceProvider.cpp",
                            144, "ShaderSourceProvider couldn\'t find resource to match include %s when building %s",
                            uVar7, pcVar6);
                    }
                    local_58.~basic_string();
                    local_88.~basic_string();
                    iVar3 = iVar3 + 1;
                    arg2 = extraout_RDX_00;
                } while (iVar3 != 100);
                pcVar6 = (char*)local_70.c_str();
                basic_string->assign(pcVar6);
                pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_70.~basic_string();
            }
            return pcVar6;))

// 0x1001c4e70
auto GetRawResourceData(ShaderResource shaderResource)
{
                unsigned int arg2;
                long lVar4;
                Logger* pLVar5;
                ReturnValue local_3e0;
                ClientCompositeZone local_3c8;

                auto pcVar2 = GetResourcePath(shaderResource);
                Filename local_160(pcVar2);
                long lVar3 = local_160.GetLastModified();
                Filename local_290("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                   "shaderlib/ShaderSourceData.h");
                if (!(local_290.Exists())) {
                    lVar4 = datetools::GetCompilationDate();
                } else {
                    lVar4 = local_290.GetLastModified();
                }
                if (((anonymous namespace)::g_forceFileLoading == '\x01') || (lVar4 <= lVar3)) {
                    local_3c8 = File(&local_160, 2, nullptr);
                    if (!(local_3c8.IsValid())) {
                        pLVar5 = logger::default_logger();
                        pLVar5->Log(false, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "shaderlib/ShaderSourceProvider.cpp",
                                    94, "Raw Resource file not found at %s", pcVar2);
                        pcVar2 = (char*)GetResourceInline(shaderResource);
                        (anonymous namespace)::ConvertEncodedShader(&result, pcVar2);
                    } else {
                        auto result;
                        local_3c8.seek(0, 2, nullptr);
                        arg2 = local_3c8.tell();
                        if ((int)arg2 < 1) {
                            pLVar5 = logger::default_logger();
                            pLVar5->Log(false, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/shaderlib/ShaderSourceProvider.cpp",
                                        87, "Raw Resource file has 0 length at %s", pcVar2);
                            pcVar2 = (char*)GetResourceInline(shaderResource);
                            (anonymous namespace)::ConvertEncodedShader(&local_3e0, pcVar2);
                            result = local_3e0;
                        } else {
                            result.resize((long)(int)arg2);
                            local_3c8.seek(0, 0, nullptr);
                            pcVar2 = (char*)(result)[0];
                            local_3c8.read(pcVar2, arg2, 0, nullptr);
                        }
                    }
                } else {
                    pcVar2 = (char*)GetResourceInline(shaderResource);
                    (anonymous namespace)::ConvertEncodedShader(&result, pcVar2);
                }
                return result;
            }

            // 0x1001c5460
            auto GetCompletedShader(ShaderResource shaderResource, render::ShaderType shaderType) {
                auto result;
                char* pcVar1;
                uint8_t local_130[280];

                if (shaderType == 35632) {
                    new (local_130) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
                    pcVar1 = GetShaderString(shaderResource);
                    std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_130 + 16), pcVar1);
                    result = local_130->str();
                } else {
                    if (shaderType != 35633) {
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/shaderlib/ShaderSourceProvider.cpp",
                                        173, nullptr);
                    }
                    new (local_130) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
                    pcVar1 = GetShaderString(shaderResource);
                    std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_130 + 16), pcVar1);
                    result = local_130->str();
                }
                return result;
            }

            // 0x1001c5650
            void ClearResourceCache() {
                eastl::string* basic_string;
                unsigned long in_RSI;

                array<eastl::string, 11ul>* this_00 = nullptr;
                do {
                    basic_string = (eastl::string*)(*this_00)[in_RSI];
                    basic_string->clear();
                    this_00 = this_00 + 1;
                } while (this_00 != (array<eastl::string, 11ul>*)11);
            }

            // 0x1001c5690
            void ForceFileLoading() {
                (anonymous namespace)::g_forceFileLoading = 1;
                (logger::default_logger())
                    ->Log(false, 8,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/shaderlib/"
                          "ShaderSourceProvider.cpp",
                          208, "Forcing shaders to be loaded from disk. NXT_ROOT: %s",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR");
            }

        } // namespace jag::osrsgraphics::shadersourceprovider

        namespace jag::osrsgraphics {
            namespace {
                // 0x1001c5100
                auto ConvertEncodedShader(const char* str) {
                    vector<unsigned char, BucketAllocatorEASTL> local_30;
                    bool bVar1 = Base64::Instance()->DecodeString<eastl::vector<unsigned char, BucketAllocatorEASTL>>(
                        local_30, str);
                    if (bVar1) {
                        auto result;
                        bVar1 = ZipInflate<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>,
                                           eastl::vector<unsigned char, BucketAllocatorEASTL>>(&result, &local_30);
                        if (bVar1)
                            goto LAB_1001c5161;
                        result.~basic_string();
                    }
                    result.basic_string<decltype(nullptr)>("");
                LAB_1001c5161:
                    return result;
                }

            } // namespace (anonymous)

        } // namespace jag::osrsgraphics

        namespace jag::graphics {
            namespace {
                // 0x100bb2800
                auto ConvertEncodedShader(const char* str) {
                    vector<unsigned char, BucketAllocatorEASTL> local_30;
                    bool bVar1 = Base64::Instance()->DecodeString<eastl::vector<unsigned char, BucketAllocatorEASTL>>(
                        local_30, str);
                    if (bVar1) {
                        auto result;
                        bVar1 = ZipInflate<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>,
                                           eastl::vector<unsigned char, BucketAllocatorEASTL>>(&result, &local_30);
                        if (bVar1)
                            goto LAB_100bb2861;
                        result.~basic_string();
                    }
                    result.basic_string<decltype(nullptr)>("");
                LAB_100bb2861:
                    return result;
                }

            } // namespace (anonymous)

        } // namespace jag::graphics

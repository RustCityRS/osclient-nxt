// libs/hal/render/shaders/OGL/ShaderUtils_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

namespace jag::render {
    // 0x100bf24f0
    unsigned long CreateShaderFromSourceString(const char* str, ShaderType shaderType, unsigned char arg3) {
        void* pcVar1;
        basic_istream<char, std::char_traits<char> _>* pbVar4;
        basic_ostream<char, std::char_traits<char> _>* pbVar5;
        char* str_00;
        uint64_t uVar6;
        Logger* pLVar7;
        uint64_t uVar8;
        uint64_t uVar9;
        unsigned int arg2;
        uint64_t in_register_00000011;
        int iVar11;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_2b8;
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_1a0;
        basic_ostream<char, std::char_traits<char> _> local_190;
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_88;
        ReturnValue local_70;
        uint32_t local_4c;
        unique_ptr<char[]> local_48[12];
        unsigned int local_38;
        int local_34;

        char* local_58 = str;
        if (str == nullptr) {
            LogAssert("pShaderSourceStr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderUtils_OGL.cpp",
                      13, nullptr);
        }
        int local_3c = 0;
        unsigned int uVar3 = (*___glewCreateShader)(shaderType);
        unsigned long uVar10 = 0;
        CheckGlErrorInternal("glCreateShader",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                             "OGL/ShaderUtils_OGL.cpp",
                             17);
        if (uVar3 == 0) {
            pLVar7 = logger::default_logger();
            pLVar7->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                        "ShaderUtils_OGL.cpp",
                        20, "Failed to create shader program!");
        } else {
            local_4c = (uint32_t)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg3);
            (*___glewShaderSource)(uVar3, 1, &local_58, 0);
            CheckGlErrorInternal("glShaderSource",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderUtils_OGL.cpp",
                                 25);
            (*___glewCompileShader)(uVar3);
            CheckGlErrorInternal("glCompileShader",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderUtils_OGL.cpp",
                                 27);
            (*___glewGetShaderiv)(uVar3, 35713, &local_3c);
            CheckGlErrorInternal("glGetShaderiv",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "shaders/OGL/ShaderUtils_OGL.cpp",
                                 29);
            if (local_3c == 0) {
                local_34 = 0;
                (*___glewGetShaderiv)(uVar3, 35716, &local_34);
                CheckGlErrorInternal("glGetShaderiv",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderUtils_OGL.cpp",
                                     34);
                if (1 < local_34) {
                    local_1a0.basic_string<decltype(nullptr)>(local_58);
                    local_2b8 = std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>(
                        &local_1a0, arg2);
                    local_38 = uVar3;
                    local_88 = std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>();
                    local_1a0 = std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>();
                    iVar11 = 1;
                    while (true) {
                        pbVar4 =
                            std::getline<char, std::char_traits<char>, BucketAllocatorSTL<char>>(local_2b8, local_88);
                        if (((pbVar4 + *(long*)(*(long*)pbVar4 - 24)))->operator_cast_to_bool() == '\0')
                            break;
                        pbVar5 = std::operator<<(&local_190, "Line ");
                        pbVar5 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<(
                            (ostream*)pbVar5, iVar11);
                        pbVar5 = std::operator<<(pbVar5, ": ");
                        pbVar5 = std::operator<<(pbVar5, &local_88);
                        iVar11 = iVar11 + 1;
                        std::operator<<(pbVar5, "\n");
                    }
                    str_00 = (char*)operator_new__((long)local_34 + 1);
                    local_48->unique_ptr<char*, true, void, void>(str_00);
                    uVar6 = local_48->get();
                    ___bzero(uVar6, (long)local_34 + 1);
                    iVar11 = local_34;
                    pcVar1 = ___glewGetShaderInfoLog;
                    uVar6 = local_48->get();
                    (*pcVar1)(local_38, iVar11, 0, uVar6);
                    CheckGlErrorInternal("glGetShaderInfoLog",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/shaders/OGL/ShaderUtils_OGL.cpp",
                                         51);
                    pLVar7 = logger::default_logger();
                    uVar6 = local_48->get();
                    local_70 = local_1a0.str();
                    uVar8 = local_70.c_str();
                    uVar9 = local_48->get();
                    pLVar7->Log(false, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "shaders/OGL/ShaderUtils_OGL.cpp",
                                53, "Error compiling shader:\n%s\n%s\n\n%s\n", uVar6, uVar8, uVar9);
                    uVar3 = local_38;
                    if ((~(uint8_t)local_4c & 3) != 0) {
                        pLVar7 = logger::default_logger();
                        pLVar7->Log(false, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "shaders/OGL/ShaderUtils_OGL.cpp",
                                    58, "Continue execution to try again with the latest shader file source", uVar6,
                                    uVar8, uVar9);
                        pcVar1 = (void (*)(...))swi(3);
                        uVar10 = (*pcVar1)();
                        return uVar10;
                    }
                }
                uVar10 = 0;
                (*___glewDeleteShader)(uVar3);
                CheckGlErrorInternal("glDeleteShader",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderUtils_OGL.cpp",
                                     66);
            } else {
                uVar10 = (unsigned long)uVar3;
            }
        }
        return uVar10;
    }

} // namespace jag::render

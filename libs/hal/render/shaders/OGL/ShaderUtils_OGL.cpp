// libs/hal/render/shaders/OGL/ShaderUtils_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

namespace jag::render {
    // 0x100bf24f0, 1072 bytes, placed by __FILE__ string
    // CreateShaderFromSourceString(char const*, ShaderType, unsigned char)
    ulong CreateShaderFromSourceString(char* param_1, undefined4 param_2, undefined4 param_3) {
        code* pcVar1;
        bool bVar2;
        uint uVar3;
        istream* piVar4;
        ostream* poVar5;
        char* pcVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        undefined8 uVar10;
        ulong uVar11;
        int iVar12;
        basic_string local_2b8[280];
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_1a0[16];
        ostream local_190[264];
        basic_string local_88[24];
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_70[24];
        char* local_58;
        unique_ptr<char[], std::default_delete<char[]>> local_48[12];
        int local_3c;
        uint local_38;
        int local_34;

        local_58 = param_1;
        if (param_1 == (char*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pShaderSourceStr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/OGL/"
                      "ShaderUtils_OGL.cpp",
                      13, (char*)0);
        }
        local_3c = 0;
        uVar3 = (*___glewCreateShader)(param_2);
        uVar11 = 0;
        CheckGlErrorInternal("glCreateShader",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                             "OGL/ShaderUtils_OGL.cpp",
                             17);
        if (uVar3 == 0) {
            uVar7 = logger::default_logger();
            logger::Logger::Log(uVar7, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "shaders/OGL/ShaderUtils_OGL.cpp",
                                20, "Failed to create shader program!");
        } else {
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
                    std::basic_string<char, std::char_traits<char>,
                                      BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(local_1a0, local_58);
                    std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(
                        local_2b8, (uint)local_1a0);
                    local_38 = uVar3;
                    std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(local_1a0);
                    std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string();
                    new (local_1a0) std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>();
                    iVar12 = 1;
                    while (true) {
                        piVar4 = std::getline<char, std::char_traits<char>, BucketAllocatorSTL<char>>(
                            (istream*)local_2b8, local_88);
                        bVar2 = ((piVar4 + *(long*)(*(long*)piVar4 + -24)))->operator_cast_to_bool();
                        if (!bVar2)
                            break;
                        poVar5 = std::operator<<(local_190, "Line ");
                        poVar5 = (ostream*)std::ostream::operator<<(poVar5, iVar12);
                        poVar5 = std::operator<<(poVar5, ": ");
                        poVar5 = std::operator<<(poVar5, local_88);
                        iVar12 = iVar12 + 1;
                        std::operator<<(poVar5, "\n");
                    }
                    pcVar6 = operator_new__((long)local_34 + 1);
                    std::unique_ptr<char[], std::default_delete<char[]>>::unique_ptr<char*, true, void, void>(local_48,
                                                                                                              pcVar6);
                    uVar7 = std::unique_ptr<char[], std::default_delete<char[]>>::get(local_48);
                    ___bzero(uVar7, (long)local_34 + 1);
                    iVar12 = local_34;
                    pcVar1 = ___glewGetShaderInfoLog;
                    uVar7 = std::unique_ptr<char[], std::default_delete<char[]>>::get(local_48);
                    (*pcVar1)(local_38, iVar12, 0, uVar7);
                    CheckGlErrorInternal("glGetShaderInfoLog",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/shaders/OGL/ShaderUtils_OGL.cpp",
                                         51);
                    uVar7 = logger::default_logger();
                    uVar8 = std::unique_ptr<char[], std::default_delete<char[]>>::get(local_48);
                    std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_70);
                    uVar9 = local_70->c_str();
                    uVar10 = std::unique_ptr<char[], std::default_delete<char[]>>::get(local_48);
                    logger::Logger::Log(uVar7, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/shaders/OGL/ShaderUtils_OGL.cpp",
                                        53, "Error compiling shader:\n%s\n%s\n\n%s\n", uVar8, uVar9, uVar10);
                    local_70->~basic_string();
                    uVar3 = local_38;
                    if ((~(byte)param_3 & 3) != 0) {
                        uVar7 = logger::default_logger();
                        logger::Logger::Log(uVar7, 0, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "render/shaders/OGL/ShaderUtils_OGL.cpp",
                                            58, "Continue execution to try again with the latest shader file source",
                                            uVar8, uVar9, uVar10);
                        pcVar1 = (code*)swi(3);
                        uVar11 = (*pcVar1)();
                        return uVar11;
                    }
                    std::unique_ptr<char[], std::default_delete<char[]>>::~unique_ptr(local_48);
                    local_1a0->~basic_stringstream();
                    local_88->~basic_string();
                    local_2b8->~basic_stringstream();
                }
                uVar11 = 0;
                (*___glewDeleteShader)(uVar3);
                CheckGlErrorInternal("glDeleteShader",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "shaders/OGL/ShaderUtils_OGL.cpp",
                                     66);
            } else {
                uVar11 = (ulong)uVar3;
            }
        }
        return uVar11;
    }

} // namespace jag::render

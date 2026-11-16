// libs/jtl/StringUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::option {
    class IScriptOption {
    public:
        // virtual methods in vtable order
        virtual ~IScriptOption();
        int GetId() const;
        IScriptOption(int);

        // data members, from how the methods use this: 16 bytes
        undefined* field_0; // offset 0, vtable pointer
        int m_id;           // offset 8
        char _unknown_12[4];
    };

    // 0x100024170, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // IScriptOption::GetId() const
    /* game::console::CommandLine::GetPos() const */

    uint game::console::CommandLine::GetPos() {
        return m_pos;
    }

} // namespace jag::oldscape::option

namespace jag::game {
    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    int Triangulate::SourcePoint::GetIndex() const;

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    uint EnvFogSettings::GetFogDepth() const;

} // namespace jag::game

namespace jag {
    // 0x100023fe0, 128 bytes, inline, placed by debug map only (low confidence)
    // eastl::string to_lower<eastl::string >(eastl::string const&)
    basic_string* to_lower<eastl::string>(basic_string* param_1) {
        ulong uVar1;
        char* pcVar2;
        char* pcVar3;
        char* pcVar4;

        new (param_1) eastl::string();
        uVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        param_1->resize(uVar1);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::transform<char*, char*, char (*)(char)>(pcVar2, pcVar3, pcVar4, (_func_char_char*)PTR_tolower_100ee6838);
        return param_1;
    }

} // namespace jag

namespace jag::render {
    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    uint QueryView::GetSubQueryCount() const;

} // namespace jag::render

namespace jag::graphics {
    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    uint ScriptedPointLight::GetRGB() const;

} // namespace jag::graphics

// libs/jtl/StringUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::option {
    class IScriptOption {
    public:
        // virtual methods in vtable order
        virtual ~IScriptOption();
        int GetId() const;
        IScriptOption(int arg1);

    private:
        int m_id;
        uint8_t _unknown_12[4];
    };

    // 0x100024170
    int IScriptOption::GetId() const {
        return m_pos;
    }

} // namespace jag::oldscape::option

namespace jag::game {
    // 0x100024170: Triangulate::SourcePoint::GetIndex() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x100024170: EnvFogSettings::GetFogDepth() const has the same machine code as oldscape::option::IScriptOption::GetId() const

} // namespace jag::game

namespace jag {
    // 0x100023fe0
    eastl::string to_lower<eastl::string>(const eastl::string& str) {
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* in_RSI;

        new (str) eastl::string();
        str.resize(in_RSI->size());
        char* str1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        char* str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        char* str3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::transform<char*, char*, char (*)(char)>(str1, str2, str3, PTR_tolower_100ee6838);
        return str;
    }

} // namespace jag

namespace jag::render {
    // 0x100024170: QueryView::GetSubQueryCount() const has the same machine code as oldscape::option::IScriptOption::GetId() const

} // namespace jag::render

namespace jag::graphics {
    // 0x100024170: ScriptedPointLight::GetRGB() const has the same machine code as oldscape::option::IScriptOption::GetId() const

} // namespace jag::graphics

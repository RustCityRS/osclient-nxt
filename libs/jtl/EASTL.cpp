// libs/jtl/EASTL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.jtl

// 0x100cb6760
void Vsnprintf8(char* str1, unsigned long arg2, const char* str2, __va_list_tag* va_list_tag) {
    _vsnprintf(str1, arg2, str2, va_list_tag);
}

// 0x100cb6770
void EA::StdC::Vsnprintf(char* str1, unsigned long arg2, const char* str2, __va_list_tag* va_list_tag) {
    jag::LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EASTL.cpp", 32,
                         nullptr);
}

namespace EA {
    class StdC {
    public:
        void Vsnprintf(char* str1, unsigned long arg2, const char* str2, __va_list_tag* va_list_tag);
    };

} // namespace EA

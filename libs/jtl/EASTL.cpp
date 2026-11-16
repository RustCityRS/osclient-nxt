// libs/jtl/EASTL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.jtl

// 0x100cb6760, 16 bytes, placed by debug map only (low confidence)
// Vsnprintf8(char*, unsigned long, char const*, __va_list_tag*)
void Vsnprintf8(char* param_1, ulong param_2, char* param_3, __va_list_tag* param_4) {
    _vsnprintf(param_1, param_2, param_3, param_4);
}

// 0x100cb6770, 32 bytes, placed by debug map only (low confidence)
// EA::StdC::Vsnprintf(char*, unsigned long, char const*, __va_list_tag*)
void EA::StdC::Vsnprintf(char* param_1, ulong param_2, char* param_3, __va_list_tag* param_4) {
    /* WARNING: Subroutine does not return */
    jag::LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EASTL.cpp", 32,
                         (char*)0);
}

namespace EA {
    class StdC {
    public:
        void Vsnprintf(char*, unsigned long, char const*, __va_list_tag*);
    };

} // namespace EA

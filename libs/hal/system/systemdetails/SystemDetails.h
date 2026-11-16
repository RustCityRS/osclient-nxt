// libs/hal/system/systemdetails/SystemDetails.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class SystemDetails {
    public:
        void GetDeepLinkingValueForKey<eastl::string>(const eastl::string& str1, const char* str2, eastl::string& str3);
        void GetDeepLinkingValuesForKey<int>(const eastl::string& str1, const char* str2, eastl::vector<int>& arg3);
        void GetLanguageCode(eastl::string& str);
        void GetBundleParameter(const eastl::string& str1, eastl::string& str2);
        bool SetTargetEnvironmentVariable(const char* str1, const char* str2);
        unsigned long GetTargetEnvironmentVariable(const char* str1, eastl::string& str2);
        auto GetDeepLink();
    };

    // 0x1000c6ec0
    void SystemDetails::GetDeepLinkingValueForKey<eastl::string>(const eastl::string& str1, const char* str2,
                                                                 eastl::string& str3) {
        pair<eastl::string const, eastl::string const>* ppVar2;
        pair<eastl::string const, eastl::string const>* ppVar3;
        vector<eastl::pair<eastl::stringconst, eastl::stringconst>> local_48;

        char* local_28 = str2;
        if (str1.empty() == '\0') {
            local_48 = eastl::vector<eastl::pair<eastl::stringconst, eastl::stringconst>>();
            Web::ParseKeyValueParams(str1, local_48);
            ppVar2 = (pair<eastl::string const, eastl::string const>*)local_48.HeapBeginPtr();
            ppVar3 = (pair<eastl::string const, eastl::string const>*)local_48.end();
            ppVar2 = eastl::find_if<eastl::pair<eastl::stringconst, eastl::stringconst>*,
                                    SystemDetails::GetDeepLinkingValueForKey<eastl::string>(
                                        *(eastl::stringconst&), char const*,
                                        *(eastl::string&))::_lambda(eastl::pair<eastl::string, eastl::string>) _1_>(
                ppVar2, ppVar3, (_lambda_eastl__pair<eastl::string, eastl::string_> __1_*)&local_28);
            ppVar3 = (pair<eastl::string const, eastl::string const>*)local_48.end();
            if (ppVar2 != ppVar3) {
                FromString<eastl::string, eastl::string>((eastl::string*)(ppVar2 + 32), str3, 10);
            }
        }
    }

    // 0x1000e2b40
    void SystemDetails::GetDeepLinkingValuesForKey<int>(const eastl::string& str1, const char* str2,
                                                        eastl::vector<int>& arg3) {
        pair<eastl::string const, eastl::string const>* ppVar2;
        pair<eastl::string const, eastl::string const>* ppVar3;
        fixed_string<char, _64>* str;
        fixed_string<char, _64>* pfVar4;
        vector<eastl::pair<eastl::stringconst, eastl::stringconst>> local_438;
        int local_414;
        fixed_string<char, 64> local_408;
        fixed_vector<eastl::fixed_string<char, 64>, 8ul> local_3a0;

        char* local_410 = str2;
        if (str1.empty() == '\0') {
            local_438 = eastl::vector<eastl::pair<eastl::stringconst, eastl::stringconst>>();
            Web::ParseKeyValueParams(str1, local_438);
            ppVar2 = (pair<eastl::string const, eastl::string const>*)local_438.HeapBeginPtr();
            ppVar3 = (pair<eastl::string const, eastl::string const>*)local_438.end();
            ppVar2 =
                eastl::find_if<eastl::pair<eastl::stringconst, eastl::stringconst>*,
                               SystemDetails::GetDeepLinkingValuesForKey<int>(
                                   *(eastl::stringconst&), char const*,
                                   *(eastl::vector<int>&))::_lambda(eastl::pair<eastl::string, eastl::string>) _1_>(
                    ppVar2, ppVar3, (_lambda_eastl__pair<eastl::string, eastl::string_> __1_*)&local_410);
            ppVar3 = (pair<eastl::string const, eastl::string const>*)local_438.end();
            if (ppVar2 != ppVar3) {
                local_3a0 = eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>();
                tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>, eastl::fixed_string<char, 2048>>(
                    &local_3a0, (fixed_string<char, _1024>*)(ppVar2 + 32), ",", -1);
                str = (fixed_string<char, _64>*)local_3a0.HeapBeginPtr();
                pfVar4 = (fixed_string<char, _64>*)local_3a0.end();
                if (str != pfVar4) {
                    local_408 = eastl::fixed_string<char, 64>(str);
                    FromString<eastl::fixed_string<char, 64>, int>(&local_408, &local_414, 10);
                    arg3.push_back(local_414);
                }
            }
        }
    }

} // namespace jag

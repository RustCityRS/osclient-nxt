// libs/hal/system/systemdetails/SystemDetails.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class SystemDetails {
    public:
        void GetDeepLinkingValueForKey<eastl::string>(eastl::string const&, char const*, eastl::string&);
        void GetDeepLinkingValuesForKey<int>(eastl::string const&, char const*, eastl::vector<int, eastl::allocator>&);
        GetLanguageCode(eastl::string&);
        GetBundleParameter(eastl::string const&, eastl::string&);
        bool SetTargetEnvironmentVariable(char const*, char const*);
        ulong GetTargetEnvironmentVariable(char const*, eastl::string&);
        SystemDetails* GetDeepLink();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1000c6ec0, 176 bytes, inline, placed by class name and debug map
    // void SystemDetails::GetDeepLinkingValueForKey<eastl::string >(eastl::string const&, char const*, eastl::string&)
    void SystemDetails::GetDeepLinkingValueForKey<eastl::string>(basic_string* param_1, char* param_2,
                                                                 basic_string* param_3) {
        char cVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        pair* ppVar4;
        pair* ppVar5;
        vector<eastl::pair<eastl::stringconst, eastl::stringconst>, eastl::allocator> local_48[32];
        char* local_28;

        local_28 = param_2;
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            eastl::vector<eastl::pair<eastl::stringconst, eastl::stringconst>, eastl::allocator>::vector(local_48);
            Web::ParseKeyValueParams(param_1, (vector*)local_48);
            uVar2 = local_48->HeapBeginPtr();
            uVar3 = local_48->end();
            ppVar4 = eastl::find_if<eastl::pair<eastl::stringconst, eastl::stringconst>*,
                                    SystemDetails::GetDeepLinkingValueForKey<eastl::string>(
                                        eastl::stringconst&, char const*,
                                        eastl::string&)::_lambda(eastl::pair<eastl::string, eastl::string>) _1_>(
                uVar2, uVar3, &local_28);
            ppVar5 = (pair*)local_48->end();
            if (ppVar4 != ppVar5) {
                FromString<eastl::string, eastl::string>((basic_string*)(ppVar4 + 32), param_3, 10);
            }
            eastl::vector<eastl::pair<eastl::stringconst, eastl::stringconst>, eastl::allocator>::~vector(local_48);
        }
    }

    // 0x1000e2b40, 448 bytes, inline, placed by class name
    // void SystemDetails::GetDeepLinkingValuesForKey<int>(eastl::string const&, char const*, eastl::vector<int, eastl::allocator>&)
    void SystemDetails::GetDeepLinkingValuesForKey<int>(basic_string* param_1, char* param_2, vector* param_3) {
        char cVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        pair* ppVar4;
        pair* ppVar5;
        fixed_string* pfVar6;
        fixed_string* pfVar7;
        vector<eastl::pair<eastl::stringconst, eastl::stringconst>, eastl::allocator> local_438[36];
        int local_414;
        char* local_410;
        fixed_string<char, 64, true, eastl::allocator> local_408[104];
        fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator> local_3a0[872];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_410 = param_2;
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            eastl::vector<eastl::pair<eastl::stringconst, eastl::stringconst>, eastl::allocator>::vector(local_438);
            Web::ParseKeyValueParams(param_1, (vector*)local_438);
            uVar2 = local_438->HeapBeginPtr();
            uVar3 = local_438->end();
            ppVar4 = eastl::find_if<
                eastl::pair<eastl::stringconst, eastl::stringconst>*,
                SystemDetails::GetDeepLinkingValuesForKey<int>(
                    eastl::stringconst&, char const*,
                    eastl::vector<int, eastl::allocator>&)::_lambda(eastl::pair<eastl::string, eastl::string>) _1_>(
                uVar2, uVar3, &local_410);
            ppVar5 = (pair*)local_438->end();
            if (ppVar4 != ppVar5) {
                eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                    eastl::allocator>::fixed_vector(local_3a0);
                tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                             eastl::allocator>,
                         eastl::fixed_string<char, 2048, true, eastl::allocator>>(
                    (fixed_vector*)local_3a0, (fixed_string*)(ppVar4 + 32), ",", -1);
                pfVar6 = (fixed_string*)local_3a0->HeapBeginPtr();
                pfVar7 = (fixed_string*)local_3a0->end();
                if (pfVar6 != pfVar7) {
                    eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_408, pfVar6);
                    FromString<eastl::fixed_string<char, 64, true, eastl::allocator>, int>((fixed_string*)local_408,
                                                                                           &local_414, 10);
                    param_3->push_back(&local_414);
                    /* WARNING: Subroutine does not return */
                    local_408->~fixed_string();
                }
                eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                    eastl::allocator>::~fixed_vector(local_3a0);
            }
            eastl::vector<eastl::pair<eastl::stringconst, eastl::stringconst>, eastl::allocator>::~vector(local_438);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10013b970, 32 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SystemDetails::GetDeepLinkingValueForKey<eastl::string >(eastl::string const&, char const*, eastl::string&)::{lambda(eastl::pair<eastl::string, eastl::string >)#1}::operator()(eastl::pair<eastl::string, eastl::string >) const
    /* SystemDetails::GetDeepLinkingValuesForKey<int>(eastl::string
   const&, char const*, eastl::vector<int,
   eastl::allocator>&)::{lambda(eastl::pair<eastl::string,
   eastl::string
   >)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<eastl::string,
   eastl::string >) const */

    bool SystemDetails::GetDeepLinkingValuesForKey<int>(eastl::stringconst&, char const*,
                                                        eastl::vector<int, eastl::allocator>&)::{
        lambda(eastl::pair<eastl::string, eastl::string>) #1
    }
    ::operator()(_lambda_eastl__pair<eastl::string, eastl::string> __1_* this,
                 basic_string<char, BucketAllocatorEASTL>* param_2)

    {
        int iVar1;

        iVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::compare(param_2, (char*)**(undefined8**)this);
        return iVar1 == 0;
    }

} // namespace jag

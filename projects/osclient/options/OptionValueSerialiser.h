// projects/osclient/options/OptionValueSerialiser.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::option {
    template <typename...> // 5 instantiations, e.g. <bool>, <eastl::fixed_string<char, 256> >, <float>
    class OptionValueSerialiser {
    public:
        void StringToValue(const eastl::fixed_string<char, 256>& str);
        auto ValueToString(int arg1);
        OptionValueSerialiser<float>* ValueToString(float arg1);
        auto ValueToString(bool arg1);
        auto StringToValue(const eastl::fixed_string<char, 256>& str);
        OptionValueSerialiser<eastl::fixed_string<char, 256>>* ValueToString(const eastl::fixed_string<char, 256>& str);
        auto ValueToString(const WindowSavedPosition& windowSavedPosition);
    };

    // 0x10002d900
    void OptionValueSerialiser<int>::StringToValue(const eastl::fixed_string<char, 256>& str) {
        uint8_t in_AL;
        uint64_t in_register_00000001;

        uint64_t local_18 = (((uint64_t)in_register_00000001 << 8) | (uint8_t)in_AL);
        FromString<eastl::fixed_string<char, 64>, int>(str, (int*)&local_18, 10);
        local_18 = (((uint64_t)1 << 56) | (uint64_t)((uint64_t)local_18));
        std::make_tuple<bool, int&>(*((bool*)((long)&local_18 + 7)), local_18);
    }

    // 0x10002dba0
    auto OptionValueSerialiser<int>::ValueToString(int arg1) {
        auto result;
        ToText<256, true>(&result, arg1, 10);
        return result;
    }

    // 0x10002e5c0
    void OptionValueSerialiser<float>::StringToValue(const eastl::fixed_string<char, 256>& str) {
        uint8_t in_AL;
        uint64_t in_register_00000001;

        uint64_t local_18 = (((uint64_t)in_register_00000001 << 8) | (uint8_t)in_AL);
        FromString<eastl::fixed_string<char, 256>, float>(str, (float*)&local_18, 10);
        local_18 = (((uint64_t)1 << 56) | (uint64_t)((uint64_t)local_18));
        std::make_tuple<bool, float&>(*((bool*)((long)&local_18 + 7)), local_18);
    }

    // 0x10002e830
    OptionValueSerialiser<float>* OptionValueSerialiser<float>::ValueToString(float arg1) {
        new (this) eastl::fixed_string<char, 256>();
        ToText<256, true>((fixed_string<char, _256>*)this, arg1);
        return this;
    }

    // 0x100047aa0
    void OptionValueSerialiser<bool>::StringToValue(const eastl::fixed_string<char, 256>& str) {
        uint32_t in_EAX;
        uint32_t in_register_00000004;
        bool bVar3;

        uint64_t uStack_18 = (((uint64_t)in_register_00000004 << 32) | (uint32_t)in_EAX);
        char* pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        int iVar2 = _strcmp(pcVar1, "true");
        if (iVar2 == 0) {
            bVar3 = true;
        } else {
            pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            iVar2 = eastl::stoi(pcVar1, 10);
            bVar3 = iVar2 == 1;
        }
        uStack_18 = (((uint64_t)1 << 56) | (uint64_t)((((uint64_t)bVar3 << 48) | (uint64_t)((uint64_t)uStack_18))));
        std::make_tuple<bool, bool const&>(*((bool*)((long)&uStack_18 + 7)), *((bool*)((long)&uStack_18 + 6)));
    }

    // 0x100047d00
    auto OptionValueSerialiser<bool>::ValueToString(bool arg1) {
        uint64_t in_register_00000031;

        auto result;
        ToText<256, true>(&result, (int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1), 10);
        return result;
    }

    // 0x1000491a0
    auto
    OptionValueSerialiser<eastl::fixed_string<char, 256>>::StringToValue(const eastl::fixed_string<char, 256>& str) {
        auto result;
        fixed_string<char, _256> local_11;

        std::make_tuple<bool, eastl::fixed_string<char, 256> const&>(result, local_11);
        return result;
    }

    // 0x100049410
    OptionValueSerialiser<eastl::fixed_string<char, 256>>*
    OptionValueSerialiser<eastl::fixed_string<char, 256>>::ValueToString(const eastl::fixed_string<char, 256>& str) {
        new (this) eastl::fixed_string<char, 256>(str);
        return this;
    }

    // 0x100049940
    auto OptionValueSerialiser<WindowSavedPosition>::StringToValue(const eastl::fixed_string<char, 256>& str) {
        auto result;

        Array<unsigned char> local_40;
        auto base64 = Base64::Instance();
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint8_t local_21 = base64->DecodeString<Array<unsigned char>>(local_40, str_00);
        VBOMapper local_60(&local_40);
        WindowSavedPosition local_80(local_60);
        std::make_tuple<bool&, WindowSavedPosition&>(result, local_21);
        return result;
    }

    // 0x100049f70
    auto OptionValueSerialiser<WindowSavedPosition>::ValueToString(const WindowSavedPosition& windowSavedPosition) {
        eastl::string local_40;
        auto arg2 = windowSavedPosition.GetDataPtr();
        unsigned long uVar1 = windowSavedPosition.GetTextureAtlas();
        Base64::Instance()->Encode(local_40, arg2, uVar1);
        auto result;
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar1 = local_40.size();
        result.assign(str, uVar1);
        return result;
    }

} // namespace jag::oldscape::option

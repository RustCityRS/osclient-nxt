// projects/osclient/options/OptionValueSerialiser.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::option {
    template <
        typename...> // 5 instantiations, e.g. <bool>, <eastl::fixed_string<char, 256, true, eastl::allocator> >, <float>
    class OptionValueSerialiser {
    public:
        void StringToValue(eastl::fixed_string<char, 256, true, eastl::allocator> const&);
        OptionValueSerialiser<int>* ValueToString(int);
        OptionValueSerialiser<float>* ValueToString(float);
        OptionValueSerialiser<bool>* ValueToString(bool);
        fixed_string* StringToValue(eastl::fixed_string<char, 256, true, eastl::allocator> const&);
        OptionValueSerialiser<eastl::fixed_string<char, 256, true, eastl::allocator>>*
        ValueToString(eastl::fixed_string<char, 256, true, eastl::allocator> const&);
        OptionValueSerialiser<WindowSavedPosition>* ValueToString(WindowSavedPosition const&);
    };

    // 0x10002d900, 48 bytes, inline, placed by class name and debug map
    // OptionValueSerialiser<int>::StringToValue(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    void OptionValueSerialiser<int>::StringToValue(fixed_string* param_1) {
        undefined1 in_AL;
        undefined7 in_register_00000001;
        undefined8 local_18;

        local_18 = CONCAT71(in_register_00000001, in_AL);
        FromString<eastl::fixed_string<char, 64, true, eastl::allocator>, int>(param_1, (int*)&local_18, 10);
        local_18 = CONCAT17(1, (undefined7)local_18);
        std::make_tuple<bool, int&>((bool*)((long)&local_18 + 7), (int*)&local_18);
    }

    // 0x10002dba0, 64 bytes, inline, placed by class name
    // OptionValueSerialiser<int>::ValueToString(int)
    OptionValueSerialiser<int>* OptionValueSerialiser<int>::ValueToString(int param_1) {
        new (this) eastl::fixed_string<char, 256, true, eastl::allocator>();
        ToText<256, true>((fixed_string*)this, param_1, 10);
        return this;
    }

    // 0x10002e5c0, 48 bytes, inline, placed by class name
    // OptionValueSerialiser<float>::StringToValue(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    void OptionValueSerialiser<float>::StringToValue(fixed_string* param_1) {
        undefined1 in_AL;
        undefined7 in_register_00000001;
        undefined8 local_18;

        local_18 = CONCAT71(in_register_00000001, in_AL);
        FromString<eastl::fixed_string<char, 256, true, eastl::allocator>, float>(param_1, (float*)&local_18, 10);
        local_18 = CONCAT17(1, (undefined7)local_18);
        std::make_tuple<bool, float&>((bool*)((long)&local_18 + 7), (float*)&local_18);
    }

    // 0x10002e830, 80 bytes, inline, placed by class name
    // OptionValueSerialiser<float>::ValueToString(float)
    OptionValueSerialiser<float>* OptionValueSerialiser<float>::ValueToString(float param_1) {
        new (this) eastl::fixed_string<char, 256, true, eastl::allocator>();
        ToText<256, true>((fixed_string*)this, param_1);
        return this;
    }

    // 0x100047aa0, 96 bytes, inline, placed by class name
    // OptionValueSerialiser<bool>::StringToValue(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    void OptionValueSerialiser<bool>::StringToValue(fixed_string* param_1) {
        char* pcVar1;
        undefined4 in_EAX;
        int iVar2;
        undefined4 in_register_00000004;
        bool bVar3;
        undefined8 uStack_18;

        uStack_18 = CONCAT44(in_register_00000004, in_EAX);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        iVar2 = _strcmp(pcVar1, "true");
        if (iVar2 == 0) {
            bVar3 = true;
        } else {
            pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            iVar2 = eastl::stoi(pcVar1, 10);
            bVar3 = iVar2 == 1;
        }
        uStack_18 = CONCAT17(1, CONCAT16(bVar3, (undefined6)uStack_18));
        std::make_tuple<bool, bool const&>((bool*)((long)&uStack_18 + 7), (bool*)((long)&uStack_18 + 6));
    }

    // 0x100047d00, 64 bytes, inline, placed by class name
    // OptionValueSerialiser<bool>::ValueToString(bool)
    OptionValueSerialiser<bool>* OptionValueSerialiser<bool>::ValueToString(bool param_1) {
        undefined7 in_register_00000031;

        new (this) eastl::fixed_string<char, 256, true, eastl::allocator>();
        ToText<256, true>((fixed_string*)this, (int)CONCAT71(in_register_00000031, param_1), 10);
        return this;
    }

    // 0x1000491a0, 48 bytes, inline, placed by class name
    // OptionValueSerialiser<eastl::fixed_string<char, 256, true, eastl::allocator> >::StringToValue(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    fixed_string* OptionValueSerialiser<eastl::fixed_string<char, 256, true, eastl::allocator>>::StringToValue(
        fixed_string* param_1) {
        fixed_string local_11;

        std::make_tuple<bool, eastl::fixed_string<char, 256, true, eastl::allocator> const&>((bool*)param_1, &local_11);
        return param_1;
    }

    // 0x100049410, 32 bytes, inline, placed by class name
    // OptionValueSerialiser<eastl::fixed_string<char, 256, true, eastl::allocator> >::ValueToString(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    OptionValueSerialiser<eastl::fixed_string<char, 256, true, eastl::allocator>>*
    OptionValueSerialiser<eastl::fixed_string<char, 256, true, eastl::allocator>>::ValueToString(
        OptionValueSerialiser<eastl::fixed_string<char, 256, true, eastl::allocator>>* this, fixed_string* param_1) {
        new (this) eastl::fixed_string<char, 256, true, eastl::allocator>(param_1);
        return this;
    }

    // 0x100049940, 208 bytes, inline, placed by class name
    // OptionValueSerialiser<WindowSavedPosition>::StringToValue(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    fixed_string* OptionValueSerialiser<WindowSavedPosition>::StringToValue(fixed_string* param_1) {
        Base64* this;
        char* pcVar1;
        WindowSavedPosition local_80;
        VBOMapper local_60;
        Array<unsigned char, eastl::allocator> local_40[31];
        undefined1 local_21;

        Array<unsigned char, eastl::allocator>::Array(local_40);
        this = (Base64*)Base64::Instance();
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_21 = Base64::DecodeString<Array<unsigned char, eastl::allocator>>(this, (Array*)local_40, pcVar1);
        new (&local_60) PacketT<Array<unsigned char, eastl::allocator>>(local_40);
        new (&local_80) WindowSavedPosition((PacketT*)&local_60);
        local_60.~VBOMapper();
        std::make_tuple<bool&, WindowSavedPosition&>((bool*)param_1, (WindowSavedPosition*)&local_21);
        local_80.~WindowSavedPosition();
        local_40->~Array();
        return param_1;
    }

    // 0x100049f70, 176 bytes, inline, placed by class name
    // OptionValueSerialiser<WindowSavedPosition>::ValueToString(WindowSavedPosition const&)
    OptionValueSerialiser<WindowSavedPosition>*
    OptionValueSerialiser<WindowSavedPosition>::ValueToString(WindowSavedPosition* param_1) {
        uchar* puVar1;
        ulong uVar2;
        Base64* this_00;
        char* pcVar3;
        eastl::string local_40[32];

        eastl::string::basic_string(local_40);
        puVar1 = (uchar*)param_1->GetDataPtr();
        uVar2 = param_1->GetTextureAtlas();
        this_00 = (Base64*)Base64::Instance();
        this_00->Encode(local_40, puVar1, uVar2);
        new (this) eastl::fixed_string<char, 256, true, eastl::allocator>();
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        assign(pcVar3, uVar2);
        eastl::string::~basic_string(local_40);
        return this;
    }

} // namespace jag::oldscape::option

// libs/graphics/runetek7/animation/asm/VariableList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class VariableList {
    public:
        VariableList();
        ~VariableList();
        long size() const;
        void AddUintVariable(const char* str, unsigned int arg2, unsigned int arg3, unsigned int arg4);
        void HasUintVariable(const char* str) const;
        void SetUintVariable(const char* str, unsigned int arg2);
        bool HasVariable(const char* str) const;
        void GetUintVariable(const char* str);
        void AddFloatVariable(const char* str, float arg2, float arg3, float arg4);
        float* GetFloatVariable(const char* str);
        void HasFloatVariable(const char* str) const;

    private:
        long field_0;
        long field_8;
        uint8_t _unknown_16[112];
    };

    // 0x1003f2cc0
    long VariableList::size() const {
        long lVar1 = size();
        return field_40.size() + lVar1;
    }

    // 0x1003f2cf0
    void VariableList::AddUintVariable(const char* str, unsigned int arg2, unsigned int arg3, unsigned int arg4) {

        fixed_string<char, 16> local_68(str);
        count(local_68);
    }

    // 0x1003f6ab0
    void VariableList::HasUintVariable(const char* str) const {

        fixed_string<char, 16> local_58(str);
        count(local_58);
    }

    // 0x1003f6b30
    void VariableList::SetUintVariable(const char* str, unsigned int arg2) {

        fixed_string<char, 16> local_68(str);
        count(local_68);
    }

    // 0x1003feae0
    VariableList::VariableList() : eastl::vector_map<eastl::fixed_string<char, 16>, unsigned int>() {
        reserve(32);
        field_40.reserve(32);
        field_80.reserve(32);
        field_120.reserve(32);
    }

    // 0x1003ffd30
    VariableList::~VariableList() {
        field_120.~vector_map();
        field_80.~vector_map();
        field_40.~vector_map();
    }

    // 0x10095a920
    bool VariableList::HasVariable(const char* str) const {
        bool cVar1 = HasUintVariable(str);
        uint32_t uVar2 = 1;
        if (!cVar1) {
            uVar2 = HasFloatVariable(str);
        }
        return uVar2;
    }

    // 0x10095a950
    void VariableList::GetUintVariable(const char* str) {

        fixed_string<char, 16> local_60(str);
        count(local_60);
    }

    // 0x10095b760
    void VariableList::AddFloatVariable(const char* str, float arg2, float arg3, float arg4) {

        fixed_string<char, 16> local_68(str);
        field_40.count(local_68);
    }

    // 0x10095b940
    float* VariableList::GetFloatVariable(const char* str) {

        fixed_string<char, 16> local_60(str);
        field_40.count(local_60);
    }

    // 0x10095f3e0
    void VariableList::HasFloatVariable(const char* str) const {

        fixed_string<char, 16> local_58(str);
        field_40.count(local_58);
    }

} // namespace jag::graphics

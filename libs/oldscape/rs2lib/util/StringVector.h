// libs/oldscape/rs2lib/util/StringVector.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rs2lib {
    class StringVector {
    public:
        ~StringVector();
        void IsDirty() const;
        void MarkClean();
        StringVector();
        StringVector* operator=(const StringVector& stringVector);
        StringVector(const StringVector& stringVector);
        void Append(const eastl::string& str);
        void Append(eastl::string&& str);
        void AppendUnique(const eastl::string& str);
        unsigned long Contains(const eastl::string& str, bool arg2) const;
        void AppendUnique(eastl::string&& str);
        void AppendUniqueCaseInsensitive(const eastl::string& str);
        unsigned long ContainsCaseInsensitive(const eastl::string& str, bool arg2) const;
        void AppendUniqueCaseInsensitive(eastl::string&& str);
        void Insert(int arg1, const eastl::string& str);
        void Insert(int arg1, eastl::string&& str);
        void SetIndex(int arg1, const eastl::string& str);
        void SetIndex(int arg1, eastl::string&& str);
        auto GetIndex(int arg1) const;
        void Size() const;
        void Erase(const eastl::string& str);
        void EraseCaseInsensitive(const eastl::string& str);
        void EraseIndex(int arg1);
        void Clear();

    private:
        eastl::string* field_0;
        eastl::string* field_8;
        uint8_t _unknown_16[16];
        uint8_t field_32;
    };

    // 0x1001839c0
    StringVector* StringVector::operator=(const StringVector& stringVector) {
        *this = stringVector;
        field_32 = stringVector.field_32;
        return this;
    }

    // 0x100197ed0
    StringVector::StringVector(const StringVector& stringVector)
        : eastl::vector<eastl::string>(stringVector), field_32(stringVector.field_32) {}

    // 0x1001981d0
    StringVector::StringVector() : eastl::vector<eastl::string>(), field_32(0) {}

} // namespace jag::oldscape::rs2lib

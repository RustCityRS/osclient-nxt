// libs/oldscape/rs2lib/util/StringVector.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rs2lib {
    class StringVector {
    public:
        ~StringVector();
        IsDirty() const;
        MarkClean();
        StringVector();
        StringVector* operator=(StringVector const&);
        StringVector(StringVector const&);
        void Append(eastl::string const&);
        void Append(eastl::string&&);
        void AppendUnique(eastl::string const&);
        ulong Contains(eastl::string const&, bool) const;
        void AppendUnique(eastl::string&&);
        void AppendUniqueCaseInsensitive(eastl::string const&);
        ulong ContainsCaseInsensitive(eastl::string const&, bool) const;
        void AppendUniqueCaseInsensitive(eastl::string&&);
        void Insert(int, eastl::string const&);
        void Insert(int, eastl::string&&);
        void SetIndex(int, eastl::string const&);
        void SetIndex(int, eastl::string&&);
        GetIndex(int) const;
        void Size() const;
        void Erase(eastl::string const&);
        void EraseCaseInsensitive(eastl::string const&);
        void EraseIndex(int);
        void Clear();

        // data members, from how the methods use this: 33 bytes
        basic_string* field_0;  // offset 0
        eastl::string* field_8; // offset 8
        char _unknown_16[16];
        undefined1 field_32; // offset 32
    };

    // 0x1001838f0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // StringVector::StringVector(): jumps straight to the base-object constructor

    // 0x1001839c0, 48 bytes, inline, placed by class name and debug map
    // StringVector::operator=(StringVector const&)
    /* StringVector::TEMPNAMEPLACEHOLDERVALUE(StringVector
   const&) */

    StringVector* StringVector::operator=(StringVector* param_1) {
        eastl::vector<eastl::string, eastl::allocator>::operator=((vector<eastl::string, eastl::allocator>*)this,
                                                                  (vector*)param_1);
        field_32 = param_1->field_32;
        return this;
    }

    // 0x100197ec0, 16 bytes, complete-object constructor, inline, placed by class name
    // StringVector::StringVector(StringVector const&): jumps straight to the base-object constructor

    // 0x100197ed0, 32 bytes, base-object constructor, inline, placed by class name
    // StringVector::StringVector(StringVector const&)
    void StringVector::StringVector(StringVector* param_1) {
        new (this) eastl::vector<eastl::string, eastl::allocator>(param_1);
        field_32 = param_1->field_32;
    }

    // 0x1001981d0, 32 bytes, base-object constructor, inline, placed by class name
    // StringVector::StringVector()
    void StringVector::StringVector() {
        new (this) eastl::vector<eastl::string, eastl::allocator>();
        field_32 = 0;
    }

} // namespace jag::oldscape::rs2lib

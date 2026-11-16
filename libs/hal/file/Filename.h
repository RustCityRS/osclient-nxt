// libs/hal/file/Filename.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag {
    class Filename {
    public:
        ~Filename();
        Filename* operator+(eastl::string const&) const;
        void GetName(eastl::string&) const;
        Filename* operator+=(eastl::string const&);
        Filename* operator/(eastl::string const&) const;
        Filename(char const*);
        bool operator==(char const*) const;
        Filename(Filename const&);
        GetName() const;
        Filename* operator/(Filename const&) const;
        Filename();
        Filename* operator=(Filename&&);
        Filename(eastl::basic_string<char, BucketAllocatorEASTL> const&);
        Filename(eastl::string const&);
        bool operator!=(char const*) const;
        void operator/=(eastl::string const&);
        Filename* operator+(char const*) const;
        operator char const*() const;
        byte operator!=(Filename const&) const;
        Filename* operator=(Filename const&);
        bool operator==(Filename const&) const;
        Filename(Filename&&);
        Filename* operator+=(char const*);
        Filename* operator+=(Filename const&);
        void swap(Filename&);
        Filename(char const*, unsigned long);
        GetFile(char const*, unsigned long);
        Filename* GetFile() const;
        Filename* operator/(char const*) const;
        bool hasTrailingSlash() const;
        void operator/(wchar_t const*) const;
        Filename* operator/=(char const*);
        void operator/=(wchar_t const*);
        Filename* operator/=(Filename const&);
        GetParentPath() const;
        Remove(Error*) const;
        IsDirectory() const;
        bool RemoveDirectoryContents(Error*) const;
        ulong RemoveEmptyDirectory(Error*) const;
        ulong RemoveFile(Error*) const;
        Filename* SanitiseFileName(eastl::fixed_string<char, 260, true, eastl::allocator> const&);
        bool IsFile() const;
        GetLastModified() const;
        GetFileSize() const;
        GetAllFiles() const;
        ulong Exists() const;
        void CreateFolderForEveryone(Error*) const;
        ulong CreateDirectories(Error*) const;
        void SetErrorCode(int, Error*);
        ulong IsDirectoryEmpty() const;
        ulong Rename(Filename const&, Error*) const;
        ulong Copy(Filename const&, bool, Error*) const;
        long GetFolderSize() const;
        Filename<260, true>(eastl::fixed_string<char, 260, true, eastl::allocator> const&);
        bool IsSameFilesystem(Filename const&);
        bool ExcludeFromBackup() const;
        void IsEmpty() const;

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[8];
        undefined* field_8; // offset 8
    };

    // 0x1000e2ec0, 96 bytes, inline, placed by class name and debug map
    // Filename::operator+(eastl::string const&) const
    /* Filename::TEMPNAMEPLACEHOLDERVALUE(eastl::string const&) const
    */

    Filename* Filename::operator+(basic_string* param_1) {
        char* pcVar1;

        Filename(this);
        eastl::fixed_string<char, 32, true, eastl::allocator>::operator=(
            (fixed_string<char, 32, true, eastl::allocator>*)this, (fixed_string*)param_1);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>::
        operator+=(
            (basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>*)this,
            pcVar1);
        return this;
    }

    // 0x10014dc20, 32 bytes, inline, placed by class name
    // Filename::GetName(eastl::string&) const
    void Filename::GetName(basic_string* param_1) {
        char* pcVar1;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        param_1->assign(pcVar1);
    }

    // 0x100168420, 48 bytes, inline, placed by class name
    // Filename::operator+=(eastl::string const&)
    /* Filename::TEMPNAMEPLACEHOLDERVALUE(eastl::string const&) */

    Filename* Filename::operator+=(basic_string* param_1) {
        char* pcVar1;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>::
        operator+=(
            (basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>*)this,
            pcVar1);
        return this;
    }

    // 0x100183ba0, 48 bytes, inline, placed by class name
    // Filename::operator/(eastl::string const&) const
    /* Filename Filename::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_string<char, 64, true,
   eastl::allocator> const&) */

    Filename* Filename::operator/(Filename* __return_storage_ptr__, Filename* this, fixed_string* param_1) {
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        operator/(__return_storage_ptr__, (char*)this);
        return __return_storage_ptr__;
    }

    // 0x100183c00, 16 bytes, complete-object destructor, inline, placed by class name
    // Filename::~Filename(): jumps straight to the base-object destructor

    // 0x100186790, 16 bytes, complete-object constructor, inline, placed by class name
    // Filename::Filename(char const*): jumps straight to the base-object constructor

    // 0x100186db0, 16 bytes, inline, placed by class name
    // Filename::operator==(char const*) const
    /* bool eastl::TEMPNAMEPLACEHOLDERVALUE(eastl::string&, char const*)
    */

    bool eastl::operator==(basic_string* param_1, char* param_2) {
        int iVar1;

        iVar1 = compare(param_1);
        return iVar1 == 0;
    }

    // 0x100186dc0, 16 bytes, complete-object constructor, inline, placed by class name
    // Filename::Filename(Filename const&): jumps straight to the base-object constructor

    // 0x100186dd0, 48 bytes, inline, placed by class name
    // Filename::GetName() const
    undefined8 Filename::GetName() {
        undefined8 uVar2;

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
            '\0') {
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x100186e00, 64 bytes, inline, placed by class name
    // Filename::operator/(Filename const&) const
    /* Filename::TEMPNAMEPLACEHOLDERVALUE(Filename const&) const */

    Filename* Filename::operator/(Filename* param_1) {
        Filename* in_RDX;

        Filename(this, param_1);
        operator/=(this, in_RDX);
        return this;
    }

    // 0x100198930, 16 bytes, base-object constructor, inline, placed by class name
    // Filename::Filename(char const*)
    void Filename::Filename(char* param_1) {
        new (this) eastl::fixed_string<char, 260, true, eastl::allocator>(param_1);
    }

    // 0x100198c70, 16 bytes, base-object constructor, inline, placed by class name
    // Filename::Filename(Filename const&)
    void Filename::Filename(Filename* param_1) {
        new (this) eastl::fixed_string<char, 260, true, eastl::allocator>(param_1);
    }

    // 0x10019b480, 16 bytes, complete-object constructor, inline, placed by class name
    // Filename::Filename(): jumps straight to the base-object constructor

    // 0x10019b490, 32 bytes, inline, placed by class name
    // Filename::operator=(Filename&&)
    /* Filename::TEMPNAMEPLACEHOLDERVALUE(Filename&&) */

    Filename* Filename::operator=(Filename* param_1) {
        eastl::fixed_string<char, 4096, true, eastl::allocator>::operator=(
            (fixed_string<char, 4096, true, eastl::allocator>*)this, (fixed_string*)param_1);
        return this;
    }

    // 0x10019b4b0, 16 bytes, base-object constructor, inline, placed by class name
    // Filename::Filename()
    void Filename::Filename() {
        new (this) eastl::fixed_string<char, 260, true, eastl::allocator>();
    }

    // 0x1002b2d20, 16 bytes, complete-object constructor, inline, placed by class name
    // Filename::Filename(eastl::basic_string<char, BucketAllocatorEASTL> const&): jumps straight to the base-object constructor

    // 0x1002b8cd0, 16 bytes, inline, placed by class name
    // Filename::operator!=(char const*) const
    /* Filename::TEMPNAMEPLACEHOLDERVALUE(char const*) const */

    bool Filename::operator!=(char* param_1) {
        bool bVar1;
        char* in_RDX;

        bVar1 = eastl::operator==((eastl*)this, (basic_string*)param_1, in_RDX);
        return !bVar1;
    }

    // 0x1002d9cb0, 48 bytes, base-object constructor, inline, placed by class name
    // Filename::Filename(eastl::basic_string<char, BucketAllocatorEASTL> const&)
    /* Filename::Filename(eastl::string const&) */

    void Filename::Filename(basic_string* param_1) {
        char* pcVar1;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new (this) eastl::fixed_string<char, 260, true, eastl::allocator>(pcVar1);
    }

    // 0x1003913b0, 48 bytes, inline, placed by class name
    // Filename::operator/=(eastl::string const&)
    /* Filename::TEMPNAMEPLACEHOLDERVALUE(eastl::string const&) */

    void Filename::operator/=(basic_string* param_1) {
        char* pcVar1;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        operator/=(this, pcVar1);
    }

    // 0x1009e9780, 80 bytes, inline, placed by class name
    // Filename::operator+(char const*) const
    /* Filename::TEMPNAMEPLACEHOLDERVALUE(char const*) const */

    Filename* Filename::operator+(char* param_1) {
        char* in_RDX;

        Filename(this);
        eastl::fixed_string<char, 32, true, eastl::allocator>::operator=(
            (fixed_string<char, 32, true, eastl::allocator>*)this, (fixed_string*)param_1);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>::
        operator+=(
            (basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>*)this,
            in_RDX);
        return this;
    }

    // 0x1009ee3f0, 16 bytes, inline, placed by class name
    // Filename::operator char const*() const
    char* Filename::operator_cast_to_char_() {
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x1009ee600, 16 bytes, inline, placed by class name
    // Filename::operator!=(Filename const&) const
    /* Filename::TEMPNAMEPLACEHOLDERVALUE(Filename const&) const */

    byte Filename::operator!=(Filename* param_1) {
        return operator==(this, param_1) ^ 1;
    }

    // 0x1009eee60, 32 bytes, inline, placed by class name
    // Filename::operator=(Filename const&)
    /* Filename::TEMPNAMEPLACEHOLDERVALUE(Filename const&) */

    Filename* Filename::operator=(Filename* param_1) {
        eastl::fixed_string<char, 32, true, eastl::allocator>::operator=(
            (fixed_string<char, 32, true, eastl::allocator>*)this, (fixed_string*)param_1);
        return this;
    }

    // 0x1009f9700, 16 bytes, inline, placed by class name
    // Filename::operator==(Filename const&) const
    /* Filename::TEMPNAMEPLACEHOLDERVALUE(Filename const&) const */

    bool Filename::operator==(Filename* param_1) {
        return compare() == 0;
    }

    // 0x1009fe930, 16 bytes, complete-object constructor, inline, placed by class name
    // Filename::Filename(Filename&&): jumps straight to the base-object constructor

    // 0x1009fe940, 16 bytes, base-object constructor, inline, placed by class name
    // Filename::Filename(Filename&&)
    void Filename::Filename(Filename* param_1) {
        new (this) eastl::fixed_string<char, 260, true, eastl::allocator>(param_1);
    }

    // 0x100b17400, 32 bytes, inline, placed by class name
    // Filename::operator+=(char const*)
    /* Filename::TEMPNAMEPLACEHOLDERVALUE(char const*) */

    Filename* Filename::operator+=(char* param_1) {
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>::
        operator+=(
            (basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>*)this,
            param_1);
        return this;
    }

    // 0x100b1fe00, 32 bytes, inline, placed by class name
    // Filename::operator+=(Filename const&)
    /* Filename::TEMPNAMEPLACEHOLDERVALUE(Filename const&) */

    Filename* Filename::operator+=(Filename* param_1) {
        eastl::operator+=((fixed_string*)this, (fixed_string*)param_1);
        return this;
    }

    // 0x100b23440, 16 bytes, inline, placed by class name
    // Filename::swap(Filename&)
    void Filename::swap(Filename* param_1) {
        swap(param_1);
    }

    // 0x100c7eb40, 16 bytes, complete-object constructor, inline, placed by class name
    // Filename::Filename(char const*, unsigned long): jumps straight to the base-object constructor

    // 0x100c82230, 16 bytes, base-object constructor, inline, placed by class name
    // Filename::Filename(char const*, unsigned long)
    void Filename::Filename(char* param_1, ulong param_2) {
        new (this) eastl::fixed_string<char, 260, true, eastl::allocator>(param_1, param_2);
    }

    // 0x100cb3ad0, 48 bytes, inline, placed by class name and debug map
    // Filename::hasTrailingSlash() const
    bool Filename::hasTrailingSlash() {
        long lVar1;
        char* pcVar2;

        lVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        pcVar2 = (char*)eastl::
            basic_string<char, eastl::fixed_vector_allocator<1ul, 260ul, 1ul, 0ul, true, eastl::allocator>>::operator[](
                (basic_string<char, eastl::fixed_vector_allocator<1ul, 260ul, 1ul, 0ul, true, eastl::allocator>>*)this,
                lVar1 - 1);
        return *pcVar2 == '/' || *pcVar2 == '\\';
    }

    // 0x100cb5010, 32 bytes, inline, placed by class name
    // Filename::SetErrorCode(int, Error*)
    void Filename::SetErrorCode(int param_1, Error* param_2) {
        if (param_2 != (Error*)0) {
            new (param_2) std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(param_1);
        }
    }

    // 0x100cb5490, 16 bytes, complete-object constructor, inline, placed by class name
    // Filename::Filename<260, true>(eastl::fixed_string<char, 260, true, eastl::allocator> const&): jumps straight to the base-object constructor

    // 0x100cb5770, 16 bytes, inline, placed by class name
    // Filename::IsEmpty() const
    void Filename::IsEmpty() {
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
    }

    // 0x100cb63d0, 35 bytes, base-object constructor, inline, placed by class name
    // Filename::Filename<260, true>(eastl::fixed_string<char, 260, true, eastl::allocator> const&)
    void Filename::Filename<260, true>(fixed_string* param_1) {
        char* pcVar1;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new (this) eastl::fixed_string<char, 260, true, eastl::allocator>(pcVar1);
    }

} // namespace jag

namespace jag::game {
    // 0x100183c00: the linker folded this into Filename::~Filename(), which has identical code
    Cutscene2DAudioElement::~Cutscene2DAudioElement();

    // 0x100183c00: the linker folded this into Filename::~Filename(), which has identical code
    Cutscene2DSubtitleElement::~Cutscene2DSubtitleElement();

} // namespace jag::game

namespace jag::console {
    // 0x100183c00: the linker folded this into Filename::~Filename(), which has identical code
    VarAny::~VarAny();

} // namespace jag::console

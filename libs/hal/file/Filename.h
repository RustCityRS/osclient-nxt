// libs/hal/file/Filename.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag {
    class Filename {
    public:
        ~Filename();
        auto operator+(const eastl::string& str) const;
        char* GetName(eastl::string& str) const;
        Filename* operator+=(const eastl::string& str);
        auto operator/(const eastl::string& str) const;
        Filename(const char* str);
        bool operator==(const char* str) const;
        Filename(const Filename& filename);
        char* GetName() const;
        auto operator/(const Filename& filename) const;
        Filename();
        Filename* operator=(Filename&& filename);
        Filename(const eastl::string& str);
        Filename(const eastl::string& str);
        uint8_t operator!=(const char* str) const;
        void operator/=(const eastl::string& str);
        auto operator+(const char* str) const;
        operator char const*() const;
        uint8_t operator!=(const Filename& filename) const;
        Filename* operator=(const Filename& filename);
        bool operator==(const Filename& filename) const;
        Filename(Filename&& filename);
        Filename* operator+=(const char* str);
        Filename* operator+=(const Filename& filename);
        void swap(Filename& filename);
        Filename(const char* str, unsigned long arg2);
        void GetFile(const char* str, unsigned long arg2);
        auto GetFile() const;
        auto operator/(const char* str) const;
        bool hasTrailingSlash() const;
        void operator/(const wchar_t* arg1) const;
        Filename* operator/=(const char* str);
        void operator/=(const wchar_t* arg1);
        Filename* operator/=(const Filename& filename);
        auto GetParentPath() const;
        uint64_t Remove(Error* error) const;
        bool IsDirectory() const;
        bool RemoveDirectoryContents(Error* error) const;
        unsigned long RemoveEmptyDirectory(Error* error) const;
        unsigned long RemoveFile(Error* error) const;
        auto SanitiseFileName(const eastl::fixed_string<char, 260>& str);
        bool IsFile() const;
        uint64_t GetLastModified() const;
        uint64_t GetFileSize() const;
        auto GetAllFiles() const;
        unsigned long Exists() const;
        void CreateFolderForEveryone(Error* error) const;
        unsigned long CreateDirectories(Error* error) const;
        void SetErrorCode(int arg1, Error* error);
        unsigned long IsDirectoryEmpty() const;
        unsigned long Rename(const Filename& filename, Error* error) const;
        unsigned long Copy(const Filename& filename, bool arg2, Error* error) const;
        long GetFolderSize() const;
        Filename<260, true>(const eastl::fixed_string<char, 260>& str);
        bool IsSameFilesystem(const Filename& filename);
        bool ExcludeFromBackup() const;
        void IsEmpty() const;

        uint8_t _unknown_0[1];
    };

    // 0x1000e2ec0
    auto Filename::operator+(const eastl::string& str) const {
        auto result;

        Filename(&result);
        result = this;
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        result += str_00;
        return result;
    }

    // 0x10014dc20
    char* Filename::GetName(eastl::string& str) const {
        char* pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pcVar1 = (char*)str.assign(pcVar1);
        return pcVar1;
    }

    // 0x100168420
    Filename* Filename::operator+=(const eastl::string& str) {
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        *this += str_00;
        return this;
    }

    // 0x100183ba0
    auto Filename::operator/(const eastl::string& str) const {
        auto result;

        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        operator/(&result, this, str_00);
        return result;
    }

    // 0x100186db0
    bool Filename::operator==(const char* str) const {
        return compare(str) == 0;
    }

    // 0x100186dd0
    char* Filename::GetName() const {
        char* pcVar2;

        if (empty() == '\0') {
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        } else {
            pcVar2 = nullptr;
        }
        return pcVar2;
    }

    // 0x100186e00
    auto Filename::operator/(const Filename& filename) const {
        auto result;
        Filename(&result, this);
        operator/=(&result, filename);
        return result;
    }

    // 0x100198930
    Filename::Filename(const char* str) : eastl::fixed_string<char, 260>(str) {}

    // 0x100198c70
    Filename::Filename(const Filename& filename) : eastl::fixed_string<char, 260>(filename) {}

    // 0x10019b490
    Filename* Filename::operator=(Filename&& filename) {
        *this = filename;
        return this;
    }

    // 0x10019b4b0
    Filename::Filename() : eastl::fixed_string<char, 260>() {}

    // 0x1002b8cd0
    uint8_t Filename::operator!=(const char* str) const {
        return *this == *str ^ 1;
    }

    // 0x1002d9cb0
    Filename::Filename(const eastl::basic_string<char, BucketAllocatorEASTL>& str) {
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new (this) eastl::fixed_string<char, 260>(str_00);
    }

    // 0x1003913b0
    void Filename::operator/=(const eastl::string& str) {
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        operator/=(this, str_00);
    }

    // 0x1009e9780
    auto Filename::operator+(const char* str) const {
        auto result;
        Filename(&result);
        result = this;
        result += str;
        return result;
    }

    // 0x1009ee3f0
    Filename::operator char const*() const {
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x1009ee600
    uint8_t Filename::operator!=(const Filename& filename) const {
        return *this == filename ^ 1;
    }

    // 0x1009eee60
    Filename* Filename::operator=(const Filename& filename) {
        *this = filename;
        return this;
    }

    // 0x1009f9700
    bool Filename::operator==(const Filename& filename) const {
        return compare(filename) == 0;
    }

    // 0x1009fe940
    Filename::Filename(Filename&& filename) : eastl::fixed_string<char, 260>(filename) {}

    // 0x100b17400
    Filename* Filename::operator+=(const char* str) {
        *this += str;
        return this;
    }

    // 0x100b1fe00
    Filename* Filename::operator+=(const Filename& filename) {
        fixed_string<char, _260>* in_RDX;

        operator+=(filename, in_RDX);
        return this;
    }

    // 0x100b23440
    void Filename::swap(Filename& filename) {
        swap(filename);
    }

    // 0x100c82230
    Filename::Filename(const char* str, unsigned long arg2) : eastl::fixed_string<char, 260>(str, arg2) {}

    // 0x100cb3ad0
    bool Filename::hasTrailingSlash() const {
        long lVar1 = size();
        char* pcVar2 = (char*)(*this)[lVar1 - 1];
        return *pcVar2 == '/' || *pcVar2 == '\\';
    }

    // 0x100cb5010
    void Filename::SetErrorCode(int arg1, Error* error) {
        if (error != nullptr) {
            new (error) std::__cxx_atomic_base_impl(arg1);
        }
    }

    // 0x100cb5770
    void Filename::IsEmpty() const {
        empty();
    }

    // 0x100cb63d0
    Filename::Filename<260, true>(const eastl::fixed_string<char, 260>& str) {
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new (this) eastl::fixed_string<char, 260>(str_00);
    }

} // namespace jag

namespace jag::game {
    // 0x100183c00: Cutscene2DAudioElement::~Cutscene2DAudioElement() has the same machine code as Filename::~Filename()

    // 0x100183c00: Cutscene2DSubtitleElement::~Cutscene2DSubtitleElement() has the same machine code as Filename::~Filename()

} // namespace jag::game

namespace jag::console {
    // 0x100183c00: VarAny::~VarAny() has the same machine code as Filename::~Filename()

} // namespace jag::console

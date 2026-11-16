// libs/hal/file/Filename.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.file

#include "Filename.h"

namespace jag {
    // 0x100049400: Filename::~Filename() has the same machine code as std::__tuple_leaf<1ul, eastl::fixed_string<char, 256>, false>::~__tuple_leaf()

    // 0x1002d9cb0: Filename::Filename(eastl::string const&) has the same machine code as Filename::Filename(eastl::basic_string<char, BucketAllocatorEASTL> const&)

    // 0x100cb38c0
    void Filename::GetFile(const char* str, unsigned long arg2) {
        uint8_t bVar1;
        uint8_t auVar2[16];

        char* str_00 = str + arg2;
        do {
            if (str_00 <= str)
                break;
            bVar1 = str_00[-1] - 47;
            if ((45 < bVar1) || ((35184372090881U >> ((unsigned long)bVar1 & 63) & 1) == 0)) {
                str_00 = str_00 - 1;
            }
        } while ((45 < bVar1) || ((35184372090881U >> ((unsigned long)bVar1 & 63) & 1) == 0));
        basic_string_view<char> local_18(str_00, (long)(str + arg2) - (long)str_00);
        auVar2[0] = local_18[0];
        auVar2[1] = local_18[1];
        auVar2[2] = local_18[2];
        auVar2[3] = local_18[3];
        auVar2[4] = local_18[4];
        auVar2[5] = local_18[5];
        auVar2[6] = local_18[6];
        auVar2[7] = local_18[7];
        auVar2[8] = local_18[8];
        auVar2[9] = local_18[9];
        auVar2[10] = local_18[10];
        auVar2[11] = local_18[11];
        auVar2[12] = local_18[12];
        auVar2[13] = local_18[13];
        auVar2[14] = local_18[14];
        auVar2[15] = local_18[15];
        return auVar2;
    }

    // 0x100cb3950
    auto Filename::GetFile() const {
        char* pcVar2;
        unsigned long arg2;
        long lVar3;
        eastl local_40;
        eastl local_30;

        if (empty() == '\0') {
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            arg2 = size();
            &local_40 = (eastl[16])GetFile(pcVar2, arg2);
            pcVar2 = (char*)local_40.data();
            lVar3 = local_40.length();
            eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
            auto result(pcVar2, pcVar2 + lVar3, &local_30);
        } else {
            eastl::destruct<oldscape::highlight::NpcUID*>(&local_40);
            new (&result) eastl::basic_string<char, BucketAllocatorEASTL>("", &local_40);
        }
        return result;
    }

    // 0x100cb3a40
    auto Filename::operator/(const char* str) const {
        auto result;

        bool cVar1 = empty();
        if (!cVar1) {
            Filename(&result);
            cVar1 = hasTrailingSlash();
            result = this;
            if (!cVar1) {
                result += '/';
            }
            result += str;
        } else {
            Filename(&result, str);
        }
        return result;
    }

    // 0x100cb3b00
    void Filename::operator/(const wchar_t* arg1) const {
        wchar_t* in_RDX;

        fixed_string<char, 260> local_160;
        stringtools::UTF16to8<eastl::fixed_string<char, 260>>(in_RDX, local_160);
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        operator/(this, (Filename*)arg1, str);
    }

    // 0x100cb3be0
    Filename* Filename::operator/=(const char* str) {

        if (!(empty())) {
            if (!(hasTrailingSlash())) {
                *this += '/';
            }
            *this += str;
        } else {
            *this = str;
        }
        return this;
    }

    // 0x100cb3c30
    void Filename::operator/=(const wchar_t* arg1) {
        fixed_string<char, 260> local_158;
        stringtools::UTF16to8<eastl::fixed_string<char, 260>>(arg1, local_158);
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        operator/=(this, str);
    }

    // 0x100cb3cd0
    Filename* Filename::operator/=(const Filename& filename) {
        fixed_string<char, _260>* extraout_RDX;
        fixed_string<char, _260>* extraout_RDX_00;
        fixed_string<char, _260>* str2;

        bool cVar1 = empty();
        if (!cVar1) {
            cVar1 = hasTrailingSlash();
            str2 = extraout_RDX;
            if (!cVar1) {
                *this += '/';
                str2 = extraout_RDX_00;
            }
            operator+=(filename, str2);
        } else {
            *this = filename;
        }
        return this;
    }

    // 0x100cb3d60
    auto Filename::GetParentPath() const {
        auto result;
        long lVar1;
        uint8_t bVar2;
        char* str2;

        auto str1 = GetName();
        if (str1 == nullptr) {
            Filename(&result, this);
        } else {
            lVar1 = size();
            str2 = str1 + lVar1 - 1;
            do {
                if (str2 <= str1) {
                    Filename(&result);
                    return result;
                }
                bVar2 = *str2 - 47;
                if ((bVar2 < 46) && ((35184372090881U >> ((unsigned long)bVar2 & 63) & 1) != 0)) {
                    Filename(&result);
                    result =
                        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 260ul, 1ul, 0ul, true>>::assign(
                            str1, str2);
                } else {
                    str2 = str2 - 1;
                }
            } while ((45 < bVar2) || ((35184372090881U >> ((unsigned long)bVar2 & 63) & 1) == 0));
        }
        return result;
    }

    // 0x100cb3f30
    uint64_t Filename::Remove(Error* error) const {
        uint64_t uVar2;

        if (!(IsDirectory())) {
            uVar2 = RemoveFile(error);
        } else {
            if (!(RemoveDirectoryContents(error))) {
                uVar2 = 0;
            } else {
                uVar2 = RemoveEmptyDirectory(error);
            }
        }
        return uVar2;
    }

} // namespace jag

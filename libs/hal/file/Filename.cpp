// libs/hal/file/Filename.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.file

#include "Filename.h"

namespace jag {
    // 0x100049400: the linker folded this into std::__tuple_leaf<1ul, eastl::fixed_string<char, 256, true, eastl::allocator>, false>::~__tuple_leaf(), which has identical code
    Filename::~Filename();

    // 0x1002b2d20: the linker folded this into Filename::Filename(eastl::basic_string<char, BucketAllocatorEASTL> const&), which has identical code
    Filename::Filename(eastl::string const&);

    // 0x1002d9cb0: the linker folded this into Filename::Filename(eastl::basic_string<char, BucketAllocatorEASTL> const&), which has identical code
    Filename::Filename(eastl::string const&);

    // 0x100cb38c0, 128 bytes, placed by class name and debug map
    // Filename::GetFile(char const*, unsigned long)
    undefined1[16] Filename::GetFile(char* param_1, ulong param_2) {
        byte bVar1;
        char* pcVar2;
        undefined1 auVar3[16];
        basic_string_view<char, std::char_traits<char>> local_18[16];

        pcVar2 = param_1 + param_2;
        do {
            if (pcVar2 <= param_1)
                break;
            bVar1 = pcVar2[-1] - 47;
            if ((45 < bVar1) || ((35184372090881U >> ((ulong)bVar1 & 63) & 1) == 0)) {
                pcVar2 = pcVar2 + -1;
            }
        } while ((45 < bVar1) || ((35184372090881U >> ((ulong)bVar1 & 63) & 1) == 0));
        std::basic_string_view<char, std::char_traits<char>>::basic_string_view(
            local_18, pcVar2, (long)(param_1 + param_2) - (long)pcVar2);
        auVar3[0] = local_18[0];
        auVar3[1] = local_18[1];
        auVar3[2] = local_18[2];
        auVar3[3] = local_18[3];
        auVar3[4] = local_18[4];
        auVar3[5] = local_18[5];
        auVar3[6] = local_18[6];
        auVar3[7] = local_18[7];
        auVar3[8] = local_18[8];
        auVar3[9] = local_18[9];
        auVar3[10] = local_18[10];
        auVar3[11] = local_18[11];
        auVar3[12] = local_18[12];
        auVar3[13] = local_18[13];
        auVar3[14] = local_18[14];
        auVar3[15] = local_18[15];
        return auVar3;
    }

    // 0x100cb3950, 192 bytes, placed by class name and debug map
    // Filename::GetFile() const
    Filename* Filename::GetFile() {
        char* pcVar2;
        ulong uVar3;
        NpcUID* extraout_RDX;
        undefined1 auVar4[16];
        eastl local_40[16];
        eastl local_30[8];

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
            '\0') {
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar3 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            local_40 = (eastl[16])GetFile(pcVar2, uVar3);
            pcVar2 = (char*)local_40->data();
            auVar4 = local_40->length();
            eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", auVar4._8_8_);
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string(
                (char*)this, pcVar2, (BucketAllocatorEASTL*)(pcVar2 + auVar4._0_8_));
        } else {
            eastl::destruct<oldscape::highlight::NpcUID*>(local_40, (NpcUID*)"EASTL basic_string", extraout_RDX);
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)this, (BucketAllocatorEASTL*)"");
        }
        return this;
    }

    // 0x100cb3a40, 144 bytes, placed by class name and debug map
    // Filename::operator/(char const*) const
    /* Filename::TEMPNAMEPLACEHOLDERVALUE(char const*) const */

    Filename* Filename::operator/(char* param_1) {
        char cVar1;
        char* in_RDX;

        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            Filename(this);
            cVar1 = hasTrailingSlash((Filename*)param_1);
            eastl::fixed_string<char, 32, true, eastl::allocator>::operator=(
                (fixed_string<char, 32, true, eastl::allocator>*)this, (fixed_string*)param_1);
            if (cVar1 == '\0') {
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                operator+=(
                    (basic_string<char,
                                  eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>*)this,
                    '/');
            }
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>::
            operator+=(
                (basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>*)this,
                in_RDX);
        } else {
            Filename(this, in_RDX);
        }
        return this;
    }

    // 0x100cb3b00, 176 bytes, placed by class name
    // Filename::operator/(wchar_t const*) const
    /* Filename::TEMPNAMEPLACEHOLDERVALUE(wchar_t const*) const */

    void Filename::operator/(wchar_t* param_1) {
        wchar_t* in_RDX;
        fixed_string<char, 260, true, eastl::allocator> local_160[304];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 260, true, eastl::allocator>::fixed_string(local_160);
        stringtools::UTF16to8<eastl::fixed_string<char, 260, true, eastl::allocator>>(in_RDX, (fixed_string*)local_160);
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        operator/(this, (char*)param_1);
        /* WARNING: Subroutine does not return */
        local_160->~fixed_string();
    }

    // 0x100cb3be0, 80 bytes, placed by class name
    // Filename::operator/=(char const*)
    /* Filename::TEMPNAMEPLACEHOLDERVALUE(char const*) */

    Filename* Filename::operator/=(char* param_1) {
        char cVar1;

        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            cVar1 = hasTrailingSlash(this);
            if (cVar1 == '\0') {
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                operator+=(
                    (basic_string<char,
                                  eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>*)this,
                    '/');
            }
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>::
            operator+=(
                (basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>*)this,
                param_1);
        } else {
            eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
                (fixed_string<char, 16, true, eastl::allocator>*)this, param_1);
        }
        return this;
    }

    // 0x100cb3c30, 160 bytes, placed by class name
    // Filename::operator/=(wchar_t const*)
    /* Filename::TEMPNAMEPLACEHOLDERVALUE(wchar_t const*) */

    void Filename::operator/=(wchar_t* param_1) {
        char* pcVar1;
        fixed_string<char, 260, true, eastl::allocator> local_158[304];
        undefined8 local_28;

        local_28 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 260, true, eastl::allocator>::fixed_string(local_158);
        stringtools::UTF16to8<eastl::fixed_string<char, 260, true, eastl::allocator>>(param_1,
                                                                                      (fixed_string*)local_158);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        operator/=(this, pcVar1);
        /* WARNING: Subroutine does not return */
        local_158->~fixed_string();
    }

    // 0x100cb3cd0, 80 bytes, placed by class name
    // Filename::operator/=(Filename const&)
    /* Filename::TEMPNAMEPLACEHOLDERVALUE(Filename const&) */

    Filename* Filename::operator/=(Filename* param_1) {
        char cVar1;

        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            cVar1 = hasTrailingSlash(this);
            if (cVar1 == '\0') {
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                operator+=(
                    (basic_string<char,
                                  eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>*)this,
                    '/');
            }
            eastl::operator+=((fixed_string*)this, (fixed_string*)param_1);
        } else {
            eastl::fixed_string<char, 32, true, eastl::allocator>::operator=(
                (fixed_string<char, 32, true, eastl::allocator>*)this, (fixed_string*)param_1);
        }
        return this;
    }

    // 0x100cb3d60, 240 bytes, placed by class name
    // Filename::GetParentPath() const
    Filename* Filename::GetParentPath() {
        char* pcVar1;
        long lVar2;
        Filename* in_RSI;
        byte bVar3;
        char* pcVar4;

        pcVar1 = (char*)GetName(in_RSI);
        if (pcVar1 == (char*)0) {
            Filename(this, in_RSI);
        } else {
            lVar2 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            pcVar4 = pcVar1 + lVar2 + -1;
            do {
                if (pcVar4 <= pcVar1) {
                    Filename(this);
                    return this;
                }
                bVar3 = *pcVar4 - 47;
                if ((bVar3 < 46) && ((35184372090881U >> ((ulong)bVar3 & 63) & 1) != 0)) {
                    Filename(this);
                    assign(pcVar1, pcVar4);
                } else {
                    pcVar4 = pcVar4 + -1;
                }
            } while ((45 < bVar3) || ((35184372090881U >> ((ulong)bVar3 & 63) & 1) == 0));
        }
        return this;
    }

    // 0x100cb3f30, 80 bytes, placed by class name
    // Filename::Remove(Error*) const
    undefined8 Filename::Remove(Error* param_1) {
        char cVar1;
        undefined8 uVar2;

        cVar1 = IsDirectory(this);
        if (cVar1 == '\0') {
            uVar2 = RemoveFile(this, param_1);
        } else {
            cVar1 = RemoveDirectoryContents(this, param_1);
            if (cVar1 == '\0') {
                uVar2 = 0;
            } else {
                uVar2 = RemoveEmptyDirectory(this, param_1);
            }
        }
        return uVar2;
    }

} // namespace jag

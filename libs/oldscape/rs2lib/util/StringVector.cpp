// libs/oldscape/rs2lib/util/StringVector.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "StringVector.h"

namespace jag::oldscape::rs2lib {
    // 0x100009a60: the linker folded this into Args::~Args(), which has identical code
    StringVector::~StringVector();

    // 0x100009a70: the linker folded this into Args::~Args(), which has identical code
    StringVector::~StringVector();

    // 0x100064280: the linker folded this into eastl::optional<eastl::vector<char, eastl::allocator> >::operator bool() const, which has identical code
    StringVector::IsDirty() const;

    // 0x100076550: the linker folded this into eastl::Internal::optional_storage<eastl::vector<char, eastl::allocator>, false>::optional_storage(), which has identical code
    StringVector::MarkClean();

    // 0x1001fec90, 32 bytes, placed by class name and debug map
    // StringVector::Append(eastl::string const&)
    void StringVector::Append(basic_string* param_1) {
        push_back(param_1);
        field_32 = 1;
    }

    // 0x1001fecb0, 32 bytes, placed by class name and debug map
    // StringVector::Append(eastl::string&&)
    void StringVector::Append(basic_string* param_1) {
        push_back(param_1);
        field_32 = 1;
    }

    // 0x1001fecd0, 48 bytes, placed by class name and debug map
    // StringVector::AppendUnique(eastl::string const&)
    void StringVector::AppendUnique(basic_string* param_1) {
        if (Contains(this, param_1, false) == '\0') {
            push_back(param_1);
            field_32 = 1;
        }
    }

    // 0x1001fed00, 176 bytes, placed by class name and debug map
    // StringVector::Contains(eastl::string const&, bool) const
    ulong StringVector::Contains(basic_string* param_1, bool param_2) {
        bool bVar1;
        basic_string* pbVar2;
        basic_string* pbVar3;
        undefined7 in_register_00000011;
        undefined7 uVar5;
        ulong uVar4;
        bool bVar6;

        pbVar2 = (basic_string*)HeapBeginPtr();
        pbVar3 = (basic_string*)end();
        uVar5 = (undefined7)((ulong)this >> 8);
        if ((int)CONCAT71(in_register_00000011, param_2) == 0) {
            pbVar2 = std::find<eastl::stringconst*, eastl::string>(pbVar2, pbVar3, param_1);
            pbVar3 = (basic_string*)end();
            uVar4 = CONCAT71(uVar5, pbVar2 != pbVar3);
        } else {
            bVar6 = pbVar2 == pbVar3;
            if (!bVar6) {
                bVar1 = core::stringtools::general::StringTools::MatchPattern<
                    eastl::basic_string<char, BucketAllocatorEASTL>>(pbVar2, param_1);
                while (!bVar1) {
                    pbVar2 = pbVar2 + 32;
                    bVar6 = pbVar2 == pbVar3;
                    if (bVar6)
                        break;
                    bVar1 = core::stringtools::general::StringTools::MatchPattern<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(pbVar2, param_1);
                }
            }
            uVar4 = CONCAT71(uVar5, bVar6) ^ 1;
        }
        return uVar4 & 4294967295;
    }

    // 0x1001fedb0, 48 bytes, placed by class name and debug map
    // StringVector::AppendUnique(eastl::string&&)
    void StringVector::AppendUnique(basic_string* param_1) {
        if (Contains(this, param_1, false) == '\0') {
            push_back(param_1);
            field_32 = 1;
        }
    }

    // 0x1001fede0, 48 bytes, placed by class name and debug map
    // StringVector::AppendUniqueCaseInsensitive(eastl::string const&)
    void StringVector::AppendUniqueCaseInsensitive(basic_string* param_1) {
        if (ContainsCaseInsensitive(this, param_1, false) == '\0') {
            push_back(param_1);
            field_32 = 1;
        }
    }

    // 0x1001fee10, 336 bytes, placed by class name and debug map
    // StringVector::ContainsCaseInsensitive(eastl::string const&, bool) const
    ulong StringVector::ContainsCaseInsensitive(basic_string* param_1, bool param_2) {
        bool bVar1;
        int iVar2;
        long lVar3;
        undefined7 in_register_00000011;
        bool bVar4;
        undefined1 auVar5[16];
        eastl local_78[24];
        basic_string local_60[24];
        long local_48;
        undefined4 local_3c;
        eastl local_38[8];

        local_3c = (undefined4)CONCAT71(in_register_00000011, param_2);
        auVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::destruct<highlight::NpcUID*>(local_78, (NpcUID*)"EASTL basic_string", auVar5._8_8_);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, auVar5._0_8_);
        stringtools::UTF8ToLower<eastl::basic_string<char, BucketAllocatorEASTL>>(local_60);
        lVar3 = HeapBeginPtr();
        local_48 = end();
        bVar4 = lVar3 == local_48;
        if (!bVar4) {
            do {
                auVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::destruct<highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", auVar5._8_8_);
                eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_78, auVar5._0_8_);
                stringtools::UTF8ToLower<eastl::basic_string<char, BucketAllocatorEASTL>>((basic_string*)local_78);
                if ((((char)local_3c != '\0') &&
                     (bVar1 = core::stringtools::general::StringTools::MatchPattern<
                          eastl::basic_string<char, BucketAllocatorEASTL>>((basic_string*)local_78, local_60),
                      bVar1)) ||
                    (iVar2 = local_78->compare(), iVar2 == 0)) {
                    local_78->~basic_string();
                    break;
                }
                local_78->~basic_string();
                lVar3 = lVar3 + 32;
                bVar4 = lVar3 == local_48;
            } while (!bVar4);
        }
        local_60->~basic_string();
        return CONCAT71((int7)((ulong)local_78 >> 8), ~bVar4) & 4294967041;
    }

    // 0x1001fef60, 48 bytes, placed by class name and debug map
    // StringVector::AppendUniqueCaseInsensitive(eastl::string&&)
    void StringVector::AppendUniqueCaseInsensitive(basic_string* param_1) {
        if (ContainsCaseInsensitive(this, param_1, false) == '\0') {
            push_back(param_1);
            field_32 = 1;
        }
    }

    // 0x1001fef90, 80 bytes, placed by class name and debug map
    // StringVector::Insert(int, eastl::string const&)
    void StringVector::Insert(int param_1, basic_string* param_2) {
        ulong uVar1;
        long lVar2;

        if (-1 < param_1) {
            uVar1 = size();
            if ((ulong)(long)param_1 < uVar1) {
                lVar2 = HeapBeginPtr();
                insert((basic_string*)((long)param_1 * 32 + lVar2), param_2);
                field_32 = 1;
            }
        }
    }

    // 0x1001ff070, 80 bytes, placed by class name and debug map
    // StringVector::Insert(int, eastl::string&&)
    void StringVector::Insert(int param_1, basic_string* param_2) {
        ulong uVar1;
        long lVar2;

        if (-1 < param_1) {
            uVar1 = size();
            if ((ulong)(long)param_1 < uVar1) {
                lVar2 = HeapBeginPtr();
                insert((basic_string*)((long)param_1 * 32 + lVar2), param_2);
                field_32 = 1;
            }
        }
    }

    // 0x1001ff0f0, 96 bytes, placed by class name and debug map
    // StringVector::SetIndex(int, eastl::string const&)
    void StringVector::SetIndex(int param_1, basic_string* param_2) {
        ulong uVar1;
        basic_string* pbVar2;
        eastl::string* this_00;

        if (-1 < param_1) {
            uVar1 = size();
            if ((ulong)param_1 < uVar1) {
                pbVar2 = (basic_string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                    (vector<eastl::string, eastl::allocator>*)this, (ulong)param_1);
                if (eastl::basic_string<char, BucketAllocatorEASTL>::compare(pbVar2) != 0) {
                    this_00 = (eastl::string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                        (vector<eastl::string, eastl::allocator>*)this, (ulong)param_1);
                    eastl::string::operator=(this_00, param_2);
                    field_32 = 1;
                }
            }
        }
    }

    // 0x1001ff150, 96 bytes, placed by class name and debug map
    // StringVector::SetIndex(int, eastl::string&&)
    void StringVector::SetIndex(int param_1, basic_string* param_2) {
        ulong uVar1;
        basic_string* pbVar2;
        eastl::string* this_00;

        if (-1 < param_1) {
            uVar1 = size();
            if ((ulong)param_1 < uVar1) {
                pbVar2 = (basic_string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                    (vector<eastl::string, eastl::allocator>*)this, (ulong)param_1);
                if (eastl::basic_string<char, BucketAllocatorEASTL>::compare(pbVar2) != 0) {
                    this_00 = (eastl::string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                        (vector<eastl::string, eastl::allocator>*)this, (ulong)param_1);
                    eastl::string::operator=(this_00, param_2);
                    field_32 = 1;
                }
            }
        }
    }

    // 0x1001ff1b0, 112 bytes, placed by class name and debug map
    // StringVector::GetIndex(int) const
    StringVector* StringVector::GetIndex(int param_1) {
        ulong uVar1;
        basic_string* pbVar2;
        int in_EDX;
        undefined4 in_register_00000034;

        new (this) eastl::string();
        if (-1 < in_EDX) {
            uVar1 = (CONCAT44(in_register_00000034, param_1))->size();
            if ((ulong)(long)in_EDX < uVar1) {
                pbVar2 = (basic_string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                    (vector<eastl::string, eastl::allocator>*)CONCAT44(in_register_00000034, param_1), (long)in_EDX);
                eastl::string::operator=((eastl::string*)this, pbVar2);
            }
        }
        return this;
    }

    // 0x1001ff220, 16 bytes, placed by class name and debug map
    // StringVector::Size() const
    void StringVector::Size() {
        size();
    }

    // 0x1001ff230, 112 bytes, placed by class name and debug map
    // StringVector::Erase(eastl::string const&)
    void StringVector::Erase(basic_string* param_1) {
        int iVar1;
        basic_string* pbVar3;
        basic_string* pbVar2;

        pbVar2 = (basic_string*)param_1->HeapBeginPtr();
        while (true) {
            pbVar3 = (basic_string*)param_1->end();
            if (pbVar2 == pbVar3)
                break;
            iVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::compare(pbVar2);
            pbVar3 = pbVar2;
            if (iVar1 == 0) {
                pbVar3 = pbVar2 + -32;
                param_1->erase(pbVar2);
                param_1[32] = (basic_string)1;
            }
            pbVar2 = pbVar3 + 32;
        }
    }

    // 0x1001ff300, 288 bytes, placed by class name and debug map
    // StringVector::EraseCaseInsensitive(eastl::string const&)
    void StringVector::EraseCaseInsensitive(basic_string* param_1) {
        BucketAllocatorEASTL* pBVar1;
        basic_string* pbVar2;
        int iVar3;
        NpcUID* extraout_RDX;
        NpcUID* extraout_RDX_00;
        basic_string* pbVar4;
        eastl local_68[24];
        basic_string local_50[24];
        eastl local_38[8];

        pBVar1 = (BucketAllocatorEASTL*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::destruct<highlight::NpcUID*>(local_68, (NpcUID*)"EASTL basic_string", extraout_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_50, pBVar1);
        stringtools::UTF8ToLower<eastl::basic_string<char, BucketAllocatorEASTL>>(local_50);
        pbVar4 = (basic_string*)param_1->HeapBeginPtr();
        pbVar2 = (basic_string*)param_1->end();
        if (pbVar4 != pbVar2) {
            do {
                pBVar1 = (BucketAllocatorEASTL*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::destruct<highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", extraout_RDX_00);
                eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_68, pBVar1);
                stringtools::UTF8ToLower<eastl::basic_string<char, BucketAllocatorEASTL>>((basic_string*)local_68);
                iVar3 = local_68->compare();
                if (iVar3 == 0) {
                    param_1->erase(pbVar4);
                    pbVar4 = pbVar4 + -32;
                    param_1[32] = (basic_string)1;
                }
                local_68->~basic_string();
                pbVar4 = pbVar4 + 32;
                pbVar2 = (basic_string*)param_1->end();
            } while (pbVar4 != pbVar2);
        }
        local_50->~basic_string();
    }

    // 0x1001ff470, 64 bytes, placed by class name and debug map
    // StringVector::EraseIndex(int)
    void StringVector::EraseIndex(int param_1) {
        ulong uVar1;
        long lVar2;

        if (-1 < param_1) {
            uVar1 = size();
            if ((ulong)(long)param_1 < uVar1) {
                lVar2 = HeapBeginPtr();
                erase((basic_string*)((long)param_1 * 32 + lVar2));
                field_32 = 1;
            }
        }
    }

    // 0x1001ff4b0, 48 bytes, placed by class name and debug map
    // StringVector::Clear()
    void StringVector::Clear() {
        char cVar1;

        cVar1 = empty();
        if (cVar1 == '\0') {
            clear();
            field_32 = 1;
        }
    }

} // namespace jag::oldscape::rs2lib

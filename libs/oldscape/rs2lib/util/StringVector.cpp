// libs/oldscape/rs2lib/util/StringVector.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "StringVector.h"

namespace jag::oldscape::rs2lib {
    // 0x100009a70: StringVector::~StringVector() has the same machine code as Args::~Args()

    // 0x100064280: StringVector::IsDirty() const has the same machine code as eastl::optional<eastl::vector<char>>::operator bool() const

    // 0x100076550: StringVector::MarkClean() has the same machine code as eastl::Internal::optional_storage<eastl::vector<char>, false>::optional_storage()

    // 0x1001fec90
    void StringVector::Append(const eastl::string& str) {
        push_back(str);
        field_32 = 1;
    }

    // 0x1001fecb0
    void StringVector::Append(eastl::string&& str) {
        push_back(str);
        field_32 = 1;
    }

    // 0x1001fecd0
    void StringVector::AppendUnique(const eastl::string& str) {
        if (Contains(str, false) == '\0') {
            push_back(str);
            field_32 = 1;
        }
    }

    // 0x1001fed00
    unsigned long StringVector::Contains(const eastl::string& str, bool arg2) const {
        bool bVar1;
        uint64_t in_register_00000011;
        unsigned long uVar4;
        bool bVar6;

        auto pbVar2 = HeapBeginPtr();
        auto pbVar3 = end();
        uint64_t uVar5 = (uint64_t)((unsigned long)this >> 8);
        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            pbVar2 = std::find<eastl::stringconst*, eastl::string>(pbVar2, pbVar3, str);
            pbVar3 = (eastl::string*)end();
            uVar4 = (((uint64_t)uVar5 << 8) | (uint8_t)(pbVar2 != pbVar3));
        } else {
            bVar6 = pbVar2 == pbVar3;
            if (!bVar6) {
                bVar1 = core::stringtools::general::StringTools::MatchPattern<
                    eastl::basic_string<char, BucketAllocatorEASTL>>(*pbVar2, str);
                while (!bVar1) {
                    pbVar2 = pbVar2 + 32;
                    bVar6 = pbVar2 == pbVar3;
                    if (bVar6)
                        break;
                    bVar1 = core::stringtools::general::StringTools::MatchPattern<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(*pbVar2, str);
                }
            }
            uVar4 = (((uint64_t)uVar5 << 8) | (uint8_t)bVar6) ^ 1;
        }
        return uVar4 & 4294967295;
    }

    // 0x1001fedb0
    void StringVector::AppendUnique(eastl::string&& str) {
        if (Contains(str, false) == '\0') {
            push_back(str);
            field_32 = 1;
        }
    }

    // 0x1001fede0
    void StringVector::AppendUniqueCaseInsensitive(const eastl::string& str) {
        if (ContainsCaseInsensitive(str, false) == '\0') {
            push_back(str);
            field_32 = 1;
        }
    }

    // 0x1001fee10
    unsigned long StringVector::ContainsCaseInsensitive(const eastl::string& str, bool arg2) const {
        bool bVar1;
        int iVar2;
        uint64_t in_register_00000011;
        eastl local_78;
        eastl local_38;

        uint32_t local_3c = (uint32_t)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2);
        char* pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::destruct<highlight::NpcUID*>(&local_78);
        basic_string<char, BucketAllocatorEASTL> local_60(pcVar3, &local_78);
        stringtools::UTF8ToLower<eastl::basic_string<char, BucketAllocatorEASTL>>(local_60);
        long lVar4 = HeapBeginPtr();
        long local_48 = end();
        bool bVar5 = lVar4 == local_48;
        if (!bVar5) {
            do {
                pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::destruct<highlight::NpcUID*>(&local_38);
                local_78 = eastl::basic_string<char, BucketAllocatorEASTL>(pcVar3, &local_38);
                stringtools::UTF8ToLower<eastl::basic_string<char, BucketAllocatorEASTL>>(local_78);
                if ((((char)local_3c != '\0') &&
                     (bVar1 = core::stringtools::general::StringTools::MatchPattern<
                          eastl::basic_string<char, BucketAllocatorEASTL>>(local_78, local_60),
                      bVar1)) ||
                    (iVar2 = local_78.compare(&local_60), iVar2 == 0)) {
                    break;
                }
                lVar4 = lVar4 + 32;
                bVar5 = lVar4 == local_48;
            } while (!bVar5);
        }
        return ~bVar5 & 4294967041;
    }

    // 0x1001fef60
    void StringVector::AppendUniqueCaseInsensitive(eastl::string&& str) {
        if (ContainsCaseInsensitive(str, false) == '\0') {
            push_back(str);
            field_32 = 1;
        }
    }

    // 0x1001fef90
    void StringVector::Insert(int arg1, const eastl::string& str) {
        unsigned long uVar1;
        long lVar2;

        if (-1 < arg1) {
            uVar1 = size();
            if ((unsigned long)(long)arg1 < uVar1) {
                lVar2 = HeapBeginPtr();
                insert((eastl::string*)((long)arg1 * 32 + lVar2), str);
                field_32 = 1;
            }
        }
    }

    // 0x1001ff070
    void StringVector::Insert(int arg1, eastl::string&& str) {
        unsigned long uVar1;
        long lVar2;

        if (-1 < arg1) {
            uVar1 = size();
            if ((unsigned long)(long)arg1 < uVar1) {
                lVar2 = HeapBeginPtr();
                insert((eastl::string*)((long)arg1 * 32 + lVar2), str);
                field_32 = 1;
            }
        }
    }

    // 0x1001ff0f0
    void StringVector::SetIndex(int arg1, const eastl::string& str) {
        unsigned long uVar1;
        eastl::string* this_01;

        if (-1 < arg1) {
            uVar1 = size();
            if ((unsigned long)arg1 < uVar1) {
                if (((basic_string<char, BucketAllocatorEASTL>*)(*this)[(unsigned long)arg1])->compare(str) != 0) {
                    this_01 = (eastl::string*)(*this)[(unsigned long)arg1];
                    *this_01 = str;
                    field_32 = 1;
                }
            }
        }
    }

    // 0x1001ff150
    void StringVector::SetIndex(int arg1, eastl::string&& str) {
        unsigned long uVar1;
        eastl::string* this_01;

        if (-1 < arg1) {
            uVar1 = size();
            if ((unsigned long)arg1 < uVar1) {
                if (((basic_string<char, BucketAllocatorEASTL>*)(*this)[(unsigned long)arg1])->compare(str) != 0) {
                    this_01 = (eastl::string*)(*this)[(unsigned long)arg1];
                    *this_01 = str;
                    field_32 = 1;
                }
            }
        }
    }

    // 0x1001ff1b0
    auto StringVector::GetIndex(int arg1) const {
        unsigned long uVar1;
        eastl::string* str;

        auto result;
        if (-1 < arg1) {
            uVar1 = size();
            if ((unsigned long)(long)arg1 < uVar1) {
                str = (eastl::string*)(*this)[(long)arg1];
                result = str;
            }
        }
        return result;
    }

    // 0x1001ff220
    void StringVector::Size() const {
        size();
    }

    // 0x1001ff230
    void StringVector::Erase(const eastl::string& str) {
        int iVar1;
        basic_string<char, BucketAllocatorEASTL>* pbVar2;

        auto this_00 = HeapBeginPtr();
        while (true) {
            pbVar2 = (basic_string<char, BucketAllocatorEASTL>*)end();
            if (this_00 == pbVar2)
                break;
            iVar1 = this_00->compare(str);
            pbVar2 = this_00;
            if (iVar1 == 0) {
                pbVar2 = this_00 - 32;
                erase(this_00);
                field_32 = 1;
            }
            this_00 = pbVar2 + 32;
        }
    }

    // 0x1001ff300
    void StringVector::EraseCaseInsensitive(const eastl::string& str) {
        eastl local_68;
        eastl local_38;

        char* pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::destruct<highlight::NpcUID*>(&local_68);
        basic_string<char, BucketAllocatorEASTL> local_50(pcVar1, &local_68);
        stringtools::UTF8ToLower<eastl::basic_string<char, BucketAllocatorEASTL>>(local_50);
        auto str_00 = HeapBeginPtr();
        auto pbVar2 = end();
        if (str_00 != pbVar2) {
            do {
                pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::destruct<highlight::NpcUID*>(&local_38);
                local_68 = eastl::basic_string<char, BucketAllocatorEASTL>(pcVar1, &local_38);
                stringtools::UTF8ToLower<eastl::basic_string<char, BucketAllocatorEASTL>>(local_68);
                if (local_68.compare(&local_50) == 0) {
                    erase(str_00);
                    str_00 = str_00 - 32;
                    field_32 = 1;
                }
                str_00 = str_00 + 32;
                pbVar2 = (eastl::string*)end();
            } while (str_00 != pbVar2);
        }
    }

    // 0x1001ff470
    void StringVector::EraseIndex(int arg1) {
        unsigned long uVar1;
        long lVar2;

        if (-1 < arg1) {
            uVar1 = size();
            if ((unsigned long)(long)arg1 < uVar1) {
                lVar2 = HeapBeginPtr();
                erase((eastl::string*)((long)arg1 * 32 + lVar2));
                field_32 = 1;
            }
        }
    }

    // 0x1001ff4b0
    void StringVector::Clear() {
        if (empty() == '\0') {
            clear();
            field_32 = 1;
        }
    }

} // namespace jag::oldscape::rs2lib

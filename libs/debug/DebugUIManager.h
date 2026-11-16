// libs/debug/DebugUIManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::debug {
    class DebugUIManager {
    public:
        int GetMainMenuHeight() const;
        void TransferOwnership(std::unique_ptr<DebugUIElement> debugUIElement);
        void Register(DebugUIElement* debugUIElement);
        void Unregister(DebugUIElement* debugUIElement);
        uint32_t CreateRenderingResources();
        unsigned long CreateShader();
        void NotifyFrameStart(float arg1, int arg2, int arg3, const math::Rect<int>& rect);
        void MainDraw(render::RenderContext* renderContext, int arg2, int arg3);
        void RenderImDrawData(render::RenderContext* renderContext, int arg2, int arg3, ImDrawData* imDrawData);
        void DeferToRenderThread(ImDrawData* imDrawData);
        void MainLogic(bool arg1);
        void FlushOwnedUIElements();
        void RegisterInputHandler(input::Input* input);
        void UnregisterInputHandler();
        DebugUIManager();
        ~DebugUIManager();
        void Render(render::RenderContext* renderContext, int arg2, int arg3);

    private:
        uint32_t field_0;
        int field_4;
        uint64_t field_8;
        void* field_16;
        uint32_t field_24;
        uint32_t field_28;
        uint32_t field_32;
        uint32_t field_36;
        uint64_t field_40;
        uint32_t field_48;
        int field_52;
        uint64_t field_56;
        void* field_64;
        uint32_t field_72;
        uint32_t field_76;
        uint32_t field_80;
        uint32_t field_84;
        uint64_t field_88;
        uint8_t _unknown_96[4];
        int field_100;
        uint8_t _unknown_104[8];
        void* field_112;
        uint8_t _unknown_120[24];
        uint64_t field_144;
        uint32_t field_152;
        uint8_t _unknown_156[4];
        Input* field_160;
        uint8_t _unknown_168[3048];
        shared_ptr field_3216;
        uint8_t _unknown_3232[416];
        int m_mainMenuHeight;
        uint8_t field_3652;
        uint8_t field_3653;
        uint8_t _unknown_3654[10];
    };

    // 0x100684d80
    int DebugUIManager::GetMainMenuHeight() const {
        return m_mainMenuHeight;
    }

    // 0x100724800
    bool
    DebugUIManager::Unregister(DebugUIElement*)::$_0::operator()(const std::unique_ptr<DebugUIElement>& debugUIElement1,
                                                                 DebugUIElement* debugUIElement2) const {
        return (unique_ptr<DebugUIElement, std::default_delete<DebugUIElement> _>*)get() == debugUIElement1;
    }

} // namespace jag::debug

namespace jag {
    // 0x100685090
    int tokenize<eastl::fixed_vector<eastl::fixed_string<char, 128>, 8ul>, eastl::fixed_string<char, 512>>(
        eastl::fixed_vector<eastl::fixed_string<char, 128>, 8ul>& strs, const eastl::fixed_string<char, 512>& str1,
        const char* str2, int arg4) {
        bool bVar1;
        size_t sVar3;
        ReturnValue* pRVar5;
        char* str1_01;

        if (arg4 == -1) {
            sVar3 = _strlen(str2);
            arg4 = (int)sVar3;
        }
        strs.clear();
        strs.reserve(4);
        auto str1_00 = str1.begin();
        char* pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        char* pcVar6 = str1_00;
        if (str1_00 != pcVar4) {
            str1_01 = str1_00;
            do {
                str1_00 = pcVar6;
                bVar1 = internal::find_token<char, char const*>(*str1_00, str2, str2 + arg4);
                if (bVar1) {
                    if (str1_01 != str1_00) {
                        pRVar5 = (ReturnValue*)eastl::fixed_vector<eastl::fixed_string<char, 128>, 8ul>::push_back();
                        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true>>::assign(
                            pRVar5, str1_01, str1_00);
                    }
                    if (str1_00 == pcVar4) {
                    LAB_100685180:
                        pcVar6 = str1_00;
                    } else {
                        do {
                            bVar1 = internal::find_token<char, char const*>(*str1_00, str2, str2 + arg4);
                            if (!bVar1)
                                goto LAB_100685180;
                            str1_00 = str1_00 + 1;
                            pcVar6 = str1_00;
                        } while (str1_00 != pcVar4);
                    }
                } else {
                    pcVar6 = str1_00 + 1;
                    str1_00 = str1_01;
                }
                str1_01 = str1_00;
            } while (pcVar6 != pcVar4);
        }
        if (str1_00 != pcVar6) {
            pRVar5 = (ReturnValue*)eastl::fixed_vector<eastl::fixed_string<char, 128>, 8ul>::push_back();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true>>::assign(
                pRVar5, str1_00, pcVar6);
        }
        return strs.size();
    }

    // 0x100687640
    void AddEntryUniqueFirstWord<eastl::vector<eastl::string>, StringView>(eastl::vector<eastl::string>& strs,
                                                                           const StringView& stringView, bool arg3) {
        long lVar3;
        basic_string<char, BucketAllocatorEASTL>* basic_string;
        basic_string<char, eastl::fixed_vector_allocator<1ul, _64ul, _1ul, _0ul, true> _>* str;
        char* pcVar4;
        unsigned long uVar5;
        fixed_vector<eastl::fixed_string<char, 64>, 8ul> local_708;

        fixed_vector<eastl::fixed_string<char, 64>, 8ul> local_3a0;
        tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>, StringView>(&local_3a0, stringView, " ", -1);
        auto str1 = strs.HeapBeginPtr();
        auto pfVar2 = strs.end();
        if (str1 != pfVar2) {
            do {
                local_708 = eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>();
                tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>, eastl::fixed_string<char, 2048>>(
                    &local_708, str1, " ", -1);
                lVar3 = local_708.size();
                if (lVar3 != 0) {
                    lVar3 = local_3a0.size();
                    if (lVar3 != 0) {
                        basic_string = &local_708[0];
                        str = &local_3a0[0];
                        if (basic_string->compare(str) == 0) {
                            if (arg3) {
                                pcVar4 = (char*)stringView.end();
                                uVar5 = stringView.HeapBeginPtr();
                                str1->assign(pcVar4, uVar5);
                            }
                            goto LAB_1006877ca;
                        }
                    }
                }
                str1 = str1 + 32;
            } while (str1 != pfVar2);
        }
        auto this_00 = strs.push_back();
        pcVar4 = (char*)stringView.end();
        uVar5 = stringView.HeapBeginPtr();
        eastl::string::assign(this_00, pcVar4, uVar5);
    LAB_1006877ca:
    }

    // 0x100687830
    unsigned long GetStringsMinimumCommonLength<eastl::vector<eastl::string>>(const eastl::vector<eastl::string>& strs,
                                                                              unsigned long arg2) {
        int iVar2;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* basic_string;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* pbVar3;
        char* pcVar4;
        unsigned long arg1;
        bool bVar5;
        unsigned long local_38;

        char cVar1 = strs.empty();
        if ((!cVar1) && (arg2 != 0)) {
            arg1 = 0;
            do {
                basic_string =
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)strs.HeapBeginPtr();
                pbVar3 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)strs.end();
                if (basic_string != pbVar3) {
                    cVar1 = '\0';
                    bVar5 = false;
                    do {
                        if ((!cVar1) && (iVar2 = basic_string->size(), arg1 < (unsigned long)(long)iVar2)) {
                            pcVar4 = (char*)(*basic_string)[arg1];
                            cVar1 = *pcVar4;
                        } else {
                            iVar2 = basic_string->size();
                            if (((unsigned long)(long)iVar2 <= arg1) ||
                                (pcVar4 = (char*)(*basic_string)[arg1], *pcVar4 != cVar1)) {
                                iVar2 = 1;
                                local_38 = arg1;
                                goto LAB_100687935;
                            }
                        }
                        basic_string = basic_string + 32;
                        bVar5 = basic_string == pbVar3;
                    } while (!bVar5);
                    iVar2 = 0;
                LAB_100687935:
                    if (!bVar5)
                        goto LAB_100687951;
                }
                arg1 = arg1 + 1;
            } while (arg1 != arg2);
            iVar2 = 2;
        LAB_100687951:
            if (iVar2 != 2) {
                return local_38;
            }
        }
        return 0;
    }

} // namespace jag

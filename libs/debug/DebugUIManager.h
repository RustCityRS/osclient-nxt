// libs/debug/DebugUIManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::debug {
    class DebugUIManager {
    public:
        int GetMainMenuHeight() const;
        void TransferOwnership(std::unique_ptr<DebugUIElement, std::default_delete<DebugUIElement>>);
        void Register(DebugUIElement*);
        void Unregister(DebugUIElement*);
        CreateRenderingResources();
        ulong CreateShader();
        void NotifyFrameStart(float, int, int, math::Rect<int> const&);
        void MainDraw(render::RenderContext*, int, int);
        void RenderImDrawData(render::RenderContext*, int, int, ImDrawData*);
        void DeferToRenderThread(ImDrawData*);
        void MainLogic(bool);
        void FlushOwnedUIElements();
        void RegisterInputHandler(input::Input*);
        void UnregisterInputHandler();
        DebugUIManager();
        ~DebugUIManager();
        void Render(render::RenderContext*, int, int);

        // data members, from how the methods use this: 3664 bytes
        undefined4 field_0;  // offset 0
        int field_4;         // offset 4
        undefined8 field_8;  // offset 8
        void* field_16;      // offset 16
        undefined4 field_24; // offset 24
        undefined4 field_28; // offset 28
        undefined4 field_32; // offset 32
        undefined4 field_36; // offset 36
        undefined8 field_40; // offset 40
        undefined4 field_48; // offset 48
        int field_52;        // offset 52
        undefined8 field_56; // offset 56
        void* field_64;      // offset 64
        undefined4 field_72; // offset 72
        undefined4 field_76; // offset 76
        undefined4 field_80; // offset 80
        undefined4 field_84; // offset 84
        undefined8 field_88; // offset 88
        char _unknown_96[4];
        int field_100; // offset 100
        char _unknown_104[8];
        void* field_112; // offset 112
        char _unknown_120[24];
        undefined8 field_144; // offset 144
        undefined4 field_152; // offset 152
        char _unknown_156[4];
        Input* field_160;       // offset 160
        InputHandler field_168; // offset 168
        char _unknown_2480[736];
        shared_ptr field_3216; // offset 3216
        char _unknown_3232[416];
        int m_mainMenuHeight;  // offset 3648
        undefined1 field_3652; // offset 3652
        undefined1 field_3653; // offset 3653
        char _unknown_3654[10];
    };

    // 0x100684d80, 16 bytes, inline, placed by class name and debug map
    // DebugUIManager::GetMainMenuHeight() const
    int DebugUIManager::GetMainMenuHeight() {
        return m_mainMenuHeight;
    }

    // 0x100724800, 32 bytes, inline, placed by class name
    // DebugUIManager::Unregister(DebugUIElement*)::$_0::operator()(std::unique_ptr<DebugUIElement, std::default_delete<DebugUIElement> > const&, DebugUIElement*) const
    /* DebugUIManager::Unregister(DebugUIElement*)::$_0::TEMPNAMEPLACEHOLDERVALUE(std::unique_ptr<DebugUIElement,
   std::default_delete<DebugUIElement> > const&, DebugUIElement*) const */

    bool DebugUIManager::Unregister(DebugUIElement*)::$_0::operator()(unique_ptr* param_1, DebugUIElement* param_2) {
        DebugUIElement* pDVar1;

        pDVar1 = (DebugUIElement*)param_1->get();
        return pDVar1 == param_2;
    }

} // namespace jag::debug

namespace jag {
    // 0x100685090, 320 bytes, inline, placed by debug map only (low confidence)
    // int tokenize<eastl::fixed_vector<eastl::fixed_string<char, 128, true, eastl::allocator>, 8ul, true, eastl::allocator>, eastl::fixed_string<char, 512, true, eastl::allocator> >(eastl::fixed_vector<eastl::fixed_string<char, 128, true, eastl::allocator>, 8ul, true, eastl::allocator>&, eastl::fixed_string<char, 512, true, eastl::allocator> const&, char const*, int)
    int jag::tokenize<
        eastl::fixed_vector<eastl::fixed_string<char, 128, true, eastl::allocator>, 8ul, true, eastl::allocator>,
        eastl::fixed_string<char, 512, true, eastl::allocator>>(fixed_vector* param_1, fixed_string* param_2,
                                                                char* param_3, int param_4) {
        bool bVar1;
        int iVar2;
        size_t sVar3;
        char* pcVar4;
        char* pcVar5;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>* pbVar6;
        char* pcVar7;
        char* pcVar8;

        if (param_4 == -1) {
            sVar3 = _strlen(param_3);
            param_4 = (int)sVar3;
        }
        param_1->clear();
        param_1->reserve(4);
        pcVar4 = (char*)eastl::basic_string<
            char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        pcVar8 = pcVar4;
        if (pcVar4 != pcVar5) {
            pcVar7 = pcVar4;
            do {
                pcVar4 = pcVar8;
                bVar1 = internal::find_token<char, char const*>(pcVar4, param_3, param_3 + param_4);
                if (bVar1) {
                    if (pcVar7 != pcVar4) {
                        pbVar6 =
                            (basic_string<char,
                                          eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>*)
                                eastl::fixed_vector<eastl::fixed_string<char, 128, true, eastl::allocator>, 8ul, true,
                                                    eastl::allocator>::push_back();
                        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true,
                                                                                eastl::allocator>>::assign(pbVar6,
                                                                                                           pcVar7,
                                                                                                           pcVar4);
                    }
                    if (pcVar4 == pcVar5) {
                    LAB_100685180:
                        pcVar8 = pcVar4;
                    } else {
                        do {
                            bVar1 = internal::find_token<char, char const*>(pcVar4, param_3, param_3 + param_4);
                            if (!bVar1)
                                goto LAB_100685180;
                            pcVar4 = pcVar4 + 1;
                            pcVar8 = pcVar4;
                        } while (pcVar4 != pcVar5);
                    }
                } else {
                    pcVar8 = pcVar4 + 1;
                    pcVar4 = pcVar7;
                }
                pcVar7 = pcVar4;
            } while (pcVar8 != pcVar5);
        }
        if (pcVar4 != pcVar8) {
            pbVar6 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>*)
                eastl::fixed_vector<eastl::fixed_string<char, 128, true, eastl::allocator>, 8ul, true,
                                    eastl::allocator>::push_back();
            eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>::assign(pbVar6,
                                                                                                           pcVar4,
                                                                                                           pcVar8);
        }
        iVar2 = param_1->size();
        return iVar2;
    }

    // 0x100687640, 496 bytes, inline, placed by debug map only (low confidence)
    // void AddEntryUniqueFirstWord<eastl::vector<eastl::string, eastl::allocator>, StringView>(eastl::vector<eastl::string, eastl::allocator>&, StringView const&, bool)
    void jag::AddEntryUniqueFirstWord<eastl::vector<eastl::string, eastl::allocator>, StringView>(vector* param_1,
                                                                                                  StringView* param_2,
                                                                                                  bool param_3) {
        int iVar1;
        fixed_string* this;
        fixed_string* pfVar2;
        long lVar3;
        basic_string* pbVar4;
        char* pcVar5;
        ulong uVar6;
        eastl::string* this_00;
        fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator> local_708[872];
        fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator> local_3a0[872];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                            eastl::allocator>::fixed_vector(local_3a0);
        tokenize<
            eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator>,
            StringView>((fixed_vector*)local_3a0, param_2, " ", -1);
        this = (fixed_string*)param_1->HeapBeginPtr();
        pfVar2 = (fixed_string*)param_1->end();
        if (this != pfVar2) {
            do {
                eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                    eastl::allocator>::fixed_vector(local_708);
                tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                             eastl::allocator>,
                         eastl::fixed_string<char, 2048, true, eastl::allocator>>((fixed_vector*)local_708, this, " ",
                                                                                  -1);
                lVar3 = local_708->size();
                if (lVar3 != 0) {
                    lVar3 = local_3a0->size();
                    if (lVar3 != 0) {
                        pbVar4 = (basic_string*)
                            eastl::vector<eastl::fixed_string<char, 64, true, eastl::allocator>,
                                          eastl::fixed_vector_allocator<104ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<eastl::fixed_string<char, 64, true, eastl::allocator>,
                                        eastl::fixed_vector_allocator<104ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    local_708,
                                0);
                        eastl::vector<eastl::fixed_string<char, 64, true, eastl::allocator>,
                                      eastl::fixed_vector_allocator<104ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<eastl::fixed_string<char, 64, true, eastl::allocator>,
                                    eastl::fixed_vector_allocator<104ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)
                                local_3a0,
                            0);
                        iVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::compare(pbVar4);
                        if (iVar1 == 0) {
                            if (param_3) {
                                pcVar5 = (char*)param_2->end();
                                uVar6 = param_2->HeapBeginPtr();
                                assign(pcVar5, uVar6);
                            }
                            eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                                eastl::allocator>::~fixed_vector(local_708);
                            goto LAB_1006877ca;
                        }
                    }
                }
                eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                    eastl::allocator>::~fixed_vector(local_708);
                this = this + 32;
            } while (this != pfVar2);
        }
        this_00 = (eastl::string*)param_1->push_back();
        pcVar5 = (char*)param_2->end();
        uVar6 = param_2->HeapBeginPtr();
        eastl::string::assign(this_00, pcVar5, uVar6);
    LAB_1006877ca:
        eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                            eastl::allocator>::~fixed_vector(local_3a0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100687830, 336 bytes, inline, placed by debug map only (low confidence)
    // unsigned long GetStringsMinimumCommonLength<eastl::vector<eastl::string, eastl::allocator> >(eastl::vector<eastl::string, eastl::allocator> const&, unsigned long)
    /* WARNING: Removing unreachable block (ram,4301814005) */
    /* WARNING: Removing unreachable block (ram,4301814131) */
    /* WARNING: Removing unreachable block (ram,4301814056) */
    /* unsigned long GetStringsMinimumCommonLength<eastl::vector<eastl::basic_string<char,
   eastl::allocator>, eastl::allocator> >(eastl::vector<eastl::string,
   eastl::allocator> const&, unsigned long) */

    ulong jag::GetStringsMinimumCommonLength<eastl::vector<eastl::string, eastl::allocator>>(vector* param_1,
                                                                                             ulong param_2) {
        char cVar1;
        int iVar2;
        eastl::string* this;
        eastl::string* pbVar3;
        char* pcVar4;
        ulong uVar5;
        bool bVar6;
        ulong local_38;

        cVar1 = param_1->empty();
        if ((cVar1 == '\0') && (param_2 != 0)) {
            uVar5 = 0;
            do {
                this = (eastl::string*)param_1->HeapBeginPtr();
                pbVar3 = (eastl::string*)param_1->end();
                if (this != pbVar3) {
                    cVar1 = '\0';
                    bVar6 = false;
                    do {
                        if ((cVar1 == '\0') &&
                            (iVar2 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::size(),
                             uVar5 < (ulong)(long)iVar2)) {
                            pcVar4 = (char*)eastl::string::operator[](this, uVar5);
                            cVar1 = *pcVar4;
                        } else {
                            iVar2 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::size();
                            if (((ulong)(long)iVar2 <= uVar5) ||
                                (pcVar4 = (char*)eastl::string::operator[](this, uVar5), *pcVar4 != cVar1)) {
                                iVar2 = 1;
                                local_38 = uVar5;
                                goto LAB_100687935;
                            }
                        }
                        this = this + 32;
                        bVar6 = this == pbVar3;
                    } while (!bVar6);
                    iVar2 = 0;
                LAB_100687935:
                    if (!bVar6)
                        goto LAB_100687951;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 != param_2);
            iVar2 = 2;
        LAB_100687951:
            if (iVar2 != 2) {
                return local_38;
            }
        }
        return 0;
    }

} // namespace jag

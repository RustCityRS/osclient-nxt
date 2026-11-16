// libs/game/shared/console/GameConsole.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.shared

#include "GameConsole.h"

namespace jag::game {
    // 0x1006e0000, 176 bytes, base-object constructor, placed by class name and debug map
    // GameConsole::GameConsole(SystemSettings*)
    void GameConsole::GameConsole(SystemSettings* param_1) {
        function<void(Settings*)> local_58[48];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (this) jag::console::Console();
        field_0 = &PTR__GameConsole_100f11620;
        std::function<void(Settings*)>::function<GameConsole::GameConsole(SystemSettings*)::__39, void>(local_58, this);
        new (field_576, param_1, 1, "console", local_58) Settings();
        std::function<void(Settings*)>::~function(local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006e00d0, 16 bytes, complete-object constructor, placed by class name and debug map
    // GameConsole::GameConsole(SystemSettings*): jumps straight to the base-object constructor

    // 0x1006e00e0, 2432 bytes, placed by class name and debug map
    // GameConsole::LoadCommandHistoryAndVars()
    void GameConsole::LoadCommandHistoryAndVars() {
        bool bVar1;
        char* pcVar2;
        long lVar3;
        ring_buffer<eastl::string, eastl::vector<eastl::string, eastl::allocator>, eastl::allocator> local_3e8[104];
        GameConsole* local_380;
        fixed_string<char, 40, true, eastl::allocator> local_2d0[552];
        eastl::string local_a8[112];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::ring_buffer<eastl::string, eastl::vector<eastl::string, eastl::allocator>,
                           eastl::allocator>::ring_buffer(local_3e8, 128);
        local_380 = this;
        new (local_2d0) eastl::fixed_string<char, 32, true, eastl::allocator>();
        ToText<32, true>((fixed_string*)local_2d0, 0, 10);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        lVar3 = (field_576, pcVar2)->GetStringSize();
        if (lVar3 == 0) {
            /* WARNING: Subroutine does not return */
            eastl::fixed_string<char, 40, true, eastl::allocator>::~fixed_string(local_2d0);
        }
        eastl::string::basic_string(local_a8);
        eastl::string::reserve(local_a8, lVar3 + 1);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        bVar1 = Settings::GetValue<eastl::string>((Settings*)field_576, (basic_string*)local_a8, pcVar2);
        if (bVar1) {
            eastl::ring_buffer<eastl::string, eastl::vector<eastl::string, eastl::allocator>,
                               eastl::allocator>::push_back(local_3e8, (basic_string*)local_a8);
        }
        eastl::string::~basic_string(local_a8);
        /* WARNING: Subroutine does not return */
        eastl::fixed_string<char, 40, true, eastl::allocator>::~fixed_string(local_2d0);
    }

    // 0x1006e13d0, 736 bytes, placed by class name
    // GameConsole::SaveCommandHistoryAndVars()
    undefined8 GameConsole::SaveCommandHistoryAndVars() {
        char cVar1;
        int iVar2;
        uint uVar3;
        fixed_string* pfVar4;
        basic_string* pbVar5;
        vector<eastl::pair<eastl::string,
                           std::variant<int, unsigned int, bool, float, eastl::string, jag::console::VarAny>>,
               eastl::allocator>* this_00;
        AnimationFrameRT7* pAVar6;
        Base64* this_01;
        uchar* puVar7;
        undefined8 uVar8;
        uchar* extraout_RDX;
        ulong uVar9;
        StringView SVar10;
        StringView local_d8;
        undefined1 local_c8[32];
        __38 local_a8;
        AnimationFrameRT7* local_a0;
        char* local_98;
        AnimationFrameRT7* local_90;
        LoginManager* local_88;
        fixed_string<char, 32, true, eastl::allocator> local_80[72];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_88 = (LoginManager*)GetOrigin();
        iVar2 = local_88->GetAuthWrapper();
        local_98 = field_576;
        uVar9 = (ulong)iVar2;
        while (0 < (long)uVar9) {
            uVar9 = uVar9 - 1;
            pfVar4 = (fixed_string*)
                eastl::ring_buffer<eastl::string, eastl::vector<eastl::string, eastl::allocator>, eastl::allocator>::
                operator[](
                    (ring_buffer<eastl::string, eastl::vector<eastl::string, eastl::allocator>, eastl::allocator>*)
                        local_88,
                    uVar9);
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_d8, pfVar4);
            SVar10.field_8 = extraout_RDX;
            SVar10.field_0 = (ulong)&local_d8;
            cVar1 = IsProtectedCommand(SVar10);
            if (cVar1 == '\0') {
                eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_80);
                ToText<32, true>((fixed_string*)local_80, 0, 10);
                pbVar5 = (basic_string*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                Settings::SetValue<char, eastl::allocator>(local_98, pbVar5);
                local_90 = (AnimationFrameRT7*)((ulong)local_90 & 18446744073709551360);
                /* WARNING: Subroutine does not return */
                local_80->~fixed_string();
            }
        }
        this_00 =
            (vector<eastl::pair<eastl::string,
                                std::variant<int, unsigned int, bool, float, eastl::string, jag::console::VarAny>>,
                    eastl::allocator>*)GetIrradianceEffect();
        new (local_80) eastl::string();
        uVar3 = eastl::vector<eastl::pair<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string,
                                                                      jag::console::VarAny>>,
                              eastl::allocator>::size(this_00);
        eastl::string::sprintf((char*)local_80, &DAT_100e32fcf, (ulong)uVar3);
        pAVar6 = (AnimationFrameRT7*)this_00->HeapBeginPtr();
        local_a0 = (AnimationFrameRT7*)this_00->end();
        if (pAVar6 != local_a0) {
            do {
                eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
                local_88 = (LoginManager*)graphics::AnimationFrameRT7::GetBillboardLabelTransforms(pAVar6);
                new (local_c8) eastl::string();
                this_01 = (Base64*)Base64::Instance();
                puVar7 = (uchar*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_90 = pAVar6;
                uVar9 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                pAVar6 = local_90;
                this_01->Encode(local_c8, puVar7, uVar9);
                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar3 = local_88->index();
                eastl::string::append_sprintf((char*)local_80, "%s %d ", uVar8, (ulong)uVar3);
                eastl::string::clear();
                local_a8.field_0 = (basic_string*)local_c8;
                std::visit<GameConsole::SaveCommandHistoryAndVars()::__38,
                           std::variant<int, unsigned int, bool, float, eastl::string, jag::console::VarAny> const&,
                           void>(&local_a8, (variant*)local_88);
                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::string::append_sprintf((char*)local_80, "%s ", uVar8);
                local_c8->~basic_string();
                pAVar6 = (AnimationFrameRT7*)&pAVar6[1].field_24;
            } while (pAVar6 != local_a0);
        }
        Settings::SetValue<char, eastl::allocator>(local_98, (basic_string*)"CLIENT_CONSOLE_VARS");
        local_80->~basic_string();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71((int7)((ulong) * (long*)PTR____stack_chk_guard_100ee9d98 >> 8), 1);
    }

    // 0x100713ed0, 16 bytes, placed by class name
    // GameConsole::GameConsole(SystemSettings*)::$_39::operator()(Settings*) const
    /* GameConsole::GameConsole(SystemSettings*)::$_39::TEMPNAMEPLACEHOLDERVALUE(Settings*)
   const */

    void GameConsole::GameConsole(SystemSettings*)::$_39::operator()(Settings* param_1) {
        LoadCommandHistoryAndVars(*(GameConsole**)this);
    }

} // namespace jag::game

namespace jag {
    // 0x1006e0a70, 144 bytes, inline, placed by debug map only (low confidence)
    // char const* ToText<32, true>(eastl::fixed_string<char, 32, true, eastl::allocator>&, int, unsigned int)
    char* ToText<32, true>(fixed_string* param_1, int param_2, uint param_3) {
        void* pvVar1;
        void* pvVar2;
        char* pcVar3;
        uint local_4c;
        char local_48[40];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_4c = 32;
        pvVar1 = (void*)internal::itoa(local_48, &local_4c, (long)param_2, param_3);
        if (local_4c < 32) {
            pvVar2 = (void*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 32ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 32ul, 1ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            _memcpy(pvVar2, pvVar1, (ulong)(local_4c + 1));
            param_1->force_size((ulong)local_4c);
        }
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return pcVar3;
    }

} // namespace jag

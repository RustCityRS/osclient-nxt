// libs/game/shared/console/GameConsole.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.shared

#include "GameConsole.h"

namespace jag::game {
    // 0x1006e0000
    GameConsole::GameConsole(SystemSettings* systemSettings) {
        function<void(Settings*)> local_58[48];
        long local_28;

        new (this) jag::console::Console();
        std::function<void(Settings*)>::function<GameConsole::GameConsole(SystemSettings*)::__39, void>(local_58,
                                                                                                        (__39*)this);
        new (field_576) Settings(systemSettings, 1, "console", *local_58);
    }

    // 0x1006e00e0
    void GameConsole::LoadCommandHistoryAndVars() {
        ring_buffer<eastl::string, eastl::vector<eastl::string>> local_3e8(128);
        GameConsole* local_380 = this;
        fixed_string<char, 40> local_2d0;
        ToText<32, true>(&local_2d0, 0, 10);
        char* pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        long lVar3 = field_576->GetStringSize(pcVar2);
        if (lVar3 == 0) {
        }
        eastl::string local_a8;
        local_a8.reserve(lVar3 + 1);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (field_576->GetValue<eastl::string>(local_a8, pcVar2)) {
            eastl::ring_buffer<eastl::string, eastl::vector<eastl::string>>::push_back(local_3e8);
        }
    }

    // 0x1006e13d0
    uint64_t GameConsole::SaveCommandHistoryAndVars() {
        basic_string<char, BucketAllocatorEASTL>* str;
        char* str1;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* this_01;
        Base64* this_02;
        unsigned char* arg2;
        uint64_t uVar5;
        StringView local_d8;
        uint8_t local_c8[32];
        __38 local_a8;
        AnimationFrameRT7* local_90;

        auto local_88 = GetOrigin();
        int iVar2 = local_88->GetAuthWrapper();
        Settings* local_98 = (Settings*)field_576;
        unsigned long uVar6 = (unsigned long)iVar2;
        while (0 < (long)uVar6) {
            uVar6 = uVar6 - 1;
            str = (basic_string<char, BucketAllocatorEASTL>*)(*local_88)[uVar6];
            local_d8.StringView<eastl::fixed_string<char, 40>>(*str);
            if (IsProtectedCommand(&local_d8) == '\0') {
                local_80 = eastl::fixed_string<char, 32>();
                ToText<32, true>(&local_80, 0, 10);
                str1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_98->SetValue<char>(str1, *str);
                local_90 = (AnimationFrameRT7*)((unsigned long)local_90 & 18446744073709551360);
            }
        }
        auto this_00 = GetIrradianceEffect();
        fixed_string<char, 32> local_80;
        unsigned int uVar3 = this_00->size();
        local_80.sprintf("%d ", (unsigned long)uVar3);
        auto pAVar4 = this_00->HeapBeginPtr();
        auto local_a0 = this_00->end();
        if (pAVar4 != local_a0) {
            do {
                this_01 =
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)pAVar4->first();
                local_88 = (LoginManager*)pAVar4->GetBillboardLabelTransforms();
                new (local_c8) eastl::string();
                this_02 = Base64::Instance();
                arg2 = (unsigned char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_90 = pAVar4;
                uVar6 = this_01->size();
                pAVar4 = local_90;
                this_02->Encode(*local_c8, arg2, uVar6);
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar3 = local_88->index();
                local_80.append_sprintf("%s %d ", uVar5, (unsigned long)uVar3);
                local_c8->clear();
                local_a8.field_0 = (eastl::string*)local_c8;
                std::visit<GameConsole::SaveCommandHistoryAndVars()::__38,
                           std::variant<int, unsigned int, bool, float, eastl::string, jag::console::VarAny> const&,
                           void>(
                    &local_a8, (variant<int, unsigned int, bool, float, eastl::string, jag::console::VarAny>*)local_88);
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_80.append_sprintf("%s ", uVar5);
                pAVar4 = (AnimationFrameRT7*)&pAVar4[1].field_24;
            } while (pAVar4 != local_a0);
        }
        local_98->SetValue<char>("CLIENT_CONSOLE_VARS", local_80);
        return 1;
    }

    // 0x100713ed0
    void GameConsole::GameConsole(SystemSettings*)::$_39::operator()(Settings* settings) const {
        LoadCommandHistoryAndVars(field_0);
    }

} // namespace jag::game

namespace jag {
    // 0x1006e0a70
    char const* ToText<32, true>(eastl::fixed_string<char, 32>& str, int arg2, unsigned int arg3) {
        char local_48[40];

        auto pvVar1 = internal::itoa(local_48, 32, (long)arg2, arg3);
        if (32 < 32) {
            _memcpy((void*)str[0], pvVar1, (unsigned long)(32 + 1));
            str.force_size((unsigned long)32);
        }
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

} // namespace jag

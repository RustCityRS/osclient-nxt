// libs/game/shared/console/GameConsole.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class GameConsole {
    public:
        // virtual methods in vtable order
        virtual ~GameConsole();
        virtual void LoadCommandHistoryAndVars();
        virtual uint64_t SaveCommandHistoryAndVars();
        virtual void MainLogic();
        GameConsole(SystemSettings* systemSettings);

    private:
        uint8_t _unknown_8[96];
        StringVector field_104;
        uint8_t _unknown_137[23];
        uint16_t field_160;
        uint8_t _unknown_162[2];
        uint64_t field_164;
        uint8_t _unknown_172[52];
        uint32_t field_224;
        uint8_t _unknown_228[92];
        uint32_t field_320;
        uint8_t _unknown_324[244];
        int field_568;
        uint8_t field_572;
        uint8_t _unknown_573[3];
        Settings field_576;
    };

    // 0x1006e6830
    void GameConsole::MainLogic() {
        RunPendingCommands(0.02);
    }

    // 0x1006e8c20
    auto GameConsole::SaveCommandHistoryAndVars()::$_38::operator()<int const&>(const int& arg1) const {
        return Base64::Instance()->Encode(*field_0, arg1, 4);
    }

    // 0x1006e8c80
    auto
    GameConsole::SaveCommandHistoryAndVars()::$_38::operator()<unsigned int const&>(const unsigned int& arg1) const {
        return Base64::Instance()->Encode(*field_0, arg1, 4);
    }

    // 0x1006e8ce0
    auto GameConsole::SaveCommandHistoryAndVars()::$_38::operator()<bool const&>(const bool& arg1) const {
        return Base64::Instance()->Encode(*field_0, arg1, 1);
    }

    // 0x1006e8d40
    auto GameConsole::SaveCommandHistoryAndVars()::$_38::operator()<float const&>(const float& arg1) const {
        return Base64::Instance()->Encode(*field_0, arg1, 4);
    }

    // 0x1006e8da0
    auto
    GameConsole::SaveCommandHistoryAndVars()::$_38::operator()<eastl::string const&>(const eastl::string& str) const {
        auto this_00 = Base64::Instance();
        eastl::string* str_00 = field_0;
        unsigned char* arg2 = (unsigned char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg3 = str.size();
        return this_00->Encode(*str_00, arg2, arg3);
    }

    // 0x1006e8e20
    auto GameConsole::SaveCommandHistoryAndVars()::$_38::operator()<jag::console::VarAny const&>(
        const jag::console::VarAny& varAny) const {
        auto extraout_EAX;

        varAny.Encode<eastl::string>(*field_0);
        return extraout_EAX;
    }

    // 0x1006e9a80
    GameConsole::~GameConsole() {
        SaveCommandHistoryAndVars();
        field_576->~Settings();
    }

} // namespace jag::game

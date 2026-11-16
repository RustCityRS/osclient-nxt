// libs/game/shared/console/GameConsole.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class GameConsole {
    public:
        // virtual methods in vtable order
        virtual ~GameConsole();
        virtual void LoadCommandHistoryAndVars();
        virtual SaveCommandHistoryAndVars();
        virtual void MainLogic();
        GameConsole(SystemSettings*);

        // data members, from how the methods use this: 728 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[96];
        StringVector field_104; // offset 104
        char _unknown_137[23];
        bool field_160; // offset 160
        char field_161; // offset 161
        char _unknown_162[2];
        int field_164; // offset 164
        int field_168; // offset 168
        char _unknown_172[52];
        int field_224; // offset 224
        char _unknown_228[92];
        float field_320; // offset 320
        char _unknown_324[244];
        int field_568;        // offset 568
        undefined1 field_572; // offset 572
        char _unknown_573[3];
        Settings field_576; // offset 576
    };

    // 0x1006e6800, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // GameConsole::~GameConsole(): jumps straight to the base-object destructor

    // 0x1006e6810, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // GameConsole::~GameConsole()
    void GameConsole::~GameConsole() {
        ~GameConsole(this);
        operator_delete(this);
    }

    // 0x1006e6830, 32 bytes, inline, placed by class name and debug map
    // GameConsole::MainLogic()
    void GameConsole::MainLogic() {
        RunPendingCommands(0.02);
    }

    // 0x1006e8c20, 48 bytes, inline, placed by class name
    // auto GameConsole::SaveCommandHistoryAndVars()::$_38::operator()<int const&>(int const&) const
    /* auto GameConsole::SaveCommandHistoryAndVars()::$_38::TEMPNAMEPLACEHOLDERVALUE(int
   const&) const */

    void GameConsole::SaveCommandHistoryAndVars()::$_38::operator()(int* param_1) {
        Base64* this_00;

        this_00 = (Base64*)Base64::Instance();
        this_00->Encode(field_0, (uchar*)param_1, 4);
    }

    // 0x1006e8c80, 48 bytes, inline, placed by class name
    // auto GameConsole::SaveCommandHistoryAndVars()::$_38::operator()<unsigned int const&>(unsigned int const&) const
    /* auto GameConsole::SaveCommandHistoryAndVars()::$_38::TEMPNAMEPLACEHOLDERVALUE(unsigned
   int const&) const */

    void GameConsole::SaveCommandHistoryAndVars()::$_38::operator()(uint* param_1) {
        Base64* this_00;

        this_00 = (Base64*)Base64::Instance();
        this_00->Encode(field_0, (uchar*)param_1, 4);
    }

    // 0x1006e8ce0, 48 bytes, inline, placed by class name
    // auto GameConsole::SaveCommandHistoryAndVars()::$_38::operator()<bool const&>(bool const&) const
    /* auto GameConsole::SaveCommandHistoryAndVars()::$_38::TEMPNAMEPLACEHOLDERVALUE(bool
   const&) const */

    void GameConsole::SaveCommandHistoryAndVars()::$_38::operator()(bool* param_1) {
        Base64* this_00;

        this_00 = (Base64*)Base64::Instance();
        this_00->Encode(field_0, param_1, 1);
    }

    // 0x1006e8d40, 48 bytes, inline, placed by class name
    // auto GameConsole::SaveCommandHistoryAndVars()::$_38::operator()<float const&>(float const&) const
    /* auto GameConsole::SaveCommandHistoryAndVars()::$_38::TEMPNAMEPLACEHOLDERVALUE(float
   const&) const */

    void GameConsole::SaveCommandHistoryAndVars()::$_38::operator()(float* param_1) {
        Base64* this_00;

        this_00 = (Base64*)Base64::Instance();
        this_00->Encode(field_0, (uchar*)param_1, 4);
    }

    // 0x1006e8da0, 80 bytes, inline, placed by class name
    // auto GameConsole::SaveCommandHistoryAndVars()::$_38::operator()<eastl::string const&>(eastl::string const&) const
    /* auto 
   GameConsole::SaveCommandHistoryAndVars()::$_38::TEMPNAMEPLACEHOLDERVALUE(eastl::basic_string<char,
   eastl::allocator> const&) const */

    void GameConsole::SaveCommandHistoryAndVars()::$_38::operator()(basic_string* param_1) {
        basic_string* pbVar1;
        Base64* this_00;
        uchar* puVar2;
        ulong uVar3;

        this_00 = (Base64*)Base64::Instance();
        pbVar1 = field_0;
        puVar2 = (uchar*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar3 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        this_00->Encode(pbVar1, puVar2, uVar3);
    }

    // 0x1006e8e20, 32 bytes, inline, placed by class name
    // auto GameConsole::SaveCommandHistoryAndVars()::$_38::operator()<jag::console::VarAny const&>(jag::console::VarAny const&) const
    /* auto 
   GameConsole::SaveCommandHistoryAndVars()::$_38::TEMPNAMEPLACEHOLDERVALUE(jag::console::VarAny
   const&) const */

    void GameConsole::SaveCommandHistoryAndVars()::$_38::operator()(VarAny* param_1) {
        jag::console::VarAny::Encode<eastl::string>(param_1, field_0);
    }

    // 0x1006e9a80, 96 bytes, base-object destructor, inline, placed by class name
    // GameConsole::~GameConsole()
    void GameConsole::~GameConsole() {
        field_0 = &PTR__GameConsole_100f11620;
        SaveCommandHistoryAndVars(this);
        field_576->~Settings();
        ~Console();
    }

} // namespace jag::game

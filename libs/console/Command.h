// libs/console/Command.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.shared

namespace jag::console {
    class CommandData {
    public:
        CommandData();
        ~CommandData();
        CommandData* operator=(CommandData&&);
        CommandData(CommandData&&);
        ulong AppendUsage(eastl::fixed_string<char, 512, true, eastl::allocator>&, StringView) const;
        bool AppendExample(eastl::fixed_string<char, 512, true, eastl::allocator>&) const;
        bool HasFlag(Flag) const;
        bool HasUsageInstructions() const;

        // data members, from how the methods use this: 241 bytes
        char _unknown_0[48];
        undefined4 field_48; // offset 48
        char _unknown_52[180];
        long field_232;       // offset 232
        undefined1 field_240; // offset 240
    };

    class RegisteredCommand {
    public:
        RegisteredCommand(CommandData&);
        long* SetArgNames(std::initializer_list<char const*>);
        RegisteredCommand* SetExample(char const*);

        // data members, from how the methods use this: 8 bytes
        long field_0; // offset 0
    };

    // 0x1006dc950, 32 bytes, inline, placed by debug map only (low confidence)
    // RegisteredCommand::SetArgNames(std::initializer_list<char const*>)
    long* RegisteredCommand::SetArgNames(long* param_1) {
        eastl::fixed_vector<char const*, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<char const*, 4ul, true, eastl::allocator>*)(*param_1 + 160));
        return param_1;
    }

    // 0x1006dfe70, 32 bytes, inline, placed by debug map only (low confidence)
    // RegisteredCommand::SetExample(char const*)
    RegisteredCommand* RegisteredCommand::SetExample(char* param_1) {
        *(char**)(field_0 + 232) = param_1;
        return this;
    }

    // 0x100c7c390, 32 bytes, inline, placed by class header (inline)
    // CommandData::HasFlag(CommandData::Flag) const
    bool CommandData::HasFlag(byte param_2) {
        return ((field_240 ^ 255) & param_2) == 0;
    }

    // 0x100c7e6a0, 48 bytes, inline, placed by class header (inline)
    // CommandData::HasUsageInstructions() const
    bool CommandData::HasUsageInstructions() {
        char cVar1;
        bool bVar2;

        cVar1 = (&field_56)->empty();
        bVar2 = true;
        if (cVar1 != '\0') {
            bVar2 = field_232 != 0;
        }
        return bVar2;
    }

} // namespace jag::console

namespace jag::game {
    // 0x1006debc0, 416 bytes, placed by debug map only (low confidence)
    // RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*, graphics::RT7Core*)
    void RegisterCommonCommandsClientOptions(Console* param_1, ClientOptions* param_2, RT7Core* param_3) {
        RegisteredCommand* this;
        RegisteredCommand local_48;
        char* local_40;
        RegisteredCommand local_38;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_48 = jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(
            jag::console::Console*, ClientOptions*, graphics::RT7Core*)::__26>(param_1, param_2, param_1);
        local_38.field_0 = 4309533413;
        jag::console::RegisteredCommand::SetArgNames(&local_48, &local_38, 1);
        local_38 = jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(
            jag::console::Console*, ClientOptions*, graphics::RT7Core*)::__27>(param_1);
        local_48.field_0 = 4309533413;
        local_40 = "setting value";
        jag::console::RegisteredCommand::SetArgNames(&local_38, &local_48, 2);
        jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(
            jag::console::Console*, ClientOptions*, graphics::RT7Core*)::__28>(param_1, param_1, param_2);
        jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(
            jag::console::Console*, ClientOptions*, graphics::RT7Core*)::__29>(param_1, param_2, param_1);
        jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(
            jag::console::Console*, ClientOptions*, graphics::RT7Core*)::__30>(param_1, param_2, param_3);
        jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(
            jag::console::Console*, ClientOptions*, graphics::RT7Core*)::__31>(param_1, param_2, param_3);
        jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(
            jag::console::Console*, ClientOptions*, graphics::RT7Core*)::__32>(param_1, param_2, param_3);
        jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(
            jag::console::Console*, ClientOptions*, graphics::RT7Core*)::__33>(param_1, param_2, param_3);
        jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(
            jag::console::Console*, ClientOptions*, graphics::RT7Core*)::__34>(param_1, param_2, param_3);
        jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(
            jag::console::Console*, ClientOptions*, graphics::RT7Core*)::__35>(param_1, param_2, param_3);
        local_38 = jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(
            jag::console::Console*, ClientOptions*, graphics::RT7Core*)::__36>(param_1);
        local_48.field_0 = 4309533606;
        local_40 = "target quality level";
        this = (RegisteredCommand*)jag::console::RegisteredCommand::SetArgNames(&local_38, &local_48, 2);
        SetExample("Valid options are : aa, aaquality, ao, bloom, drawdistance, lighting, shadows, shadowquality, "
                   "textures, reflections, volumetrics, vsync");
        jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                                              graphics::RT7Core*)::__37>(param_1);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::game

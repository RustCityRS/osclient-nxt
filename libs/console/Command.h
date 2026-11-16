// libs/console/Command.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.shared

namespace jag::console {
    class CommandData {
    public:
        CommandData();
        ~CommandData();
        CommandData* operator=(CommandData&& commandData);
        CommandData(CommandData&& commandData);
        unsigned long AppendUsage(eastl::fixed_string<char, 512>& str, StringView stringView) const;
        bool AppendExample(eastl::fixed_string<char, 512>& str) const;
        bool HasFlag(Flag flag) const;
        bool HasUsageInstructions() const;

    private:
        uint8_t _unknown_0[48];
        uint32_t field_48;
        uint8_t _unknown_52[180];
        long field_232;
        uint8_t field_240;
    };

    class RegisteredCommand {
    public:
        RegisteredCommand(CommandData& arg1);
        RegisteredCommand* SetArgNames(std::initializer_list<char const*> initializer_list);
        RegisteredCommand* SetExample(const char* str);

        uint8_t _unknown_0[8];
    };

    // 0x1006dc950
    RegisteredCommand* RegisteredCommand::SetArgNames(std::initializer_list<char const*> initializer_list) {
        initializer_list<char const*>* in_RDX;

        *((ReturnValue*)((long)*this + 160)) = *initializer_list = in_RDX;
        return this;
    }

    // 0x1006dfe70
    RegisteredCommand* RegisteredCommand::SetExample(const char* str) {
        *(char**)((long)*this + 232) = str;
        return this;
    }

    // 0x100c7c390
    bool CommandData::HasFlag(CommandData::Flag flag) const {
        return ((field_240 ^ 255) & flag) == 0;
    }

    // 0x100c7e6a0
    bool CommandData::HasUsageInstructions() const {
        bool cVar1 = field_56.empty();
        bool bVar2 = true;
        if (cVar1) {
            bVar2 = field_232 != 0;
        }
        return bVar2;
    }

} // namespace jag::console

namespace jag::game {
    // 0x1006debc0
    void RegisterCommonCommandsClientOptions(jag::console::Console* console, ClientOptions* clientOptions,
                                             graphics::RT7Core* rt7Core) {
        int in_ECX;
        uint32_t in_register_0000000c;
        char* str;
        char* str_00;
        char* str_01;
        int in_R8D;

        RegisteredCommand local_48 =
            (RegisteredCommand)jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(
                jag::console::Console*, ClientOptions*, graphics::RT7Core*)::__26>(
                (RegisteredCommand*)console, (char*)clientOptions, (__26*)console, in_ECX);
        RegisteredCommand local_38 = (RegisteredCommand)4309533413;
        local_48.SetArgNames((initializer_list<char const*>*)(Console*)&local_38);
        local_38 = (RegisteredCommand)jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(
            jag::console::Console*, ClientOptions*, graphics::RT7Core*)::__27>(
            (RegisteredCommand*)console, (Console*)&local_38, str,
            (__27*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX), in_R8D);
        local_48 = (RegisteredCommand)4309533413;
        char* local_40 = "setting value";
        local_38.SetArgNames(&local_48);
        jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                                              graphics::RT7Core*)::__28>(
            (RegisteredCommand*)console, (char*)console, (__28*)clientOptions, in_ECX);
        jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                                              graphics::RT7Core*)::__29>(
            (RegisteredCommand*)console, (char*)clientOptions, (__29*)console, in_ECX);
        jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                                              graphics::RT7Core*)::__30>(
            (RegisteredCommand*)console, (char*)clientOptions, (__30*)rt7Core, in_ECX);
        jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                                              graphics::RT7Core*)::__31>(
            (RegisteredCommand*)console, (char*)clientOptions, (__31*)rt7Core, in_ECX);
        jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                                              graphics::RT7Core*)::__32>(
            (RegisteredCommand*)console, (char*)clientOptions, (__32*)rt7Core, in_ECX);
        jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                                              graphics::RT7Core*)::__33>(
            (RegisteredCommand*)console, (char*)clientOptions, (__33*)rt7Core, in_ECX);
        jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                                              graphics::RT7Core*)::__34>(
            (RegisteredCommand*)console, (char*)clientOptions, (__34*)rt7Core, in_ECX);
        jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                                              graphics::RT7Core*)::__35>(
            (RegisteredCommand*)console, (char*)clientOptions, (__35*)rt7Core, in_ECX);
        local_38 = (RegisteredCommand)jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(
            jag::console::Console*, ClientOptions*, graphics::RT7Core*)::__36>(
            (RegisteredCommand*)console, (Console*)clientOptions, str_00,
            (__36*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX), in_R8D);
        local_48 = (RegisteredCommand)4309533606;
        local_40 = "target quality level";
        auto registeredCommand = local_38.SetArgNames(&local_48);
        char* this_01 = "Valid options are : aa, aaquality, ao, bloom, drawdistance, lighting, shadows, shadowquality, "
                        "textures, reflections, volumetrics, vsync";
        registeredCommand->SetExample("Valid options are : aa, aaquality, ao, bloom, drawdistance, lighting, shadows, "
                                      "shadowquality, textures, reflections, volumetrics, vsync");
        jag::console::Console::AddCommand<RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                                              graphics::RT7Core*)::__37>(
            (RegisteredCommand*)console, (Console*)this_01, str_01,
            (__37*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX), in_R8D);
    }

} // namespace jag::game

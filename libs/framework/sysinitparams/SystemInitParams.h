// libs/framework/sysinitparams/SystemInitParams.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class Args {
    public:
        ~Args();
        void GetArgc() const;
        void GetArgv(unsigned long) const;
        swap(Args&);
        Args();
        Args(int, char const**);
        Args(char const*, char const*);
        Args(eastl::vector<eastl::string, eastl::allocator> const&);
        Args(eastl::vector<eastl::string, eastl::allocator>&&);
        Args(Args const&);
        Args(Args&&);
        Args* operator=(Args const&);
        Args* operator=(Args&&);

        // data members, from how the methods use this: 16 bytes
        long field_0;           // offset 0
        eastl::string* field_8; // offset 8
    };

    class GoogleArgs {
    public:
        GoogleArgs(Args const&);
        ~GoogleArgs();

        // data members, from how the methods use this: 32 bytes
        int field_0; // offset 0
        char _unknown_4[4];
        void* field_8; // offset 8
        int field_16;  // offset 16
        char _unknown_20[4];
        void* field_24; // offset 24
    };

    class SystemInitParams {
    public:
        SystemInitParams();
        ~SystemInitParams();
        SystemInitParams(int, char const**);
        SystemInitParams* operator=(SystemInitParams&&);
        GetArgs() const;
        SystemInitParams(SystemInitParams const&);
        GetParameter(char const*) const;
        SystemInitParams* operator=(SystemInitParams const&);

        // data members, from how the methods use this: 32 bytes
        undefined8 field_0;  // offset 0
        undefined1 field_8;  // offset 8
        undefined7 field_9;  // offset 9
        undefined8 field_16; // offset 16
        char _unknown_24[8];
    };

    // 0x100009430, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // SystemInitParams::SystemInitParams(): jumps straight to the base-object constructor

    // 0x100009440, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // SystemInitParams::~SystemInitParams(): jumps straight to the base-object destructor

    // 0x100009940, 16 bytes, complete-object constructor, inline, placed by class name
    // SystemInitParams::SystemInitParams(int, char const**): jumps straight to the base-object constructor

    // 0x100009950, 48 bytes, inline, placed by class name
    // SystemInitParams::operator=(SystemInitParams&&)
    /* SystemInitParams::TEMPNAMEPLACEHOLDERVALUE(SystemInitParams&&) */

    SystemInitParams* SystemInitParams::operator=(SystemInitParams* param_1) {
        undefined1 uVar1;
        undefined7 uVar2;

        field_16 = param_1->field_16;
        uVar1 = param_1->field_8;
        uVar2 = param_1->field_9;
        field_0 = param_1->field_0;
        field_8 = uVar1;
        field_9 = uVar2;
        Args::operator=((Args*)&field_24, (Args*)&param_1->field_24);
        return this;
    }

    // 0x100009a20, 48 bytes, base-object constructor, inline, placed by class name
    // SystemInitParams::SystemInitParams()
    void SystemInitParams::SystemInitParams() {
        field_0 = 3092376454400;
        field_8 = 1;
        field_16 = 0;
        new (&field_24) Args();
    }

    // 0x100009a50, 16 bytes, base-object destructor, inline, placed by class name
    // SystemInitParams::~SystemInitParams()
    void SystemInitParams::~SystemInitParams() {
        (&field_24)->~StringVector();
    }

    // 0x100009d60, 48 bytes, base-object constructor, inline, placed by class name
    // SystemInitParams::SystemInitParams(int, char const**)
    void SystemInitParams::SystemInitParams(int param_1, char** param_2) {
        field_0 = 3092376454400;
        field_8 = 1;
        field_16 = 0;
        new (&field_24, param_1, param_2) Args();
    }

    // 0x100188860, 16 bytes, complete-object constructor, inline, placed by class name
    // SystemInitParams::SystemInitParams(SystemInitParams const&): jumps straight to the base-object constructor

    // 0x10019a180, 48 bytes, base-object constructor, inline, placed by class name
    // SystemInitParams::SystemInitParams(SystemInitParams const&)
    void SystemInitParams::SystemInitParams(SystemInitParams* param_1) {
        undefined1 uVar1;
        undefined7 uVar2;

        field_16 = param_1->field_16;
        uVar1 = param_1->field_8;
        uVar2 = param_1->field_9;
        field_0 = param_1->field_0;
        field_8 = uVar1;
        field_9 = uVar2;
        new (&field_24, (Args*)&param_1->field_24) Args();
    }

    // 0x100b05a00, 176 bytes, inline, placed by class name
    // SystemInitParams::GetParameter(char const*) const
    SystemInitParams* SystemInitParams::GetParameter(char* param_1) {
        long lVar2;
        basic_string* pbVar3;
        value_type* in_RDX;
        ulong uVar4;
        ulong uVar5;
        basic_string* pbVar6;
        Args* this_00;

        this_00 = (Args*)(param_1 + 24);
        lVar2 = this_00->GetArgc();
        pbVar6 = (basic_string*)&eastl::EMPTY_STRING;
        if (1 < lVar2 - 1U) {
            uVar4 = 2;
            do {
                pbVar3 = (basic_string*)this_00->GetArgv(uVar4 - 1);
                if (eastl::operator==(pbVar3, in_RDX)) {
                    pbVar6 = (basic_string*)this_00->GetArgv(uVar4);
                    break;
                }
                lVar2 = this_00->GetArgc();
                uVar5 = uVar4 + 1;
                uVar4 = uVar4 + 2;
            } while (uVar5 < lVar2 - 1U);
        }
        new (this) eastl::string(pbVar6);
        return this;
    }

    // 0x100c99a30, 48 bytes, inline, placed by class name
    // SystemInitParams::operator=(SystemInitParams const&)
    /* SystemInitParams::TEMPNAMEPLACEHOLDERVALUE(SystemInitParams const&) */

    SystemInitParams* SystemInitParams::operator=(SystemInitParams* param_1) {
        undefined1 uVar1;
        undefined7 uVar2;

        field_16 = param_1->field_16;
        uVar1 = param_1->field_8;
        uVar2 = param_1->field_9;
        field_0 = param_1->field_0;
        field_8 = uVar1;
        field_9 = uVar2;
        Args::operator=((Args*)&field_24, (Args*)&param_1->field_24);
        return this;
    }

} // namespace jag

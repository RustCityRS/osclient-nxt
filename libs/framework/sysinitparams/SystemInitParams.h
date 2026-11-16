// libs/framework/sysinitparams/SystemInitParams.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class Args {
    public:
        ~Args();
        void GetArgc() const;
        void GetArgv(unsigned long arg1) const;
        void swap(Args& arg1);
        Args();
        Args(int arg1, const char** arg2);
        Args(const char* str1, const char* str2);
        Args(const eastl::vector<eastl::string>& strs);
        Args(eastl::vector<eastl::string>&& strs);
        Args(const Args& args);
        Args(Args&& args);
        Args* operator=(const Args& args);
        Args* operator=(Args&& args);

    private:
        long field_0;
        eastl::string* field_8;
    };

    class GoogleArgs {
    public:
        GoogleArgs(const Args& args);
        ~GoogleArgs();

    private:
        int field_0;
        uint8_t _unknown_4[4];
        unsigned char* field_8;
        int field_16;
        uint8_t _unknown_20[4];
        unsigned char* field_24;
    };

    class SystemInitParams {
    public:
        SystemInitParams();
        ~SystemInitParams();
        SystemInitParams(int arg1, const char** arg2);
        SystemInitParams* operator=(SystemInitParams&& systemInitParams);
        void GetArgs() const;
        SystemInitParams(const SystemInitParams& systemInitParams);
        auto GetParameter(const char* str) const;
        SystemInitParams* operator=(const SystemInitParams& systemInitParams);

    private:
        uint64_t field_0;
        uint8_t field_8;
        uint8_t field_9[7];
        uint64_t field_16;
        uint8_t _unknown_24[8];
    };

    // 0x100009950
    SystemInitParams* SystemInitParams::operator=(SystemInitParams&& systemInitParams) {
        field_16 = systemInitParams.field_16;
        uint8_t uVar1 = systemInitParams.field_8;
        uint64_t uVar2 = systemInitParams.field_9;
        field_0 = systemInitParams.field_0;
        field_8 = uVar1;
        field_9 = uVar2;
        field_24 = systemInitParams.field_24;
        return this;
    }

    // 0x100009a20
    SystemInitParams::SystemInitParams() : field_0(3092376454400), field_8(1), field_16(0) {}

    // 0x100009a50
    SystemInitParams::~SystemInitParams() {
        field_24.~StringVector();
    }

    // 0x100009d60
    SystemInitParams::SystemInitParams(int arg1, const char** arg2)
        : field_0(3092376454400), field_8(1), field_16(0), field_24(arg1, arg2) {}

    // 0x10019a180
    SystemInitParams::SystemInitParams(const SystemInitParams& systemInitParams) : field_16(systemInitParams.field_16) {
        uint8_t uVar1 = systemInitParams.field_8;
        uint64_t uVar2 = systemInitParams.field_9;
        field_0 = systemInitParams.field_0;
        field_8 = uVar1;
        field_9 = uVar2;
        new (&field_24) Args(systemInitParams.field_24);
    }

    // 0x100b05a00
    auto SystemInitParams::GetParameter(const char* str) const {
        basic_string<char, BucketAllocatorEASTL>* str_00;
        unsigned long arg1;
        unsigned long uVar3;

        uint8_t* this_00 = &field_24;
        long lVar2 = this_00->GetArgc();
        eastl::string* str_01 = (eastl::string*)&eastl::EMPTY_STRING;
        if (1 < lVar2 - 1U) {
            arg1 = 2;
            do {
                str_00 = (basic_string<char, BucketAllocatorEASTL>*)this_00->GetArgv(arg1 - 1);
                if (*str_00 == *str) {
                    str_01 = (eastl::string*)this_00->GetArgv(arg1);
                    break;
                }
                lVar2 = this_00->GetArgc();
                uVar3 = arg1 + 1;
                arg1 = arg1 + 2;
            } while (uVar3 < lVar2 - 1U);
        }
        return auto(*str_01);
    }

    // 0x100c99a30
    SystemInitParams* SystemInitParams::operator=(const SystemInitParams& systemInitParams) {
        field_16 = systemInitParams.field_16;
        uint8_t uVar1 = systemInitParams.field_8;
        uint64_t uVar2 = systemInitParams.field_9;
        field_0 = systemInitParams.field_0;
        field_8 = uVar1;
        field_9 = uVar2;
        field_24 = systemInitParams.field_24;
        return this;
    }

} // namespace jag

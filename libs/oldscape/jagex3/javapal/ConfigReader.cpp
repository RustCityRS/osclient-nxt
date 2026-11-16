// libs/oldscape/jagex3/javapal/ConfigReader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "ConfigReader.h"

namespace jag::oldscape {
    // 0x1002b0100
    ConfigParameter::ConfigParameter() : eastl::string(), m_lineNumber(18446744073709551615) {}

    // 0x1002b0170
    ConfigParameter::ConfigParameter(const eastl::string& str1, const eastl::string& str2, unsigned long arg3,
                                     const eastl::string& str3)
        : eastl::string(str1), field_32(str2), m_lineNumber(arg3), field_72(str3) {}

    // 0x1002b01f0
    ConfigParameter* ConfigParameter::Name() const {
        return this;
    }

    // 0x1002b0200
    eastl::string* ConfigParameter::Value() const {
        return (eastl::string*)&field_32;
    }

    // 0x1002b0210
    unsigned long ConfigParameter::GetLineNumber() const {
        return m_lineNumber;
    }

    // 0x1002b0220
    uint8_t* ConfigParameter::GetRawLine() const {
        return &field_72;
    }

    // 0x1002b0230
    bool ConfigParameter::IsNull() const {
        return m_lineNumber == 18446744073709551615;
    }

    // 0x1002b0240
    ConfigReader::ConfigReader(const Array<eastl::string>& strs) : field_0(0), field_8(strs) {}

    // 0x1002b0280
    ConfigReader::ConfigReader(const Array<unsigned char>& arg1) : field_0(0) {
        char* pcVar3;
        unsigned long uVar4;
        unsigned long uVar5;
        Layout* this_00;
        eastl::string* str;
        eastl::string* this_01;
        unsigned long arg1_00;
        ReturnValue local_40;
        ReturnValue local_38;

        uint8_t* this_02 = &field_8;
        new (this_02) Array<eastl::string>();
        list<eastl::string> local_60;
        if (arg1.end() != 0) {
            arg1_00 = 0;
            uVar5 = 0;
            do {
                pcVar3 = &arg1[uVar5];
                if (*pcVar3 == '\r') {
                LAB_1002b02d0:
                    arg1_00 = uVar5 + 1;
                    uVar5 = arg1_00;
                } else {
                    pcVar3 = &arg1[uVar5];
                    if (*pcVar3 == '\n')
                        goto LAB_1002b02d0;
                    arg1_00 = arg1_00 + 1;
                    uVar4 = arg1.end();
                    if (arg1_00 == uVar4) {
                    LAB_1002b0340:
                        local_40 = (ReturnValue)arg1[uVar5];
                        local_38 = (ReturnValue)(arg1_00 - uVar5);
                        local_60.emplace_back<char const*, unsigned long>(local_40, local_38);
                        uVar5 = arg1_00;
                    } else {
                        pcVar3 = &arg1[arg1_00];
                        if (*pcVar3 == '\n')
                            goto LAB_1002b0340;
                        pcVar3 = &arg1[arg1_00];
                        if (*pcVar3 == '\r')
                            goto LAB_1002b0340;
                    }
                }
                uVar4 = arg1.end();
            } while (uVar5 < uVar4);
        }
        uVar5 = local_60.size();
        this_02->set_max_size(uVar5, 3);
        local_40 = local_60.begin();
        local_38 = local_60.end();
        bool cVar1 = local_40 != local_38;
        if (cVar1) {
            uVar5 = 0;
            do {
                this_00 = (Layout*)*local_40;
                str = (eastl::string*)this_00->SSOBeginPtr();
                this_01 = (eastl::string*)(*this_02)[uVar5];
                *this_01 = str;
                ++local_40;
                cVar1 = local_40 != local_38;
                uVar5 = uVar5 + 1;
            } while (cVar1);
        }
    }

    // 0x1002b04d0
    auto ConfigReader::NextHeader() {
        eastl::string* str;
        long lVar3;
        eastl::string local_68;
        ReturnValue local_48;

        unsigned long uVar1 = FindNextHeaderLine();
        field_0 = uVar1;
        unsigned long uVar2 = field_8.end();
        if (uVar1 == uVar2) {
            auto result;
        } else {
            uVar1 = field_0;
            field_0 = uVar1 + 1;
            str = &field_8[uVar1];
            local_68 = eastl::string(*str);
            local_68.trim();
            lVar3 = local_68.size();
            local_48 = local_68.substr(1, lVar3 - 1);
            local_48.trim();
            new (&result) eastl::string(local_68);
        }
        return result;
    }

    // 0x1002b05c0
    unsigned long ConfigReader::FindNextHeaderLine() const {
        bool bVar1;
        eastl::string* str;
        long lVar3;
        char* pcVar4;
        unsigned long unaff_R12;
        eastl::string local_50;

        unsigned long arg1 = field_0;
        do {
            if (field_8.end() <= arg1) {
                return arg1;
            }
            str = &field_8[arg1];
            local_50 = eastl::string(*str);
            local_50.trim();
            lVar3 = local_50.size();
            if (((lVar3 == 0) || (pcVar4 = (char*)local_50[0], *pcVar4 != '[')) ||
                (pcVar4 = (char*)local_50[lVar3 - 1], *pcVar4 != ']')) {
                arg1 = arg1 + 1;
                bVar1 = true;
            } else {
                bVar1 = false;
                unaff_R12 = arg1;
            }
        } while (bVar1);
        return unaff_R12;
    }

    // 0x1002b06a0
    ConfigParameter* ConfigReader::NextParameter() {
        ConfigParameter* pCVar1;
        eastl::string* str;
        char* pcVar4;
        unsigned long* in_RSI;
        ReturnValue local_98;
        ReturnValue local_78;
        eastl::string local_58;

        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00 =
            (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(in_RSI + 1);
        unsigned long uVar3 = *in_RSI;
        unsigned long uVar2 = this_00->end();
        if (uVar3 < uVar2) {
            do {
                uVar3 = *in_RSI;
                *in_RSI = uVar3 + 1;
                str = (eastl::string*)(*this_00)[uVar3];
                local_58 = eastl::string(*str);
                local_58.trim();
                uVar3 = local_58.size();
                pcVar4 = &local_58[0];
                if (((*pcVar4 != '#') && (pcVar4 = (char*)local_58[0], *pcVar4 != '/')) && (uVar3 != 0)) {
                    pcVar4 = &local_58[0];
                    pCVar1 = (ConfigParameter*)this;
                    if ((*pcVar4 == '[') && (pcVar4 = (char*)local_58[uVar3 - 1], *pcVar4 == ']')) {
                        *in_RSI = *in_RSI - 1;
                        new (pCVar1) ConfigParameter();
                    } else {
                        uVar2 = local_58.find("=", 0);
                        if (uVar2 == 18446744073709551615) {
                            local_78 = eastl::string("");
                            new (pCVar1) ConfigParameter(local_58, local_78, *in_RSI - 1, local_58);
                        } else {
                            local_78 = local_58.substr(0, uVar2);
                            local_78.trim();
                            local_98 = local_58.substr(uVar2 + 1, uVar3);
                            local_98.trim();
                            new (pCVar1) ConfigParameter(local_78, local_98, *in_RSI - 1, local_58);
                        }
                    }
                    return pCVar1;
                }
                uVar3 = *in_RSI;
                uVar2 = this_00->end();
            } while (uVar3 < uVar2);
        }
        pCVar1 = (ConfigParameter*)this;
        new (this) ConfigParameter();
        return pCVar1;
    }

    // 0x1002b08d0
    void ConfigReader::reset() {
        field_0 = 0;
    }

    // 0x1002b08e0
    unsigned long ConfigReader::LineNo() const {
        return field_0;
    }

    // 0x1002b08f0
    void ConfigReader::ReplaceCurrentLineValue(const eastl::string& str) {
        eastl::string local_b8;
        eastl::string local_98;

        long lVar1 = LineNo();
        Array<eastl::string>* local_38 = (Array<eastl::string>*)&field_8;
        eastl::string* str_00 = &field_8[lVar1 - 1];
        eastl::string local_d8(*str_00);
        lVar1 = local_d8.find('=', 0);
        unsigned long arg2 = local_d8.find(str, lVar1 + 1);
        lVar1 = str.size();
        auto local_78 = local_d8.substr(0, arg2);
        local_98 + local_78;
        auto local_58 = local_d8.substr(lVar1 + arg2, 18446744073709551615);
        local_b8 + local_98;
        lVar1 = LineNo();
        eastl::string* this_00 = (eastl::string*)(*local_38)[lVar1 - 1];
        *this_00 = &local_b8;
    }

    // 0x1002b0a80
    void ConfigReader::InsertLine(const eastl::string& str) {
        Layout* this_01;
        eastl::string* pbVar2;
        eastl::string* pbVar3;
        unsigned long uVar4;

        uint8_t* this_00 = &field_8;
        long lVar1 = this_00->end();
        Array<eastl::string> local_48(lVar1 + 1);
        unsigned long uVar5 = 0;
        if (field_0 != 0) {
            uVar4 = 0;
            do {
                this_01 = (Layout*)(*this_00)[uVar4];
                pbVar2 = (eastl::string*)this_01->SSOBeginPtr();
                pbVar3 = &local_48[uVar4];
                *pbVar3 = pbVar2;
                uVar4 = uVar4 + 1;
                uVar5 = field_0;
            } while (uVar4 < uVar5);
        }
        pbVar3 = &local_48[uVar5];
        *pbVar3 = str;
        uVar5 = field_0;
        while (true) {
            uVar4 = this_00->end();
            if (uVar4 <= uVar5)
                break;
            pbVar2 = (eastl::string*)(*this_00)[uVar5];
            uVar5 = uVar5 + 1;
            pbVar3 = &local_48[uVar5];
            *pbVar3 = pbVar2;
        }
        field_0 = field_0 + 1;
        auto strs = local_48.SSOBeginPtr();
        *this_00 = *strs;
    }

    // 0x1002b0ba0
    void ConfigReader::LineCount() const {
        field_8.end();
    }

    // 0x1002b0bb0
    void ConfigReader::GetPreviousLine() const {
        field_8[field_0 - 1];
    }

    // 0x1002b0bd0
    auto ConfigReader::GetCurrentConfig() const {
        eastl::string* this_00;
        unsigned long arg1;

        long lVar1 = eastl::max<unsigned long>(0, field_0 - 1);
        unsigned long uVar2 = FindNextHeaderLine();
        Array<eastl::string>* local_38 = (Array<eastl::string>*)&field_8;
        eastl::string* pbVar3 = (eastl::string*)(*local_38)[uVar2];
        eastl::string local_58(*pbVar3);
        uVar2 = uVar2 - lVar1;
        auto result(uVar2);
        if (uVar2 != 0) {
            arg1 = 0;
            do {
                pbVar3 = (eastl::string*)(*local_38)[lVar1 + arg1];
                this_00 = (eastl::string*)(result)[arg1];
                *this_00 = pbVar3;
                arg1 = arg1 + 1;
            } while (uVar2 != arg1);
        }
        return result;
    }

} // namespace jag::oldscape

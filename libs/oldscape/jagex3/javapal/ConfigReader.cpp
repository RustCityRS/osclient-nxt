// libs/oldscape/jagex3/javapal/ConfigReader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "ConfigReader.h"

namespace jag::oldscape {
    // 0x1002b0100, 96 bytes, base-object constructor, placed by debug map only (low confidence)
    // ConfigParameter::ConfigParameter()
    void ConfigParameter::ConfigParameter() {
        new (this) eastl::string();
        new (&field_32) eastl::string();
        m_lineNumber = 18446744073709551615;
        new (&field_72) eastl::string();
    }

    // 0x1002b0160, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // ConfigParameter::ConfigParameter(): jumps straight to the base-object constructor

    // 0x1002b0170, 112 bytes, base-object constructor, placed by debug map only (low confidence)
    // ConfigParameter::ConfigParameter(eastl::string const&, eastl::string const&, unsigned long, eastl::string const&)
    void ConfigParameter::ConfigParameter(basic_string* param_1, basic_string* param_2, ulong param_3,
                                          basic_string* param_4) {
        new (this) eastl::string(param_1);
        new (&field_32, param_2) eastl::string();
        m_lineNumber = param_3;
        new (&field_72, param_4) eastl::string();
    }

    // 0x1002b01e0, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // ConfigParameter::ConfigParameter(eastl::string const&, eastl::string const&, unsigned long, eastl::string const&): jumps straight to the base-object constructor

    // 0x1002b01f0, 16 bytes, placed by debug map only (low confidence)
    // ConfigParameter::Name() const
    ConfigParameter* ConfigParameter::Name() {
        return this;
    }

    // 0x1002b0200, 16 bytes, placed by debug map only (low confidence)
    // ConfigParameter::Value() const
    undefined1* ConfigParameter::Value() {
        return &field_32;
    }

    // 0x1002b0210, 16 bytes, placed by debug map only (low confidence)
    // ConfigParameter::GetLineNumber() const
    ulong ConfigParameter::GetLineNumber() {
        return m_lineNumber;
    }

    // 0x1002b0220, 16 bytes, placed by debug map only (low confidence)
    // ConfigParameter::GetRawLine() const
    undefined1* ConfigParameter::GetRawLine() {
        return &field_72;
    }

    // 0x1002b0230, 16 bytes, placed by debug map only (low confidence)
    // ConfigParameter::IsNull() const
    bool ConfigParameter::IsNull() {
        return m_lineNumber == 18446744073709551615;
    }

    // 0x1002b0240, 32 bytes, base-object constructor, placed by class name and debug map
    // ConfigReader::ConfigReader(Array<eastl::string, eastl::allocator> const&)
    void ConfigReader::ConfigReader(Array* param_1) {
        field_0 = (type*)0;
        new (&field_8, param_1) Array<eastl::string, eastl::allocator>();
    }

    // 0x1002b0270, 16 bytes, complete-object constructor, placed by class name and debug map
    // ConfigReader::ConfigReader(Array<eastl::string, eastl::allocator> const&): jumps straight to the base-object constructor

    // 0x1002b0280, 480 bytes, base-object constructor, placed by class name and debug map
    // ConfigReader::ConfigReader(Array<unsigned char, eastl::allocator> const&)
    void ConfigReader::ConfigReader(Array* param_1) {
        bool bVar1;
        long lVar2;
        char* pcVar3;
        ulong uVar4;
        ulong uVar5;
        Layout* this_00;
        vector* pvVar6;
        eastl::string* this_01;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        list<console::Line, eastl::allocator>* this_02;
        ulong uVar7;
        ulong* this_03;
        list<eastl::string, eastl::allocator> local_60[32];
        char* local_40;
        ulong local_38;

        field_0 = (type*)0;
        this_03 = &field_8;
        new (this_03) Array<eastl::string, eastl::allocator>();
        eastl::list<eastl::string, eastl::allocator>::list(local_60);
        lVar2 = param_1->end();
        if (lVar2 != 0) {
            uVar7 = 0;
            uVar5 = 0;
            do {
                pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                    (Array<unsigned char, eastl::allocator>*)param_1, uVar5);
                if (*pcVar3 == '\r') {
                LAB_1002b02d0:
                    uVar7 = uVar5 + 1;
                    uVar5 = uVar7;
                } else {
                    pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                        (Array<unsigned char, eastl::allocator>*)param_1, uVar5);
                    if (*pcVar3 == '\n')
                        goto LAB_1002b02d0;
                    uVar7 = uVar7 + 1;
                    uVar4 = param_1->end();
                    if (uVar7 == uVar4) {
                    LAB_1002b0340:
                        local_40 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_1, uVar5);
                        local_38 = uVar7 - uVar5;
                        eastl::list<eastl::string, eastl::allocator>::emplace_back<char const*, unsigned long>(
                            local_60, &local_40, &local_38);
                        uVar5 = uVar7;
                    } else {
                        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_1, uVar7);
                        if (*pcVar3 == '\n')
                            goto LAB_1002b0340;
                        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_1, uVar7);
                        if (*pcVar3 == '\r')
                            goto LAB_1002b0340;
                    }
                }
                uVar4 = param_1->end();
            } while (uVar5 < uVar4);
        }
        uVar5 = local_60->size();
        this_03->set_max_size(uVar5, 3);
        local_40.begin();
        this_02 = (list<console::Line, eastl::allocator>*)&local_38;
        eastl::list<console::Line, eastl::allocator>::end(this_02);
        bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)this_02, extraout_RDX);
        if (bVar1) {
            uVar5 = 0;
            do {
                this_00 = (Layout*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_40);
                pvVar6 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)this_02);
                this_01 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](
                    (Array<eastl::string, eastl::allocator>*)this_03, uVar5);
                eastl::string::operator=(this_01, (basic_string*)pvVar6);
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_40);
                this_02 = (list<console::Line, eastl::allocator>*)&local_38;
                bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_38, extraout_RDX_00);
                uVar5 = uVar5 + 1;
            } while (bVar1);
        }
        eastl::list<eastl::string, eastl::allocator>::~list(local_60);
    }

    // 0x1002b04c0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ConfigReader::ConfigReader(Array<unsigned char, eastl::allocator> const&): jumps straight to the base-object constructor

    // 0x1002b04d0, 240 bytes, placed by class name and debug map
    // ConfigReader::NextHeader()
    ConfigReader* ConfigReader::NextHeader() {
        type* ptVar1;
        type* ptVar2;
        basic_string* pbVar3;
        ConfigReader* in_RSI;
        eastl::string local_68[32];
        eastl::string local_48[32];

        ptVar1 = (type*)FindNextHeaderLine(in_RSI);
        in_RSI->field_0 = ptVar1;
        ptVar2 = (type*)(&in_RSI->field_8)->end();
        if (ptVar1 == ptVar2) {
            new (this) eastl::string();
        } else {
            ptVar1 = in_RSI->field_0;
            in_RSI->field_0 = ptVar1 + 1;
            pbVar3 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                (Array<eastl::string, eastl::allocator>*)&in_RSI->field_8, (ulong)ptVar1);
            eastl::string::basic_string(local_68, pbVar3);
            eastl::string::trim(local_68);
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            eastl::string::substr((ulong)local_48, (ulong)local_68);
            eastl::string::trim(local_48);
            eastl::string::~basic_string(local_48);
            new (this) eastl::string(local_68);
            eastl::string::~basic_string(local_68);
        }
        return this;
    }

    // 0x1002b05c0, 224 bytes, placed by class name and debug map
    // ConfigReader::FindNextHeaderLine() const
    type* ConfigReader::FindNextHeaderLine() {
        bool bVar1;
        type* ptVar2;
        basic_string* pbVar3;
        long lVar4;
        char* pcVar5;
        type* unaff_R12;
        type* ptVar6;
        eastl::string local_50[32];

        ptVar6 = field_0;
        do {
            ptVar2 = (type*)(&field_8)->end();
            if (ptVar2 <= ptVar6) {
                return ptVar6;
            }
            pbVar3 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                (Array<eastl::string, eastl::allocator>*)&field_8, (ulong)ptVar6);
            eastl::string::basic_string(local_50, pbVar3);
            eastl::string::trim(local_50);
            lVar4 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (((lVar4 == 0) || (pcVar5 = (char*)eastl::string::operator[](local_50, 0), *pcVar5 != '[')) ||
                (pcVar5 = (char*)eastl::string::operator[](local_50, lVar4 - 1), *pcVar5 != ']')) {
                ptVar6 = ptVar6 + 1;
                bVar1 = true;
            } else {
                bVar1 = false;
                unaff_R12 = ptVar6;
            }
            eastl::string::~basic_string(local_50);
        } while (bVar1);
        return unaff_R12;
    }

    // 0x1002b06a0, 560 bytes, placed by class name and debug map
    // ConfigReader::NextParameter()
    ConfigParameter* ConfigReader::NextParameter() {
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        ulong uVar1;
        ConfigParameter* pCVar2;
        ulong uVar3;
        basic_string* pbVar4;
        long lVar5;
        char* pcVar6;
        ulong* in_RSI;
        eastl::string local_98[32];
        eastl::string local_78[32];
        eastl::string local_58[32];

        this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(in_RSI + 1);
        uVar1 = *in_RSI;
        uVar3 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        if (uVar1 < uVar3) {
            do {
                uVar1 = *in_RSI;
                *in_RSI = uVar1 + 1;
                pbVar4 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                    (Array<eastl::string, eastl::allocator>*)this_00, uVar1);
                eastl::string::basic_string(local_58, pbVar4);
                eastl::string::trim(local_58);
                lVar5 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                pcVar6 = (char*)eastl::string::operator[](local_58, 0);
                if (((*pcVar6 != '#') && (pcVar6 = (char*)eastl::string::operator[](local_58, 0), *pcVar6 != '/')) &&
                    (lVar5 != 0)) {
                    pcVar6 = (char*)eastl::string::operator[](local_58, 0);
                    pCVar2 = (ConfigParameter*)this;
                    if ((*pcVar6 == '[') &&
                        (pcVar6 = (char*)eastl::string::operator[](local_58, lVar5 - 1), *pcVar6 == ']')) {
                        *in_RSI = *in_RSI - 1;
                        ConfigParameter::ConfigParameter(pCVar2);
                    } else {
                        lVar5 = local_58->find("=", 0);
                        if (lVar5 == -1) {
                            new (local_98) eastl::allocator("EASTL basic_string");
                            eastl::string::basic_string(local_78, "", (allocator*)local_98);
                            ConfigParameter::ConfigParameter(pCVar2, (basic_string*)local_58, (basic_string*)local_78,
                                                             *in_RSI - 1, (basic_string*)local_58);
                        } else {
                            eastl::string::substr((ulong)local_78, (ulong)local_58);
                            eastl::string::trim(local_78);
                            eastl::string::substr((ulong)local_98, (ulong)local_58);
                            eastl::string::trim(local_98);
                            ConfigParameter::ConfigParameter(pCVar2, (basic_string*)local_78, (basic_string*)local_98,
                                                             *in_RSI - 1, (basic_string*)local_58);
                            eastl::string::~basic_string(local_98);
                        }
                        eastl::string::~basic_string(local_78);
                    }
                    eastl::string::~basic_string(local_58);
                    return pCVar2;
                }
                eastl::string::~basic_string(local_58);
                uVar1 = *in_RSI;
                uVar3 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
            } while (uVar1 < uVar3);
        }
        pCVar2 = (ConfigParameter*)this;
        new (this) ConfigParameter();
        return pCVar2;
    }

    // 0x1002b08d0, 16 bytes, placed by class name and debug map
    // ConfigReader::reset()
    void ConfigReader::reset() {
        field_0 = (type*)0;
    }

    // 0x1002b08e0, 16 bytes, placed by class name and debug map
    // ConfigReader::LineNo() const
    type* ConfigReader::LineNo() {
        return field_0;
    }

    // 0x1002b08f0, 400 bytes, placed by class name and debug map
    // ConfigReader::ReplaceCurrentLineValue(eastl::string const&)
    void ConfigReader::ReplaceCurrentLineValue(basic_string* param_1) {
        long lVar1;
        basic_string* pbVar2;
        eastl::string* this_00;
        eastl::string local_d8[32];
        eastl local_b8[32];
        eastl local_98[32];
        basic_string local_78[32];
        basic_string local_58[32];
        Array<eastl::string, eastl::allocator>* local_38;

        lVar1 = LineNo(this);
        local_38 = (Array<eastl::string, eastl::allocator>*)&field_8;
        pbVar2 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
            (Array<eastl::string, eastl::allocator>*)&field_8, lVar1 - 1);
        eastl::string::basic_string(local_d8, pbVar2);
        lVar1 = local_d8->find('=', 0);
        eastl::string::find(local_d8, param_1, lVar1 + 1);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        eastl::string::substr((ulong)local_78, (ulong)local_d8);
        eastl::operator+(local_98, local_78, param_1);
        eastl::string::substr((ulong)local_58, (ulong)local_d8);
        eastl::operator+(local_b8, (basic_string*)local_98, local_58);
        lVar1 = LineNo(this);
        this_00 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](local_38, lVar1 - 1);
        eastl::string::operator=(this_00, (basic_string*)local_b8);
        local_b8->~basic_string();
        local_58->~basic_string();
        local_98->~basic_string();
        local_78->~basic_string();
        eastl::string::~basic_string(local_d8);
    }

    // 0x1002b0a80, 288 bytes, placed by class name and debug map
    // ConfigReader::InsertLine(eastl::string const&)
    void ConfigReader::InsertLine(basic_string* param_1) {
        ulong* this_00;
        long lVar1;
        Layout* this_01;
        vector* pvVar2;
        eastl::string* pbVar3;
        type* ptVar4;
        type* ptVar5;
        Array<eastl::string, eastl::allocator> local_48[24];

        this_00 = &field_8;
        lVar1 = this_00->end();
        Array<eastl::string, eastl::allocator>::Array(local_48, lVar1 + 1);
        ptVar5 = (type*)0;
        if (field_0 != (type*)0) {
            ptVar4 = (type*)0;
            do {
                ptVar5 = ptVar4;
                this_01 = (Layout*)Array<eastl::string, eastl::allocator>::operator[](
                    (Array<eastl::string, eastl::allocator>*)this_00, (ulong)ptVar4);
                pvVar2 = eastl::string::Layout::SSOBeginPtr(this_01, ptVar5);
                pbVar3 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](local_48, (ulong)ptVar4);
                eastl::string::operator=(pbVar3, (basic_string*)pvVar2);
                ptVar4 = ptVar4 + 1;
                ptVar5 = field_0;
            } while (ptVar4 < ptVar5);
        }
        pbVar3 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](local_48, (ulong)ptVar5);
        eastl::string::operator=(pbVar3, param_1);
        ptVar5 = field_0;
        while (true) {
            ptVar4 = (type*)this_00->end();
            if (ptVar4 <= ptVar5)
                break;
            param_1 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                (Array<eastl::string, eastl::allocator>*)this_00, (ulong)ptVar5);
            ptVar5 = ptVar5 + 1;
            pbVar3 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](local_48, (ulong)ptVar5);
            eastl::string::operator=(pbVar3, param_1);
        }
        field_0 = field_0 + 1;
        pvVar2 = local_48->SSOBeginPtr(param_1);
        Array<eastl::string, eastl::allocator>::operator=((Array<eastl::string, eastl::allocator>*)this_00,
                                                          (Array*)pvVar2);
        local_48->~Array();
    }

    // 0x1002b0ba0, 16 bytes, placed by class name and debug map
    // ConfigReader::LineCount() const
    void ConfigReader::LineCount() {
        (&field_8)->end();
    }

    // 0x1002b0bb0, 32 bytes, placed by class name and debug map
    // ConfigReader::GetPreviousLine() const
    void ConfigReader::GetPreviousLine() {
        Array<eastl::string, eastl::allocator>::operator[]((Array<eastl::string, eastl::allocator>*)&field_8,
                                                           (ulong)(field_0 + -1));
    }

    // 0x1002b0bd0, 224 bytes, placed by class name and debug map
    // ConfigReader::GetCurrentConfig() const
    ConfigReader* ConfigReader::GetCurrentConfig() {
        long lVar1;
        ulong uVar2;
        basic_string* pbVar3;
        eastl::string* this_00;
        ulong uVar4;
        ConfigReader* in_RSI;
        eastl::string local_58[32];
        Array<eastl::string, eastl::allocator>* local_38;

        lVar1 = eastl::max<unsigned long>(0, (ulong)(in_RSI->field_0 + -1));
        uVar2 = FindNextHeaderLine(in_RSI);
        local_38 = (Array<eastl::string, eastl::allocator>*)&in_RSI->field_8;
        pbVar3 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](local_38, uVar2);
        eastl::string::basic_string(local_58, pbVar3);
        uVar2 = uVar2 - lVar1;
        new (this) Array<eastl::string, eastl::allocator>(uVar2);
        if (uVar2 != 0) {
            uVar4 = 0;
            do {
                pbVar3 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](local_38, lVar1 + uVar4);
                this_00 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](
                    (Array<eastl::string, eastl::allocator>*)this, uVar4);
                eastl::string::operator=(this_00, pbVar3);
                uVar4 = uVar4 + 1;
            } while (uVar2 != uVar4);
        }
        eastl::string::~basic_string(local_58);
        return this;
    }

} // namespace jag::oldscape

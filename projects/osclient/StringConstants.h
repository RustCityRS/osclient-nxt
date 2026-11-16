// projects/osclient/StringConstants.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class StringConstants {
    public:
        StringConstants* TAG_COLOUR(int);
        StringConstants* TAG_IMG(int);
        static /* 8 bytes */ TRUE_S;          // = "true"
        static /* 8 bytes */ FALSE_S;         // = "false"
        static /* 8 bytes */ COMMA;           // = ","
        static /* 8 bytes */ PIPE;            // = "|"
        static /* 8 bytes */ OPEN_BRACKET;    // = " ("
        static /* 8 bytes */ CLOSE_BRACKET;   // = ")"
        static /* 8 bytes */ ARROW;           // = "->"
        static /* 8 bytes */ LOCALHOST;       // = "127.0.0.1"
        static /* 8 bytes */ TAG_BREAK;       // = "<br>"
        static /* 8 bytes */ TAG_COLOURCLOSE; // = "</col>"

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100f36f58, 8 bytes, __data
    StringConstants::TRUE_S = "true";

    // 0x100f36f60, 8 bytes, __data
    StringConstants::FALSE_S = "false";

    // 0x100f36f68, 8 bytes, __data
    StringConstants::COMMA = ",";

    // 0x100f36f70, 8 bytes, __data
    StringConstants::PIPE = "|";

    // 0x100f36f78, 8 bytes, __data
    StringConstants::OPEN_BRACKET = " (";

    // 0x100f36f80, 8 bytes, __data
    StringConstants::CLOSE_BRACKET = ")";

    // 0x100f36f88, 8 bytes, __data
    StringConstants::ARROW = "->";

    // 0x100f36f90, 8 bytes, __data
    StringConstants::LOCALHOST = "127.0.0.1";

    // 0x100f36f98, 8 bytes, __data
    StringConstants::TAG_BREAK = "<br>";

    // 0x100f36fa0, 8 bytes, __data
    StringConstants::TAG_COLOURCLOSE = "</col>";

    // 0x100101cf0, 240 bytes, inline, placed by class name and debug map
    // StringConstants::TAG_COLOUR(int)
    StringConstants* StringConstants::TAG_COLOUR(int param_1) {
        char* pcVar1;
        stringstream local_158[16];
        ostream local_148[264];
        stringstream local_40[24];
        allocator local_28[8];

        std::stringstream::stringstream(local_158);
        pcVar1 = "<col=";
        std::operator<<(local_148, "<col=");
        std::ostream::operator<<(local_148, (_func_ios_base_ptr_ios_base_ptr*)pcVar1);
        std::ostream::operator<<(local_148, param_1);
        std::operator<<(local_148, ">");
        std::stringstream::str(local_40);
        pcVar1 = (char*)local_40->c_str();
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (this) eastl::string(pcVar1, local_28);
        local_40->~string();
        std::stringstream::~stringstream(local_158);
        return this;
    }

    // 0x10018e860, 224 bytes, inline, placed by class name
    // StringConstants::TAG_IMG(int)
    StringConstants* StringConstants::TAG_IMG(int param_1) {
        ostream* poVar1;
        char* pcVar2;
        stringstream local_150[16];
        ostream local_140[264];
        stringstream local_38[24];
        allocator local_20[8];

        std::stringstream::stringstream(local_150);
        poVar1 = std::operator<<(local_140, "<img=");
        poVar1 = (ostream*)std::ostream::operator<<(poVar1, param_1);
        std::operator<<(poVar1, ">");
        std::stringstream::str(local_38);
        pcVar2 = (char*)local_38->c_str();
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string(pcVar2, local_20);
        local_38->~string();
        std::stringstream::~stringstream(local_150);
        return this;
    }

} // namespace jag::oldscape

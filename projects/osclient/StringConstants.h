// projects/osclient/StringConstants.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class StringConstants {
    public:
        auto TAG_COLOUR(int arg1);
        auto TAG_IMG(int arg1);
        static const char* TRUE_S;          // = "true"
        static const char* FALSE_S;         // = "false"
        static const char* COMMA;           // = ","
        static const char* PIPE;            // = "|"
        static const char* OPEN_BRACKET;    // = " ("
        static const char* CLOSE_BRACKET;   // = ")"
        static const char* ARROW;           // = "->"
        static const char* LOCALHOST;       // = "127.0.0.1"
        static const char* TAG_BREAK;       // = "<br>"
        static const char* TAG_COLOURCLOSE; // = "</col>"
    };

    // 0x100f36f58
    const char* StringConstants::TRUE_S = "true";

    // 0x100f36f60
    const char* StringConstants::FALSE_S = "false";

    // 0x100f36f68
    const char* StringConstants::COMMA = ",";

    // 0x100f36f70
    const char* StringConstants::PIPE = "|";

    // 0x100f36f78
    const char* StringConstants::OPEN_BRACKET = " (";

    // 0x100f36f80
    const char* StringConstants::CLOSE_BRACKET = ")";

    // 0x100f36f88
    const char* StringConstants::ARROW = "->";

    // 0x100f36f90
    const char* StringConstants::LOCALHOST = "127.0.0.1";

    // 0x100f36f98
    const char* StringConstants::TAG_BREAK = "<br>";

    // 0x100f36fa0
    const char* StringConstants::TAG_COLOURCLOSE = "</col>";

    // 0x100101cf0
    auto StringConstants::TAG_COLOUR(int arg1) {
        char* str;
        basic_ostream<char, std::char_traits<char> _> local_148;
        ReturnValue local_40;

        stringstream local_158;
        std::operator<<(&local_148, "<col=");
        std::ostream::operator<<(&local_148);
        std::ostream::operator<<(&local_148, arg1);
        std::operator<<(&local_148, ">");
        std::stringstream::str(&local_40, &local_158);
        str = (char*)std::string::c_str(&local_40);
        auto result(str);
        std::string::~string(&local_40);
        std::stringstream::~stringstream(&local_158);
        return result;
    }

    // 0x10018e860
    auto StringConstants::TAG_IMG(int arg1) {
        char* str;
        basic_ostream<char, std::char_traits<char> _> local_140;
        ReturnValue local_38;

        stringstream local_150;
        basic_ostream<char, std::char_traits<char> _>* pbVar1 = std::operator<<(&local_140, "<img=");
        pbVar1 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar1, arg1);
        std::operator<<(pbVar1, ">");
        std::stringstream::str(&local_38, &local_150);
        str = (char*)std::string::c_str(&local_38);
        auto result(str);
        std::string::~string(&local_38);
        std::stringstream::~stringstream(&local_150);
        return result;
    }

} // namespace jag::oldscape

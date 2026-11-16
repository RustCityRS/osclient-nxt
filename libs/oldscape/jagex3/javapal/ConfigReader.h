// libs/oldscape/jagex3/javapal/ConfigReader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class ConfigParameter {
    public:
        ConfigParameter();
        ConfigParameter(const eastl::string& str1, const eastl::string& str2, unsigned long arg3,
                        const eastl::string& str3);
        ConfigParameter* Name() const;
        eastl::string* Value() const;
        unsigned long GetLineNumber() const;
        uint8_t* GetRawLine() const;
        bool IsNull() const;
        ~ConfigParameter();

    private:
        uint8_t _unknown_0[64];
        unsigned long m_lineNumber;
        uint8_t _unknown_72[8];
    };

    class ConfigReader {
    public:
        ConfigReader(const Array<eastl::string>& strs);
        ConfigReader(const Array<unsigned char>& arg1);
        auto NextHeader();
        unsigned long FindNextHeaderLine() const;
        ConfigParameter* NextParameter();
        void reset();
        unsigned long LineNo() const;
        void ReplaceCurrentLineValue(const eastl::string& str);
        void InsertLine(const eastl::string& str);
        void LineCount() const;
        void GetPreviousLine() const;
        auto GetCurrentConfig() const;
        ~ConfigReader();

    private:
        unsigned long field_0;
        uint8_t _unknown_8[8];
    };

    // 0x1002d9e50
    ConfigReader::~ConfigReader() {
        field_8.~Array();
    }

} // namespace jag::oldscape

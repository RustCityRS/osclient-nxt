// libs/oldscape/jagex3/javapal/ConfigReader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class ConfigParameter {
    public:
        ConfigParameter();
        ConfigParameter(eastl::string const&, eastl::string const&, unsigned long, eastl::string const&);
        ConfigParameter* Name() const;
        Value() const;
        ulong GetLineNumber() const;
        GetRawLine() const;
        bool IsNull() const;
        ~ConfigParameter();

        // data members, from how the methods use this: 80 bytes
        char _unknown_0[64];
        ulong m_lineNumber; // offset 64
        char _unknown_72[8];
    };

    class ConfigReader {
    public:
        ConfigReader(Array<eastl::string, eastl::allocator> const&);
        ConfigReader(Array<unsigned char, eastl::allocator> const&);
        NextHeader();
        type* FindNextHeaderLine() const;
        ConfigParameter* NextParameter();
        void reset();
        type* LineNo() const;
        void ReplaceCurrentLineValue(eastl::string const&);
        void InsertLine(eastl::string const&);
        void LineCount() const;
        void GetPreviousLine() const;
        GetCurrentConfig() const;
        ~ConfigReader();

        // data members, from how the methods use this: 24 bytes
        type* field_0; // offset 0
        ulong field_8; // offset 8
        long field_16; // offset 16
    };

    // 0x1002b48b0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ConfigParameter::~ConfigParameter(): jumps straight to the base-object destructor

    // 0x1002b48c0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ConfigReader::~ConfigReader(): jumps straight to the base-object destructor

    // 0x1002d9e50, 16 bytes, base-object destructor, inline, placed by class name
    // ConfigReader::~ConfigReader()
    void ConfigReader::~ConfigReader() {
        (&field_8)->~Array();
    }

} // namespace jag::oldscape

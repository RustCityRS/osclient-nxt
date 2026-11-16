// libs/hal/file/file.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag {
    class File {
    public:
        void write(const char* str, Error* error) const;
        bool isopen() const;
        void write(const unsigned char* arg1, unsigned int arg2, Error* error) const;
        void read(unsigned char* arg1, unsigned int arg2, unsigned int arg3, Error* error) const;
        File(const Filename& filename, int arg2, Error* error);
        void write(const eastl::string& str, Error* error) const;
        ~File();
        File* operator=(File&& file);
        File();
        File(File&& file);
        File(const Filename& filename, Error* error);
        File(const char* str, int arg2, Error* error);
        void SetErrorCode(Error* error, int arg2);
        bool open(int arg1, Error* error);
        bool create(Error* error);
        bool close(Error* error);
        off_t length(Error* error) const;
        bool seek(long arg1, int arg2, Error* error) const;
        ssize_t read(eastl::vector<unsigned char>& arg1, unsigned int arg2, unsigned int arg3, Error* error) const;
        ssize_t read(char* str, unsigned int arg2, unsigned int arg3, Error* error) const;
        ssize_t write(const char* str, unsigned int arg2, Error* error) const;
        void tell() const;
        bool lock(long arg1, long arg2, Error* error) const;
        bool unlock(long arg1, long arg2, Error* error) const;
        uint64_t islocked(long arg1, long arg2, Error* error) const;
        auto readline() const;
        static int32_t DEFAULT_CREATE_MODE; // = 1538
        static int32_t DEFAULT_OPEN_MODE;   // = 2
        static int32_t READONLY_OPEN_MODE;  // = 0
        static int32_t DEFAULT_SHARE_MODE;  // = 0
        static int32_t TEXT_CREATE_MODE;    // = 1538
        static float TEXT_OPEN_MODE[11];    // initialised in its definition

    private:
        int field_0;
        uint8_t _unknown_4[12];
    };

    // 0x100144070
    void File::write(const char* str, Error* error) const {
        size_t sVar1 = _strlen(str);
        write(str, (unsigned int)sVar1, error);
    }

    // 0x1001440c0
    ref_counter_shared<oldscape::LogFileSink>::ref_counter_shared(unsigned long arg1,
                                                                  oldscape::LogFileSink* logFileSink)
        : ref_counter_base() {}

    // 0x100144100
    void ref_counter_shared<oldscape::LogFileSink>::DeleteData() {
        long lVar1;
        ref_counter_shared<oldscape::LogFileSink> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<oldscape::LogFileSink> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 16;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1001441f0
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2_alt2(int arg1) {
        long lVar1 = *(long*)(this + 24);
        unsigned long uVar2 = end();
        if (uVar2 < lVar1 + 2U) {
            LogAssert("m_pos + 2 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      640, nullptr);
        }
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        uint8_t* puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned int)arg1 >> 8);
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        uint8_t* pbVar4 = (uint8_t*)(*this)[uVar2];
        *pbVar4 = (uint8_t)arg1 ^ 128;
    }

    // 0x100144270
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1_alt3(int arg1) {
        long lVar1 = *(long*)(this + 24);
        unsigned long uVar2 = end();
        if (uVar2 < lVar1 + 1U) {
            LogAssert("m_pos + 1 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.h", 621,
                      nullptr);
        }
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        char* pcVar3 = (char*)(*this)[uVar2];
        *pcVar3 = -128 - (char)arg1;
    }

    // 0x1001442e0
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2_alt3(int arg1) {
        long lVar1 = *(long*)(this + 24);
        unsigned long uVar2 = end();
        if (uVar2 < lVar1 + 2U) {
            LogAssert("m_pos + 2 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      648, nullptr);
        }
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        uint8_t* pbVar3 = (uint8_t*)(*this)[uVar2];
        *pbVar3 = (uint8_t)arg1 ^ 128;
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        uint8_t* puVar4 = (uint8_t*)(*this)[uVar2];
        *puVar4 = (char)((unsigned int)arg1 >> 8);
    }

    // 0x100144360
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1_alt2(int arg1) {
        long lVar1 = *(long*)(this + 24);
        unsigned long uVar2 = end();
        if (uVar2 < lVar1 + 1U) {
            LogAssert("m_pos + 1 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.h", 620,
                      nullptr);
        }
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        char* pcVar3 = (char*)(*this)[uVar2];
        *pcVar3 = -(char)arg1;
    }

    // 0x1001443d0
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2_alt1(int arg1) {
        long lVar1 = *(long*)(this + 24);
        unsigned long uVar2 = end();
        if (uVar2 < lVar1 + 2U) {
            LogAssert("m_pos + 2 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      632, nullptr);
        }
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        uint8_t* puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)arg1;
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned int)arg1 >> 8);
    }

    // 0x100183570
    bool File::isopen() const {
        return field_0 != -1;
    }

    // 0x1001836f0
    void File::write(const unsigned char* arg1, unsigned int arg2, Error* error) const {
        write(arg1, arg2, error);
    }

    // 0x1001838d0
    void File::read(unsigned char* arg1, unsigned int arg2, unsigned int arg3, Error* error) const {
        read(arg1, arg2, arg3, error);
    }

    // 0x100186fa0
    void File::write(const eastl::string& str, Error* error) const {
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned int arg2 = str.size();
        write(str_00, arg2, error);
    }

    // 0x100198d40
    File::File(const Filename& filename, int arg2, Error* error) : field_0(-1), field_8(filename) {
        open(arg2, error);
    }

    // 0x100198e40
    File::~File() {
        close(nullptr);
        field_8.~pair();
    }

    // 0x1002ba6e0
    File* File::operator=(File&& file) {
        eastl::swap<unsigned int>(field_0, file.field_0);
        eastl::swap<Filename>(field_8, file.field_8);
        return this;
    }

    // 0x1002dfe50
    File::File() : field_0(-1) {}

    // 0x1002dff00
    File::File(File&& file) {
        new (&field_8) Filename();
        eastl::swap<unsigned int>(field_0, file.field_0);
        eastl::swap<Filename>(field_8, file.field_8);
    }

    // 0x100399a50
    File::File(const Filename& filename, Error* error) : field_0(-1), field_8(filename) {
        open(2, error);
    }

    // 0x1003aa730
    File::File(const char* str, int arg2, Error* error) : field_0(-1), field_8(str) {
        open(arg2, error);
    }

} // namespace jag

namespace jag::oldscape {
    class FileRSevenDebugPresetProvider {
    public:
        class RSevenDebugPreset;
        // virtual methods in vtable order
        virtual void PresetLocation() const;
        virtual void PresetCount() const;
        virtual void PresetName(unsigned long arg1) const;
        virtual void PresetConfiguration(unsigned long arg1) const;
        virtual void Reload();
        virtual void Reset();
        virtual void SavePreset(const char* str, const RSevenDebugConfiguration& rSevenDebugConfiguration);
        virtual void DeletePreset(unsigned long arg1);
        FileRSevenDebugPresetProvider();
        FileRSevenDebugPresetProvider* GetPresetDirectory() const;
        unsigned long AddPresetFromFile(const Filename& filename, const File& file);
        unsigned long ClearPresetDirectory() const;
        void AddDefaultConfigurations();
        eastl::string StripExtensionIfPresent<eastl::string>(const eastl::string& str);
        ~FileRSevenDebugPresetProvider();

    private:
        uint8_t _unknown_8[48];
    };

    class FileRSevenDebugPresetProvider::RSevenDebugPreset {
    public:
        RSevenDebugPreset();
        ~RSevenDebugPreset();
        RSevenDebugPreset(const RSevenDebugPreset& rSevenDebugPreset);
        RSevenDebugPreset(RSevenDebugPreset&& rSevenDebugPreset);

        uint8_t _unknown_0[680];
    };

    class FoundObject {
    public:
        FoundObject();
        ~FoundObject();
        FoundObject(FoundObject&& foundObject);
        void operator<(const FoundObject& foundObject) const;
        FoundObject* operator=(FoundObject&& foundObject);

    private:
        uint8_t _unknown_0[8];
        long field_8;
        uint16_t field_16;
        uint8_t _unknown_18[6];
    };

    // 0x100065f10
    eastl::basic_string<char, BucketAllocatorEASTL>
    FileRSevenDebugPresetProvider::StripExtensionIfPresent<eastl::basic_string<char, BucketAllocatorEASTL>>(
        const eastl::basic_string<char, BucketAllocatorEASTL>& str) {
        basic_string<char, BucketAllocatorEASTL>* in_RSI;

        unsigned long arg2 = in_RSI->find_last_of(".", 18446744073709551615);
        str = in_RSI->substr(0, arg2);
        return str;
    }

    // 0x100081760
    FileRSevenDebugPresetProvider::~FileRSevenDebugPresetProvider() {
        field_48.~basic_string();
        field_40.~unique_ptr();
        field_8.~vector();
    }

    // 0x1000860a0
    FileRSevenDebugPresetProvider::RSevenDebugPreset::RSevenDebugPreset(
        const FileRSevenDebugPresetProvider::RSevenDebugPreset& rSevenDebugPreset)
        : RSevenDebugConfiguration(rSevenDebugPreset), field_368(&rSevenDebugPreset.field_368),
          field_672(rSevenDebugPreset.field_672) {}

    // 0x1000864f0
    FileRSevenDebugPresetProvider::RSevenDebugPreset::RSevenDebugPreset(
        FileRSevenDebugPresetProvider::RSevenDebugPreset&& rSevenDebugPreset)
        : RSevenDebugConfiguration(rSevenDebugPreset), field_368(&rSevenDebugPreset.field_368),
          field_672(rSevenDebugPreset.field_672) {}

    // 0x1001448b0
    FoundObject::FoundObject(FoundObject&& foundObject) {
        shared_ptr<FileRSevenDebugPresetProvider, void>(foundObject);
        field_16 = foundObject.field_16;
    }

    // 0x100145550
    void FoundObject::operator<(const FoundObject& foundObject) const {
        long lVar1 = (*this).operator->();
        long lVar2 = foundObject.operator->();
        eastl::operator<((eastl::string*)(lVar1 + 8), (eastl::string*)(lVar2 + 8));
    }

    // 0x100145580
    FoundObject* FoundObject::operator=(FoundObject&& foundObject) {
        *this = foundObject;
        field_16 = foundObject.field_16;
        return this;
    }

} // namespace jag::oldscape

namespace jag::game {
    // 0x100183570: ClientCompositeZone::IsValid() const has the same machine code as File::isopen() const

} // namespace jag::game

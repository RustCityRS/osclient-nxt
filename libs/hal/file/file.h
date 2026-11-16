// libs/hal/file/file.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag {
    class File {
    public:
        void write(char const*, Error*) const;
        isopen() const;
        void write(unsigned char const*, unsigned int, Error*) const;
        void read(unsigned char*, unsigned int, unsigned int, Error*) const;
        File(Filename const&, int, Error*);
        void write(eastl::string const&, Error*) const;
        ~File();
        File* operator=(File&&);
        File();
        File(File&&);
        File(Filename const&, Error*);
        File(char const*, int, Error*);
        void SetErrorCode(Error*, int);
        bool open(int, Error*);
        bool create(Error*);
        bool close(Error*);
        off_t length(Error*) const;
        bool seek(long, int, Error*) const;
        ssize_t read(eastl::vector<unsigned char, eastl::allocator>&, unsigned int, unsigned int, Error*) const;
        ssize_t read(char*, unsigned int, unsigned int, Error*) const;
        ssize_t write(char const*, unsigned int, Error*) const;
        void tell() const;
        bool lock(long, long, Error*) const;
        bool unlock(long, long, Error*) const;
        islocked(long, long, Error*) const;
        readline() const;
        static /* 4 bytes */ DEFAULT_CREATE_MODE; // = 1538
        static /* 4 bytes */ DEFAULT_OPEN_MODE;   // = 2
        static /* 4 bytes */ READONLY_OPEN_MODE;  // = 0
        static /* 4 bytes */ DEFAULT_SHARE_MODE;  // = 0
        static /* 4 bytes */ TEXT_CREATE_MODE;    // = 1538
        static /* 44 bytes */ TEXT_OPEN_MODE;     // initialised in its definition

        // data members, from how the methods use this: 24 bytes
        uint field_0; // offset 0
        char _unknown_4[4];
        Filename field_8; // offset 8
    };

    // 0x100144070, 64 bytes, inline, placed by class name and debug map
    // File::write(char const*, Error*) const
    void File::write(char* param_1, Error* param_2) {
        size_t sVar1;

        sVar1 = _strlen(param_1);
        write(this, param_1, (uint)sVar1, param_2);
    }

    // 0x1001440b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::LogFileSink>::ref_counter_shared(unsigned long, oldscape::LogFileSink*): jumps straight to the base-object constructor

    // 0x1001440c0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::LogFileSink>::ref_counter_shared(unsigned long, oldscape::LogFileSink*)
    void ref_counter_shared<oldscape::LogFileSink>::ref_counter_shared(ulong param_1, LogFileSink* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee75a0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(LogFileSink**)(this + 24) = param_2;
    }

    // 0x100144100, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::LogFileSink>::DeleteData()
    void ref_counter_shared<oldscape::LogFileSink>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 16;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1001441f0, 128 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p2_alt2(int)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2_alt2(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, int param_1) {
        long lVar1;
        ulong uVar2;
        undefined1* puVar3;
        byte* pbVar4;

        lVar1 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar1 + 2U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + 2 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      640, (char*)0);
        }
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)((uint)param_1 >> 8);
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        pbVar4 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *pbVar4 = (byte)param_1 ^ 128;
    }

    // 0x100144270, 112 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p1_alt3(int)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1_alt3(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, int param_1) {
        long lVar1;
        ulong uVar2;
        char* pcVar3;

        lVar1 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar1 + 1U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + 1 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.h", 621,
                      (char*)0);
        }
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        pcVar3 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *pcVar3 = -128 - (char)param_1;
    }

    // 0x1001442e0, 128 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p2_alt3(int)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2_alt3(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, int param_1) {
        long lVar1;
        ulong uVar2;
        byte* pbVar3;
        undefined1* puVar4;

        lVar1 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar1 + 2U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + 2 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      648, (char*)0);
        }
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        pbVar3 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *pbVar3 = (byte)param_1 ^ 128;
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar4 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar4 = (char)((uint)param_1 >> 8);
    }

    // 0x100144360, 112 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p1_alt2(int)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1_alt2(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, int param_1) {
        long lVar1;
        ulong uVar2;
        char* pcVar3;

        lVar1 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar1 + 1U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + 1 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.h", 620,
                      (char*)0);
        }
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        pcVar3 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *pcVar3 = -(char)param_1;
    }

    // 0x1001443d0, 128 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p2_alt1(int)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2_alt1(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, int param_1) {
        long lVar1;
        ulong uVar2;
        undefined1* puVar3;

        lVar1 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar1 + 2U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + 2 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      632, (char*)0);
        }
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)param_1;
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)((uint)param_1 >> 8);
    }

    // 0x100183570, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // File::isopen() const
    /* game::ClientCompositeZone::IsValid() const */

    bool game::ClientCompositeZone::IsValid() {
        return field_0 != -1;
    }

    // 0x1001836f0, 16 bytes, inline, placed by class name
    // File::write(unsigned char const*, unsigned int, Error*) const
    void File::write(uchar* param_1, uint param_2, Error* param_3) {
        write(this, (char*)param_1, param_2, param_3);
    }

    // 0x1001838d0, 16 bytes, inline, placed by class name
    // File::read(unsigned char*, unsigned int, unsigned int, Error*) const
    void File::read(uchar* param_1, uint param_2, uint param_3, Error* param_4) {
        read(this, (char*)param_1, param_2, param_3, param_4);
    }

    // 0x100186e40, 16 bytes, complete-object constructor, inline, placed by class name
    // File::File(Filename const&, int, Error*): jumps straight to the base-object constructor

    // 0x100186fa0, 64 bytes, inline, placed by class name
    // File::write(eastl::string const&, Error*) const
    void File::write(basic_string* param_1, Error* param_2) {
        char* pcVar1;
        uint uVar2;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        write(this, pcVar1, uVar2, param_2);
    }

    // 0x100186fe0, 16 bytes, complete-object destructor, inline, placed by class name
    // File::~File(): jumps straight to the base-object destructor

    // 0x100198d40, 80 bytes, base-object constructor, inline, placed by class name
    // File::File(Filename const&, int, Error*)
    void File::File(Filename* param_1, int param_2, Error* param_3) {
        field_0 = 4294967295;
        new (field_8, param_1) Filename();
        open(this, param_2, param_3);
    }

    // 0x100198e40, 64 bytes, base-object destructor, inline, placed by class name
    // File::~File()
    void File::~File() {
        close(this, (Error*)0);
        field_8->~pair();
    }

    // 0x1002ba6e0, 48 bytes, inline, placed by class name
    // File::operator=(File&&)
    /* File::TEMPNAMEPLACEHOLDERVALUE(File&&) */

    File* File::operator=(File* param_1) {
        eastl::swap<unsigned int>(&field_0, &param_1->field_0);
        eastl::swap<Filename>((Filename*)field_8, (Filename*)param_1->field_8);
        return this;
    }

    // 0x1002dfe40, 16 bytes, complete-object constructor, inline, placed by class name
    // File::File(): jumps straight to the base-object constructor

    // 0x1002dfe50, 32 bytes, base-object constructor, inline, placed by class name
    // File::File()
    void File::File() {
        field_0 = 4294967295;
        new (field_8) Filename();
    }

    // 0x1002dfef0, 16 bytes, complete-object constructor, inline, placed by class name
    // File::File(File&&): jumps straight to the base-object constructor

    // 0x1002dff00, 96 bytes, base-object constructor, inline, placed by class name
    // File::File(File&&)
    void File::File(File* param_1) {
        new (field_8) Filename();
        eastl::swap<unsigned int>(&field_0, &param_1->field_0);
        eastl::swap<Filename>((Filename*)field_8, (Filename*)param_1->field_8);
    }

    // 0x100399a40, 16 bytes, complete-object constructor, inline, placed by class name
    // File::File(Filename const&, Error*): jumps straight to the base-object constructor

    // 0x100399a50, 96 bytes, base-object constructor, inline, placed by class name
    // File::File(Filename const&, Error*)
    void File::File(Filename* param_1, Error* param_2) {
        field_0 = 4294967295;
        new (field_8, param_1) Filename();
        open(this, 2, param_2);
    }

    // 0x1003aa650, 16 bytes, complete-object constructor, inline, placed by class name
    // File::File(char const*, int, Error*): jumps straight to the base-object constructor

    // 0x1003aa730, 80 bytes, base-object constructor, inline, placed by class name
    // File::File(char const*, int, Error*)
    void File::File(char* param_1, int param_2, Error* param_3) {
        field_0 = 4294967295;
        new (field_8, param_1) Filename();
        open(this, param_2, param_3);
    }

} // namespace jag

namespace jag::oldscape {
    class FileRSevenDebugPresetProvider {
    public:
        class RSevenDebugPreset;
        // virtual methods in vtable order
        virtual void PresetLocation() const;
        virtual void PresetCount() const;
        virtual void PresetName(unsigned long) const;
        virtual void PresetConfiguration(unsigned long) const;
        virtual void Reload();
        virtual void Reset();
        virtual void SavePreset(char const*, RSevenDebugConfiguration const&);
        virtual void DeletePreset(unsigned long);
        FileRSevenDebugPresetProvider();
        FileRSevenDebugPresetProvider* GetPresetDirectory() const;
        ulong AddPresetFromFile(Filename const&, File const&);
        ulong ClearPresetDirectory() const;
        void AddDefaultConfigurations();
        eastl::basic_string<char, BucketAllocatorEASTL>
        StripExtensionIfPresent<eastl::basic_string<char, BucketAllocatorEASTL>>(
            eastl::basic_string<char, BucketAllocatorEASTL> const&);
        ~FileRSevenDebugPresetProvider();

        // data members, from how the methods use this: 56 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[48];
    };

    class FileRSevenDebugPresetProvider::RSevenDebugPreset {
    public:
        RSevenDebugPreset();
        ~RSevenDebugPreset();
        RSevenDebugPreset(RSevenDebugPreset const&);
        RSevenDebugPreset(RSevenDebugPreset&&);

        // data members, from how the methods use this: 680 bytes
        char _unknown_0[368];
        Filename field_368; // offset 368
        char _unknown_384[296];
    };

    class FoundObject {
    public:
        FoundObject();
        ~FoundObject();
        FoundObject(FoundObject&&);
        void operator<(FoundObject const&) const;
        FoundObject* operator=(FoundObject&&);

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[8];
        long field_8;        // offset 8
        undefined2 field_16; // offset 16
        char _unknown_18[6];
    };

    // 0x100065f00, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // FileRSevenDebugPresetProvider::RSevenDebugPreset::RSevenDebugPreset(): jumps straight to the base-object constructor

    // 0x100065f10, 64 bytes, inline, placed by class header (inline)
    // eastl::basic_string<char, BucketAllocatorEASTL> FileRSevenDebugPresetProvider::StripExtensionIfPresent<eastl::basic_string<char, BucketAllocatorEASTL> >(eastl::basic_string<char, BucketAllocatorEASTL> const&)
    FileRSevenDebugPresetProvider*
    FileRSevenDebugPresetProvider::StripExtensionIfPresent<eastl::basic_string<char, BucketAllocatorEASTL>>(
        basic_string* param_1) {
        param_1->find_last_of(".", 18446744073709551615);
        eastl::basic_string<char, BucketAllocatorEASTL>::substr((ulong)this, (ulong)param_1);
        return this;
    }

    // 0x100066050, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // FileRSevenDebugPresetProvider::RSevenDebugPreset::~RSevenDebugPreset(): jumps straight to the base-object destructor

    // 0x100081750, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // FileRSevenDebugPresetProvider::~FileRSevenDebugPresetProvider(): jumps straight to the base-object destructor

    // 0x100081760, 64 bytes, base-object destructor, inline, placed by class header (inline)
    // FileRSevenDebugPresetProvider::~FileRSevenDebugPresetProvider()
    void FileRSevenDebugPresetProvider::~FileRSevenDebugPresetProvider() {
        field_0 = &PTR_PresetLocation_100ef27d8;
        (&field_48)->~basic_string();
        (&field_40)->~unique_ptr();
        (&field_8)->~vector();
    }

    // 0x100085fb0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // FileRSevenDebugPresetProvider::RSevenDebugPreset::RSevenDebugPreset(FileRSevenDebugPresetProvider::RSevenDebugPreset const&): jumps straight to the base-object constructor

    // 0x1000860a0, 112 bytes, base-object constructor, inline, placed by class header (inline)
    // FileRSevenDebugPresetProvider::RSevenDebugPreset::RSevenDebugPreset(FileRSevenDebugPresetProvider::RSevenDebugPreset const&)
    void FileRSevenDebugPresetProvider::RSevenDebugPreset::RSevenDebugPreset(RSevenDebugPreset* param_1) {
        new (this) RSevenDebugConfiguration(param_1);
        new (field_368, (Filename*)param_1->field_368) Filename();
        new (&field_672, (basic_string*)&param_1->field_672) eastl::string();
    }

    // 0x1000864d0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // FileRSevenDebugPresetProvider::RSevenDebugPreset::RSevenDebugPreset(FileRSevenDebugPresetProvider::RSevenDebugPreset&&): jumps straight to the base-object constructor

    // 0x1000864f0, 96 bytes, base-object constructor, inline, placed by class header (inline)
    // FileRSevenDebugPresetProvider::RSevenDebugPreset::RSevenDebugPreset(FileRSevenDebugPresetProvider::RSevenDebugPreset&&)
    void FileRSevenDebugPresetProvider::RSevenDebugPreset::RSevenDebugPreset(RSevenDebugPreset* param_1) {
        new (this) RSevenDebugConfiguration(param_1);
        new (field_368, (Filename*)param_1->field_368) Filename();
        new (&field_672, (basic_string*)&param_1->field_672) eastl::string();
    }

    // 0x1001447c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // FoundObject::FoundObject(FoundObject&&): jumps straight to the base-object constructor

    // 0x1001448b0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // FoundObject::FoundObject(FoundObject&&)
    void FoundObject::FoundObject(FoundObject* param_1) {
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        field_16 = param_1->field_16;
    }

    // 0x100145550, 48 bytes, inline, placed by debug map only (low confidence)
    // FoundObject::operator<(FoundObject const&) const
    /* FoundObject::TEMPNAMEPLACEHOLDERVALUE(FoundObject const&) const */

    void FoundObject::operator<(FoundObject* param_1) {
        long lVar1;
        long lVar2;

        lVar1 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)this);
        lVar2 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)param_1);
        eastl::operator<((basic_string*)(lVar1 + 8), (basic_string*)(lVar2 + 8));
    }

    // 0x100145580, 48 bytes, inline, placed by debug map only (low confidence)
    // FoundObject::operator=(FoundObject&&)
    /* FoundObject::TEMPNAMEPLACEHOLDERVALUE(FoundObject&&) */

    FoundObject* FoundObject::operator=(FoundObject* param_1) {
        shared_ptr<configdecoder::ObjType>::operator=((shared_ptr<configdecoder::ObjType>*)this, (shared_ptr*)param_1);
        field_16 = param_1->field_16;
        return this;
    }

} // namespace jag::oldscape

namespace jag::game {
    // 0x100183570: the linker folded this into File::isopen() const, which has identical code
    ClientCompositeZone::IsValid() const;

} // namespace jag::game

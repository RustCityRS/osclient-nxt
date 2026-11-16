// projects/osclient/minimenu/MinimenuEntry.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::minimenu {
    class MinimenuEntry {
    public:
        GetVerb() const;
        SetX(int);
        void SetZ(int);
        R() const;
        void SetSubjectTypecode(long long);
        byte IsGlobalEntry() const;
        void SetValues(eastl::string const&, MinimenuSubject const&, int, int, int, int, int);
        byte IsShiftClickable() const;
        byte IgnoreSingleClickMode() const;
        void CopyValues(MinimenuEntry const&);
        void SetSubjectName(eastl::string const&);
        uint Z() const;
        MinimenuEntry();
        ~MinimenuEntry();
        MinimenuEntry(eastl::string const&, MinimenuSubject const&, int, int, int, int, int);
        MinimenuEntry(MinimenuEntry const&);
        GetSubjectType() const;
        GetSubjectName() const;
        GetSubject() const;
        GetSubjectTypecode() const;
        GetObjType() const;
        GetObjCount() const;
        GetComponent() const;
        uint X() const;
        T() const;

        // data members, from how the methods use this: 116 bytes
        int field_0;  // offset 0
        int m_z;      // offset 4
        int field_8;  // offset 8
        int field_12; // offset 12
        int field_16; // offset 16
        char _unknown_20[76];
        longlong m_subjectTypecode; // offset 96
        char _unknown_104[12];
    };

    // 0x100028fb0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // MinimenuSubject::~MinimenuSubject(): jumps straight to the base-object destructor

    // 0x10006e000, 16 bytes, inline, placed by class name
    // MinimenuEntry::SetSubjectTypecode(long long)
    void MinimenuEntry::SetSubjectTypecode(longlong param_1) {
        m_subjectTypecode = param_1;
    }

    // 0x10006e670, 16 bytes, inline, placed by class name
    // MinimenuEntry::IsGlobalEntry() const
    byte MinimenuEntry::IsGlobalEntry() {
        return ((byte)field_16 & 4) >> 2;
    }

    // 0x100073360, 16 bytes, inline, placed by class name
    // MinimenuEntry::IsShiftClickable() const
    byte MinimenuEntry::IsShiftClickable() {
        return (byte)field_16 & 1;
    }

    // 0x1000733a0, 16 bytes, inline, placed by class name
    // MinimenuEntry::IgnoreSingleClickMode() const
    byte MinimenuEntry::IgnoreSingleClickMode() {
        return ((byte)field_16 & 2) >> 1;
    }

    // 0x100073820, 16 bytes, inline, placed by class name
    // MinimenuEntry::SetSubjectName(eastl::string const&)
    void MinimenuEntry::SetSubjectName(basic_string* param_1) {
        eastl::string::operator=((eastl::string*)&field_56, param_1);
    }

    // 0x100073a20, 16 bytes, complete-object destructor, inline, placed by class name
    // MinimenuEntry::~MinimenuEntry(): jumps straight to the base-object destructor

    // 0x1000792f0, 48 bytes, base-object destructor, inline, placed by class name
    // MinimenuEntry::~MinimenuEntry()
    void MinimenuEntry::~MinimenuEntry() {
        (&field_56)->~MinimenuSubject();
        (&field_24)->~basic_string();
    }

    // 0x1000b27b0, 16 bytes, complete-object constructor, inline, placed by class name
    // MinimenuEntry::MinimenuEntry(MinimenuEntry const&): jumps straight to the base-object constructor

    // 0x1000b27d0, 96 bytes, base-object constructor, inline, placed by class name
    // MinimenuEntry::MinimenuEntry(MinimenuEntry const&)
    void MinimenuEntry::MinimenuEntry(MinimenuEntry* param_1) {
        int iVar1;
        int iVar2;
        int iVar3;

        field_16 = param_1->field_16;
        iVar1 = param_1->m_z;
        iVar2 = param_1->field_8;
        iVar3 = param_1->field_12;
        field_0 = param_1->field_0;
        m_z = iVar1;
        field_8 = iVar2;
        field_12 = iVar3;
        new (&field_24, (basic_string*)&param_1->field_24) eastl::string();
        new (&field_56, (MinimenuSubject*)&param_1->field_56) MinimenuSubject();
    }

    // 0x1000b7900, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MinimenuEntry::GetSubjectType() const
    /* sound::Mixer::GetStreamCountLastMix() const */

    int sound::Mixer::GetStreamCountLastMix() {
        return m_streamCountLastMix;
    }

    // 0x1000b7910, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MinimenuEntry::GetSubjectName() const
    /* logger::Logger::GetLogStreams() */

    undefined1* logger::Logger::GetLogStreams() {
        return &field_56;
    }

    // 0x1000b7920, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MinimenuEntry::GetSubjectTypecode() const
    /* configdecoder::OldscapeVarType::GetDataType() const */

    undefined8 configdecoder::OldscapeVarType::GetDataType() {
        return m_dataType;
    }

    // 0x1000b7a70, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MinimenuEntry::GetObjType() const
    /* OSRenderCore_RenderThread_Common::GetNumVerts() const */

    undefined4 OSRenderCore_RenderThread_Common::GetNumVerts() {
        return *(undefined4*)((long)&field_104 + 4);
    }

    // 0x1000b7a80, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MinimenuEntry::GetObjCount() const
    /* rs2lib::worldmap::WorldmapAreaMetadata::GetMaxMapZ() const */

    int rs2lib::worldmap::WorldmapAreaMetadata::GetMaxMapZ() {
        return m_maxMapZ;
    }

    // 0x1000b7b20, 48 bytes, inline, placed by class name
    // MinimenuEntry::GetComponent() const
    MinimenuEntry* MinimenuEntry::GetComponent() {
        long in_RSI;

        lock((int)in_RSI + 112, *(int*)(in_RSI + 4));
        return this;
    }

} // namespace jag::oldscape::minimenu

namespace jag::game {
    // 0x1000b7900: the linker folded this into oldscape::minimenu::MinimenuEntry::GetSubjectType() const, which has identical code
    BaseConfigTypeList::GetEntryCount() const;

    // 0x1000b7910: the linker folded this into oldscape::minimenu::MinimenuEntry::GetSubjectName() const, which has identical code
    LocTypeCustomisation::GetRematerialDest() const;

} // namespace jag::game

namespace jag {
    // 0x1000292d0, 16 bytes, inline, placed by debug map only (low confidence)
    // bool operator==<oldscape::rs2lib::worldmap::MapElement>(shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&, decltype(nullptr))
    /* bool TEMPNAMEPLACEHOLDERVALUE(shared_ptr<oldscape::rs2lib::InterfaceGraphicMask>
   const&, decltype(nullptr)) */

    bool operator==(shared_ptr* param_1, _func_decltype_nullptr* param_2) {
        bool bVar1;

        bVar1 = shared_ptr::operator_cast_to_bool(param_1);
        return !bVar1;
    }

} // namespace jag

namespace jag::oldscape::rseven {
    // 0x1000b7920: the linker folded this into minimenu::MinimenuEntry::GetSubjectTypecode() const, which has identical code
    OSRenderCore_TextureDataProvider::GetTexturesUncompressedMippedArchive() const;

} // namespace jag::oldscape::rseven

namespace jag::oldscape {
    // 0x1000b7a70: the linker folded this into minimenu::MinimenuEntry::GetObjType() const, which has identical code
    OSRenderCore_RenderThread_Common::GetNumVerts() const;

} // namespace jag::oldscape

namespace jag::graphics {
    // 0x1000b7a80: the linker folded this into oldscape::minimenu::MinimenuEntry::GetObjCount() const, which has identical code
    LayeredAnimationStateMachineLayerDescriptor::GetBlendType() const;

} // namespace jag::graphics

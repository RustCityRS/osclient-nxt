// libs/oldscape/rs2lib/configdecoder/npc/NPCHeadIconCustomisation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::configdecoder {
    class NPCHeadIconCustomisation {
    public:
        GetGraphics() const;
        GetIndices() const;
        ~NPCHeadIconCustomisation();
        NPCHeadIconCustomisation(shared_ptr<NpcType> const&);
        void SetSlot(int, int, int);
        void SetSlots(eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&,
                      eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&);

        // data members, from how the methods use this: 80 bytes
        long field_0; // offset 0
        long field_8; // offset 8
        char _unknown_16[56];
        undefined1 m_indices; // offset 72
        char _unknown_73[7];
    };

    // 0x10011cec0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NPCHeadIconCustomisation::GetIndices() const
    /* callstack::JagException::GetCallstackRaw() const */

    undefined1* callstack::JagException::GetCallstackRaw() {
        return m_callstackRaw;
    }

    // 0x100155540, 16 bytes, complete-object destructor, inline, placed by class name
    // NPCHeadIconCustomisation::~NPCHeadIconCustomisation(): jumps straight to the base-object destructor

    // 0x100155550, 48 bytes, base-object destructor, inline, placed by class name
    // NPCHeadIconCustomisation::~NPCHeadIconCustomisation()
    /* game::NPCHeadIconCustomisation::~NPCHeadIconCustomisation() */

    void game::NPCHeadIconCustomisation::~NPCHeadIconCustomisation() {
        (&m_index)->~fixed_vector();
        ~fixed_vector();
    }

} // namespace jag::oldscape::configdecoder

namespace jag::graphics {
    // 0x10011cec0: the linker folded this into oldscape::configdecoder::NPCHeadIconCustomisation::GetIndices() const, which has identical code
    ScriptedPointLight::GetPositionJitterData();

} // namespace jag::graphics

namespace jag::logger {
    // 0x10011cec0: the linker folded this into oldscape::configdecoder::NPCHeadIconCustomisation::GetIndices() const, which has identical code
    LogStream::GetGroup() const;

} // namespace jag::logger

namespace jag::oldscape::dash3d {
    // 0x10011de20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SingleAppendList::SingleAppendList(ModelLit const&): jumps straight to the base-object constructor

} // namespace jag::oldscape::dash3d

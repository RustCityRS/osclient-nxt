// libs/oldscape/rs2lib/configdecoder/npc/NPCHeadIconCustomisation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::configdecoder {
    class NPCHeadIconCustomisation {
    public:
        void GetGraphics() const;
        uint8_t* GetIndices() const;
        ~NPCHeadIconCustomisation();
        NPCHeadIconCustomisation(const shared_ptr<NpcType>& npcType);
        void SetSlot(int arg1, int arg2, int arg3);
        void SetSlots(const eastl::fixed_vector<int, 8ul>& arg1, const eastl::fixed_vector<int, 8ul>& arg2);

    private:
        long field_0;
        long field_8;
        uint8_t _unknown_16[56];
        uint8_t m_indices[1];
        uint8_t _unknown_73[7];
    };

    // 0x10011cec0
    uint8_t* NPCHeadIconCustomisation::GetIndices() const {
        return m_callstackRaw;
    }

    // 0x100155550
    NPCHeadIconCustomisation::~NPCHeadIconCustomisation() {
        m_index->~fixed_vector();
    }

} // namespace jag::oldscape::configdecoder

namespace jag::graphics {
    // 0x10011cec0: ScriptedPointLight::GetPositionJitterData() has the same machine code as oldscape::configdecoder::NPCHeadIconCustomisation::GetIndices() const

} // namespace jag::graphics

namespace jag::logger {
    // 0x10011cec0: LogStream::GetGroup() const has the same machine code as oldscape::configdecoder::NPCHeadIconCustomisation::GetIndices() const

} // namespace jag::logger

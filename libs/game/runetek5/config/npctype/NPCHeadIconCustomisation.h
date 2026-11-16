// libs/game/runetek5/config/npctype/NPCHeadIconCustomisation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class NPCHeadIconCustomisation {
    public:
        void GetGraphic() const;
        uint8_t* GetIndex() const;
        ~NPCHeadIconCustomisation();
        NPCHeadIconCustomisation(bool arg1);
        NPCHeadIconCustomisation(const eastl::fixed_vector<int, 8ul>& arg1, const eastl::fixed_vector<int, 8ul>& arg2);
        NPCHeadIconCustomisation(const shared_ptr<NPCType>& npcType);
        void SetSlot(int arg1, int arg2, int arg3);
        void SetSlots(const eastl::fixed_vector<int, 8ul>& arg1, const eastl::fixed_vector<int, 8ul>& arg2);
        void Update(const eastl::fixed_vector<int, 8ul>& arg1, const eastl::fixed_vector<int, 8ul>& arg2);
        unsigned long HasValidIcons() const;
        void SetType(const shared_ptr<NPCType>& npcType);

    private:
        long field_0;
        long field_8;
        uint8_t _unknown_16[56];
        uint8_t m_index[1];
        uint8_t _unknown_73[71];
        bool field_144;
    };

    // 0x100009ca0: NPCHeadIconCustomisation::GetGraphic() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x10011cec0: NPCHeadIconCustomisation::GetIndex() const has the same machine code as oldscape::configdecoder::NPCHeadIconCustomisation::GetIndices() const

    // 0x100155550: NPCHeadIconCustomisation::~NPCHeadIconCustomisation() has the same machine code as oldscape::configdecoder::NPCHeadIconCustomisation::~NPCHeadIconCustomisation()

    // 0x100501a60
    NPCHeadIconCustomisation::NPCHeadIconCustomisation(bool arg1)
        : eastl::fixed_vector<int, 8ul>(8), m_index(8), field_144(false) {
        uint32_t* puVar1;

        unsigned long arg1_00 = 0;
        do {
            puVar1 = (uint32_t*)(*this)[arg1_00];
            *puVar1 = 4294967295;
            puVar1 = (uint32_t*)(*m_index)[arg1_00];
            *puVar1 = 4294967295;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 8);
        field_144 = arg1;
    }

    // 0x100501b10
    NPCHeadIconCustomisation::NPCHeadIconCustomisation(const eastl::fixed_vector<int, 8ul>& arg1,
                                                       const eastl::fixed_vector<int, 8ul>& arg2)
        : eastl::fixed_vector<int, 8ul>(), field_144(false) {
        *this = arg1;
        *m_index = arg2;
    }

    // 0x100501b90
    NPCHeadIconCustomisation::NPCHeadIconCustomisation(const shared_ptr<NPCType>& npcType)
        : eastl::fixed_vector<int, 8ul>(8) {
        uint32_t uVar1;
        bool bVar2;
        uint32_t* puVar3;
        unsigned long uVar5;
        unsigned int uVar7;

        uint8_t* this_00 = m_index;
        new (this_00) eastl::fixed_vector<int, 8ul>(8);
        field_144 = false;
        unsigned long uVar6 = 0;
        do {
            puVar3 = (uint32_t*)(*this)[uVar6];
            *puVar3 = 4294967295;
            puVar3 = (uint32_t*)(*this_00)[uVar6];
            *puVar3 = 4294967295;
            uVar6 = uVar6 + 1;
        } while (uVar6 != 8);
        auto this_01 = npcType.operator->();
        auto this_02 = this_01->GetIrradianceEffect();
        auto this_03 = npcType.operator->();
        auto this_04 = this_03->GetHeadIconIndex();
        long lVar4 = this_02->size();
        if (lVar4 != 0) {
            uVar6 = 0;
            uVar5 = 1;
            do {
                puVar3 = (uint32_t*)(*this_02)[uVar6];
                uVar1 = *puVar3;
                puVar3 = (uint32_t*)(*this)[uVar6];
                *puVar3 = uVar1;
                uVar6 = this_02->size();
                bVar2 = uVar5 < uVar6;
                uVar6 = uVar5;
                uVar5 = (unsigned long)((int)uVar5 + 1);
            } while (bVar2);
        }
        lVar4 = this_04->size();
        if (lVar4 != 0) {
            uVar7 = 1;
            uVar6 = 0;
            do {
                puVar3 = (uint32_t*)(*this_04)[uVar6];
                uVar1 = *puVar3;
                puVar3 = (uint32_t*)(*this_00)[uVar6];
                *puVar3 = uVar1;
                uVar6 = (unsigned long)uVar7;
                uVar5 = this_04->size();
                uVar7 = uVar7 + 1;
            } while (uVar6 < uVar5);
        }
    }

    // 0x100501d10
    void NPCHeadIconCustomisation::SetSlot(int arg1, int arg2, int arg3) {
        int* piVar1 = (int*)(*this)[(long)arg1];
        *piVar1 = arg2;
        piVar1 = (int*)(*m_index)[(long)arg1];
        *piVar1 = arg3;
    }

    // 0x100501d50
    void NPCHeadIconCustomisation::SetSlots(const eastl::fixed_vector<int, 8ul>& arg1,
                                            const eastl::fixed_vector<int, 8ul>& arg2) {
        if (field_144 == false) {
            *this = arg1;
            *m_index = arg2;
        } else {
            Update(arg1, arg2);
        }
    }

    // 0x100501d90
    void NPCHeadIconCustomisation::Update(const eastl::fixed_vector<int, 8ul>& arg1,
                                          const eastl::fixed_vector<int, 8ul>& arg2) {
        uint32_t uVar1;
        int* piVar4;
        uint32_t* puVar5;

        unsigned long uVar2 = size();
        unsigned long uVar3 = arg1.size();
        uVar2 = eastl::max<unsigned long>(uVar2, uVar3);
        if (uVar2 != 0) {
            uVar3 = 0;
            do {
                piVar4 = (int*)(*this)[uVar3];
                if (*piVar4 == -1) {
                    puVar5 = &arg1[uVar3];
                    uVar1 = *puVar5;
                    puVar5 = (uint32_t*)(*this)[uVar3];
                    *puVar5 = uVar1;
                    puVar5 = &arg2[uVar3];
                    uVar1 = *puVar5;
                    puVar5 = (uint32_t*)(*m_index)[uVar3];
                    *puVar5 = uVar1;
                }
                uVar3 = uVar3 + 1;
            } while (uVar2 != uVar3);
        }
        field_144 = false;
    }

    // 0x100501e50
    unsigned long NPCHeadIconCustomisation::HasValidIcons() const {
        int* piVar1;

        bool bVar2 = true;
        unsigned long arg1 = 0;
        do {
            piVar1 = (int*)(*this)[arg1];
            if (*piVar1 != -1) {
                piVar1 = (int*)(*m_index)[arg1];
                if (*piVar1 != -1)
                    break;
            }
            bVar2 = arg1 < 7;
            arg1 = arg1 + 1;
        } while (arg1 != 8);
        return bVar2 & 4294967295;
    }

    // 0x100501ec0
    void NPCHeadIconCustomisation::SetType(const shared_ptr<NPCType>& npcType) {
        int* piVar3;
        uint32_t* puVar4;
        unsigned long uVar5;
        fixed_vector<int, _8ul>* arg1;
        NPCType* this_01;
        fixed_vector<int, _8ul>* arg2;
        unsigned int uVar7;
        unsigned long arg1_00;

        auto pMVar1 = npcType.operator->();
        if (((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)pMVar1->GetIrradianceEffect())
                ->empty() == '\0') {
            pMVar1 = (Model*)npcType.operator->();
            arg1 = (fixed_vector<int, _8ul>*)pMVar1->GetIrradianceEffect();
            this_01 = (NPCType*)npcType.operator->();
            arg2 = (fixed_vector<int, _8ul>*)this_01->GetHeadIconIndex();
            Update(*arg1, *arg2);
        } else if (field_144 != false) {
            if (size() != 0) {
                uVar7 = 1;
                arg1_00 = 0;
                do {
                    piVar3 = (int*)(*this)[arg1_00];
                    if (*piVar3 == -1) {
                        puVar4 = (uint32_t*)(*this)[arg1_00];
                        *puVar4 = 4294967295;
                        puVar4 = (uint32_t*)(*m_index)[arg1_00];
                        *puVar4 = 4294967295;
                    }
                    arg1_00 = (unsigned long)uVar7;
                    uVar5 = size();
                    uVar7 = uVar7 + 1;
                } while (arg1_00 < uVar5);
            }
            field_144 = false;
        }
    }

} // namespace jag::game

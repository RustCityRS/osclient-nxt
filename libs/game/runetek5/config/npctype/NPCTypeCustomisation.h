// libs/game/runetek5/config/npctype/NPCTypeCustomisation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class NPCTypeCustomisation {
    public:
        void GetUniqueID() const;
        uint8_t* GetModelList() const;
        uint8_t* GetModelRotationList() const;
        uint8_t* GetModelScaleList() const;
        float* GetRecolourDest() const;
        uint8_t* GetModelTranslationList() const;
        uint8_t* GetModelRematerialList() const;
        uint8_t* GetRematerialDest() const;
        uint8_t* GetModelRecolourList() const;
        ~NPCTypeCustomisation();
        uint8_t* GetPlayerIdkColour() const;
        NPCTypeCustomisation(eastl::vector<int>&& arg1, eastl::vector<float>&& arg2,
                             eastl::vector<math::Vector3T<float>>&& vector3s1,
                             eastl::vector<math::Vector3T<float>>&& vector3s2, eastl::vector<eastl::vector<int>>&& arg5,
                             eastl::vector<eastl::vector<int>>&& arg6, Array<unsigned short>&& arg7,
                             Array<unsigned short>&& arg8, bool arg9, Array<unsigned char>&& arg10);
        void UpdateUniqueID();
        NPCTypeCustomisation(eastl::vector<int>&& arg1, Array<unsigned short>&& arg2, Array<unsigned short>&& arg3);
        NPCTypeCustomisation(NPCType& npcType, bool arg2);
        void SetModelSlot(int arg1, int arg2, float arg3, math::Vector3T<float> vector31,
                          math::Vector3T<float> vector32);
        void SetModelSlotRematerial(int arg1, int arg2, int arg3, int arg4);
        void SetModelSlotRecolour(int arg1, int arg2, int arg3, int arg4);
        void GetNextBodyCustomisationCacheBuster();
        void GetNextHeadCustomisationCacheBuster();
        static int32_t m_bodyCustomisationCacheBuster; // = 1
        static int32_t m_headCustomisationCacheBuster; // = 1

    private:
        bool field_0;
        bool field_1;
        uint8_t _unknown_2[6];
        unsigned long field_8;
        uint8_t _unknown_16[192];
        uint8_t m_pRecolourDest[4];
        uint8_t _unknown_212[52];
    };

    // 0x1004256b0
    NPCTypeCustomisation::~NPCTypeCustomisation() {
        field_256.~Array();
        field_232.~Array();
        m_pRecolourDest->~Array();
        field_176.~vector();
        field_144.~vector();
        field_112.~vector();
        field_80.~vector();
        field_48.~vector();
        field_16.~vector();
    }

    // 0x100505a40
    void NPCTypeCustomisation::GetNextBodyCustomisationCacheBuster() {
        m_bodyCustomisationCacheBuster = m_bodyCustomisationCacheBuster + 1;
    }

    // 0x100505a60
    void NPCTypeCustomisation::GetNextHeadCustomisationCacheBuster() {
        m_headCustomisationCacheBuster = m_headCustomisationCacheBuster + 1;
    }

} // namespace jag::game

namespace jag {
    // 0x1004258a0
    EntityIcon* placement_new<EntityIcon, int, math::Point<int>>(void* arg1, int&& arg2, math::Point<int>&& point) {
        new (arg1) EntityIcon(arg2, point);
        return arg1;
    }

    // 0x1004258c0
    ref_counter_shared<EntityIcon>*
    placement_new<ref_counter_shared<EntityIcon>, int, EntityIcon*&>(void* arg1, int&& arg2, EntityIcon*& arg3) {
        new (arg1) ref_counter_shared<EntityIcon>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1004258f0
    ref_counter_shared<EntityIcon>::ref_counter_shared(unsigned long arg1, EntityIcon* entityIcon)
        : ref_counter_base() {}

    // 0x100425930
    void ref_counter_shared<EntityIcon>::DeleteData() {
        ref_counter_shared<EntityIcon> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((InterfaceMouseEvent*)((long)&(this[3]._vptr)->_dtor + lVar2))->~InterfaceMouseEvent();
                    prVar1 = (ref_counter_shared<EntityIcon> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 32;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

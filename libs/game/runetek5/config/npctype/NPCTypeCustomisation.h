// libs/game/runetek5/config/npctype/NPCTypeCustomisation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class NPCTypeCustomisation {
    public:
        GetUniqueID() const;
        GetModelList() const;
        GetModelRotationList() const;
        GetModelScaleList() const;
        GetRecolourDest() const;
        GetModelTranslationList() const;
        GetModelRematerialList() const;
        GetRematerialDest() const;
        GetModelRecolourList() const;
        ~NPCTypeCustomisation();
        GetPlayerIdkColour() const;
        NPCTypeCustomisation(eastl::vector<int, eastl::allocator>&&, eastl::vector<float, eastl::allocator>&&,
                             eastl::vector<math::Vector3T<float>, eastl::allocator>&&,
                             eastl::vector<math::Vector3T<float>, eastl::allocator>&&,
                             eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>&&,
                             eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>&&,
                             Array<unsigned short, eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&, bool,
                             Array<unsigned char, eastl::allocator>&&);
        void UpdateUniqueID();
        NPCTypeCustomisation(eastl::vector<int, eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&,
                             Array<unsigned short, eastl::allocator>&&);
        NPCTypeCustomisation(NPCType&, bool);
        void SetModelSlot(int, int, float, math::Vector3T<float>, math::Vector3T<float>);
        void SetModelSlotRematerial(int, int, int, int);
        void SetModelSlotRecolour(int, int, int, int);
        void GetNextBodyCustomisationCacheBuster();
        void GetNextHeadCustomisationCacheBuster();
        static /* 4 bytes */ m_bodyCustomisationCacheBuster; // = 1
        static /* 4 bytes */ m_headCustomisationCacheBuster; // = 1

        // data members, from how the methods use this: 264 bytes
        bool field_0; // offset 0
        bool field_1; // offset 1
        char _unknown_2[6];
        ulong field_8; // offset 8
        char _unknown_16[192];
        undefined1 m_pRecolourDest[4]; // offset 208
        char _unknown_212[52];
    };

    // 0x1004256a0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // NPCTypeCustomisation::~NPCTypeCustomisation(): jumps straight to the base-object destructor

    // 0x1004256b0, 128 bytes, base-object destructor, inline, placed by class name and debug map
    // NPCTypeCustomisation::~NPCTypeCustomisation()
    void NPCTypeCustomisation::~NPCTypeCustomisation() {
        (&field_256)->~Array();
        (&field_232)->~Array();
        m_pRecolourDest->~Array();
        (&field_176)->~vector();
        (&field_144)->~vector();
        (&field_112)->~vector();
        (&field_80)->~vector();
        (&field_48)->~vector();
        (&field_16)->~vector();
    }

    // 0x100505a40, 32 bytes, inline, placed by class name
    // NPCTypeCustomisation::GetNextBodyCustomisationCacheBuster()
    void NPCTypeCustomisation::GetNextBodyCustomisationCacheBuster() {
        m_bodyCustomisationCacheBuster = m_bodyCustomisationCacheBuster + 1;
    }

    // 0x100505a60, 32 bytes, inline, placed by class name
    // NPCTypeCustomisation::GetNextHeadCustomisationCacheBuster()
    void NPCTypeCustomisation::GetNextHeadCustomisationCacheBuster() {
        m_headCustomisationCacheBuster = m_headCustomisationCacheBuster + 1;
    }

} // namespace jag::game

namespace jag {
    // 0x1004258a0, 32 bytes, inline, placed by debug map only (low confidence)
    // EntityIcon* placement_new<EntityIcon, int, math::Point<int> >(void*, int&&, math::Point<int>&&)
    EntityIcon* placement_new<EntityIcon, int, math::Point<int>>(void* param_1, int* param_2, Point* param_3) {
        EntityIcon::EntityIcon(param_1, *param_2, param_3);
        return param_1;
    }

    // 0x1004258c0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<EntityIcon>* placement_new<ref_counter_shared<EntityIcon>, int, EntityIcon*&>(void*, int&&, EntityIcon*&)
    ref_counter_shared* placement_new<ref_counter_shared<EntityIcon>, int, EntityIcon*&>(void* param_1, int* param_2,
                                                                                         EntityIcon** param_3) {
        ref_counter_shared<EntityIcon>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1004258e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<EntityIcon>::ref_counter_shared(unsigned long, EntityIcon*): jumps straight to the base-object constructor

    // 0x1004258f0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<EntityIcon>::ref_counter_shared(unsigned long, EntityIcon*)
    void ref_counter_shared<EntityIcon>::ref_counter_shared(ulong param_1, EntityIcon* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee71f8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(EntityIcon**)(this + 24) = param_2;
    }

    // 0x100425930, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<EntityIcon>::DeleteData()
    void ref_counter_shared<EntityIcon>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~InterfaceMouseEvent();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

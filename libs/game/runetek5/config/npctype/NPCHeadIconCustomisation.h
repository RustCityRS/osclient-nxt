// libs/game/runetek5/config/npctype/NPCHeadIconCustomisation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class NPCHeadIconCustomisation {
    public:
        GetGraphic() const;
        GetIndex() const;
        ~NPCHeadIconCustomisation();
        NPCHeadIconCustomisation(bool);
        NPCHeadIconCustomisation(eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&,
                                 eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&);
        NPCHeadIconCustomisation(shared_ptr<NPCType> const&);
        void SetSlot(int, int, int);
        void SetSlots(eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&,
                      eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&);
        void Update(eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&,
                    eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&);
        ulong HasValidIcons() const;
        void SetType(shared_ptr<NPCType> const&);

        // data members, from how the methods use this: 145 bytes
        long field_0; // offset 0
        long field_8; // offset 8
        char _unknown_16[56];
        undefined1 m_index; // offset 72
        char _unknown_73[71];
        bool field_144; // offset 144
    };

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    NPCHeadIconCustomisation::GetGraphic() const;

    // 0x10011cec0: the linker folded this into oldscape::configdecoder::NPCHeadIconCustomisation::GetIndices() const, which has identical code
    NPCHeadIconCustomisation::GetIndex() const;

    // 0x100155540: the linker folded this into oldscape::configdecoder::NPCHeadIconCustomisation::~NPCHeadIconCustomisation(), which has identical code
    NPCHeadIconCustomisation::~NPCHeadIconCustomisation();

    // 0x100155550: the linker folded this into oldscape::configdecoder::NPCHeadIconCustomisation::~NPCHeadIconCustomisation(), which has identical code
    NPCHeadIconCustomisation::~NPCHeadIconCustomisation();

    // 0x100501a60, 160 bytes, base-object constructor, placed by class name
    // NPCHeadIconCustomisation::NPCHeadIconCustomisation(bool)
    void NPCHeadIconCustomisation::NPCHeadIconCustomisation(bool param_1) {
        undefined4* puVar1;
        ulong uVar2;

        eastl::fixed_vector<int, 8ul, true, eastl::allocator>::fixed_vector((ulong)this);
        eastl::fixed_vector<int, 8ul, true, eastl::allocator>::fixed_vector((ulong)&m_index);
        field_144 = false;
        uVar2 = 0;
        do {
            puVar1 = (undefined4*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                    uVar2);
            *puVar1 = 4294967295;
            puVar1 = (undefined4*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)&m_index,
                    uVar2);
            *puVar1 = 4294967295;
            uVar2 = uVar2 + 1;
        } while (uVar2 != 8);
        field_144 = param_1;
    }

    // 0x100501b00, 16 bytes, complete-object constructor, placed by class name
    // NPCHeadIconCustomisation::NPCHeadIconCustomisation(bool): jumps straight to the base-object constructor

    // 0x100501b10, 112 bytes, base-object constructor, placed by class name
    // NPCHeadIconCustomisation::NPCHeadIconCustomisation(eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&, eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&)
    void NPCHeadIconCustomisation::NPCHeadIconCustomisation(fixed_vector* param_1, fixed_vector* param_2) {
        new (this) eastl::fixed_vector<int, 8ul, true, eastl::allocator>();
        new (&m_index) eastl::fixed_vector<int, 8ul, true, eastl::allocator>();
        field_144 = false;
        eastl::fixed_vector<int, 8ul, true, eastl::allocator>::operator=(
            (fixed_vector<int, 8ul, true, eastl::allocator>*)this, param_1);
        eastl::fixed_vector<int, 8ul, true, eastl::allocator>::operator=(
            (fixed_vector<int, 8ul, true, eastl::allocator>*)&m_index, param_2);
    }

    // 0x100501b80, 16 bytes, complete-object constructor, placed by class name
    // NPCHeadIconCustomisation::NPCHeadIconCustomisation(eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&, eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&): jumps straight to the base-object constructor

    // 0x100501b90, 368 bytes, base-object constructor, placed by class name
    // NPCHeadIconCustomisation::NPCHeadIconCustomisation(shared_ptr<NPCType> const&)
    void NPCHeadIconCustomisation::NPCHeadIconCustomisation(shared_ptr* param_1) {
        undefined1* this_00;
        undefined4 uVar1;
        bool bVar2;
        undefined4* puVar3;
        Model* this_01;
        vector<unsigned int, eastl::allocator>* this_02;
        NPCType* this_03;
        vector<unsigned int, eastl::allocator>* this_04;
        long lVar4;
        ulong uVar5;
        ulong uVar6;
        uint uVar7;

        eastl::fixed_vector<int, 8ul, true, eastl::allocator>::fixed_vector((ulong)this);
        this_00 = &m_index;
        eastl::fixed_vector<int, 8ul, true, eastl::allocator>::fixed_vector((ulong)this_00);
        field_144 = false;
        uVar6 = 0;
        do {
            puVar3 = (undefined4*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                    uVar6);
            *puVar3 = 4294967295;
            puVar3 = (undefined4*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)this_00,
                    uVar6);
            *puVar3 = 4294967295;
            uVar6 = uVar6 + 1;
        } while (uVar6 != 8);
        this_01 = (Model*)shared_ptr<NPCType>::operator->((shared_ptr<NPCType>*)param_1);
        this_02 = (vector<unsigned int, eastl::allocator>*)this_01->GetIrradianceEffect();
        this_03 = (NPCType*)shared_ptr<NPCType>::operator->((shared_ptr<NPCType>*)param_1);
        this_04 = (vector<unsigned int, eastl::allocator>*)this_03->GetHeadIconIndex();
        lVar4 = eastl::vector<unsigned int, eastl::allocator>::size(this_02);
        if (lVar4 != 0) {
            uVar6 = 0;
            uVar5 = 1;
            do {
                puVar3 = (undefined4*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_02,
                        uVar6);
                uVar1 = *puVar3;
                puVar3 = (undefined4*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                        uVar6);
                *puVar3 = uVar1;
                uVar6 = eastl::vector<unsigned int, eastl::allocator>::size(this_02);
                bVar2 = uVar5 < uVar6;
                uVar6 = uVar5;
                uVar5 = (ulong)((int)uVar5 + 1);
            } while (bVar2);
        }
        lVar4 = eastl::vector<unsigned int, eastl::allocator>::size(this_04);
        if (lVar4 != 0) {
            uVar7 = 1;
            uVar6 = 0;
            do {
                puVar3 = (undefined4*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_04,
                        uVar6);
                uVar1 = *puVar3;
                puVar3 = (undefined4*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        uVar6);
                *puVar3 = uVar1;
                uVar6 = (ulong)uVar7;
                uVar5 = eastl::vector<unsigned int, eastl::allocator>::size(this_04);
                uVar7 = uVar7 + 1;
            } while (uVar6 < uVar5);
        }
    }

    // 0x100501d00, 16 bytes, complete-object constructor, placed by class name
    // NPCHeadIconCustomisation::NPCHeadIconCustomisation(shared_ptr<NPCType> const&): jumps straight to the base-object constructor

    // 0x100501d10, 64 bytes, placed by class name
    // NPCHeadIconCustomisation::SetSlot(int, int, int)
    void NPCHeadIconCustomisation::SetSlot(int param_1, int param_2, int param_3) {
        int* piVar1;

        piVar1 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                (long)param_1);
        *piVar1 = param_2;
        piVar1 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)&m_index,
                (long)param_1);
        *piVar1 = param_3;
    }

    // 0x100501d50, 64 bytes, placed by class name
    // NPCHeadIconCustomisation::SetSlots(eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&, eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&)
    void NPCHeadIconCustomisation::SetSlots(fixed_vector* param_1, fixed_vector* param_2) {
        if (field_144 == false) {
            eastl::fixed_vector<int, 8ul, true, eastl::allocator>::operator=(
                (fixed_vector<int, 8ul, true, eastl::allocator>*)this, param_1);
            eastl::fixed_vector<int, 8ul, true, eastl::allocator>::operator=(
                (fixed_vector<int, 8ul, true, eastl::allocator>*)&m_index, param_2);
        } else {
            Update(this, param_1, param_2);
        }
    }

    // 0x100501d90, 192 bytes, placed by class name
    // NPCHeadIconCustomisation::Update(eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&, eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&)
    void NPCHeadIconCustomisation::Update(fixed_vector* param_1, fixed_vector* param_2) {
        undefined4 uVar1;
        ulong uVar2;
        ulong uVar3;
        int* piVar4;
        undefined4* puVar5;

        uVar2 = size();
        uVar3 = param_1->size();
        uVar2 = eastl::max<unsigned long>(uVar2, uVar3);
        if (uVar2 != 0) {
            uVar3 = 0;
            do {
                piVar4 = (int*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                        uVar3);
                if (*piVar4 == -1) {
                    puVar5 = (undefined4*)
                        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                param_1,
                            uVar3);
                    uVar1 = *puVar5;
                    puVar5 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                        uVar3);
                    *puVar5 = uVar1;
                    puVar5 = (undefined4*)
                        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                param_2,
                            uVar3);
                    uVar1 = *puVar5;
                    puVar5 = (undefined4*)
                        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                              eastl::allocator>>*)&m_index,
                                   uVar3);
                    *puVar5 = uVar1;
                }
                uVar3 = uVar3 + 1;
            } while (uVar2 != uVar3);
        }
        field_144 = false;
    }

    // 0x100501e50, 112 bytes, placed by class name
    // NPCHeadIconCustomisation::HasValidIcons() const
    ulong NPCHeadIconCustomisation::HasValidIcons() {
        int* piVar1;
        ulong uVar2;
        undefined8 unaff_R12;
        bool bVar3;

        bVar3 = true;
        uVar2 = 0;
        do {
            piVar1 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                    uVar2);
            if (*piVar1 != -1) {
                piVar1 = (int*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int,
                                eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)&m_index,
                        uVar2);
                if (*piVar1 != -1)
                    break;
            }
            bVar3 = uVar2 < 7;
            uVar2 = uVar2 + 1;
        } while (uVar2 != 8);
        return CONCAT71((int7)((ulong)unaff_R12 >> 8), bVar3) & 4294967295;
    }

    // 0x100501ec0, 240 bytes, placed by class name
    // NPCHeadIconCustomisation::SetType(shared_ptr<NPCType> const&)
    void NPCHeadIconCustomisation::SetType(shared_ptr* param_1) {
        Model* pMVar1;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        long lVar2;
        int* piVar3;
        undefined4* puVar4;
        ulong uVar5;
        fixed_vector* pfVar6;
        NPCType* this_01;
        fixed_vector* pfVar7;
        uint uVar9;
        ulong uVar10;

        pMVar1 = (Model*)shared_ptr<NPCType>::operator->((shared_ptr<NPCType>*)param_1);
        this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                      pMVar1->GetIrradianceEffect();
        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                this_00) == '\0') {
            pMVar1 = (Model*)shared_ptr<NPCType>::operator->((shared_ptr<NPCType>*)param_1);
            pfVar6 = (fixed_vector*)pMVar1->GetIrradianceEffect();
            this_01 = (NPCType*)shared_ptr<NPCType>::operator->((shared_ptr<NPCType>*)param_1);
            pfVar7 = (fixed_vector*)this_01->GetHeadIconIndex();
            Update(this, pfVar6, pfVar7);
        } else if (field_144 != false) {
            lVar2 = size();
            if (lVar2 != 0) {
                uVar9 = 1;
                uVar10 = 0;
                do {
                    piVar3 = (int*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                        uVar10);
                    if (*piVar3 == -1) {
                        puVar4 = (undefined4*)eastl::vector<
                            int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<int,
                                    eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                            uVar10);
                        *puVar4 = 4294967295;
                        puVar4 = (undefined4*)eastl::vector<
                            int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                              eastl::allocator>>*)&m_index,
                                   uVar10);
                        *puVar4 = 4294967295;
                    }
                    uVar10 = (ulong)uVar9;
                    uVar5 = size();
                    uVar9 = uVar9 + 1;
                } while (uVar10 < uVar5);
            }
            field_144 = false;
        }
    }

} // namespace jag::game

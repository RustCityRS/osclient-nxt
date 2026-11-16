// projects/osclient/clientnpc.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "clientnpc.h"

namespace jag::oldscape {
    // 0x100013220: the linker folded this into highlight::ShortIDFromNPCKey(long long), which has identical code
    ClientNpc::GetShortIDFromUID(int);

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    ClientNpc::IsClientNPC();

    // 0x1000fc640, 32 bytes, placed by class name and debug map
    // ClientNpc::Ready() const
    bool ClientNpc::Ready() {
        bool bVar1;

        bVar1 = operator==((shared_ptr*)&field_1024, (_func_decltype_nullptr*)0);
        return !bVar1;
    }

    // 0x1001106d0, 176 bytes, placed by class name
    // ClientNpc::HasAnyOverlays(int, int) const
    ulong ClientNpc::HasAnyOverlays(int param_1, int param_2) {
        char cVar1;
        uint uVar3;
        NpcType* pNVar4;
        undefined8 unaff_R14;
        ulong uVar5;

        cVar1 = Ready(this);
        if (cVar1 == '\0') {
            uVar5 = 0;
        } else {
            pNVar4 = (NpcType*)shared_ptr<configdecoder::NpcType>::operator->(
                (shared_ptr<configdecoder::NpcType>*)&field_1024);
            pNVar4 = (NpcType*)pNVar4->GetMultiNpcOrThis();
            cVar1 = HasHeadbar();
            uVar5 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
            if (cVar1 == '\0') {
                cVar1 = HasHitmark(param_1);
                if (cVar1 == '\0') {
                    cVar1 = HasScriptedOverlays();
                    if ((cVar1 == '\0') && (field_1040 != param_2)) {
                        cVar1 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                        if (cVar1 != '\0') {
                            if (!(&field_1080)->operator_cast_to_bool()) {
                                uVar3 = pNVar4->HasHeadIcons();
                                uVar5 = (ulong)uVar3;
                            }
                        }
                    }
                }
            }
        }
        return uVar5 & 4294967295;
    }

    // 0x100110d30, 80 bytes, placed by class name
    // ClientNpc::GetHeadIconGraphics() const
    void ClientNpc::GetHeadIconGraphics() {
        Layout* this_00;
        Terrain* this_01;
        type* in_RSI;

        if ((&field_1080)->operator_cast_to_bool()) {
            this_00 =
                (Layout*)std::unique_ptr<configdecoder::NPCHeadIconCustomisation,
                                         std::default_delete<configdecoder::NPCHeadIconCustomisation>>::
                operator->((unique_ptr<configdecoder::NPCHeadIconCustomisation,
                                       std::default_delete<configdecoder::NPCHeadIconCustomisation>>*)&field_1080);
            eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
        } else {
            this_01 = (Terrain*)shared_ptr<configdecoder::NpcType>::operator->(
                (shared_ptr<configdecoder::NpcType>*)&field_1024);
            this_01->GetWaterHeights();
        }
    }

    // 0x100110d80, 80 bytes, placed by class name
    // ClientNpc::GetHeadIconIndices() const
    void ClientNpc::GetHeadIconIndices() {
        JagException* this_00;
        Model* this_01;

        if ((&field_1080)->operator_cast_to_bool()) {
            this_00 =
                (JagException*)std::unique_ptr<configdecoder::NPCHeadIconCustomisation,
                                               std::default_delete<configdecoder::NPCHeadIconCustomisation>>::
                operator->((unique_ptr<configdecoder::NPCHeadIconCustomisation,
                                       std::default_delete<configdecoder::NPCHeadIconCustomisation>>*)&field_1080);
            this_00->GetCallstackRaw();
        } else {
            this_01 = (Model*)shared_ptr<configdecoder::NpcType>::operator->(
                (shared_ptr<configdecoder::NpcType>*)&field_1024);
            this_01->GetBatchList();
        }
    }

    // 0x100113bb0, 128 bytes, placed by class name
    // ClientNpc::SetHeadIcon(int, int, int)
    void ClientNpc::SetHeadIcon(int param_1, int param_2, int param_3) {
        undefined1* this_00;
        NPCHeadIconCustomisation* this_01;
        unique_ptr local_38[8];

        this_00 = &field_1080;
        if (!this_00->operator_cast_to_bool()) {
            std::make_unique<configdecoder::NPCHeadIconCustomisation, shared_ptr<configdecoder::NpcType>&>(
                (shared_ptr*)local_38);
            std::unique_ptr<configdecoder::NPCHeadIconCustomisation,
                            std::default_delete<configdecoder::NPCHeadIconCustomisation>>::
            operator=((unique_ptr<configdecoder::NPCHeadIconCustomisation,
                                  std::default_delete<configdecoder::NPCHeadIconCustomisation>>*)this_00,
                      local_38);
            local_38->~unique_ptr();
        }
        this_01 =
            (NPCHeadIconCustomisation*)std::unique_ptr<configdecoder::NPCHeadIconCustomisation,
                                                       std::default_delete<configdecoder::NPCHeadIconCustomisation>>::
            operator->((unique_ptr<configdecoder::NPCHeadIconCustomisation,
                                   std::default_delete<configdecoder::NPCHeadIconCustomisation>>*)this_00);
        this_01->SetSlot(param_1, param_2, param_3);
    }

    // 0x100119910, 544 bytes, placed by class name
    // ClientNpc::MoveCode(int, signed char)
    void ClientNpc::MoveCode(undefined4 param_1, undefined4 param_3) {
        undefined1 uVar1;
        int iVar2;
        undefined4 uVar3;
        array<int, 10ul>* this_00;
        long lVar4;
        undefined4* puVar5;
        undefined1* puVar6;
        undefined1* this_01;
        ulong uVar7;
        ulong uVar8;
        array<signed char, 10ul>* this_02;
        uint uVar9;
        bool bVar10;
        shared_ptr<RSevenDebugPresetProvider> local_78[16];
        array<int, 10ul>* local_68;
        array<signed char, 10ul>* local_60;
        uint* local_58;
        uint* local_50;
        array<int, 10ul>* local_48;
        undefined4 local_40;
        uint local_38;
        uint local_34;

        puVar6 = &field_444;
        local_58 = (uint*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar6, 0);
        uVar9 = *local_58;
        this_01 = &field_484;
        local_50 = (uint*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)this_01, 0);
        local_34 = *local_50;
        switch (param_1) {
        case 0:
            uVar9 = uVar9 - 1;
        case 1:
            local_34 = local_34 + 1;
            break;
        case 2:
            uVar9 = uVar9 + 1;
            local_34 = local_34 + 1;
            break;
        case 3:
            uVar9 = uVar9 - 1;
            break;
        case 4:
            uVar9 = uVar9 + 1;
            break;
        case 5:
            uVar9 = uVar9 - 1;
        case 6:
        switchD_100119973_caseD_6:
            local_34 = local_34 - 1;
            break;
        case 7:
            uVar9 = uVar9 + 1;
            goto switchD_100119973_caseD_6;
        }
        iVar2 = field_372;
        local_48 = (array<int, 10ul>*)puVar6;
        local_38 = uVar9;
        if (iVar2 == -1) {
            bVar10 = false;
        } else {
            local_78->List(iVar2);
            lVar4 = shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)local_78);
            bVar10 = *(int*)(lVar4 + 252) == 1;
            if (iVar2 != -1) {
                local_78->~shared_ptr();
            }
        }
        if (bVar10) {
            field_372 = -1;
        }
        if ((int)field_440 < 9) {
            field_440 = field_440 + 1;
        }
        uVar9 = field_440;
        this_02 = (array<signed char, 10ul>*)&field_524;
        local_68 = (array<int, 10ul>*)this_01;
        if (0 < (int)uVar9) {
            uVar7 = (ulong)uVar9;
            local_60 = this_02;
            do {
                uVar9 = uVar9 - 1;
                uVar8 = (ulong)uVar9;
                puVar5 = (undefined4*)std::array<int, 10ul>::operator[](local_48, uVar8);
                uVar3 = *puVar5;
                puVar5 = (undefined4*)std::array<int, 10ul>::operator[](local_48, uVar7);
                this_02 = local_60;
                this_00 = local_68;
                *puVar5 = uVar3;
                puVar5 = (undefined4*)std::array<int, 10ul>::operator[](local_68, uVar8);
                local_40 = *puVar5;
                puVar5 = (undefined4*)std::array<int, 10ul>::operator[](this_00, uVar7);
                *puVar5 = local_40;
                puVar6 = (undefined1*)std::array<signed char, 10ul>::operator[](this_02, uVar8);
                uVar1 = *puVar6;
                puVar6 = (undefined1*)std::array<signed char, 10ul>::operator[](this_02, uVar7);
                *puVar6 = uVar1;
                bVar10 = 1 < (long)uVar7;
                uVar7 = uVar7 - 1;
            } while (bVar10);
        }
        *local_58 = local_38;
        *local_50 = local_34;
        puVar6 = (undefined1*)std::array<signed char, 10ul>::operator[](this_02, 0);
        *puVar6 = (char)param_3;
    }

    // 0x100119d90, 592 bytes, placed by class name
    // ClientNpc::Teleport(int, int, bool)
    void ClientNpc::Teleport(int param_1, int param_2, bool param_3) {
        undefined4 uVar1;
        array<int, 10ul>* this_00;
        long lVar2;
        uint* puVar3;
        int* piVar4;
        undefined4* puVar5;
        undefined1* puVar6;
        int iVar7;
        uint uVar8;
        ulong uVar9;
        array<signed char, 10ul>* this_01;
        ulong uVar10;
        bool bVar11;
        shared_ptr<RSevenDebugPresetProvider> local_78[16];
        array<int, 10ul>* local_68;
        array<signed char, 10ul>* local_60;
        uint* local_58;
        int* local_50;
        array<int, 10ul>* local_48;
        uint local_38;

        iVar7 = field_372;
        if (iVar7 == -1) {
            bVar11 = false;
        } else {
            local_78->List(iVar7);
            lVar2 = shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)local_78);
            bVar11 = *(int*)(lVar2 + 252) == 1;
            if (iVar7 != -1) {
                local_78->~shared_ptr();
            }
        }
        if (bVar11) {
            field_372 = -1;
        }
        if (!param_3) {
            local_48 = (array<int, 10ul>*)&field_444;
            puVar3 = (uint*)std::array<int, 10ul>::operator[](local_48, 0);
            local_68 = (array<int, 10ul>*)&field_484;
            iVar7 = (uint)param_1 - *puVar3;
            local_50 = (int*)std::array<int, 10ul>::operator[](local_68, 0);
            this_00 = local_68;
            if (((iVar7 + 8U < 17) && (-9 < param_2 - *local_50)) && (param_2 - *local_50 < 9)) {
                if ((int)field_440 < 9) {
                    field_440 = field_440 + 1;
                }
                uVar8 = field_440;
                this_01 = (array<signed char, 10ul>*)&field_524;
                local_58 = puVar3;
                if (0 < (int)uVar8) {
                    uVar10 = (ulong)uVar8;
                    local_60 = this_01;
                    do {
                        uVar8 = uVar8 - 1;
                        uVar9 = (ulong)uVar8;
                        puVar5 = (undefined4*)std::array<int, 10ul>::operator[](local_48, uVar9);
                        uVar1 = *puVar5;
                        puVar5 = (undefined4*)std::array<int, 10ul>::operator[](local_48, uVar10);
                        this_01 = local_60;
                        *puVar5 = uVar1;
                        puVar3 = (uint*)std::array<int, 10ul>::operator[](this_00, uVar9);
                        local_38 = *puVar3;
                        puVar3 = (uint*)std::array<int, 10ul>::operator[](this_00, uVar10);
                        *puVar3 = local_38;
                        puVar6 = (undefined1*)std::array<signed char, 10ul>::operator[](this_01, uVar9);
                        local_38 = CONCAT31(local_38._1_3_, *puVar6);
                        puVar6 = (undefined1*)std::array<signed char, 10ul>::operator[](this_01, uVar10);
                        *puVar6 = (undefined1)local_38;
                        bVar11 = 1 < (long)uVar10;
                        uVar10 = uVar10 - 1;
                    } while (bVar11);
                }
                *local_58 = (uint)param_1;
                *local_50 = param_2;
                puVar6 = (undefined1*)std::array<signed char, 10ul>::operator[](this_01, 0);
                *puVar6 = 1;
                return;
            }
        }
        field_440 = 0;
        field_536 = 0;
        puVar3 = (uint*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_444, 0);
        *puVar3 = (uint)param_1;
        piVar4 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_484, 0);
        *piVar4 = param_2;
        iVar7 = field_40 * 64;
        field_24 = *puVar3 * 128 + iVar7;
        field_28 = *piVar4 * 128 + iVar7;
    }

    // 0x10011a550, 48 bytes, placed by class name
    // ClientNpc::ClearHeadIconCustomisation()
    void ClientNpc::ClearHeadIconCustomisation() {
        if ((&field_1080)->operator_cast_to_bool()) {
            (&field_1080, (NPCHeadIconCustomisation*)0)->reset();
        }
    }

    // 0x10011a830, 128 bytes, placed by class name
    // ClientNpc::SetHeadIcons(eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&, eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&)
    void ClientNpc::SetHeadIcons(fixed_vector* param_1, fixed_vector* param_2) {
        undefined1* this_00;
        NPCHeadIconCustomisation* this_01;
        undefined1 local_38[8];

        this_00 = &field_1080;
        if (!this_00->operator_cast_to_bool()) {
            std::make_unique<configdecoder::NPCHeadIconCustomisation, shared_ptr<configdecoder::NpcType>&>(
                (shared_ptr*)local_38);
            std::unique_ptr<configdecoder::NPCHeadIconCustomisation,
                            std::default_delete<configdecoder::NPCHeadIconCustomisation>>::
            operator=((unique_ptr<configdecoder::NPCHeadIconCustomisation,
                                  std::default_delete<configdecoder::NPCHeadIconCustomisation>>*)this_00,
                      (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
        this_01 =
            (NPCHeadIconCustomisation*)std::unique_ptr<configdecoder::NPCHeadIconCustomisation,
                                                       std::default_delete<configdecoder::NPCHeadIconCustomisation>>::
            operator->((unique_ptr<configdecoder::NPCHeadIconCustomisation,
                                   std::default_delete<configdecoder::NPCHeadIconCustomisation>>*)this_00);
        this_01->SetSlots(param_1, param_2);
    }

    // 0x10011c9e0, 816 bytes, placed by class name
    // ClientNpc::GetTempModel(int)
    ClientNpc* ClientNpc::GetTempModel(int param_1) {
        undefined4* this_00;
        undefined1* this_01;
        uint uVar1;
        uint uVar2;
        bool bVar3;
        int iVar5;
        int iVar6;
        MidiTask* this_02;
        long lVar7;
        long* plVar8;
        int in_EDX;
        undefined4 in_register_00000034;
        ClientEntity* this_03;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_80[16];
        shared_ptr local_70;
        shared_ptr local_60;
        SeqType* local_50;
        int local_44;
        shared_ptr local_40;

        this_03 = (ClientEntity*)CONCAT44(in_register_00000034, param_1);
        this_00 = &this_03[1].field_64;
        bVar3 = operator==((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
        if (bVar3) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            return this;
        }
        if ((this_03->field_372 == -1) || (*(int*)&this_03->field_384 != 0)) {
            new (&local_70) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_70.List(this_03->field_372);
        }
        if ((*(int*)&this_03->field_356 == -1) ||
            ((*(int*)&this_03->field_356 == this_03->field_48 &&
              (bVar3 = operator==(&local_70, (_func_decltype_nullptr*)0), !bVar3)))) {
            shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_80, (_func_decltype_nullptr*)0);
        } else {
            local_80->List(*(int*)&this_03->field_356);
        }
        new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        this_01 = &this_03[1].field_112;
        bVar3 = std::operator!=((unique_ptr*)this_01, (_func_decltype_nullptr*)0);
        local_44 = in_EDX;
        if (bVar3) {
            this_02 = (MidiTask*)std::unique_ptr<configdecoder::NPCTypeCustomisation,
                                                 BucketDeleter<configdecoder::NPCTypeCustomisation>>::
                      operator->((unique_ptr<configdecoder::NPCTypeCustomisation,
                                             BucketDeleter<configdecoder::NPCTypeCustomisation>>*)this_01);
            if (this_02->HasError() != '\0') {
                lVar7 = Client::Instance();
                lVar7 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)(lVar7 + 52016));
                local_50 = (SeqType*)shared_ptr<rs2lib::PlayerModel>::operator->(
                    (shared_ptr<rs2lib::PlayerModel>*)(lVar7 + 1008));
                iVar5 = local_70.end();
                uVar1 = *(uint*)&this_03->field_376;
                iVar6 = local_80->end();
                local_60.GetTempModel(local_50, iVar5, (SeqType*)(ulong)uVar1, iVar6);
                shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_40, &local_60);
                local_60.~shared_ptr();
                iVar5 = local_44;
                goto LAB_10011cbca;
            }
        }
        local_50 =
            (SeqType*)shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)this_00);
        iVar5 = local_70.end();
        uVar1 = *(uint*)&this_03->field_376;
        iVar6 = local_80->end();
        uVar2 = *(uint*)((long)&this_03->field_356 + 4);
        this_01->get();
        local_60.GetTempModel(local_50, iVar5, (SeqType*)(ulong)uVar1, iVar6, (NPCTypeCustomisation*)(ulong)uVar2);
        shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&local_40, &local_60);
        local_60.~shared_ptr();
        iVar5 = local_44;
    LAB_10011cbca:
        bVar3 = operator==(&local_40, (_func_decltype_nullptr*)0);
        if (bVar3) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            plVar8 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
            (**(code**)(*plVar8 + 64))(plVar8);
            lVar7 = shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
            *(undefined4*)&this_03->field_424 = *(undefined4*)(lVar7 + 8);
            if (((this_03->field_559 != '\0') && (*(int*)((long)&this_03->field_544 + 4) <= iVar5)) &&
                (iVar5 < (int)this_03->field_552)) {
                plVar8 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                (**(code**)(*plVar8 + 176))(plVar8, (int)(char)this_03->field_556, (int)(char)this_03->field_557,
                                            (int)(char)this_03->field_558, this_03->field_559);
            }
            this_03->CombineWithSpotAnim(&local_40);
            lVar7 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)this_00);
            if (*(int*)(lVar7 + 40) == 1) {
                lVar7 = shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                *(undefined1*)(lVar7 + 16) = 1;
            }
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
        }
        local_40.~shared_ptr();
        local_80->~shared_ptr();
        local_70.~shared_ptr();
        return this;
    }

    // 0x10011cde0, 192 bytes, placed by class name
    // ClientNpc::GetDisplayName() const
    ClientNpc* ClientNpc::GetDisplayName() {
        char cVar1;
        long lVar2;
        basic_string* pbVar3;
        long in_RSI;
        shared_ptr<configdecoder::NpcType>* this_00;
        shared_ptr<RSevenDebugPresetProvider> local_38[16];

        pbVar3 = (basic_string*)(in_RSI + 992);
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0')
            goto LAB_10011ce77;
        this_00 = (shared_ptr<configdecoder::NpcType>*)(in_RSI + 1024);
        lVar2 = shared_ptr<configdecoder::NpcType>::operator->(this_00);
        cVar1 = ((lVar2 + 488))->empty();
        if (cVar1 == '\0') {
            shared_ptr<configdecoder::NpcType>::operator->(this_00);
            local_38->GetMultiNpc();
            lVar2 = local_38->end();
        LAB_10011ce5a:
            local_38->~shared_ptr();
        } else {
            lVar2 = 0;
            if (cVar1 == '\0')
                goto LAB_10011ce5a;
        }
        if (lVar2 == 0) {
            lVar2 = shared_ptr<configdecoder::NpcType>::operator->(this_00);
        }
        pbVar3 = (basic_string*)(lVar2 + 8);
    LAB_10011ce77:
        new (this) eastl::string(pbVar3);
        return this;
    }

} // namespace jag::oldscape

namespace jag {
    // 0x1000fcd80, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::DesktopApplicationContext>::type make_shared<oldscape::DesktopApplicationContext, std::unique_ptr<Steam, std::default_delete<Steam> >&>(std::unique_ptr<Steam, std::default_delete<Steam> >&)
    /* shared_ptr_if_not_array<oldscape::DesktopApplicationContext>::type
   make_shared<oldscape::DesktopApplicationContext, std::unique_ptr<Steam,
   std::default_delete<Steam> >&>(std::unique_ptr<Steam, std::default_delete<Steam>
   >&) */

    jag* jag::make_shared<oldscape::DesktopApplicationContext, std::unique_ptr<Steam, std::default_delete<Steam>>&>(
        unique_ptr* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        DesktopApplicationContext* local_30[2];

        pvVar1 = (void*)aligned_alloc(128, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] =
                placement_new<oldscape::DesktopApplicationContext, std::unique_ptr<Steam, std::default_delete<Steam>>&>(
                    (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::DesktopApplicationContext>, int,
                                   oldscape::DesktopApplicationContext*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag

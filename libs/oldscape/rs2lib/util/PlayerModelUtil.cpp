// libs/oldscape/rs2lib/util/PlayerModelUtil.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape {
    class PlayerModelUtil {
    public:
        void SetPlayerModel(rs2lib::IfType&, bool);
        void SetPlayerModelObj(rs2lib::IfType&, int);
        void SetPlayerModelColour(rs2lib::IfType&, int, int);
        void SetPlayerModelBodyType(rs2lib::IfType&, int);
        bool ModelHasHelmetThatDoesntCoverJaw(rs2lib::PlayerModel const&);
    };

    // 0x1001fe530, 272 bytes, placed by class name and debug map
    // PlayerModelUtil::SetPlayerModel(rs2lib::IfType&, bool)
    void PlayerModelUtil::SetPlayerModel(IfType* param_1, bool param_2) {
        long lVar1;
        fixed_vector<int, 12ul, true, eastl::allocator>* this;
        PlayerModel* this_00;
        undefined1* this_01;
        shared_ptr<dash3d::Decor> local_48[16];
        shared_ptr local_38;
        unique_ptr local_28[8];

        param_1->field_228 = 7;
        lVar1 = Client::Instance();
        lVar1 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)(lVar1 + 52016));
        shared_ptr<dash3d::Decor>::shared_ptr(local_48, (shared_ptr*)(lVar1 + 1008));
        shared_ptr<rs2lib::PlayerModel>::operator*((shared_ptr<rs2lib::PlayerModel>*)local_48);
        std::make_unique<rs2lib::PlayerModel, rs2lib::PlayerModel&>((PlayerModel*)local_28);
        shared_ptr<rs2lib::PlayerModel>::shared_ptr<rs2lib::PlayerModel, std::default_delete<rs2lib::PlayerModel>>(
            (shared_ptr<rs2lib::PlayerModel>*)&local_38, local_28);
        this_01 = &param_1->field_296;
        shared_ptr<rs2lib::PlayerModel>::operator=((shared_ptr<rs2lib::PlayerModel>*)this_01, &local_38);
        local_38.~shared_ptr();
        local_28->~unique_ptr();
        if (!param_2) {
            lVar1 = shared_ptr<rs2lib::PlayerModel>::operator->((shared_ptr<rs2lib::PlayerModel>*)local_48);
            this = (fixed_vector<int, 12ul, true, eastl::allocator>*)shared_ptr<rs2lib::PlayerModel>::operator->(
                (shared_ptr<rs2lib::PlayerModel>*)this_01);
            eastl::fixed_vector<int, 12ul, true, eastl::allocator>::operator=(this, (fixed_vector*)(lVar1 + 88));
            this_00 =
                (PlayerModel*)shared_ptr<rs2lib::PlayerModel>::operator->((shared_ptr<rs2lib::PlayerModel>*)this_01);
            this_00->RefreshAppearance();
        }
        local_48->~shared_ptr();
    }

    // 0x1001fe780, 272 bytes, placed by class name
    // PlayerModelUtil::SetPlayerModelObj(rs2lib::IfType&, int)
    void PlayerModelUtil::SetPlayerModelObj(IfType* param_1, int param_2) {
        undefined8 uVar2;
        long lVar3;
        vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>* pvVar4;
        int* piVar5;
        undefined4* puVar6;
        PlayerModel* this;
        undefined1* this_00;
        undefined1 local_38[16];

        this_00 = &param_1->field_296;
        if (operator==((shared_ptr*)this_00, (_func_decltype_nullptr*)0)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "util/PlayerModelUtil.cpp",
                                24, "SetPlayerModelObj called on a component without a player model!");
        } else {
            local_38->List(param_2);
            lVar3 = local_38->end();
            local_38->~shared_ptr();
            pvVar4 = (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)
                         shared_ptr<rs2lib::PlayerModel>::operator->((shared_ptr<rs2lib::PlayerModel>*)this_00);
            piVar5 =
                (int*)eastl::vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::
                operator[](pvVar4, (long)*(int*)(lVar3 + 208));
            *piVar5 = param_2 + 512;
            if (*(int*)(lVar3 + 212) != -1) {
                pvVar4 = (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)
                             shared_ptr<rs2lib::PlayerModel>::operator->((shared_ptr<rs2lib::PlayerModel>*)this_00);
                puVar6 = (undefined4*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        pvVar4, (long)*(int*)(lVar3 + 212));
                *puVar6 = 0;
            }
            if (*(int*)(lVar3 + 216) != -1) {
                pvVar4 = (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)
                             shared_ptr<rs2lib::PlayerModel>::operator->((shared_ptr<rs2lib::PlayerModel>*)this_00);
                puVar6 = (undefined4*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        pvVar4, (long)*(int*)(lVar3 + 216));
                *puVar6 = 0;
            }
            this = (PlayerModel*)shared_ptr<rs2lib::PlayerModel>::operator->((shared_ptr<rs2lib::PlayerModel>*)this_00);
            RefreshAppearance();
        }
    }

    // 0x1001fe890, 144 bytes, placed by class name
    // PlayerModelUtil::SetPlayerModelColour(rs2lib::IfType&, int, int)
    void PlayerModelUtil::SetPlayerModelColour(IfType* param_1, int param_2, int param_3) {
        undefined8 uVar2;
        long lVar3;
        int* piVar4;
        PlayerModel* this;
        undefined1* this_00;

        this_00 = &param_1->field_296;
        if (operator==((shared_ptr*)this_00, (_func_decltype_nullptr*)0)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "util/PlayerModelUtil.cpp",
                                44, "SetPlayerModelColour called on a component without a player model!");
        } else {
            lVar3 = shared_ptr<rs2lib::PlayerModel>::operator->((shared_ptr<rs2lib::PlayerModel>*)this_00);
            piVar4 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 5ul, 4ul, 0ul, true, eastl::allocator>>*)(lVar3 +
                                                                                                              176),
                    (long)param_2);
            *piVar4 = param_3;
            this = (PlayerModel*)shared_ptr<rs2lib::PlayerModel>::operator->((shared_ptr<rs2lib::PlayerModel>*)this_00);
            RefreshAppearance();
        }
    }

    // 0x1001fe920, 432 bytes, placed by class name
    // PlayerModelUtil::SetPlayerModelBodyType(rs2lib::IfType&, int)
    void PlayerModelUtil::SetPlayerModelBodyType(IfType* param_1, int param_2) {
        undefined4 uVar1;
        char cVar3;
        int iVar4;
        int iVar5;
        undefined8 uVar6;
        GraphicsDefaults* this;
        long lVar7;
        GraphicsDefaults* this_00;
        int* piVar8;
        undefined4* puVar9;
        ulong uVar10;
        ulong uVar11;

        if (operator==((shared_ptr*)&param_1->field_296, (_func_decltype_nullptr*)0)) {
            uVar6 = logger::default_logger();
            logger::Logger::Log(uVar6, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "util/PlayerModelUtil.cpp",
                                55, "SetPlayerModelBodyType called on a component without a player model!");
            return;
        }
        this = (GraphicsDefaults*)shared_ptr<rs2lib::PlayerModel>::operator*(
            (shared_ptr<rs2lib::PlayerModel>*)&param_1->field_296);
        iVar4 = GetSpriteCompassID();
        SetBodytype(param_2);
        if (iVar4 != param_2) {
            iVar4 = GetSpriteCompassID();
            lVar7 = Client::Instance();
            lVar7 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)(lVar7 + 52016));
            this_00 = (GraphicsDefaults*)shared_ptr<rs2lib::PlayerModel>::operator->(
                (shared_ptr<rs2lib::PlayerModel>*)(lVar7 + 1008));
            iVar5 = this_00->GetSpriteCompassID();
            if (iVar4 == iVar5) {
                uVar10 = 0;
                do {
                    piVar8 = (int*)std::array<int, 7ul>::operator[](uVar10);
                    uVar11 = (ulong)*piVar8;
                    piVar8 = (int*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                        uVar11);
                    if ((0 < *piVar8) &&
                        (piVar8 = (int*)eastl::vector<
                             int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::
                         operator[](
                             (vector<int,
                                     eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                             uVar11),
                         *piVar8 < 512)) {
                        puVar9 = (undefined4*)eastl::vector<
                            int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true,
                                                                              eastl::allocator>>*)&field_88,
                                   uVar11);
                        uVar1 = *puVar9;
                        puVar9 = (undefined4*)eastl::vector<
                            int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<int,
                                    eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                            uVar11);
                        *puVar9 = uVar1;
                    }
                    uVar10 = uVar10 + 1;
                } while (uVar10 != 7);
            } else {
                piVar8 = (int*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                        0);
                if ((*piVar8 < 512) || (cVar3 = ModelHasHelmetThatDoesntCoverJaw((PlayerModel*)this), cVar3 != '\0')) {
                    puVar9 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                        11);
                    *puVar9 = 1;
                }
                uVar10 = 0;
                do {
                    piVar8 = (int*)std::array<int, 7ul>::operator[](uVar10);
                    iVar4 = *piVar8;
                    piVar8 = (int*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                        (long)iVar4);
                    if ((0 < *piVar8) &&
                        (piVar8 = (int*)eastl::vector<
                             int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::
                         operator[](
                             (vector<int,
                                     eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                             (long)iVar4),
                         *piVar8 < 512)) {
                        rs2lib::PlayerModel::SetDefaultTypeForIdkSlot(param_2, (fixed_vector*)this, (int)uVar10);
                    }
                    uVar10 = uVar10 + 1;
                } while (uVar10 != 7);
            }
        }
        RefreshAppearance();
    }

    // 0x1001feaf0, 128 bytes, placed by class name
    // PlayerModelUtil::ModelHasHelmetThatDoesntCoverJaw(rs2lib::PlayerModel const&)
    bool PlayerModelUtil::ModelHasHelmetThatDoesntCoverJaw(PlayerModel* param_1) {
        int* piVar1;
        long lVar2;
        bool bVar3;
        undefined1 local_30[16];

        bVar3 = false;
        piVar1 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)param_1, 0);
        if (511 < *piVar1) {
            bVar3 = false;
            piVar1 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true, eastl::allocator>>*)param_1,
                    0);
            local_30->List(*piVar1 + -512);
            lVar2 = local_30->end();
            local_30->~shared_ptr();
            if (*(int*)(lVar2 + 212) != 11) {
                bVar3 = *(int*)(lVar2 + 216) != 11;
            }
        }
        return bVar3;
    }

} // namespace jag::oldscape

// libs/oldscape/rs2lib/util/PlayerModelUtil.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape {
    class PlayerModelUtil {
    public:
        void SetPlayerModel(rs2lib::IfType& ifType, bool arg2);
        void SetPlayerModelObj(rs2lib::IfType& ifType, int arg2);
        void SetPlayerModelColour(rs2lib::IfType& ifType, int arg2, int arg3);
        void SetPlayerModelBodyType(rs2lib::IfType& ifType, int arg2);
        bool ModelHasHelmetThatDoesntCoverJaw(const rs2lib::PlayerModel& playerModel);
    };

    // 0x1001fe530
    void PlayerModelUtil::SetPlayerModel(rs2lib::IfType& ifType, bool arg2) {
        fixed_vector<int, 12ul>* fixed_vector;
        shared_ptr<rs2lib::PlayerModel> local_38;

        ifType.field_228 = 7;
        long lVar2 = Client::Instance()->field_52016.operator->();
        shared_ptr<dash3d::Decor> local_48((lVar2 + 1008));
        PlayerModel* pPVar3 = (PlayerModel*)*local_48;
        auto local_28 = std::make_unique<rs2lib::PlayerModel, rs2lib::PlayerModel&>(*pPVar3);
        local_38.shared_ptr<rs2lib::PlayerModel>(local_28);
        uint8_t* this_00 = &ifType.field_296;
        *this_00 = local_38;
        if (!arg2) {
            lVar2 = local_48.operator->();
            fixed_vector = (fixed_vector<int, 12ul>*)(*this_00).operator->();
            *fixed_vector = (*((lVar2 + 88)));
            pPVar3 = (PlayerModel*)(*this_00).operator->();
            pPVar3->RefreshAppearance();
        }
    }

    // 0x1001fe780
    void PlayerModelUtil::SetPlayerModelObj(rs2lib::IfType& ifType, int arg2) {
        long lVar2;
        vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true>>* pvVar3;
        int* piVar4;
        uint32_t* puVar5;
        ReturnValue local_38;

        uint8_t* objType = &ifType.field_296;
        if (*objType == nullptr) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/"
                      "PlayerModelUtil.cpp",
                      24, "SetPlayerModelObj called on a component without a player model!");
        } else {
            local_38 = configdecoder::ObjType::List(arg2);
            lVar2 = local_38.end();
            pvVar3 = (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true>>*)(*objType).operator->();
            piVar4 = (int*)(*pvVar3)[(long)*(int*)(lVar2 + 208)];
            *piVar4 = arg2 + 512;
            if (*(int*)(lVar2 + 212) != -1) {
                pvVar3 =
                    (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true>>*)(*objType).operator->();
                puVar5 = (uint32_t*)(*pvVar3)[(long)*(int*)(lVar2 + 212)];
                *puVar5 = 0;
            }
            if (*(int*)(lVar2 + 216) != -1) {
                pvVar3 =
                    (vector<int, eastl::fixed_vector_allocator<4ul, 12ul, 4ul, 0ul, true>>*)(*objType).operator->();
                puVar5 = (uint32_t*)(*pvVar3)[(long)*(int*)(lVar2 + 216)];
                *puVar5 = 0;
            }
            ((PlayerModel*)(*objType).operator->())->RefreshAppearance();
        }
    }

    // 0x1001fe890
    void PlayerModelUtil::SetPlayerModelColour(rs2lib::IfType& ifType, int arg2, int arg3) {
        long lVar2;
        int* piVar3;

        uint8_t* objType = &ifType.field_296;
        if (*objType == nullptr) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/"
                      "PlayerModelUtil.cpp",
                      44, "SetPlayerModelColour called on a component without a player model!");
        } else {
            lVar2 = (*objType).operator->();
            piVar3 = (int*)(*((lVar2 + 176)))[(long)arg2];
            *piVar3 = arg3;
            ((PlayerModel*)(*objType).operator->())->RefreshAppearance();
        }
    }

    // 0x1001fe920
    void PlayerModelUtil::SetPlayerModelBodyType(rs2lib::IfType& ifType, int arg2) {
        uint32_t uVar1;
        bool cVar3;
        int iVar5;
        long lVar7;
        GraphicsDefaults* pGVar8;
        int* piVar9;
        uint32_t* puVar10;
        array<int, 7ul>* paVar11;
        unsigned long arg1_00;
        GraphicsDefaults* arg1_01;

        if (ifType.field_296 == nullptr) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/"
                      "PlayerModelUtil.cpp",
                      55, "SetPlayerModelBodyType called on a component without a player model!");
            return;
        }
        GraphicsDefaults* this_00 = (GraphicsDefaults*)ifType.field_296;
        int iVar4 = this_00->GetSpriteCompassID();
        unsigned long arg1 = (unsigned long)(unsigned int)arg2;
        this_00->SetBodytype(arg2);
        if (iVar4 != arg2) {
            iVar4 = this_00->GetSpriteCompassID();
            lVar7 = Client::Instance()->field_52016.operator->();
            pGVar8 = (GraphicsDefaults*)(*((lVar7 + 1008))).operator->();
            iVar5 = pGVar8->GetSpriteCompassID();
            if (iVar4 == iVar5) {
                paVar11 = nullptr;
                do {
                    piVar9 = (int*)(*paVar11)[arg1];
                    arg1_00 = (unsigned long)*piVar9;
                    arg1 = arg1_00;
                    piVar9 = (int*)(*this_00)[arg1_00];
                    if ((0 < *piVar9) && (arg1 = arg1_00, piVar9 = (int*)(*this_00)[arg1_00], *piVar9 < 512)) {
                        puVar10 = &this_00->field_88[arg1_00];
                        uVar1 = *puVar10;
                        puVar10 = (uint32_t*)(*this_00)[arg1_00];
                        *puVar10 = uVar1;
                        arg1 = arg1_00;
                    }
                    paVar11 = paVar11 + 1;
                } while (paVar11 != (array<int, 7ul>*)7);
            } else {
                pGVar8 = nullptr;
                piVar9 = (int*)(*this_00)[0];
                if ((*piVar9 < 512) || (cVar3 = ModelHasHelmetThatDoesntCoverJaw((PlayerModel*)this_00), cVar3)) {
                    pGVar8 = (GraphicsDefaults*)11;
                    puVar10 = (uint32_t*)(*this_00)[11];
                    *puVar10 = 1;
                }
                paVar11 = nullptr;
                do {
                    piVar9 = (int*)(*paVar11)[(unsigned long)pGVar8];
                    arg1_01 = (GraphicsDefaults*)(long)*piVar9;
                    pGVar8 = arg1_01;
                    piVar9 = (int*)(*this_00)[(unsigned long)arg1_01];
                    if ((0 < *piVar9) &&
                        (piVar9 = (int*)(*this_00)[(unsigned long)arg1_01], pGVar8 = arg1_01, *piVar9 < 512)) {
                        pGVar8 = this_00;
                        rs2lib::PlayerModel::SetDefaultTypeForIdkSlot(arg2, *this_00, (int)paVar11);
                    }
                    paVar11 = paVar11 + 1;
                } while (paVar11 != (array<int, 7ul>*)7);
            }
        }
        this_00->RefreshAppearance();
    }

    // 0x1001feaf0
    bool PlayerModelUtil::ModelHasHelmetThatDoesntCoverJaw(const rs2lib::PlayerModel& playerModel) {
        long lVar2;
        ReturnValue local_30;

        bool bVar3 = false;
        int* piVar1 = &playerModel[0];
        if (511 < *piVar1) {
            bVar3 = false;
            piVar1 = &playerModel[0];
            local_30 = configdecoder::ObjType::List(*piVar1 - 512);
            lVar2 = local_30.end();
            if (*(int*)(lVar2 + 212) != 11) {
                bVar3 = *(int*)(lVar2 + 216) != 11;
            }
        }
        return bVar3;
    }

} // namespace jag::oldscape

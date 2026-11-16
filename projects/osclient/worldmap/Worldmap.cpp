// projects/osclient/worldmap/Worldmap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "Worldmap.h"

namespace jag::oldscape::worldmap {
    // 0x100d3d2b8
    float Worldmap::SCALE_UPDATE_FACTOR = 30.0f;

    // 0x100d3d2bc
    int32_t Worldmap_SMALL_FONT = 3;

    // 0x100d3d2c0
    int32_t Worldmap_MEDIUM_FONT = 4;

    // 0x100d3d2c4
    int32_t Worldmap_LARGE_FONT[60] = {
        5,          14,         0,          14,         0,  12,         0,          14,          0,
        22,         0,          23,         0,          28, 0,          29,         0,           1062836634,
        1139638272, 1141473280, 1135869952, 1113927392, 0,  1697350398, 1073157447, -1120952803, -1078791757,
        0,          1,          2,          3,          4,  5,          1751346241, 7957861,     1329676872,
        0,          44,         45,         46,         47, 48,         49,         50,          51,
        9,          10,         11,         12,         13, 18,         19,         20,          21,
        22,         3,          4,          5,          6,  1001,
    };

    // 0x100025b10
    void Worldmap::Init(jagex3::Js5* js51, jagex3::Js5* js52, jagex3::Js5* js53,
                        shared_ptr<jstring::PixfontGeneric> pixfontGeneric,
                        eastl::hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash>& arg5,
                        shared_ptr<Array<graphics::Pix8>>& pix8s) {
        Js5* this_00;
        unsigned long uVar6;
        int* piVar7;
        WorldmapAreaMetadata* pWVar8;
        PacketJ<Array<unsigned char> _>* packetJ;
        Logger* this_01;
        uint64_t uVar9;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_02;
        eastl::string* str;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* this_03;
        unsigned long arg1;
        shared_ptr<Array<graphics::Pix8> _>* in_stack_00000008;
        shared_ptr<RSevenDebugPresetProvider> local_90;
        ReturnValue local_80;
        hash_map<eastl::string, shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>>* local_70;

        (*((shared_ptr<Array<graphics::Pix8>>*)((long)&js51[1]._vptr + 5))) = *in_stack_00000008;
        js51->field_8 = (Js5Loader*)js52;
        *(Js5**)&js51->field_16 = js53;
        *(shared_ptr<jstring::PixfontGeneric>**)&js51->field_24 = pixfontGeneric;
        js51->field_32 = arg5;
        uint8_t* uint8_t = &js51->field_48;
        uint8_t->clear();
        shared_ptr<jstring::PixfontGeneric>* psVar3 = &pix8s[Worldmap_SMALL_FONT];
        local_3e0[0]._0_4_ = ((MapLabelSize*)&rs2lib::worldmap::MapLabelSize::SMALL)->GetSize();
        shared_ptr<jstring::PixfontGeneric>* psVar4 = (shared_ptr<jstring::PixfontGeneric>*)(*uint8_t)[local_3e0];
        *psVar4 = *psVar3;
        psVar3 = &pix8s[Worldmap_MEDIUM_FONT];
        local_3e0[0]._0_4_ = ((MapLabelSize*)&rs2lib::worldmap::MapLabelSize::MEDIUM)->GetSize();
        psVar4 = (shared_ptr<jstring::PixfontGeneric>*)(*uint8_t)[local_3e0];
        *psVar4 = *psVar3;
        psVar3 = &pix8s[Worldmap_LARGE_FONT];
        local_3e0[0]._0_4_ = ((MapLabelSize*)&rs2lib::worldmap::MapLabelSize::LARGE)->GetSize();
        psVar4 = (shared_ptr<jstring::PixfontGeneric>*)(*uint8_t)[local_3e0];
        *psVar4 = *psVar3;
        ErrorCapture local_3e0 = std::make_unique<WorldmapLoader, jagex3::Js5*&>(js52);
        js51[2].field_34 = local_3e0;
        int arg2 = js51->field_8->GetGroupId("details");
        vector<int, BucketAllocatorEASTL> local_68;
        int local_3c = arg2;
        js51->field_8->GetFileList(local_68, arg2);
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* local_48 =
            (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&js51[1].field_77;
        Worldmap* local_38 = (Worldmap*)js51;
        if (local_68.size() != 0) {
            local_70 =
                (hash_map<eastl::string, shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>>*)&local_38->field_120;
            arg1 = 0;
            do {
                local_90 = shared_ptr();
                this_00 = local_38->field_8;
                piVar7 = &local_68[arg1];
                this_00->GetFile(local_90, local_3c, *piVar7, nullptr);
                make_shared<rs2lib::worldmap::WorldmapAreaMetadata>(&local_80);
                local_3e0 = ErrorCapture(true);
                pWVar8 = (WorldmapAreaMetadata*)local_80.operator->();
                packetJ = (PacketJ<Array<unsigned char> _>*)*local_90;
                piVar7 = &local_68[arg1];
                pWVar8->Unpack(*packetJ, *piVar7, local_3e0);
                if (!(local_3e0.IsRaised())) {
                    this_02 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)
                                  local_80.operator->();
                    str = (eastl::string*)this_02->second();
                    this_03 = (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)(*local_70)[*str];
                    *this_03 = local_80;
                    pWVar8 = (WorldmapAreaMetadata*)local_80.operator->();
                    if (pWVar8->IsDefaultMap()) {
                        *local_48 = local_80;
                    }
                } else {
                    this_01 = logger::default_logger();
                    local_3e0.second();
                    uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    this_01->Log(false, 2,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "worldmap/Worldmap.cpp",
                                 85, "Failed to unpack worldmap area metadata: %s", uVar9);
                }
                arg1 = arg1 + 1;
                uVar6 = local_68.size();
            } while (arg1 < uVar6);
        }
        Worldmap* pWVar1 = local_38;
        SwitchToMap(local_38, local_48);
        local_3e0 = shared_ptr();
        pWVar1->field_208 = local_3e0;
    }

    // 0x100026110
    void Worldmap::SwitchToMap(const shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>& worldmapAreaMetadata) {
        bool bVar1 = field_192 != nullptr;
        if ((bVar1) && (bVar1 = field_192 == worldmapAreaMetadata, bVar1)) {
            return;
        }
        MapSwitch(worldmapAreaMetadata);
        Reset(-1, -1, -1);
    }

    // 0x1000261d0
    uint32_t Worldmap::PrefetchDefaultMapAreaData() {
        auto this_00 = field_176.operator->();
        auto str = this_00->second();
        eastl::string local_40(*str);
        Js5* pJVar1 = field_8;
        char* pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        bool cVar2 = pJVar1->RequestDownload(pcVar4, "area");
        uint32_t uVar3 = 100;
        if (!cVar2) {
            pJVar1 = field_8;
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar3 = pJVar1->GetGroupLoadPercentage(pcVar4);
        }
        return uVar3;
    }

    // 0x100026270
    void Worldmap::Service() {
        rs2lib::worldmap::RenderedMapSquare::CleanCaches();
    }

    // 0x100026280
    void Worldmap::LogicLoop(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2,
                             bool arg3, int arg4, int arg5, int arg6, int arg7) {
        int iVar1;
        Worldmap* pWVar2;
        uint8_t bVar4;
        float extraout_EAX;
        int arg10;
        int iVar5;
        uint32_t extraout_var;
        shared_ptr<rs2lib::worldmap::MapElement>* psVar6;
        long* plVar7;
        shared_ptr<rs2lib::worldmap::MapElement>* this_01;
        long lVar8;
        long lVar9;
        HookArg* pHVar10;
        int iVar11;
        bool bVar12;
        float fVar13;
        hash_map<int, shared_ptr<rs2lib::worldmap::MapElement>> local_1c0;
        ReturnValue local_188;
        HookArg local_178;
        list<shared_ptr<rs2lib::worldmap::MapElement>, BucketAllocatorEASTL> local_130;
        MapElementPosition local_118;
        HookReq local_f8;
        ReturnValue local_78;
        ReturnValue local_70;
        int local_60;
        int local_5c;
        Worldmap* local_58;
        float local_50;
        uint32_t uStack_4c;
        float local_44;
        CoordMapSquare local_40;

        local_40.m_x = (unsigned int)coordType1;
        local_40._8_4_ = (uint32_t)coordType2;
        bool cVar3 = ((WorldmapLoader*)field_232.operator->())->IsLoadComplete();
        if (cVar3) {
            Zoom();
            Move();
            if (arg3) {
                cVar3 = Moving();
                bVar12 = true;
                if (!cVar3) {
                    bVar12 = field_384 != -1;
                }
                local_50 = field_264;
                local_58 = this;
                local_130 = eastl::list<shared_ptr<rs2lib::worldmap::MapElement>, BucketAllocatorEASTL>();
                if (!bVar12) {
                    local_44 = 1.0 / local_50;
                    local_50 = (float)ceil((float)arg7 * local_44);
                    fVar13 = (float)ceil((float)arg6 * local_44);
                    pWVar2 = local_58;
                    iVar11 = (int)local_50;
                    local_58->field_224.operator->();
                    iVar5 = pWVar2->field_240;
                    local_44 = (float)((int)fVar13 / 2 + iVar5 + 1);
                    iVar1 = pWVar2->field_244;
                    local_60 = iVar11 / 2 + iVar1 + 1;
                    local_50 = extraout_EAX;
                    uStack_4c = extraout_var;
                    arg10 = local_40.GetX();
                    local_40.field_8.GetX();
                    local_f8.GetMapElementsAtScreenCoord((int)local_50, ~((int)fVar13 / 2) + iVar5,
                                                         ~(iVar11 / 2) + iVar1, (int)local_44, local_60, arg4, arg5,
                                                         arg6, arg7, arg10);
                    local_130 = local_f8;
                }
                local_1c0 = eastl::hash_map<int, shared_ptr<rs2lib::worldmap::MapElement>>(local_f8);
                local_70 = local_130.begin();
                local_78 = local_130.end();
                local_58 = (Worldmap*)&local_58->field_712;
                cVar3 = local_70 != local_78;
                if (cVar3) {
                    do {
                        psVar6 = (shared_ptr<rs2lib::worldmap::MapElement>*)*local_70;
                        plVar7 = (long*)(*psVar6).operator->();
                        local_5c = (**(void (**)(...))(*plVar7 + 8))(plVar7);
                        this_01 = &local_1c0[local_5c];
                        *this_01 = *psVar6;
                        local_f8 = HookReq();
                        plVar7 = (long*)(*psVar6).operator->();
                        iVar5 = (**(void (**)(...))(*plVar7 + 8))(plVar7);
                        lVar8 = (*psVar6).operator->();
                        lVar9 = (*psVar6).operator->();
                        local_118 = rs2lib::worldmap::MapElementPosition(iVar5, *((lVar8 + 20)), *((lVar9 + 8)));
                        local_f8.clear();
                        local_f8.set_max_size(3, 3);
                        local_178 = HookArg(&local_118);
                        pHVar10 = &local_f8[0];
                        *pHVar10 = local_178;
                        iVar5 = local_40.GetX();
                        local_178 = HookArg(iVar5);
                        pHVar10 = &local_f8[1];
                        *pHVar10 = local_178;
                        iVar5 = local_40.field_8.GetX();
                        local_178 = HookArg(iVar5);
                        pHVar10 = &local_f8[2];
                        *pHVar10 = local_178;
                        pWVar2 = local_58;
                        local_178 = local_58->find(local_5c);
                        local_188 = pWVar2->end();
                        bVar4 = local_178 != local_188;
                        local_f8.field_120._4_4_ = (unsigned int)bVar4 * 2 + 15;
                        ScriptRunner::ExecuteScript(local_f8, 500000);
                        ++local_70;
                        cVar3 = local_70 != local_78;
                    } while (cVar3);
                }
                pWVar2 = local_58;
                local_188 = local_58->begin();
                local_70 = pWVar2->end();
                while (true) {
                    cVar3 = local_188 != local_70;
                    if (!cVar3)
                        break;
                    lVar8 = local_188.HeapBeginPtr();
                    psVar6 = (shared_ptr<rs2lib::worldmap::MapElement>*)(lVar8 + 8);
                    plVar7 = (long*)(*psVar6).operator->();
                    local_118.field_0 = (**(void (**)(...))(*plVar7 + 8))(plVar7);
                    local_f8 = local_1c0.find(local_118.field_0);
                    local_178 = local_1c0.end();
                    cVar3 = local_f8 == local_178;
                    if (cVar3) {
                        local_f8 = HookReq();
                        plVar7 = (long*)(*psVar6).operator->();
                        iVar5 = (**(void (**)(...))(*plVar7 + 8))(plVar7);
                        lVar8 = (*psVar6).operator->();
                        lVar9 = (*psVar6).operator->();
                        local_118 = rs2lib::worldmap::MapElementPosition(iVar5, *((lVar8 + 20)), *((lVar9 + 8)));
                        local_f8.clear();
                        local_f8.set_max_size(3, 3);
                        local_178 = HookArg(&local_118);
                        pHVar10 = &local_f8[0];
                        *pHVar10 = local_178;
                        iVar5 = local_40.GetX();
                        local_178 = HookArg(iVar5);
                        pHVar10 = &local_f8[1];
                        *pHVar10 = local_178;
                        iVar5 = local_40.field_8.GetX();
                        local_178 = HookArg(iVar5);
                        pHVar10 = &local_f8[2];
                        *pHVar10 = local_178;
                        local_f8.field_120._4_4_ = 16;
                        ScriptRunner::ExecuteScript(local_f8, 500000);
                    }
                    ++local_188;
                }
                *local_58 = local_1c0;
            }
        }
    }

    // 0x100026950
    void Worldmap::Zoom() {
        int iVar2;
        unsigned long long uVar4;
        void* in_RSI;
        float fVar5;

        auto pCVar3 = Client::Instance();
        if (!&pCVar3->field_52920 != in_RSI) {
            if (field_264 == field_268) {
                return;
            }
            uVar4 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
            iVar2 = (int)uVar4 - field_280;
            if (iVar2 < 513) {
                fVar5 = (float)iVar2 * 0.001953125f * (field_268 - field_272) + field_272;
                goto LAB_1000269c6;
            }
        }
        fVar5 = field_268;
    LAB_1000269c6:
        field_264 = fVar5;
    }

    // 0x1000269e0
    void Worldmap::Move() {
        int* piVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        if (Moving() != '\0') {
            local_34 = field_240;
            local_38 = field_244;
            iVar5 = field_260 - local_38;
            iVar6 = 0;
            iVar3 = 0;
            iVar4 = field_256 - local_34;
            if (iVar4 != 0) {
                local_40 = -iVar4;
                if (-iVar4 < 0) {
                    local_40 = iVar4;
                }
                piVar2 = std::min<int>(field_4, local_40);
                iVar3 = iVar4 / *piVar2;
            }
            if (iVar5 != 0) {
                local_3c = -iVar5;
                if (-iVar5 < 0) {
                    local_3c = iVar5;
                }
                piVar2 = std::min<int>(field_4, local_3c);
                iVar6 = iVar5 / *piVar2;
            }
            UpdateTile(iVar3 + local_34, iVar6 + local_38, true);
            if ((field_240 == field_256) && (field_244 == field_260)) {
                field_256 = -1;
                field_260 = -1;
            }
        }
    }

    // 0x100026ae0
    bool Worldmap::Moving() {
        if (field_256 == -1) {
            return false;
        }
        return field_260 != -1;
    }

    // 0x100026ce0
    void Worldmap::HandleMouse(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2,
                               bool arg3, bool arg4) {
        float fVar1;
        int iVar2;
        int iVar3;
        unsigned int uVar4;
        int iVar6;
        int iVar7;
        CoordType<UICoordSpecializer>* this_00;
        unsigned int* puVar9;
        CoordType<UICoordSpecializer>* coordType;
        CoordMapSquare local_40;

        CoordType<UICoordSpecializer>* pCVar10 =
            (CoordType<UICoordSpecializer>*)((unsigned long)coordType1 & 4294967295);
        long long arg4_00 = core::SafeTime::CurrentTimeMillis();
        unsigned int local_34 = (unsigned int)coordType2;
        HandleClickLogic(pCVar10, (CoordType<UICoordSpecializer>*)((unsigned long)coordType2 & 4294967295), arg4,
                         arg4_00);
        auto pCVar8 = Client::Instance();
        bool cVar5 = Moving();
        if ((!cVar5) && (((arg4 || (arg3)) && (cVar5 = pCVar8->field_8496.IsDragging(), !cVar5)))) {
            this_00 = &pCVar8->field_8560[(unsigned long)pCVar10];
            local_34 = *(unsigned int*)this_00;
            if (arg4) {
                field_384 = field_240;
                field_388 = field_244;
            }
            uVar4 = local_34;
            if (field_384 != -1) {
                puVar9 = &pCVar8->field_8528[(unsigned long)pCVar10];
                coordType = (CoordType<UICoordSpecializer>*)(unsigned long)*puVar9;
                local_40.m_x = *this_00 - coordType;
                pCVar10 = &pCVar8->field_8576[(unsigned long)coordType];
                puVar9 = &pCVar8->field_8544[(unsigned long)coordType];
                local_40._8_4_ = *pCVar10 - ((CoordType<UICoordSpecializer>*)(unsigned long)*puVar9);
                iVar2 = field_384;
                iVar6 = local_40.GetX();
                fVar1 = field_268;
                iVar3 = field_388;
                iVar7 = local_40.field_8.GetX();
                UpdateTile(iVar2 - (int)((float)iVar6 / fVar1), (int)((float)iVar7 / field_268) + iVar3, false);
                uVar4 = local_34;
            }
        } else {
            ResetDrag();
            uVar4 = (unsigned int)coordType1;
        }
        if (arg4) {
            field_392 = arg4_00;
            field_400 = uVar4;
            field_404 = local_34;
        }
    }

    // 0x100026e70
    void Worldmap::HandleClickLogic(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2,
                                    bool arg3, long long arg4) {
        bool cVar3;
        int iVar4;
        int iVar5;
        int arg3_00;
        unsigned int uVar6;
        Client* pCVar7;
        ServerConnection* pSVar8;
        Isaac* isaac;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this_02;
        uint64_t in_register_00000009;
        float fVar9;
        SuperShuffledPacketFactory local_a8;
        uint8_t local_98[64];
        uint32_t local_4c;
        uint8_t local_48[8];
        uint8_t local_40[12];
        float local_34;

        local_48._0_4_ = (uint32_t)coordType1;
        local_40._0_4_ = (uint32_t)coordType2;
        uint8_t* puVar1 = &field_192;
        if (*puVar1 != nullptr) {
            local_4c = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
            local_40._8_4_ = (BADTYPE)field_240;
            iVar4 = local_48->GetX();
            iVar5 = field_296.GetX();
            local_34 = (float)(iVar4 - iVar5);
            iVar4 = GetSpriteModIconsID();
            fVar9 = (local_34 - (float)iVar4 * 0.5 * field_264) / field_264 + (float)local_40._8_4_;
            local_40._8_4_ = (BADTYPE)field_244;
            iVar4 = local_40->GetX();
            iVar5 = field_300.GetX();
            local_34 = (float)(iVar4 - iVar5);
            GetTileHeight();
            iVar4 = (*puVar1).operator->();
            iVar5 = ((WorldmapAreaMetadata*)(*puVar1).operator->())->GetMinMapX();
            ((ChangeLocationRequest*)(*puVar1).operator->())->GetSeqDelay();
            local_98->TargetToSourceTile(iVar4, (int)fVar9 + iVar5 * 64);
            puVar1 = &field_768;
            *(uint32_t*)&field_776 = local_98._8_4_;
            *(unsigned long*)&field_768 = (((uint64_t)local_98._4_4_ << 32) | (uint32_t)local_98._0_4_);
            pCVar7 = Client::Instance();
            cVar3 = puVar1->IsSet();
            if ((cVar3) && ((char)local_4c != '\0')) {
                cVar3 = pCVar7->IsPlayerAdmin();
                if (cVar3) {
                    cVar3 = pCVar7->field_8496.KeyHeld(107);
                    if ((cVar3) && (cVar3 = pCVar7->field_8496.KeyHeld(81), cVar3)) {
                        iVar4 = puVar1->GetZ();
                        iVar5 = puVar1->GetPos();
                        arg3_00 = puVar1->GetX();
                        pCVar7->TelePlayer(iVar4, iVar5, arg3_00, false);
                        return;
                    }
                }
                if (field_408 != '\0') {
                    local_98._0_4_ = *local_48 - ((CoordType<UICoordSpecializer>*)(unsigned long)field_400);
                    iVar4 = local_98->GetX();
                    local_98._0_4_ = *local_40 - ((CoordType<UICoordSpecializer>*)(unsigned long)field_404);
                    iVar5 = local_98->GetX();
                    if (500 < arg4 - field_392) {
                        return;
                    }
                    if (iVar4 < -25) {
                        return;
                    }
                    if (25 < iVar4) {
                        return;
                    }
                    if (iVar5 < -25) {
                        return;
                    }
                    if (25 < iVar5) {
                        return;
                    }
                }
                pCVar7 = Client::Instance();
                pSVar8 = (ServerConnection*)pCVar7->field_19120.operator->();
                isaac = pSVar8->GetOutgoingEncryption();
                *local_98 = shared::ClientMessage::MakeClientMessage(7, *isaac);
                local_a8 = SuperShuffledPacketFactory(*((local_98 + 8)));
                this_02 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
                uVar6 = puVar1->ToBitPacked();
                this_02->p4<int>((unsigned long)uVar6);
                pCVar7 = Client::Instance();
                pSVar8 = (ServerConnection*)pCVar7->field_19120.operator->();
                pSVar8->SendClientMessage(*local_98);
                field_392 = 0;
            }
        } else {
            *(uint32_t*)&field_776 = CoordGridNull.m_z;
            *(uint64_t*)&field_768 = rs2lib::CoordGrid::CoordGridNull;
        }
    }

    // 0x100027210
    void Worldmap::UpdateTile(int arg1, int arg2, bool arg3) {
        uint32_t in_register_00000009;

        field_240 = arg1;
        field_244 = arg2;
        uint64_t uVar1 = core::SafeTime::CurrentTimeMillis();
        field_248 = (int)uVar1;
        field_252 = (int)((unsigned long)uVar1 >> 32);
        if ((((uint32_t)in_register_00000009 << 8) | (uint8_t)arg3) != 0) {
            ResetDrag();
        }
    }

    // 0x100027250
    void Worldmap::ResetDrag() {
        field_384 = -1;
        field_388 = -1;
    }

    // 0x100027270
    Worldmap* Worldmap::FindMapareaForSourceTile(int arg1, int arg2, int arg3) {
        bool cVar2;
        long lVar3;
        WorldmapAreaMetadata* pWVar4;
        uint32_t in_register_00000034;
        int in_R8D;
        shared_ptr<dash3d::GroundDecor>* this_01;
        Worldmap* this_02;

        hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>, eastl::equal_to<eastl::string>,
                  eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_00 =
            (hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                       eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>, eastl::equal_to<eastl::string>,
                       eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)((((uint64_t)in_register_00000034 << 32) |
                                                                         (uint32_t)arg1) +
                                                                        120);
        int local_34 = in_R8D;
        auto local_50 = this_00->begin();
        auto local_60 = this_00->end();
        bool cVar1 = local_50 != local_60;
        if (!cVar1) {
        LAB_10002735b:
            this_02 = this;
        } else {
            lVar3 = local_50.HeapBeginPtr();
            this_01 = (shared_ptr<dash3d::GroundDecor>*)(lVar3 + 32);
            pWVar4 = (WorldmapAreaMetadata*)(*this_01).operator->();
            cVar2 = pWVar4->ContainsSourceTile(arg2, arg3, local_34);
            if (!cVar2) {
                do {
                    ++local_50;
                    cVar1 = local_50 != local_60;
                    if (!cVar1)
                        goto LAB_10002735b;
                    lVar3 = local_50.HeapBeginPtr();
                    this_01 = (shared_ptr<dash3d::GroundDecor>*)(lVar3 + 32);
                    pWVar4 = (WorldmapAreaMetadata*)(*this_01).operator->();
                    cVar2 = pWVar4->ContainsSourceTile(arg2, arg3, local_34);
                } while (!cVar2);
            }
            this_02 = this;
            new (this) shared_ptr(this_01);
            if (cVar1) {
                return this_02;
            }
        }
        new (this_02) shared_ptr();
        return this_02;
    }

    // 0x1000273a0
    void Worldmap::UpdateMaparea(int arg1, int arg2, int arg3, bool arg4) {
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_48;

        FindMapareaForSourceTile(&local_48, (int)this, arg1, arg2);
        bool bVar1 = local_48 == nullptr;
        if (bVar1) {
            if (!arg4)
                goto LAB_100027445;
            local_48 = field_176;
        }
        bVar1 = local_48 != field_208;
        if (bVar1 || arg4) {
            field_208 = local_48;
            SwitchToMap(&local_48);
        } else if (!arg4)
            goto LAB_100027445;
        Reset(arg1, arg2, arg3);
    LAB_100027445:
    }

    // 0x1000274b0
    void Worldmap::Reset(int arg1, int arg2, int arg3) {
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        WorldmapAreaMetadata* pWVar6;
        WorldmapAreaMetadata* pWVar7;
        array<int, 2ul>* this_00;
        int* piVar8;
        Worldmap* this_02;
        float fVar9;
        ReturnValue local_40;
        ReturnValue local_38;

        uint8_t* objType = &field_192;
        if (!(*objType == nullptr)) {
            pWVar6 = (WorldmapAreaMetadata*)(*objType).operator->();
            local_38 = pWVar6->SourceToTargetTile(arg1, arg2, arg3);
            if (&local_38 == pWVar6) {
                pWVar6 = (WorldmapAreaMetadata*)(*objType).operator->();
                pWVar7 = (WorldmapAreaMetadata*)(*objType).operator->();
                iVar2 = pWVar7->GetOriginY();
                pWVar7 = (WorldmapAreaMetadata*)(*objType).operator->();
                iVar3 = pWVar7->GetOriginX();
                pWVar7 = (WorldmapAreaMetadata*)(*objType).operator->();
                iVar4 = pWVar7->GetOriginZ();
                local_40 = pWVar6->SourceToTargetTile(iVar2, iVar3, iVar4);
                local_38 = local_40;
            }
            this_00 = (array<int, 2ul>*)*local_38;
            piVar8 = (int*)(*this_00)[0];
            iVar2 = *piVar8;
            pWVar6 = (WorldmapAreaMetadata*)(*objType).operator->();
            iVar4 = pWVar6->GetMinMapX();
            piVar8 = (int*)(*this_00)[1];
            iVar3 = *piVar8;
            iVar5 = ((ChangeLocationRequest*)(*objType).operator->())->GetSeqDelay();
            UpdateTile(iVar2 + iVar4 * -64, iVar3 + iVar5 * -64, true);
            field_256 = -1;
            field_260 = -1;
            this_02 = (Worldmap*)(*objType).operator->();
            iVar2 = this_02->GetStickTime();
            fVar9 = (float)ZoomPercentToScale(this_02, iVar2);
            field_264 = fVar9;
            field_268 = fVar9;
            field_672.clear();
            local_40 = field_672.begin();
            *(ReturnValue*)field_704 = local_40;
            ((WorldmapRenderer*)field_224.operator->())->Reset();
        }
    }

    // 0x100027690
    void Worldmap::SwitchToMap(int arg1) {
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_28;

        GetMapareaById(&local_28, (int)this);
        if (local_28 != nullptr) {
            SwitchToMap(&local_28);
        }
    }

    // 0x1000276f0
    Worldmap* Worldmap::GetMapareaById(int arg1) {
        int iVar2;
        long lVar3;
        CoordMapSquare* pCVar4;
        int in_EDX;
        shared_ptr<dash3d::GroundDecor>* this_01;
        uint32_t in_register_00000034;
        Worldmap* this_02;

        hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>, eastl::equal_to<eastl::string>,
                  eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_00 =
            (hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                       eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>, eastl::equal_to<eastl::string>,
                       eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)((((uint64_t)in_register_00000034 << 32) |
                                                                         (uint32_t)arg1) +
                                                                        120);
        auto local_48 = this_00->begin();
        auto local_58 = this_00->end();
        bool cVar1 = local_48 != local_58;
        if (!cVar1) {
        LAB_1000277c4:
            this_02 = this;
        } else {
            lVar3 = local_48.HeapBeginPtr();
            this_01 = (shared_ptr<dash3d::GroundDecor>*)(lVar3 + 32);
            pCVar4 = (CoordMapSquare*)(*this_01).operator->();
            iVar2 = pCVar4->GetX();
            if (iVar2 != in_EDX) {
                do {
                    ++local_48;
                    cVar1 = local_48 != local_58;
                    if (!cVar1)
                        goto LAB_1000277c4;
                    lVar3 = local_48.HeapBeginPtr();
                    this_01 = (shared_ptr<dash3d::GroundDecor>*)(lVar3 + 32);
                    pCVar4 = (CoordMapSquare*)(*this_01).operator->();
                    iVar2 = pCVar4->GetX();
                } while (iVar2 != in_EDX);
            }
            this_02 = this;
            new (this) shared_ptr(this_01);
            if (cVar1) {
                return this_02;
            }
        }
        new (this_02) shared_ptr();
        return this_02;
    }

    // 0x1000277f0
    uint64_t Worldmap::GetCurrentMapareaId() {
        bool bVar1 = field_192 == nullptr;
        uint64_t uVar2 = 4294967295;
        if (!bVar1) {
            uVar2 = ((CoordMapSquare*)field_192.operator->())->GetX();
        }
        return uVar2;
    }

    // 0x100027830
    auto Worldmap::GetCurrentMaparea() {
        return auto(&field_192);
    }

    // 0x100027850
    void Worldmap::SwitchToMap(const shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>& worldmapAreaMetadata,
                               rs2lib::CoordGrid& coordGrid1, rs2lib::CoordGrid& coordGrid2, bool arg4) {
        WorldmapAreaMetadata* this_00;
        int iVar3;
        int iVar4;
        int iVar5;

        bool bVar1 = worldmapAreaMetadata == nullptr;
        if (bVar1) {
            return;
        }
        uint8_t* objType = &field_192;
        bVar1 = *objType == nullptr;
        if ((bVar1) || (bVar1 = *objType != worldmapAreaMetadata, bVar1)) {
            MapSwitch(worldmapAreaMetadata);
        }
        if (!arg4) {
            this_00 = (WorldmapAreaMetadata*)(*objType).operator->();
            iVar3 = coordGrid1.GetX();
            iVar4 = coordGrid1.GetZ();
            iVar5 = coordGrid1.GetPos();
            if (this_00->ContainsSourceTile(iVar3, iVar4, iVar5) != '\0') {
                coordGrid2 = coordGrid1;
            }
        }
        iVar3 = coordGrid2.GetX();
        iVar4 = coordGrid2.GetZ();
        iVar5 = coordGrid2.GetPos();
        Reset(iVar3, iVar4, iVar5);
    }

    // 0x100027940
    void Worldmap::MapSwitch(const shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>& worldmapAreaMetadata) {
        field_192 = worldmapAreaMetadata;
        WorldmapRenderer* this_00 = (WorldmapRenderer*)operator new(296);
        new (this_00) rs2lib::worldmap::WorldmapRenderer(field_104, field_48, field_16, field_24);
        field_224.reset(this_00);
        auto this_01 = field_232.operator->();
        auto this_02 = field_192.operator->();
        auto str = this_02->second();
        this_01->SwitchMapArea(*str);
    }

    // 0x1000279e0
    void Worldmap::RenderWorldmap(int arg1, int arg2, int arg3, int arg4, int arg5, graphics::Pix2D& pix2D) {
        unique_ptr<rs2lib::worldmap::WorldmapRenderer>* unique_ptr;
        hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* this_00;
        unsigned long uVar2;
        unsigned long uVar3;
        bool cVar4;
        int iVar6;
        WorldmapRenderer* pWVar7;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_02;
        eastl::string* pbVar8;
        Client* pCVar9;
        uint32_t in_register_0000003c;
        int iVar10;
        int iVar11;
        float fVar12;
        float fVar13;
        Pix2D* in_stack_00000008;
        eastl::string local_e0;
        array<int, _4ul> local_c0;
        ReturnValue local_b0;
        hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* local_90;
        uint32_t local_88[9];
        unsigned long local_58;
        unsigned long local_50;
        unsigned long local_48;
        Js5* local_38;

        char* local_60 = (char*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        in_stack_00000008->SaveClipping(local_c0);
        int local_40 = arg4 + arg2;
        int local_3c = arg3 + arg5;
        in_stack_00000008->SetClipping(arg2, arg3, local_40, local_3c);
        (**(void (**)(...))(in_stack_00000008->field_0 + 32))(in_stack_00000008, arg2, arg3, arg4,
                                                              (unsigned long)(unsigned int)arg5, 0);
        unsigned int uVar5 = ((WorldmapLoader*)(*((local_60 + 232))).operator->())->GetProgress();
        char* pcVar1 = local_60;
        if ((int)uVar5 < 100) {
            RenderProgressBar((int)local_60, arg2, arg3, arg4, arg5, (Pix2D*)(unsigned long)uVar5);
        } else {
            unique_ptr = (unique_ptr<rs2lib::worldmap::WorldmapRenderer>*)(local_60 + 224);
            local_58 = (unsigned long)(unsigned int)arg2;
            local_50 = (unsigned long)(unsigned int)arg3;
            local_48 = (unsigned long)(unsigned int)arg5;
            pWVar7 = (WorldmapRenderer*)(*unique_ptr).operator->();
            cVar4 = pWVar7->IsValid();
            if (!cVar4) {
                pWVar7 = (WorldmapRenderer*)(*unique_ptr).operator->();
                local_38 = *(Js5**)(pcVar1 + 8);
                this_02 =
                    (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*((pcVar1 + 192)))
                        .operator->();
                pbVar8 = (eastl::string*)this_02->second();
                local_e0 = eastl::string(*pbVar8);
                pCVar9 = Client::Instance();
                pWVar7->ExtractData(*local_38, &local_e0, pCVar9->field_8424);
                pWVar7 = (WorldmapRenderer*)(*unique_ptr).operator->();
                cVar4 = pWVar7->IsValid();
                if (!cVar4) {
                    return;
                }
            }
            this_00 =
                (hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>,
                           eastl::allocator,
                           eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                           eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                           eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)(pcVar1 + 320);
            cVar4 = this_00->empty();
            if (!cVar4) {
                iVar10 = *(int*)(pcVar1 + 380);
                *(int*)(pcVar1 + 380) = iVar10 + 1;
                if ((iVar10 + 1) % *(int*)(pcVar1 + 308) == 0) {
                    pcVar1[380] = '\0';
                    pcVar1[381] = '\0';
                    pcVar1[382] = '\0';
                    pcVar1[383] = '\0';
                    *(int*)(pcVar1 + 376) = *(int*)(pcVar1 + 376) + 1;
                }
                if ((*(int*)(pcVar1 + 304) <= *(int*)(pcVar1 + 376)) && (pcVar1[312] == '\0')) {
                    this_00->clear();
                }
            }
            local_90 = this_00;
            local_38._0_4_ = 1.0 / *(float*)(pcVar1 + 264);
            fVar12 = (float)ceil((float)arg4 * (1.0 / *(float*)(pcVar1 + 264)));
            fVar13 = (float)ceil((float)(int)local_48 * local_38._0_4_);
            pWVar7 = (WorldmapRenderer*)(*unique_ptr).operator->();
            local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)((int)fVar12));
            iVar10 = (int)fVar12 / 2;
            local_38 = (Js5*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)((int)fVar13));
            iVar11 = (int)fVar13 / 2;
            pWVar7->RenderMap(*(int*)(pcVar1 + 240) - iVar10, *(int*)(pcVar1 + 244) - iVar11,
                              *(int*)(pcVar1 + 240) + iVar10, *(int*)(pcVar1 + 244) + iVar11, (int)local_58,
                              (int)local_50, local_40, local_3c, *in_stack_00000008);
            if (pcVar1[640] == '\0') {
                iVar6 = (int)pix2D - *(int*)(pcVar1 + 644);
                if (100 < iVar6) {
                    *(int*)(pcVar1 + 644) = (int)pix2D;
                }
                pWVar7 = (WorldmapRenderer*)(*unique_ptr).operator->();
                pWVar7->RenderMapElements(
                    *(int*)(pcVar1 + 240) - iVar10, *(int*)(pcVar1 + 244) - iVar11, *(int*)(pcVar1 + 240) + iVar10,
                    *(int*)(pcVar1 + 244) + iVar11, (int)local_58, (int)local_50, local_40, local_3c, *((pcVar1 + 584)),
                    *local_90, *(int*)(pcVar1 + 380), *(int*)(pcVar1 + 308), 100 < iVar6, *in_stack_00000008);
            }
            pCVar9 = Client::Instance();
            cVar4 = pCVar9->IsPlayerAdmin();
            uVar3 = local_50;
            uVar2 = local_58;
            if ((cVar4) && (*pcVar1 != '\0')) {
                cVar4 = ((pcVar1 + 768))->IsSet();
                if (cVar4) {
                    new (local_88) eastl::string("Coord: ");
                    local_b0 = ((pcVar1 + 768))->ToString();
                    *local_88 += &local_b0;
                    pbVar8 = (eastl::string*)(*((pcVar1 + 32))).operator->();
                    jstring::PixfontGeneric::DrawString(*pbVar8, (int)local_88, in_stack_00000008->field_24 + 10,
                                                        in_stack_00000008->field_16 + 20, 16776960, *4294967295);
                }
            }
            *(int*)(pcVar1 + 288) = (int)local_48;
            *(float*)(pcVar1 + 292) = local_38._0_4_;
            local_88->XPlotBlender<int>((ResultType)uVar2);
            *(uint32_t*)(pcVar1 + 296) = local_88[0];
            local_88->XPlotBlender<int>((ResultType)uVar3);
            *(uint32_t*)(pcVar1 + 300) = local_88[0];
            in_stack_00000008->RestoreClipping(local_c0);
        }
    }

    // 0x100027e80
    void Worldmap::RenderProgressBar(int arg1, int arg2, int arg3, int arg4, int arg5, graphics::Pix2D& pix2D) {
        uint32_t in_register_0000003c;
        Pix2D* in_stack_00000008;

        int iVar2 = arg4 / 2;
        int iVar1 = arg5 / 2;
        (**(void (**)(...))(in_stack_00000008->field_0 + 32))();
        in_stack_00000008->DrawRect(iVar2 + arg2 - 152, arg3 + iVar1 - 38, 304, 34, 4294901760);
        (**(void (**)(...))(in_stack_00000008->field_0 + 32))(in_stack_00000008, iVar2 + arg2 - 150, iVar1 - 36 + arg3,
                                                              (int)pix2D * 3, 30, 4294901760);
        jstring::PixfontGeneric::CentreString(
            *((eastl::string*)(*((shared_ptr<jstring::PixfontGeneric>*)((((uint64_t)in_register_0000003c << 32) |
                                                                         (uint32_t)arg1) +
                                                                        32)))
                  .operator->()),
            23804720, iVar2 + arg2, arg3 + iVar1 - 18, -1, *4294967295);
    }

    // 0x100027f80
    void Worldmap::RenderHeatmap(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, graphics::Pix2D& pix2D) {}

    // 0x100027f90
    void Worldmap::RenderOverview(int arg1, int arg2, int arg3, int arg4, graphics::Pix2D& pix2D) {
        uint8_t* this_00;
        WorldmapRenderer* pWVar2;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_02;
        eastl::string* str;
        Client* pCVar3;
        eastl::string local_68;
        WorldmapRenderer* local_48;
        Js5* local_40;

        if (((WorldmapLoader*)field_232.operator->())->IsLoadComplete()) {
            this_00 = &field_224;
            pWVar2 = (WorldmapRenderer*)(*this_00).operator->();
            if (!(pWVar2->IsValid())) {
                local_48 = (WorldmapRenderer*)(*this_00).operator->();
                local_40 = field_8;
                this_02 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)
                              field_192.operator->();
                str = (eastl::string*)this_02->second();
                local_68 = eastl::string(*str);
                pCVar3 = Client::Instance();
                local_48->ExtractData(*local_40, &local_68, pCVar3->field_8424);
                pWVar2 = (WorldmapRenderer*)(*this_00).operator->();
                if (!(pWVar2->IsValid())) {
                    return;
                }
            }
            pWVar2 = (WorldmapRenderer*)(*this_00).operator->();
            pWVar2->RenderOverview(arg1, arg2, arg3, arg4, field_320, field_380, field_308, pix2D);
        }
    }

    // 0x1000280c0
    void Worldmap::SetZoomPercent(int arg1) {
        unsigned long long uVar1;

        float fVar2 = (float)ZoomPercentToScale(arg1);
        if (fVar2 != field_268) {
            field_268 = fVar2;
            uVar1 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
            *(unsigned long long*)&field_280 = uVar1;
            field_272 = field_264;
        }
    }

    // 0x100028110
    uint64_t Worldmap::ZoomPercentToScale(int arg1) {
        if (arg1 < 50) {
            if (arg1 == 25) {
                return 1065353216;
            }
            if (arg1 == 37) {
                return 1069547520;
            }
        } else {
            if (arg1 == 50) {
                return 1073741824;
            }
            if (arg1 == 75) {
                return 1077936128;
            }
            if (arg1 == 100) {
                return 1082130432;
            }
        }
        return 1090519040;
    }

    // 0x100028170
    uint64_t Worldmap::GetZoomPercent() {
        float fVar1 = field_268;
        uint64_t uVar2 = 25;
        if ((((fVar1 == 1.0) || (uVar2 = 37, fVar1 == 1.5)) || (uVar2 = 50, fVar1 == 2.0)) ||
            (uVar2 = 75, fVar1 == 3.0)) {
            return uVar2;
        }
        uVar2 = 200;
        if (fVar1 == 4.0) {
            uVar2 = 100;
        }
        return uVar2;
    }

    // 0x1000281d0
    auto Worldmap::GetCurrentMapAreaName() {
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_00;
        eastl::string* str;

        if (field_192 == nullptr) {
            auto result("");
        } else {
            this_00 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)field_192.operator->();
            str = (eastl::string*)this_00->second();
            new (&result) eastl::string(*str);
        }
        return result;
    }

    // 0x100028250
    void Worldmap::Load() {
        ((WorldmapLoader*)field_232.operator->())->Load();
    }

    // 0x100028340
    void Worldmap::JumpToTargetTile(int arg1, int arg2) {
        int iVar3;
        WorldmapAreaMetadata* pWVar4;

        uint8_t* objType = &field_192;
        if (!*objType == nullptr) {
            pWVar4 = (WorldmapAreaMetadata*)(*objType).operator->();
            if (pWVar4->ContainsTargetTile(arg1, arg2) != '\0') {
                pWVar4 = (WorldmapAreaMetadata*)(*objType).operator->();
                iVar3 = pWVar4->GetMinMapX();
                field_256 = arg1 + iVar3 * -64;
                iVar3 = ((ChangeLocationRequest*)(*objType).operator->())->GetSeqDelay();
                field_260 = arg2 + iVar3 * -64;
            }
        }
    }

    // 0x1000283d0
    void Worldmap::JumpToTargetTileInstant(int arg1, int arg2) {
        int iVar2;
        int iVar3;

        uint8_t* objType = &field_192;
        if (!*objType == nullptr) {
            iVar2 = ((WorldmapAreaMetadata*)(*objType).operator->())->GetMinMapX();
            iVar3 = ((ChangeLocationRequest*)(*objType).operator->())->GetSeqDelay();
            UpdateTile(arg1 + iVar2 * -64, arg2 + iVar3 * -64, true);
            field_256 = -1;
            field_260 = -1;
        }
    }

    // 0x100028450
    void Worldmap::JumpToSourceTile(int arg1, int arg2, int arg3) {
        int arg1_00;
        WorldmapAreaMetadata* this_00;
        array<int, 2ul>* this_01;
        int* piVar2;
        ReturnValue local_38;

        if (!(field_192 == nullptr)) {
            this_00 = (WorldmapAreaMetadata*)field_192.operator->();
            local_38 = this_00->SourceToTargetTile(arg1, arg2, arg3);
            if (&local_38 != this_00) {
                this_01 = (array<int, 2ul>*)*local_38;
                piVar2 = (int*)(*this_01)[0];
                arg1_00 = *piVar2;
                piVar2 = (int*)(*this_01)[1];
                JumpToTargetTile(arg1_00, *piVar2);
            }
        }
    }

    // 0x100028550
    void Worldmap::JumpToSourceTileInstant(int arg1, int arg2, int arg3) {
        int arg1_00;
        WorldmapAreaMetadata* this_00;
        array<int, 2ul>* this_01;
        int* piVar2;
        ReturnValue local_38;

        if (!(field_192 == nullptr)) {
            this_00 = (WorldmapAreaMetadata*)field_192.operator->();
            local_38 = this_00->SourceToTargetTile(arg1, arg2, arg3);
            if (&local_38 != this_00) {
                this_01 = (array<int, 2ul>*)*local_38;
                piVar2 = (int*)(*this_01)[0];
                arg1_00 = *piVar2;
                piVar2 = (int*)(*this_01)[1];
                JumpToTargetTileInstant(arg1_00, *piVar2);
            }
        }
    }

    // 0x100028610
    int Worldmap::GetAbsoluteTileX() const {
        bool bVar1 = field_192 == nullptr;
        int iVar3 = -1;
        if (!bVar1) {
            iVar3 = field_240;
            iVar3 = ((WorldmapAreaMetadata*)field_192.operator->())->GetMinMapX() * 64 + iVar3;
        }
        return iVar3;
    }

    // 0x100028660
    int Worldmap::GetAbsoluteTileZ() const {
        bool bVar1 = field_192 == nullptr;
        int iVar3 = -1;
        if (!bVar1) {
            iVar3 = field_244;
            iVar3 = ((ChangeLocationRequest*)field_192.operator->())->GetSeqDelay() * 64 + iVar3;
        }
        return iVar3;
    }

    // 0x1000286b0
    CoordGrid Worldmap::GetSourcePosition() const {
        int arg1;
        int arg2;
        uint64_t extraout_RDX;
        Worldmap* in_RSI;
        CoordGrid CVar2;

        if (in_RSI->field_192 == nullptr) {
            new (this) rs2lib::CoordGrid((CoordGrid*)&rs2lib::CoordGrid::CoordGridNull);
            CVar2._8_8_ = extraout_RDX;
        } else {
            arg1 = in_RSI->field_192.operator->();
            arg2 = GetAbsoluteTileX(in_RSI);
            GetAbsoluteTileZ(in_RSI);
            CVar2 = TargetToSourceTile(arg1, arg2);
            CVar2._8_8_ = CVar2._8_8_;
        }
        CVar2._8_8_ = CVar2._8_8_;
        CVar2._0_8_ = this;
        return CVar2;
    }

    // 0x100028720
    void Worldmap::SetFlashCount(int arg1) {
        if (0 < arg1) {
            field_304 = arg1;
        }
    }

    // 0x100028730
    void Worldmap::SetFlashCountDefault() {
        field_304 = 3;
    }

    // 0x100028740
    void Worldmap::SetFlashTics(int arg1) {
        if (0 < arg1) {
            field_308 = arg1;
        }
    }

    // 0x100028750
    void Worldmap::SetFlashTicsDefault() {
        field_308 = 50;
    }

    // 0x100028760
    void Worldmap::SetPerpetualFlash(bool arg1) {
        m_perpetualFlash = arg1;
    }

    // 0x100028770
    void Worldmap::FlashElement(int arg1) {
        int local_38[7];

        int local_1c = arg1;
        field_320.clear();
        eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>, eastl::hash<int>,
                         eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false,
                         true>::insert(*local_38);
        field_376 = 0;
        field_380 = 0;
    }

    // 0x1000287c0
    void Worldmap::FlashElementCategory(int arg1) {
        int arg1_00;
        int local_48[6];

        field_320.clear();
        field_376 = 0;
        field_380 = 0;
        if (0 < configdecoder::MapElementType::m_num) {
            arg1_00 = 0;
            do {
                if (configdecoder::MapElementType::List(arg1_00)->field_440 == arg1) {
                    eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, false, true>::insert(*local_48);
                }
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 < configdecoder::MapElementType::m_num);
        }
    }

    // 0x100028850
    void Worldmap::StopCurrentFlashes() {
        field_320.clear();
    }

    // 0x100028870
    void Worldmap::SetAllMapElementsVisibility(bool arg1) {
        field_640 = !arg1;
    }

    // 0x100028890
    void Worldmap::SetMapElementVisibility(int arg1, bool arg2) {
        uint64_t in_register_00000011;
        int local_30[7];

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>, eastl::hash<int>,
                             eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
                             false, true>::insert(*local_30);
        } else {
            field_416.erase(arg1);
        }
        RederiveExcludedMapElements();
    }

    // 0x1000289b0
    void Worldmap::RederiveExcludedMapElements() {
        uint8_t auVar1[16];

        uint8_t* this_00 = &field_584;
        this_00->clear();
        auVar1 = field_416.begin();
        field_416.end();
        this_00->insert<eastl::hashtable_iterator<int, true, false>>(auVar1._0_8_, auVar1._8_8_);
        auVar1 = field_528.begin();
        field_528.end();
        this_00->insert<eastl::hashtable_iterator<int, true, false>>(auVar1._0_8_, auVar1._8_8_);
    }

    // 0x100028a50
    void Worldmap::SetMapElementCategoryVisibility(int arg1, bool arg2) {
        uint8_t* this_00;
        MapElementType* pMVar1;
        uint64_t in_register_00000011;
        int arg1_00;
        int local_58[6];
        int local_38;

        Worldmap* local_40 = this;
        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>, eastl::hash<int>,
                             eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
                             false, true>::insert(*local_58);
        } else {
            field_472.erase((unsigned int)arg1);
        }
        if (0 < configdecoder::MapElementType::m_num) {
            this_00 = &local_40->field_528;
            arg1_00 = 0;
            do {
                pMVar1 = configdecoder::MapElementType::List(arg1_00);
                if (pMVar1->field_440 == (unsigned int)arg1) {
                    local_38 = pMVar1->m_iD;
                    if (arg2) {
                        this_00->erase(local_38);
                    } else {
                        eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>,
                                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                         eastl::prime_rehash_policy, false, false, true>::insert(*local_58);
                    }
                }
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 < configdecoder::MapElementType::m_num);
        }
        RederiveExcludedMapElements(local_40);
    }

    // 0x100028b20
    bool Worldmap::GetAllMapElementsVisibility() {
        return field_640 == false;
    }

    // 0x100028b30
    void Worldmap::IsMapElementVisible(int arg1) {
        eastl local_38;
        obj_iterator local_28;

        &local_38 = (eastl[16])field_416.find(arg1);
        local_28._0_16_ = field_416.end();
        local_38 == local_28;
    }

    // 0x100028c10
    void Worldmap::IsMapElementCategoryVisible(int arg1) {
        eastl local_38;
        obj_iterator local_28;

        &local_38 = (eastl[16])field_472.find(arg1);
        local_28._0_16_ = field_472.end();
        local_38 == local_28;
    }

    // 0x100028c60
    void Worldmap::BuildMinimenu(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        Value value;
        int iVar2;
        int arg6_00;
        int arg7;
        long* plVar3;
        MapElementType* pMVar4;
        eastl::string* pbVar6;
        Value* pVVar7;
        uint32_t in_register_0000003c;
        unsigned long arg1_00;
        bool bVar9;
        bool bVar10;
        float fVar11;
        float fVar12;
        MinimenuSubject local_d0;
        list<console::Line> local_80;
        ReturnValue local_68;
        array<minimenu::MinimenuOps::Value, 5ul>* local_60;
        ReturnValue local_58;
        Minimenu* local_50;
        eastl::string* local_48;
        vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true>>* local_40;
        shared_ptr<rs2lib::worldmap::MapElement>* local_38;

        long lVar8 = (((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        local_40 =
            (vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true>>*)(((uint64_t)local_40._4_4_
                                                                                                << 32) |
                                                                                               (uint32_t)arg2);
        bool cVar1 = ((WorldmapLoader*)(*((lVar8 + 232))).operator->())->IsLoadComplete();
        if (cVar1) {
            fVar12 = 1.0 / *(float*)(lVar8 + 264);
            local_48 = (eastl::string*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)fVar12);
            fVar12 = (float)ceil((float)arg4 * fVar12);
            local_38 = (shared_ptr<rs2lib::worldmap::MapElement>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)arg3);
            local_50 = (Minimenu*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)arg4);
            fVar11 = (float)ceil((float)arg5 * local_48._0_4_);
            iVar2 = (*((lVar8 + 224))).operator->();
            local_80.GetMapElementsAtScreenCoord(
                iVar2, ~((int)fVar12 / 2) + *(int*)(lVar8 + 240), ~((int)fVar11 / 2) + *(int*)(lVar8 + 244),
                (int)fVar12 / 2 + *(int*)(lVar8 + 240) + 1, (int)fVar11 / 2 + *(int*)(lVar8 + 244) + 1, (int)local_40,
                (int)local_38, (int)local_50, arg5, arg6);
            cVar1 = local_80.empty();
            if (!cVar1) {
                local_58 = local_80.begin();
                local_68 = local_80.end();
                cVar1 = local_58 != local_68;
                if (cVar1) {
                    local_60 = (array<minimenu::MinimenuOps::Value, 5ul>*)(lVar8 + 648);
                    do {
                        local_38 = (shared_ptr<rs2lib::worldmap::MapElement>*)*local_58;
                        plVar3 = (long*)(*local_38).operator->();
                        iVar2 = (**(void (**)(...))(*plVar3 + 8))(plVar3);
                        pMVar4 = configdecoder::MapElementType::List(iVar2);
                        local_40 =
                            (vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true>>*)&pMVar4
                                ->field_72;
                        pbVar6 = (eastl::string*)&pMVar4->field_272;
                        arg1_00 = 4;
                        bVar9 = false;
                        local_48 = pbVar6;
                        do {
                            cVar1 = ((basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul,
                                                                                       true>>*)(*local_40)[arg1_00])
                                        ->empty();
                            if (!cVar1) {
                                local_d0 = minimenu::MinimenuSubject::CreateSubject(*pbVar6, 8, -1, 0, -1);
                                local_50 = Client::Instance()->field_52344;
                                pbVar6 = (eastl::string*)(*local_40)[arg1_00];
                                pVVar7 = (Value*)(*local_60)[arg1_00];
                                value = *pVVar7;
                                plVar3 = (long*)(*local_38).operator->();
                                iVar2 = (**(void (**)(...))(*plVar3 + 8))(plVar3);
                                lVar8 = (*local_38).operator->();
                                arg6_00 = ((lVar8 + 20))->ToBitPacked();
                                lVar8 = (*local_38).operator->();
                                arg7 = ((lVar8 + 8))->ToBitPacked();
                                local_50->AddEntry(*pbVar6, local_d0, value, false, iVar2, arg6_00, arg7, 0);
                                bVar9 = true;
                                pbVar6 = local_48;
                            }
                            bVar10 = arg1_00 != 0;
                            arg1_00 = arg1_00 - 1;
                        } while (bVar10);
                        if (bVar9)
                            break;
                        ++local_58;
                        cVar1 = local_58 != local_68;
                    } while (cVar1);
                }
            }
        }
    }

    // 0x100028fc0
    CoordGrid Worldmap::FindNearestMapElement(int arg1, rs2lib::CoordGrid& coordGrid) {
        uint8_t bVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        WorldmapRenderer* pWVar8;
        WorldmapAreaMetadata* this_01;
        hashtable<int, eastl::pair<int const, eastl::vector<rseven::Mesh>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, eastl::vector<rseven::Mesh>>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* this_02;
        shared_ptr<rs2lib::worldmap::MapElement>* this_03;
        CommandLine* in_RCX;
        uint64_t extraout_RDX;
        uint64_t uVar10;
        uint64_t extraout_RDX_00;
        uint32_t in_register_00000034;
        CoordGrid CVar11;
        ReturnValue local_78;
        ReturnValue local_68;
        CommandLine* local_60;
        ReturnValue local_58;
        ReturnValue local_50;
        int local_38;
        uint8_t local_31;

        long lVar9 = (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        if (((WorldmapLoader*)(*((lVar9 + 232))).operator->())->IsLoadComplete()) {
            pWVar8 = (WorldmapRenderer*)(*((lVar9 + 224))).operator->();
            if (pWVar8->IsValid()) {
                this_01 = (WorldmapAreaMetadata*)(*((lVar9 + 192))).operator->();
                iVar4 = in_RCX->GetZ();
                iVar5 = in_RCX->GetPos();
                if (this_01->ContainsTargetTile(iVar4, iVar5)) {
                    pWVar8 = (WorldmapRenderer*)(*((lVar9 + 224))).operator->();
                    this_02 = (hashtable<int, eastl::pair<int const, eastl::vector<rseven::Mesh>>, eastl::allocator,
                                         eastl::use_first<eastl::pair<int const, eastl::vector<rseven::Mesh>>>,
                                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                                  pWVar8->GetMapElements();
                    local_78 = this_02->find((int)coordGrid);
                    local_50 = this_02->end();
                    if (!(local_78 == local_50)) {
                        lVar9 = local_78.HeapBeginPtr();
                        if (!(((lVar9 + 8))->empty())) {
                            local_60 = in_RCX;
                            lVar9 = local_78.HeapBeginPtr();
                            local_50 = shared_ptr();
                            local_58 = ((lVar9 + 8))->begin();
                            local_68 = ((lVar9 + 8))->end();
                            bVar2 = local_58 != local_68;
                            if (bVar2 != 0) {
                                local_38 = -1;
                                do {
                                    local_31 = bVar2;
                                    this_03 = (shared_ptr<rs2lib::worldmap::MapElement>*)*local_58;
                                    lVar9 = (*this_03).operator->();
                                    iVar4 = ((lVar9 + 8))->GetZ();
                                    iVar5 = local_60->GetZ();
                                    lVar9 = (*this_03).operator->();
                                    iVar6 = ((lVar9 + 8))->GetPos();
                                    iVar7 = local_60->GetPos();
                                    iVar4 = (iVar6 - iVar7) * (iVar6 - iVar7) + (iVar4 - iVar5) * (iVar4 - iVar5);
                                    if (iVar4 == 0) {
                                        lVar9 = (*this_03).operator->();
                                        new (this) rs2lib::CoordGrid((lVar9 + 8));
                                    } else if ((iVar4 < local_38) || (bVar3 = local_50 == nullptr, bVar3)) {
                                        local_50 = *this_03;
                                        local_38 = iVar4;
                                    }
                                    if (iVar4 == 0) {
                                        if ((local_31 & 1) != 0)
                                            goto LAB_100029213;
                                        break;
                                    }
                                    ++local_58;
                                    bVar2 = local_58 != local_68;
                                } while (bVar2 != 0);
                            }
                            lVar9 = local_50.operator->();
                            new (this) rs2lib::CoordGrid((lVar9 + 8));
                        LAB_100029213:
                            uVar10 = extraout_RDX_00;
                            goto LAB_1000290b5;
                        }
                    }
                }
            }
        }
        new (this) rs2lib::CoordGrid((CoordGrid*)&rs2lib::CoordGrid::CoordGridNull);
        uVar10 = extraout_RDX;
    LAB_1000290b5:
        CVar11._8_8_ = uVar10;
        CVar11._0_8_ = this;
        return CVar11;
    }

    // 0x1000292e0
    void Worldmap::OpMapElement(int arg1, int arg2, rs2lib::CoordGrid& coordGrid1, rs2lib::CoordGrid& coordGrid2) {
        HookReq local_110;
        MapElementPosition local_48(arg2, coordGrid1, coordGrid2);
        local_110.set_max_size(1, 3);
        HookArg local_90(&local_48);
        HookArg* this_00 = &local_110[0];
        *this_00 = local_90;
        if (arg1 - 1008U < 5) {
            local_110.field_120._4_4_ = arg1 - 998;
        }
        ScriptRunner::ExecuteScript(local_110, 500000);
    }

    // 0x1000293e0
    uint64_t Worldmap::IterateMapElementsStart() {
        uint8_t* this_00;
        WorldmapRenderer* pWVar2;
        hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>, eastl::equal_to<eastl::string>,
                  eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_02;
        long lVar3;
        ReturnValue local_80;
        ReturnValue local_70;
        ReturnValue local_68;
        ReturnValue local_60;
        list<shared_ptr<rs2lib::worldmap::MapElement>> local_58;
        ReturnValue local_50;
        ListIterator<shared_ptr<rs2lib::worldmap::MapElement>, shared_ptr<rs2lib::worldmap::MapElement>*,
                     shared_ptr<rs2lib::worldmap::MapElement>&>* local_40;

        bool cVar1 = ((WorldmapLoader*)field_232.operator->())->IsLoadComplete();
        if (cVar1) {
            pWVar2 = (WorldmapRenderer*)field_224.operator->();
            cVar1 = pWVar2->IsValid();
            if (cVar1) {
                pWVar2 = (WorldmapRenderer*)field_224.operator->();
                this_02 =
                    (hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                               eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                               eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                               eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                        pWVar2->GetMapElements();
                this_00 = &field_672;
                this_00->clear();
                local_50 = this_02->begin();
                local_80 = this_02->end();
                cVar1 = local_50 != local_80;
                if (cVar1) {
                    do {
                        lVar3 = local_50.HeapBeginPtr();
                        local_70 = this_00->end();
                        new (&local_40) eastl::ListIterator(&local_70);
                        local_68 = ((lVar3 + 8))->begin();
                        local_60 = ((lVar3 + 8))->end();
                        eastl::list<shared_ptr<rs2lib::worldmap::MapElement>>::insert<eastl::ListIterator<
                            shared_ptr<rs2lib::worldmap::MapElement>, shared_ptr<rs2lib::worldmap::MapElement>*,
                            shared_ptr<rs2lib::worldmap::MapElement>&>>(
                            &local_58,
                            (ListIterator<shared_ptr<rs2lib::worldmap::MapElement>,
                                          shared_ptr<rs2lib::worldmap::MapElement> const*,
                                          shared_ptr<rs2lib::worldmap::MapElement> const&>*)this_00,
                            local_40,
                            (ListIterator<shared_ptr<rs2lib::worldmap::MapElement>,
                                          shared_ptr<rs2lib::worldmap::MapElement>*,
                                          shared_ptr<rs2lib::worldmap::MapElement>&>*)&local_68);
                        ++local_50;
                        cVar1 = local_50 != local_80;
                    } while (cVar1);
                }
                local_50 = this_00->begin();
                *(ReturnValue*)field_704 = local_50[0];
                return IterateMapElementsNext();
            }
        }
        return 0;
    }

    // 0x100029600
    uint64_t Worldmap::IterateMapElementsNext() {
        int iVar2;
        shared_ptr<rs2lib::worldmap::MapElement>* this_01;
        long* plVar3;
        uint64_t local_38;

        uint8_t* this_00 = field_704;
        auto local_40 = field_672.end();
        bool cVar1 = *this_00 == local_40;
        if (!cVar1) {
            do {
                local_40 = field_672.end();
                cVar1 = *this_00 != local_40;
                if (!cVar1)
                    goto LAB_100029640;
                this_01 = (shared_ptr<rs2lib::worldmap::MapElement>*)**this_00;
                local_40++;
                plVar3 = (long*)(*this_01).operator->();
                iVar2 = (**(void (**)(...))(*plVar3 + 8))(plVar3);
            } while (iVar2 == -1);
            local_38 = this_01->end();
        } else {
        LAB_100029640:
            local_38 = 0;
        }
        return local_38;
    }

    // 0x100029800
    bool Worldmap::NeedNewHeatmapSprite(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        int iVar1;
        long lVar3;
        int* piVar4;
        Client* pCVar5;
        uint32_t in_register_0000003c;
        int in_stack_00000008;

        long lVar6 = (((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        shared_ptr<configdecoder::ObjType>* objType = (shared_ptr<configdecoder::ObjType>*)(lVar6 + 784);
        if ((((*objType == nullptr) || (lVar3 = (*objType).operator->(), *(int*)(lVar3 + 24) != arg2)) ||
             (lVar3 = (*objType).operator->(), *(int*)(lVar3 + 28) != arg3)) ||
            (((piVar4 = (int*)(*((lVar6 + 224))).operator->(),
               *piVar4 != *(int*)(lVar6 + 800) ||
                   (iVar1 = *(int*)(lVar6 + 804), pCVar5 = Client::Instance(), iVar1 != pCVar5->field_52928)) ||
              (0 < arg4)))) {
            return true;
        }
        if (arg5 < 1) {
            return arg5 + arg3 < in_stack_00000008 || arg4 + arg2 < arg6;
        }
        return true;
    }

    // 0x100165a30: Worldmap::GetTileHeight() const has the same machine code as rs2lib::PlayerModel::GetPronoun() const

} // namespace jag::oldscape::worldmap

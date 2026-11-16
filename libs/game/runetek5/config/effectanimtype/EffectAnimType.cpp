// libs/game/runetek5/config/effectanimtype/EffectAnimType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "EffectAnimType.h"

namespace jag::game {
    // 0x100009e70: EffectAnimType::PostDecode() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100061e30: EffectAnimType::GetSeqID() const has the same machine code as render::RenderStats::GetTriangleCount() const

    // 0x10054f4a0
    uint8_t* EffectAnimType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t bVar2;
        unsigned short uVar3;
        uint16_t uVar4;
        uint32_t uVar5;
        uint16_t* puVar7;
        unsigned long uVar8;
        unsigned long uVar9;

        switch (arg2) {
        case 1:
            uVar5 = arg1.gSmart2or4s();
            field_56 = uVar5;
            break;
        case 2:
            uVar5 = arg1.gSmart2or4s();
            m_seqID = uVar5;
            break;
        default:
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "effectanimtype/EffectAnimType.cpp",
                      109, "Error: unrecognised effect anim config code: %u", arg2);
            break;
        case 4:
            uVar3 = arg1.g2();
            field_160 = (float)uVar3 * 0.0078125f;
            break;
        case 5:
            uVar3 = arg1.g2();
            field_164 = (float)uVar3 * 0.0078125f;
            break;
        case 6:
            uVar3 = arg1.g2();
            m_rotation = (float)math::Deg2Rad((float)uVar3);
            break;
        case 7:
            field_186 = arg1.g1s() + 64;
            break;
        case 8:
            arg1.g1();
            break;
        case 9:
            field_176 = 3;
            field_180 = 8224;
            break;
        case 10:
            m_obeyExtraSeqSettings = 1;
            break;
        case 15:
            field_176 = 3;
            uVar3 = arg1.g2();
            field_180 = (unsigned int)uVar3;
            break;
        case 16:
            field_176 = 3;
            field_180 = arg1.g4();
            break;
        case 40:
            bVar2 = arg1.g1();
            uVar9 = (unsigned long)bVar2;
            field_64.set_max_size(uVar9, 0);
            field_88.set_max_size(uVar9, 0);
            if (bVar2 != 0) {
                uVar8 = 0;
                do {
                    uVar4 = arg1.g2();
                    puVar7 = &field_64[uVar8];
                    *puVar7 = uVar4;
                    uVar4 = arg1.g2();
                    puVar7 = &field_88[uVar8];
                    *puVar7 = uVar4;
                    uVar8 = uVar8 + 1;
                } while (uVar9 != uVar8);
            }
            break;
        case 41:
            bVar2 = arg1.g1();
            uVar9 = (unsigned long)bVar2;
            field_112.set_max_size(uVar9, 0);
            field_136.set_max_size(uVar9, 0);
            if (bVar2 != 0) {
                uVar8 = 0;
                do {
                    uVar4 = arg1.g2();
                    puVar7 = &field_112[uVar8];
                    *puVar7 = uVar4;
                    uVar4 = arg1.g2();
                    puVar7 = &field_136[uVar8];
                    *puVar7 = uVar4;
                    uVar8 = uVar8 + 1;
                } while (uVar9 != uVar8);
            }
            break;
        case 44:
        case 45:
            arg1.Skip(2);
            break;
        case 46:
            field_184 = 0;
        }
        return DataStatus::READY;
    }

    // 0x10054f810
    shared_ptr* EffectAnimType::GetModel(const DataStatus*& arg1, graphics::RT7Core* rt7Core) {
        Js5ResourceProvider* this_02;
        DataStatus* pDVar2;
        MaterialManager* materialManager;
        Model* pMVar3;
        PacketView local_b0;
        PacketView local_88;
        TextureManager* local_60;
        ColourHSL local_58;
        shared_ptr<graphics::Model> local_48;

        ScopedGPUMemoryZone local_38("EffectModel");
        LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>* this_00 =
            (LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>*)field_24->GetPixelBuffer();
        local_88.field_0 = (long)field_32;
        auto this_01 = this_00->Find(local_88);
        if (!(shared_ptr::operator_cast_to_bool(this_01))) {
            if (!(graphics::Model::IsReadyToConstruct(rt7Core))) {
                this_01 = (shared_ptr*)&graphics::Model::NullModel;
            } else {
                local_88 = PacketView();
                this_02 = (Js5ResourceProvider*)field_24->GetOutputType();
                pDVar2 = (DataStatus*)this_02->GetFile(local_88, *(Js5Archive::JS5_MODELSRT7), field_56, 0,
                                                       (Priority*)Priority::HIGH, true, false, false);
                arg1 = pDVar2;
                if (pDVar2 == (DataStatus*)DataStatus::READY) {
                    materialManager = rt7Core->GetMaterialManager();
                    local_60 = rt7Core->GetTextureManager();
                    MakeSharedPool<graphics::Model, 3072>::MakeShared<>();
                    pMVar3 = (Model*)local_48.operator->();
                    pMVar3->SetSourceModelIDs(field_56);
                    pMVar3 = (Model*)local_48.operator->();
                    local_b0 = PacketView(&local_88);
                    pMVar3->LoadDataFromModelRawRT7(&local_b0);
                    pMVar3 = (Model*)local_48.operator->();
                    pMVar3->StartTransform();
                    if ((field_160 != 1.0) || (field_164 != 1.0)) {
                        pMVar3 = (Model*)local_48.operator->();
                        local_58 = math::ColourHSL(field_160, field_164, field_160);
                        pMVar3->Scale(local_58);
                    }
                    if (!(field_64.empty())) {
                        pMVar3 = (Model*)local_48.operator->();
                        pMVar3->Recolour(field_64, field_88);
                    }
                    if (!(field_112.empty())) {
                        pMVar3 = (Model*)local_48.operator->();
                        pMVar3->Rematerial(field_112, field_136);
                    }
                    pMVar3 = (Model*)local_48.operator->();
                    pMVar3->AmbientAdjust(field_186);
                    pMVar3 = (Model*)local_48.operator->();
                    pMVar3->SetupInitialMaterials(*materialManager);
                    pMVar3 = (Model*)local_48.operator->();
                    pMVar3->CombineBatches(*local_60);
                    pMVar3 = (Model*)local_48.operator->();
                    pMVar3->BakeMaterialInfoAndTextureMetaAndHSLColors(*rt7Core, true);
                    pMVar3 = (Model*)local_48.operator->();
                    pMVar3->EndTransform(false);
                    pMVar3 = (Model*)local_48.operator->();
                    pMVar3->UpdateAABB();
                    pMVar3 = (Model*)local_48.operator->();
                    pMVar3->CalculateLabelCentres();
                    pMVar3 = (Model*)local_48.operator->();
                    pMVar3->ConstructFinishAndUpload();
                    local_58._0_8_ = (int64_t)field_32;
                    this_01 = (shared_ptr*)this_00->Put(local_48, 1, local_58);
                } else {
                    this_01 = (shared_ptr*)&graphics::Model::NullModel;
                }
            }
        } else {
            arg1 = (DataStatus*)DataStatus::READY;
        }
        return this_01;
    }

} // namespace jag::game

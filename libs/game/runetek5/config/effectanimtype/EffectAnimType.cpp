// libs/game/runetek5/config/effectanimtype/EffectAnimType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "EffectAnimType.h"

namespace jag::game {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    EffectAnimType::PostDecode();

    // 0x100061e30: the linker folded this into render::RenderStats::GetTriangleCount() const, which has identical code
    EffectAnimType::GetSeqID() const;

    // 0x10054f4a0, 880 bytes, placed by class name and debug map
    // EffectAnimType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* EffectAnimType::DecodeType(PacketT* param_1, uint param_2) {
        char cVar1;
        byte bVar2;
        ushort uVar3;
        undefined2 uVar4;
        uint uVar5;
        undefined8 uVar6;
        undefined2* puVar7;
        ulong uVar8;
        ulong uVar9;
        undefined4 uVar10;

        switch (param_2) {
        case 1:
            uVar10 = param_1->gSmart2or4s();
            field_56 = uVar10;
            break;
        case 2:
            uVar10 = param_1->gSmart2or4s();
            field_60 = uVar10;
            break;
        default:
            uVar6 = logger::default_logger();
            logger::Logger::Log(uVar6, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/effectanimtype/EffectAnimType.cpp",
                                109, "Error: unrecognised effect anim config code: %u", param_2);
            break;
        case 4:
            uVar3 = param_1->g2();
            field_160 = (float)uVar3 * 0.0078125;
            break;
        case 5:
            uVar3 = param_1->g2();
            field_164 = (float)uVar3 * 0.0078125;
            break;
        case 6:
            uVar3 = param_1->g2();
            uVar10 = math::Deg2Rad((float)uVar3);
            field_168 = uVar10;
            break;
        case 7:
            cVar1 = param_1->g1s();
            field_186 = cVar1 + 64;
            break;
        case 8:
            param_1->g1();
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
            uVar3 = param_1->g2();
            field_180 = (uint)uVar3;
            break;
        case 16:
            field_176 = 3;
            uVar5 = param_1->g4();
            field_180 = uVar5;
            break;
        case 40:
            bVar2 = param_1->g1();
            uVar9 = (ulong)bVar2;
            (&field_64, uVar9, 0)->set_max_size();
            (&field_88, uVar9, 0)->set_max_size();
            if (bVar2 != 0) {
                uVar8 = 0;
                do {
                    uVar4 = param_1->g2();
                    puVar7 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                        (Array<unsigned short, eastl::allocator>*)&field_64, uVar8);
                    *puVar7 = uVar4;
                    uVar4 = param_1->g2();
                    puVar7 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                        (Array<unsigned short, eastl::allocator>*)&field_88, uVar8);
                    *puVar7 = uVar4;
                    uVar8 = uVar8 + 1;
                } while (uVar9 != uVar8);
            }
            break;
        case 41:
            bVar2 = param_1->g1();
            uVar9 = (ulong)bVar2;
            (&field_112, uVar9, 0)->set_max_size();
            (&field_136, uVar9, 0)->set_max_size();
            if (bVar2 != 0) {
                uVar8 = 0;
                do {
                    uVar4 = param_1->g2();
                    puVar7 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                        (Array<unsigned short, eastl::allocator>*)&field_112, uVar8);
                    *puVar7 = uVar4;
                    uVar4 = param_1->g2();
                    puVar7 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                        (Array<unsigned short, eastl::allocator>*)&field_136, uVar8);
                    *puVar7 = uVar4;
                    uVar8 = uVar8 + 1;
                } while (uVar9 != uVar8);
            }
            break;
        case 44:
        case 45:
            param_1->Skip(2);
            break;
        case 46:
            field_184 = 0;
        }
        return DataStatus::READY;
    }

    // 0x10054f810, 880 bytes, placed by class name and debug map
    // EffectAnimType::GetModel(DataStatus const*&, graphics::RT7Core*)
    shared_ptr* EffectAnimType::GetModel(DataStatus** param_1, RT7Core* param_2) {
        PacketView PVar1;
        char cVar3;
        LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>* this_00;
        shared_ptr* this_01;
        Js5ResourceProvider* this_02;
        DataStatus* pDVar4;
        MaterialManager* pMVar5;
        Model* pMVar6;
        PacketView* this_03;
        undefined4 in_stack_ffffffffffffff3c;
        undefined4 in_stack_ffffffffffffff44;
        undefined1 in_stack_ffffffffffffff4c[12];
        undefined1 auStack_90[48];
        TextureManager* local_60;
        ColourHSL local_58;
        shared_ptr local_48;
        ScopedGPUMemoryZone local_38[8];

        render::ScopedGPUMemoryZone::ScopedGPUMemoryZone(local_38, "EffectModel");
        this_00 = (LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>*)field_24->GetPixelBuffer();
        auStack_90._8_8_ = SEXT48(field_32);
        this_01 = (shared_ptr*)LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>::Find(
            (ulonglong*)this_00);
        if (shared_ptr::operator_cast_to_bool(this_01)) {
            *param_1 = (DataStatus*)DataStatus::READY;
        } else {
            cVar3 = graphics::Model::IsReadyToConstruct(param_2);
            if (cVar3 == '\0') {
                this_01 = (shared_ptr*)&graphics::Model::NullModel;
            } else {
                new ((auStack_90 + 8)) PacketView();
                this_02 = (Js5ResourceProvider*)field_24->GetOutputType();
                this_03 = (PacketView*)(auStack_90 + 8);
                pDVar4 = (DataStatus*)this_02->GetFile(this_03, Js5Archive::JS5_MODELSRT7, field_56, 0,
                                                       (Priority*)Priority::HIGH, true, false, false);
                *param_1 = pDVar4;
                if (pDVar4 == (DataStatus*)DataStatus::READY) {
                    pMVar5 = (MaterialManager*)param_2->GetMaterialManager();
                    local_60 = (TextureManager*)param_2->GetTextureManager();
                    MakeSharedPool<graphics::Model, 3072>::MakeShared<>(
                        &local_48, (MakeSharedPool<graphics::Model, 3072>*)this_03);
                    pMVar6 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_48);
                    pMVar6->SetSourceModelIDs(field_56);
                    pMVar6 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_48);
                    new ((auStack_90 + -32)) PacketView((PacketView*)(auStack_90 + 8));
                    PVar1.field_0._4_4_ = in_stack_ffffffffffffff3c;
                    PVar1.field_0._0_4_ = 1;
                    PVar1._8_4_ = 0;
                    PVar1._12_4_ = in_stack_ffffffffffffff44;
                    PVar1.field_16._0_4_ = 0;
                    PVar1._20_12_ = in_stack_ffffffffffffff4c;
                    pMVar6->LoadDataFromModelRawRT7(PVar1);
                    ((auStack_90 + -32))->~PacketView();
                    pMVar6 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_48);
                    pMVar6->StartTransform();
                    if ((field_160 != 1.0) || (field_164 != 1.0)) {
                        pMVar6 =
                            (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_48);
                        new (&local_58) math::ColourHSL(field_160, field_164, field_160);
                        pMVar6->Scale((Vector3T*)&local_58);
                    }
                    cVar3 = (&field_64)->empty();
                    if (cVar3 == '\0') {
                        pMVar6 =
                            (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_48);
                        pMVar6->Recolour((Array*)&field_64, (Array*)&field_88);
                    }
                    cVar3 = (&field_112)->empty();
                    if (cVar3 == '\0') {
                        pMVar6 =
                            (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_48);
                        pMVar6->Rematerial((Array*)&field_112, (Array*)&field_136);
                    }
                    pMVar6 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_48);
                    pMVar6->AmbientAdjust(field_186);
                    pMVar6 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_48);
                    pMVar6->SetupInitialMaterials(pMVar5);
                    pMVar6 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_48);
                    pMVar6->CombineBatches(local_60);
                    pMVar6 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_48);
                    pMVar6->BakeMaterialInfoAndTextureMetaAndHSLColors(param_2, true);
                    pMVar6 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_48);
                    pMVar6->EndTransform(false);
                    pMVar6 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_48);
                    pMVar6->UpdateAABB();
                    pMVar6 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_48);
                    pMVar6->CalculateLabelCentres();
                    pMVar6 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_48);
                    pMVar6->ConstructFinishAndUpload();
                    local_58._0_8_ = SEXT48(field_32);
                    this_01 = (shared_ptr*)this_00->Put(&local_48, 1, (ulonglong*)&local_58);
                    local_48.~shared_ptr();
                } else {
                    this_01 = (shared_ptr*)&graphics::Model::NullModel;
                }
                ((auStack_90 + 8))->~PacketView();
            }
        }
        local_38->~ScopedGPUMemoryZone();
        return this_01;
    }

} // namespace jag::game

// libs/oldscape/osrendercore/rseven/OSMaterialRawProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.osrendercore

#include "OSMaterialRawProvider.h"
#include "libs/oldscape/osrendercore/OSRenderCore.h"

namespace jag::oldscape::rseven {
    // 0x1001bcba0
    void OSRenderCore_MaterialRawProvider::LoadMaterials(jagex3::Js5& js5) {
        uint8_t bVar2;
        short arg1;
        int iVar3;
        uint8_t* puVar4;
        uint64_t uVar5;
        PacketT<Array<unsigned char>>* pPVar6;
        PacketReaderMixin<PacketT<Array<unsigned char>>>* this_00;
        ID id;
        uint8_t* this_01;
        unsigned long arg1_00;
        unsigned short uVar7;
        unsigned int uVar8;
        bool bVar9;
        shared_ptr<RSevenDebugPresetProvider> local_68;
        unsigned long local_58;
        atomic<bool>* local_48;
        unsigned short local_3a;
        unsigned int local_38;
        char local_33;
        uint8_t local_32;
        char local_31;

        if (!((&field_24)->operator_cast_to_bool())) {
            puVar4 = (uint8_t*)js5.GetIndexIsLoaded();
            if (puVar4 == DataStatus::READY) {
                local_48 = (atomic<bool>*)&field_24;
                iVar3 = js5.GetFileIdLimit(0);
                uVar8 = iVar3 + 1;
                this_01 = &field_32;
                uVar5 = this_01->resize((long)(int)uVar8);
                if (iVar3 < 0) {
                    local_38 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)uVar5 >> 8)) << 8) | (uint8_t)1);
                } else {
                    local_58 = (unsigned long)uVar8;
                    local_38 = (unsigned int)(((uint64_t)((uint64_t)(uint32_t)(uVar8 >> 8)) << 8) | (uint8_t)1);
                    arg1_00 = 0;
                    do {
                        pPVar6 = (PacketT<Array<unsigned char>>*)(*this_01)[arg1_00];
                        if (!(pPVar6->IsValid())) {
                            local_68 = shared_ptr();
                            puVar4 = (uint8_t*)js5.GetFile(local_68, 0, (int)arg1_00, nullptr);
                            if (puVar4 == DataStatus::NOTLOADED) {
                                local_38 = 0;
                            } else if (puVar4 == DataStatus::READY) {
                                this_00 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)*local_68;
                                this_00->g2();
                                local_31 = this_00->g1();
                                bVar2 = this_00->g1();
                                local_3a = this_00->g2();
                                this_00->g4();
                                if (1 < bVar2) {
                                    iVar3 = bVar2 - 1;
                                    do {
                                        this_00->g8();
                                        iVar3 = iVar3 - 1;
                                    } while (iVar3 != 0);
                                }
                                local_33 = this_00->g1();
                                local_32 = this_00->g1();
                                pPVar6 = (PacketT<Array<unsigned char>>*)(*this_01)[arg1_00];
                                bVar9 = local_31 == '\x01';
                                pPVar6->Reserve(24 - (unsigned long)bVar9);
                                pPVar6 = (PacketT<Array<unsigned char>>*)(*this_01)[arg1_00];
                                pPVar6->p1<unsigned long>(0);
                                pPVar6 = (PacketT<Array<unsigned char>>*)(*this_01)[arg1_00];
                                pPVar6->p1<unsigned long>(1);
                                pPVar6 = (PacketT<Array<unsigned char>>*)(*this_01)[arg1_00];
                                pPVar6->p1<unsigned long>(0);
                                pPVar6 = (PacketT<Array<unsigned char>>*)(*this_01)[arg1_00];
                                uVar7 = local_3a;
                                pPVar6->p4<int>((unsigned int)(local_3a != 65535));
                                if (uVar7 != 65535) {
                                    pPVar6 = (PacketT<Array<unsigned char>>*)(*this_01)[arg1_00];
                                    pPVar6->p4<int>((unsigned int)uVar7);
                                }
                                pPVar6 = (PacketT<Array<unsigned char>>*)(*this_01)[arg1_00];
                                pPVar6->p1<unsigned long>(*(ID*)(graphicutils::TextureWrapMode::REPEAT + 8) * 8 |
                                                          *(ID*)(graphicutils::TextureWrapMode::REPEAT + 8));
                                pPVar6 = (PacketT<Array<unsigned char>>*)(*this_01)[arg1_00];
                                pPVar6->p4<int>(12);
                                pPVar6 = (PacketT<Array<unsigned char>>*)(*this_01)[arg1_00];
                                pPVar6->p1<unsigned long>(0);
                                pPVar6 = (PacketT<Array<unsigned char>>*)(*this_01)[arg1_00];
                                pPVar6->p1<unsigned long>(1);
                                pPVar6 = (PacketT<Array<unsigned char>>*)(*this_01)[arg1_00];
                                pPVar6->p1<unsigned long>((unsigned int)!bVar9);
                                if (local_31 != '\x01') {
                                    pPVar6 = (PacketT<Array<unsigned char>>*)(*this_01)[arg1_00];
                                    pPVar6->p1<unsigned long>(129);
                                }
                                if ((uint8_t)(local_33 - 1U) < 4) {
                                    uVar7 = (unsigned short)local_32;
                                    switch (local_33) {
                                    case '\x01':
                                        uVar7 = -(unsigned short)local_32;
                                    case '\x03':
                                        id = 2;
                                        break;
                                    case '\x02':
                                        uVar7 = -uVar7;
                                    case '\x04':
                                        id = 1;
                                    }
                                } else {
                                    id = 0;
                                    uVar7 = 0;
                                }
                                pPVar6 = (PacketT<Array<unsigned char>>*)(*this_01)[arg1_00];
                                pPVar6->p1<unsigned long>(id);
                                pPVar6 = (PacketT<Array<unsigned char>>*)(*this_01)[arg1_00];
                                arg1 = jag::graphics::MaterialRaw::AnimationSpeedPackValue((float)(int)(short)uVar7 *
                                                                                           0.390625f);
                                pPVar6->p2<short>(arg1);
                                pPVar6 = (PacketT<Array<unsigned char>>*)(*this_01)[arg1_00];
                                pPVar6->p1<unsigned long>(0);
                                pPVar6 = (PacketT<Array<unsigned char>>*)(*this_01)[arg1_00];
                                pPVar6->SetPos(0);
                            }
                        }
                        arg1_00 = arg1_00 + 1;
                    } while (arg1_00 != local_58);
                }
                if ((local_38 & 1) != 0) {
                    *local_48 = true;
                }
            }
        }
    }

    // 0x1001cadd0
    unsigned long OSRenderCore_MaterialRawProvider::GetMaterialRaw(jag::graphics::MaterialRaw& materialRaw,
                                                                   unsigned int arg2) {
        PacketT<Array<unsigned char> _>* arg2_00;

        if (!((&field_24)->operator_cast_to_bool())) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                            "osrendercore/rseven/OSMaterialRawProvider.cpp",
                            18, "Use of OSRenderCore_MaterialRawProvider before initialization");
        }
        uint8_t* this_00 = &field_32;
        unsigned long uVar2 = this_00->size();
        if (uVar2 <= (unsigned long)arg2) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                            "osrendercore/rseven/OSMaterialRawProvider.cpp",
                            23, "Invalid material id %d", (unsigned long)arg2);
        }
        PacketT<Array<unsigned char>>* pPVar3 = (PacketT<Array<unsigned char>>*)(*this_00)[(unsigned long)arg2];
        if (!(pPVar3->IsValid())) {
            uVar2 = 0;
        } else {
            pPVar3 = (PacketT<Array<unsigned char>>*)(*this_00)[(unsigned long)arg2];
            pPVar3->SetPos(0);
            arg2_00 = (PacketT<Array<unsigned char> _>*)(*this_00)[(unsigned long)arg2];
            materialRaw.Decode(arg2, *arg2_00);
            uVar2 = (((uint64_t)((int64_t)((unsigned long)this_00 >> 8)) << 8) | (uint8_t)1);
        }
        return uVar2 & 4294967295;
    }

} // namespace jag::oldscape::rseven

namespace jag::oldscape {
    // 0x1001bd010
    void OSRenderCore_RenderThread_Common::SetThreadID() {
        field_96 = this_thread::GetThreadID();
    }

    // 0x1001bd030
    void OSRenderCore_Impl::TexturesUploaded() {
        (&field_55398592)->operator_cast_to_bool();
    }

} // namespace jag::oldscape

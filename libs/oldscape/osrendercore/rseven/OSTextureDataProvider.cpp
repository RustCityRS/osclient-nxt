// libs/oldscape/osrendercore/rseven/OSTextureDataProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.osrendercore

#include "OSTextureDataProvider.h"
#include "libs/oldscape/osrendercore/OSRenderCore.h"

namespace jag::oldscape::rseven {
    // 0x1001c0960
    void OSRenderCore_TextureDataProvider::AddData(const RenderState& renderState) {
        int* arg1;
        ReturnValue local_60;
        eastl local_48;
        obj_iterator local_38;

        &local_48 = (eastl[16])renderState.field_18104544.begin();
        &local_38 = (obj_iterator[16])renderState.field_18104544.end();
        bool cVar1 = local_48 != local_38;
        if (cVar1) {
            do {
                arg1 = (int*)local_48.HeapBeginPtr();
                eastl::hashtable<int, eastl::pair<int const, shared_ptr<PacketT<Array<unsigned char>>>>,
                                 eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, shared_ptr<PacketT<Array<unsigned char>>>>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                 true>::emplace<int const&,
                                                shared_ptr<PacketJ<Array<unsigned char>>> const>(
                    &local_60,
                    (hashtable<int, eastl::pair<int const, shared_ptr<PacketT<Array<unsigned char>>>>, eastl::allocator,
                               eastl::use_first<eastl::pair<int const, shared_ptr<PacketT<Array<unsigned char>>>>>,
                               eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                               eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)&field_16,
                    arg1, (shared_ptr<PacketJ<Array<unsigned char> _> _>*)(arg1 + 2));
                ++local_48;
                cVar1 = local_48 != local_38;
            } while (cVar1);
        }
    }

    // 0x1001caf20
    uint8_t* OSRenderCore_TextureDataProvider::GetTextureDataUncompressed(jag::graphics::TextureData& textureData,
                                                                          const TextureType* textureType,
                                                                          unsigned int arg3) {
        unsigned long uVar1;
        TextureData* pTVar3;
        unsigned int uVar7;
        uint32_t uVar8;
        uint64_t uVar9;
        uint64_t extraout_var;
        uint8_t bVar12;
        unsigned int uVar14;
        PacketView local_130;
        hashtable_iterator<eastl::pair<int const, shared_ptr<PacketT<Array<unsigned char> _> _> _>, true, false>*
            local_108[2];
        unsigned long local_e8;
        unsigned int local_ac;

        if ((TextureType*)TextureType::CUBEMAP == textureType) {
            uVar9 = textureType->HeapBeginPtr();
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                            "osrendercore/rseven/OSTextureDataProvider.cpp",
                            24, "TextureDataProvider::GetTextureDataUncompressed - Texture type %s not supported",
                            uVar9);
        }
        uint8_t* this_00 = &field_16;
        local_90.m_width = arg3;
        auto local_f8 = this_00->find(local_90.m_width);
        RGBAImage local_90 = this_00->end();
        if (local_f8 == local_90 != '\0') {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/rseven/"
                "OSTextureDataProvider.cpp",
                33, "A texture (%d) was needed by the render thread without the logic thread having provided it.",
                (unsigned long)arg3);
        }
        long lVar10 = local_f8.HeapBeginPtr();
        if ((*((lVar10 + 8))) == nullptr) {
            new (local_108) eastl::hashtable_iterator(&local_f8);
            local_90 = this_00->erase(local_108[0]);
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                            "osrendercore/rseven/OSTextureDataProvider.cpp",
                            40, "Attempt to fetch missing texture %d", (unsigned long)arg3);
        }
        local_90 = RGBAImage();
        lVar10 = local_f8.HeapBeginPtr();
        auto arg1 = *(*((lVar10 + 8)));
        local_130.PacketView<Array<unsigned char>>(*arg1);
        RAWDecoder::LoadSingle(local_90, local_130);
        long local_e0 = local_90.GetColourDataPtr();
        unsigned int local_94 = local_90.GetX();
        unsigned int local_a0 = local_90.GetZ();
        auto puVar11 = std::max<unsigned int>(local_94, local_a0);
        unsigned long local_a8 = (unsigned long)*puVar11;
        unsigned int local_98 = *puVar11 + 64;
        unsigned long local_d0 = 0;
        int iVar13 = 0;
        do {
            uVar7 = local_98 >> ((uint8_t)iVar13 & 31);
            uVar7 = (int)local_d0 + uVar7 * uVar7 * 4;
            local_d0 = (unsigned long)uVar7;
            iVar13 = iVar13 + 1;
        } while (iVar13 != 5);
        TextureData* local_d8 = textureData;
        uint8_t uVar6 = AllocateImageData((unsigned int)this);
        unsigned char* puVar17 = (unsigned char*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar6);
        iVar13 = (int)local_a8 - 32;
        unsigned char* local_c8 = puVar17 + uVar7;
        int iVar16 = 0;
        unsigned long uVar15 = local_a8;
        unsigned char* local_c0 = puVar17;
        int local_9c = iVar13;
        do {
            bVar12 = (uint8_t)iVar16;
            uVar7 = local_98 >> (bVar12 & 31);
            if (uVar7 != 0) {
                local_e8 = (unsigned long)(uVar7 * 4);
                uVar14 = 0;
                do {
                    local_ac = uVar14;
                    uVar14 =
                        (unsigned int)((unsigned long)((local_ac << (bVar12 & 31)) + iVar13) % (uVar15 & 4294967295));
                    if (uVar14 < local_a0) {
                        if ((unsigned long)uVar7 != 0) {
                            lVar10 = local_e0 + (unsigned long)(uVar14 * local_94) * 4;
                            uVar14 = 0;
                            do {
                                uVar1 = (unsigned long)((uVar14 << (bVar12 & 31)) + iVar13) % (uVar15 & 4294967295);
                                uVar8 = 0;
                                if ((unsigned int)uVar1 < local_94) {
                                    uVar8 = jag::math::RunetekColour::GammaCorrectOSRS(
                                        *(unsigned int*)(lVar10 + uVar1 * 4), (double)m_gamma);
                                    uVar15 = local_a8;
                                    iVar13 = local_9c;
                                }
                                *(uint32_t*)puVar17 = uVar8;
                                puVar17 = puVar17 + 4;
                                uVar14 = uVar14 + 1;
                            } while (uVar7 != uVar14);
                        }
                    } else {
                        ___bzero(puVar17, local_e8);
                        puVar17 = puVar17 + (unsigned long)uVar7 * 4;
                        uVar15 = local_a8;
                        iVar13 = local_9c;
                    }
                    uVar14 = local_ac + 1;
                } while (local_ac + 1 != uVar7);
            }
            uVar1 = local_d0;
            pTVar3 = local_d8;
            iVar16 = iVar16 + 1;
        } while (iVar16 != 5);
        if (puVar17 != local_c8) {
            LogAssert("p == fence",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "rseven/OSTextureDataProvider.cpp",
                      102, nullptr);
        }
        *(unsigned int*)&local_d8->field_16 = local_98;
        *(unsigned int*)((long)&local_d8->field_16 + 4) = local_98;
        ((unique_ptr<unsigned char[]>*)local_d8)->reset<unsigned char*>(local_c0);
        *(int*)&pTVar3->field_8 = (int)uVar1;
        *(uint32_t*)((long)&pTVar3->field_8 + 4) = 5;
        uint8_t* puVar2 = DataStatus::READY;
        return puVar2;
    }

} // namespace jag::oldscape::rseven

namespace jag::oldscape {
    // 0x1001c0a00
    void OSRenderCore_RenderThread_RSeven::ProcessModelUpdates(
        const shared_ptr<RenderState::ModelSubmissionRSeven>* modelSubmissionRSeven1,
        const shared_ptr<RenderState::ModelSubmissionRSeven>* modelSubmissionRSeven2) {
        ((Scene*)field_16.operator->())->ProcessModelUpdates(modelSubmissionRSeven1, modelSubmissionRSeven2);
    }

} // namespace jag::oldscape

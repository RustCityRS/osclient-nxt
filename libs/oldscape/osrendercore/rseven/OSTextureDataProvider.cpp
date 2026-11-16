// libs/oldscape/osrendercore/rseven/OSTextureDataProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.osrendercore

#include "OSTextureDataProvider.h"
#include "libs/oldscape/osrendercore/OSRenderCore.h"

namespace jag::oldscape::rseven {
    // 0x1001c0960, 160 bytes, placed by debug map only (low confidence)
    // OSRenderCore_TextureDataProvider::AddData(RenderState const&)
    void OSRenderCore_TextureDataProvider::AddData(RenderState* param_1) {
        bool bVar1;
        undefined8 extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        int local_60[6];
        undefined8 local_48;
        undefined8 local_40;
        undefined8 local_38;
        hashtable_iterator_base* local_30;

        local_48 = eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                    eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                    eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                    eastl::prime_rehash_policy, false, true, true>::begin();
        local_40 = extraout_RDX;
        local_38 = (&param_1->field_18104544)->end();
        local_30 = extraout_RDX_00;
        bVar1 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_38, extraout_RDX_00);
        if (bVar1) {
            do {
                local_48.HeapBeginPtr();
                eastl::hashtable<
                    int, eastl::pair<int const, shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>>,
                    eastl::allocator,
                    eastl::use_first<
                        eastl::pair<int const, shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>>>,
                    eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                    eastl::prime_rehash_policy, false, true, true>::
                    emplace<int const&, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>> const>(
                        local_60, (shared_ptr*)field_16);
                eastl::hashtable_iterator<
                    eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>, true, false>::
                operator++((hashtable_iterator<
                            eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>, true,
                            false>*)&local_48);
                bVar1 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_38, extraout_RDX_01);
            } while (bVar1);
        }
    }

    // 0x1001caf20, 1088 bytes, placed by __FILE__ string
    // OSRenderCore_TextureDataProvider::GetTextureDataUncompressed(jag::graphics::TextureData&, TextureType const*, unsigned int)
    undefined* OSRenderCore_TextureDataProvider::GetTextureDataUncompressed(TextureData* param_1, TextureType* param_2,
                                                                            uint param_3) {
        ulong uVar1;
        undefined* puVar2;
        TextureData* pTVar3;
        bool bVar4;
        uint uVar5;
        undefined4 uVar6;
        undefined8 uVar7;
        long lVar8;
        PacketT* pPVar9;
        uint* puVar10;
        uchar* puVar11;
        byte bVar12;
        int iVar13;
        uint uVar14;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar15;
        int iVar16;
        PacketView local_130;
        undefined8 local_108;
        undefined8 local_100;
        eastl local_f8[16];
        ulong local_e8;
        long local_e0;
        TextureData* local_d8;
        ulong local_d0;
        uchar* local_c8;
        uchar* local_c0;
        OSRenderCore_TextureDataProvider* local_b8;
        uint local_ac;
        ulong local_a8;
        uint local_a0;
        int local_9c;
        uint local_98;
        uint local_94;
        RGBAImage local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((TextureType*)TextureType::CUBEMAP == param_2) {
            uVar7 = param_2->HeapBeginPtr();
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                            "osrendercore/rseven/OSTextureDataProvider.cpp",
                            24, "TextureDataProvider::GetTextureDataUncompressed - Texture type %s not supported",
                            uVar7);
        }
        local_b8 = this;
        local_90.field_0 = param_3;
        eastl::hashtable<int, eastl::pair<int const, shared_ptr<ChatLine>>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, shared_ptr<ChatLine>>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_f8);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar4 = eastl::operator==(local_f8, (hashtable_iterator_base*)&local_90, extraout_RDX);
        if (bVar4) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/rseven/"
                "OSTextureDataProvider.cpp",
                33, "A texture (%d) was needed by the render thread without the logic thread having provided it.",
                (ulong)param_3);
        }
        lVar8 = local_f8->HeapBeginPtr();
        bVar4 = operator==((shared_ptr*)(lVar8 + 8), (_func_decltype_nullptr*)0);
        if (bVar4) {
            new (&local_108)
                eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(local_f8);
            eastl::hashtable<
                unsigned long long, eastl::pair<unsigned long long const, shared_ptr<DynamicGeometry>>,
                eastl::allocator, eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<DynamicGeometry>>>,
                eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::erase(&local_90, field_16,
                                                                                                  local_108, local_100);
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                            "osrendercore/rseven/OSTextureDataProvider.cpp",
                            40, "Attempt to fetch missing texture %d", (ulong)param_3);
        }
        new (&local_90) RGBAImage();
        lVar8 = local_f8->HeapBeginPtr();
        pPVar9 = (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)(lVar8 + 8));
        PacketView::PacketView<Array<unsigned char, eastl::allocator>>(&local_130, pPVar9);
        RAWDecoder::LoadSingle(&local_90, &local_130);
        local_e0 = local_90.GetColourDataPtr();
        local_94 = local_90.GetX();
        local_a0 = local_90.GetZ();
        puVar10 = std::max<unsigned int>(&local_94, &local_a0);
        local_a8 = (ulong)*puVar10;
        local_98 = *puVar10 + 64;
        local_d0 = 0;
        iVar13 = 0;
        do {
            uVar5 = local_98 >> ((byte)iVar13 & 31);
            uVar5 = (int)local_d0 + uVar5 * uVar5 * 4;
            local_d0 = (ulong)uVar5;
            iVar13 = iVar13 + 1;
        } while (iVar13 != 5);
        local_d8 = param_1;
        puVar11 = (uchar*)(*(code*)local_b8->field_0[10])(local_b8, uVar5);
        iVar13 = (int)local_a8 + -32;
        local_c8 = puVar11 + uVar5;
        iVar16 = 0;
        uVar15 = local_a8;
        local_c0 = puVar11;
        local_9c = iVar13;
        do {
            bVar12 = (byte)iVar16;
            uVar5 = local_98 >> (bVar12 & 31);
            if (uVar5 != 0) {
                local_e8 = (ulong)(uVar5 * 4);
                uVar14 = 0;
                do {
                    local_ac = uVar14;
                    uVar14 = (uint)((ulong)((local_ac << (bVar12 & 31)) + iVar13) % (uVar15 & 4294967295));
                    if (uVar14 < local_a0) {
                        if ((ulong)uVar5 != 0) {
                            lVar8 = local_e0 + (ulong)(uVar14 * local_94) * 4;
                            uVar14 = 0;
                            do {
                                uVar1 = (ulong)((uVar14 << (bVar12 & 31)) + iVar13) % (uVar15 & 4294967295);
                                uVar6 = 0;
                                if ((uint)uVar1 < local_94) {
                                    uVar6 = jag::math::RunetekColour::GammaCorrectOSRS(
                                        *(uint*)(lVar8 + uVar1 * 4), (double)*(float*)&local_b8->field_8);
                                    uVar15 = local_a8;
                                    iVar13 = local_9c;
                                }
                                *(undefined4*)puVar11 = uVar6;
                                puVar11 = puVar11 + 4;
                                uVar14 = uVar14 + 1;
                            } while (uVar5 != uVar14);
                        }
                    } else {
                        ___bzero(puVar11, local_e8);
                        puVar11 = puVar11 + (ulong)uVar5 * 4;
                        uVar15 = local_a8;
                        iVar13 = local_9c;
                    }
                    uVar14 = local_ac + 1;
                } while (local_ac + 1 != uVar5);
            }
            uVar1 = local_d0;
            pTVar3 = local_d8;
            iVar16 = iVar16 + 1;
        } while (iVar16 != 5);
        if (puVar11 != local_c8) {
            /* WARNING: Subroutine does not return */
            LogAssert("p == fence",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "rseven/OSTextureDataProvider.cpp",
                      102, (char*)0);
        }
        *(uint*)&local_d8->field_16 = local_98;
        *(uint*)((long)&local_d8->field_16 + 4) = local_98;
        std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::reset<unsigned char*>(
            (unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>*)local_d8, local_c0);
        *(int*)&pTVar3->field_8 = (int)uVar1;
        *(undefined4*)((long)&pTVar3->field_8 + 4) = 5;
        puVar2 = DataStatus::READY;
        local_130.~PacketView();
        local_90.~RGBAImage();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return puVar2;
    }

} // namespace jag::oldscape::rseven

namespace jag::oldscape {
    // 0x1001c0a00, 48 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_RSeven::ProcessModelUpdates(shared_ptr<RenderState::ModelSubmissionRSeven> const*, shared_ptr<RenderState::ModelSubmissionRSeven> const*)
    void OSRenderCore_RenderThread_RSeven::ProcessModelUpdates(shared_ptr* param_1, shared_ptr* param_2) {
        Scene* this_00;

        this_00 = (Scene*)std::unique_ptr<rseven::Scene, std::default_delete<rseven::Scene>>::operator->(
            (unique_ptr<rseven::Scene, std::default_delete<rseven::Scene>>*)&field_16);
        this_00->ProcessModelUpdates(param_1, param_2);
    }

} // namespace jag::oldscape

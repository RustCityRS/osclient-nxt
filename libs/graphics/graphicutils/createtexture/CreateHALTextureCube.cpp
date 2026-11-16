// libs/graphics/graphicutils/createtexture/CreateHALTextureCube.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.graphicutils

namespace jag::graphicutils {
    // 0x100bb7cc0, 832 bytes, placed by debug map only (low confidence)
    // CreateHALTextureCube(unsigned int, unsigned int, unsigned char const*, unsigned int, unsigned int, bool, bool, render::TextureFormatBitSet)
    graphicutils* CreateHALTextureCube(uint param_1, uint param_2, uchar* param_3, uint param_4, uint param_5,
                                       bool param_6, bool param_7, TextureFormatBitSet param_8) {
        undefined4 uVar1;
        undefined4 uVar2;
        graphicutils* this_00;
        uchar* puVar3;
        char cVar4;
        int iVar5;
        uint uVar6;
        MapArea* this_01;
        long lVar7;
        vector<render::ResourceDataT<unsigned char const>,
               eastl::fixed_vector_allocator<24ul, 16ul, 8ul, 0ul, true, eastl::allocator>>* this_02;
        long* plVar8;
        Layout* this_03;
        undefined8 uVar9;
        undefined8* puVar10;
        TextureCube* this_04;
        uint uVar11;
        ulong uVar12;
        Singleton<render::RenderDevice>* this_05;
        graphicutils* pgVar13;
        uint uVar14;
        uint uVar15;
        array<eastl::fixed_vector<render::ResourceDataT<unsigned char const>, 16ul, true, eastl::allocator>, 6ul>
            local_ac8[2544];
        array<render::ResourceDataT<unsigned char const> const*, 6ul> local_d8[48];
        undefined1 local_a8[72];
        ulong local_60;
        ulong local_58;
        graphicutils* local_50;
        uchar* local_48;
        uint local_3c;
        uint local_38;
        uint local_34;

        local_48 = param_3;
        new (local_a8) render::Texture::Desc();
        local_a8._12_4_ = 0;
        local_a8[32] = param_6;
        local_a8._0_4_ = param_1;
        local_a8._4_4_ = param_2;
        local_a8._24_4_ = param_4;
        local_38 = param_2;
        local_34 = param_1;
        cVar4 = param_8.HasFormatType(0);
        iVar5 = 24;
        if (cVar4 == '\0') {
            cVar4 = param_8.HasFormatType(2);
            iVar5 = 7;
            if (cVar4 != '\0') {
                iVar5 = 30;
            }
        }
        local_a8._12_4_ = iVar5;
        this_05 = (Singleton<render::RenderDevice>*)&param_8;
        cVar4 = this_05->HasFormatType(7);
        if (cVar4 != '\0') {
            this_01 = (MapArea*)this_05->Instance();
            lVar7 = this_01->GetOrigin();
            if (*(char*)(lVar7 + 147) != '\0') {
                local_a8._12_4_ = render::GetSRGBFormat(local_a8._12_4_);
            }
        }
        local_50 = this;
        if (local_a8._12_4_ == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("textureDesc.m_Format != render::FORMAT_UNKNOWN",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createtexture/CreateHALTextureCube.cpp",
                      55, (char*)0);
        }
        std::array<eastl::fixed_vector<render::ResourceDataT<unsigned char const>, 16ul, true, eastl::allocator>,
                   6ul>::array(local_ac8);
        if (local_48 != (uchar*)0) {
            local_58 = (ulong)param_4;
            uVar12 = 0;
            uVar15 = 0;
            do {
                this_02 = (vector<render::ResourceDataT<unsigned char const>,
                                  eastl::fixed_vector_allocator<24ul, 16ul, 8ul, 0ul, true, eastl::allocator>>*)
                    std::array<
                        eastl::fixed_vector<render::ResourceDataT<unsigned char const>, 16ul, true, eastl::allocator>,
                        6ul>::operator[](local_ac8, uVar12);
                eastl::vector<
                    render::ResourceDataT<unsigned char const>,
                    eastl::fixed_vector_allocator<24ul, 16ul, 8ul, 0ul, true, eastl::allocator>>::resize(this_02,
                                                                                                         local_58);
                local_60 = uVar12;
                plVar8 = (long*)this_02->HeapBeginPtr();
                local_a8._64_8_ = this_02->end();
                puVar3 = local_48;
                local_3c = uVar15;
                if (plVar8 == (long*)local_a8._64_8_) {
                    uVar14 = 0;
                } else {
                    uVar14 = 0;
                    uVar6 = local_34;
                    uVar11 = local_38;
                    do {
                        *plVar8 = (long)(puVar3 + (ulong)uVar14 + (ulong)uVar15);
                        iVar5 = render::GetImageByteSize(uVar6, uVar11, local_a8._12_4_, 0);
                        uVar14 = iVar5 + uVar14;
                        uVar6 = (int)uVar6 / 2;
                        uVar11 = (int)uVar11 / 2;
                        plVar8 = plVar8 + 3;
                    } while (plVar8 != (long*)local_a8._64_8_);
                }
                uVar15 = local_3c + uVar14;
                uVar12 = local_60 + 1;
            } while (uVar12 != 6);
        }
        uVar12 = 0;
        do {
            this_03 = (Layout*)std::array<
                eastl::fixed_vector<render::ResourceDataT<unsigned char const>, 16ul, true, eastl::allocator>,
                6ul>::operator[](local_ac8, uVar12);
            uVar9 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_03);
            puVar10 = (undefined8*)std::array<render::ResourceDataT<unsigned char const> const*, 6ul>::operator[](
                local_d8, uVar12);
            this_00 = local_50;
            *puVar10 = uVar9;
            uVar12 = uVar12 + 1;
        } while (uVar12 != 6);
        make_shared<render::TextureCube, char const(&)[34]>((jag*)local_50, "TextureManager GetHALTexture Cube");
        this_04 = (TextureCube*)shared_ptr<render::TextureCube>::operator->((shared_ptr<render::TextureCube>*)this_00);
        cVar4 = this_04->Create(local_a8, local_d8);
        if (cVar4 != '\0') {
            if (param_7) {
                pgVar13 = this_00;
                plVar8 = (long*)shared_ptr<render::TextureCube>::operator->((shared_ptr<render::TextureCube>*)this_00);
                lVar7 = pgVar13->Instance();
                (**(code**)(*plVar8 + 24))(plVar8, lVar7 + 208, 1);
            } else {
                pgVar13 = this_00;
                plVar8 = (long*)shared_ptr<render::TextureCube>::operator->((shared_ptr<render::TextureCube>*)this_00);
                lVar7 = pgVar13->Instance();
                (**(code**)(*plVar8 + 24))(plVar8, lVar7 + 80, 1);
            }
            if (cVar4 != '\0') {
                std::array<
                    eastl::fixed_vector<render::ResourceDataT<unsigned char const>, 16ul, true, eastl::allocator>,
                    6ul>::~array(local_ac8);
                return this_00;
            }
        }
        uVar2 = local_a8._4_4_;
        uVar1 = local_a8._0_4_;
        uVar9 = render::GetFormatName(local_a8._12_4_);
        /* WARNING: Subroutine does not return */
        LogAssert("success",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                  "createtexture/CreateHALTextureCube.cpp",
                  111, "Failed to create cube texture %ux%u %s", (ulong)(uint)uVar1, (ulong)(uint)uVar2, uVar9);
    }

} // namespace jag::graphicutils

namespace jag {
    // 0x100bb8030, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<render::TextureCube>::type make_shared<render::TextureCube, char const (&) [34]>(char const (&) [34])
    jag* make_shared<render::TextureCube, char const (&)[34]>(char* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        TextureCube* local_30[2];

        pvVar1 = (void*)aligned_alloc(544, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_30[0] = placement_new<render::TextureCube, char const(&)[34]>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<render::TextureCube>, int, render::TextureCube*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag

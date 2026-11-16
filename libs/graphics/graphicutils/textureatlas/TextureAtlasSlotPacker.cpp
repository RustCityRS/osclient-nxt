// libs/graphics/graphicutils/textureatlas/TextureAtlasSlotPacker.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.graphicutils

#include "TextureAtlasSlotPacker.h"

namespace jag::graphicutils {
    // 0x100d97b84, 12 bytes, __const
    TextureAtlasSlotPacker::SlotUsageBitmap::StorageTypeBitCount = {64, 16711935, 0};

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    TextureAtlasSlotPacker::GetAtlasQuality() const;

    // 0x1000fa840: the linker folded this into oldscape::graphics::NXTPixScreen::GetHeight() const, which has identical code
    int TextureAtlasSlotPacker::GetAtlasSlotCount() const;

    // 0x1000fcbb0: the linker folded this into oldscape::ClientObj::GetHighlight(), which has identical code
    TextureAtlasUsage* TextureAtlasSlotPacker::GetAtlasUsage() const;

    // 0x100293ee0: the linker folded this into hal::audio::AudioRenderer::GetState() const, which has identical code
    int TextureAtlasSlotPacker::GetTotalSlots() const;

    // 0x1003fab80: the linker folded this into game::WaterType::OverrideDefaultWaterType() const, which has identical code
    TextureAtlasSlotPacker::UseCompressedTextures() const;

    // 0x10082a9b0: the linker folded this into graphics::ModularParticleSystemTemplate::GetRenderPassBits() const, which has identical code
    uint TextureAtlasSlotPacker::GetAtlasPixelResolution() const;

    // 0x100bbc6d0, 192 bytes, base-object constructor, placed by class name and debug map
    // TextureAtlasSlotPacker::SlotUsageBitmap::SlotUsageBitmap(unsigned int)
    void TextureAtlasSlotPacker::SlotUsageBitmap::SlotUsageBitmap(uint param_1) {
        ulong* this_00;
        uint uVar1;
        uint* puVar2;
        Singleton<render::RenderDevice>* this_01;
        ulonglong* puVar3;
        MapArea* this_02;
        long lVar4;
        ulonglong local_38;
        uint local_2c;

        field_0 = param_1;
        local_2c = param_1;
        puVar2 = std::max<unsigned int>((uint*)PTR_StorageTypeBitCount_100ee5920, &local_2c);
        uVar1 = *puVar2;
        field_4 = uVar1 >> 6;
        this_00 = &field_8;
        new (&local_38) eastl::allocator("EASTL vector");
        new (this_00)
            eastl::vector<unsigned long long, eastl::allocator>((ulong)((uVar1 >> 6) * param_1), (allocator*)&local_38);
        this_01 = (Singleton<render::RenderDevice>*)this_00->HeapBeginPtr();
        puVar3 = (ulonglong*)this_00->end();
        local_38 = 18446744073709551615;
        std::fill<unsigned long long*, unsigned long long>((ulonglong*)this_01, puVar3, &local_38);
        this_02 = (MapArea*)this_01->Instance();
        lVar4 = this_02->GetOrigin();
        if (*(char*)(lVar4 + 164) != '\0') {
            field_0 = field_0 - 1;
        }
    }

    // 0x100bbc7b0, 16 bytes, complete-object constructor, placed by class name and debug map
    // TextureAtlasSlotPacker::SlotUsageBitmap::SlotUsageBitmap(unsigned int): jumps straight to the base-object constructor

    // 0x100bbc7c0, 400 bytes, placed by class name and debug map
    // TextureAtlasSlotPacker::SlotUsageBitmap::TestRegion(unsigned int, unsigned int, unsigned int) const
    ulong TextureAtlasSlotPacker::SlotUsageBitmap::TestRegion(uint param_1, uint param_2, uint param_3) {
        uint uVar1;
        ulong* puVar2;
        ulong uVar3;
        ulong uVar4;
        ulonglong uVar5;
        uint uVar6;
        ulong uVar7;
        bool bVar8;
        SlotUsageBitmap local_68;
        ulonglong local_48;
        ulonglong local_40;
        uint local_38;
        uint local_34;

        if ((param_1 + param_3 < field_0) && (param_2 + param_3 < field_0)) {
            local_34 = param_1 >> 6;
            puVar2 = (ulong*)eastl::vector<unsigned long long, eastl::allocator>::operator[](
                (vector<unsigned long long, eastl::allocator>*)&field_8, (ulong)(field_4 * param_2 + local_34));
            uVar5 = (*puVar2 >> ((byte)param_1 & 63)) << ((byte)param_1 & 63);
            if (uVar5 != 0) {
                uVar1 = utils::FindFirstSetBit(uVar5);
                if (uVar1 == 4294967295) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("firstFreeBit != -1",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                              "graphicutils/textureatlas/TextureAtlasSlotPacker.cpp",
                              42, (char*)0);
                }
                uVar6 = (param_1 & 4294967232) + uVar1;
                uVar7 = (ulong)uVar6;
                if (uVar6 + param_3 <= field_0) {
                    GetSlotMasks(&local_68, uVar1, param_3);
                    uVar1 = (uint)(ulong)param_2;
                    local_38 = local_68.field_16;
                    local_48._0_4_ = local_68.field_0;
                    local_48._4_4_ = local_68.field_4;
                    local_40 = local_68.field_8;
                    uVar3 = TestRow(this, local_34, uVar1, local_68.field_16, local_68._0_8_, local_68.field_8);
                    if ((uVar3 & 1) == 0) {
                        uVar4 = 0;
                        uVar7 = (ulong)((uint)(uVar3 >> 26) & 4294967232);
                    } else {
                        bVar8 = 1 < param_3;
                        if (bVar8) {
                            uVar3 = TestRow(this, local_34, uVar1 + 1, local_38, local_48, local_40);
                            if ((uVar3 & 1) != 0) {
                                uVar1 = 2;
                                do {
                                    bVar8 = uVar1 < param_3;
                                    if (param_3 == uVar1)
                                        goto LAB_100bbc93b;
                                    uVar3 = TestRow(this, local_34, (int)(ulong)param_2 + uVar1, local_38, local_48,
                                                    local_40);
                                    uVar1 = uVar1 + 1;
                                } while ((uVar3 & 1) != 0);
                            }
                            uVar7 = (ulong)((uint)(uVar3 >> 26) & 4294967232);
                        }
                    LAB_100bbc93b:
                        uVar4 = (ulong)(bVar8 ^ 1);
                    }
                    goto LAB_100bbc86f;
                }
            }
            uVar1 = param_1 + 64 & 4294967232;
        } else {
            uVar1 = param_1 + 64;
        }
        uVar4 = 0;
        uVar7 = (ulong)uVar1;
    LAB_100bbc86f:
        return uVar7 << 32 | uVar4;
    }

    // 0x100bbc9b0, 176 bytes, placed by class name and debug map
    // TextureAtlasSlotPacker::SlotUsageBitmap::GetSlotMasks(unsigned int, unsigned int)
    SlotUsageBitmap* TextureAtlasSlotPacker::SlotUsageBitmap::GetSlotMasks(uint param_1, uint param_2) {
        uint uVar1;
        uint* puVar2;
        long lVar3;
        uint uVar4;
        ulong uVar5;
        float fVar6;
        uint local_30;
        uint local_2c;

        local_2c = 64 - param_1;
        local_30 = param_2;
        puVar2 = std::min<unsigned int>(&local_2c, &local_30);
        uVar1 = *puVar2;
        fVar6 = (float)ceil((float)(param_2 - uVar1) * 0.015625);
        uVar4 = param_2 - uVar1 & 63;
        lVar3 = ~(-1L << ((byte)uVar1 & 63)) << ((byte)param_1 & 63);
        if (uVar1 == 64) {
            lVar3 = -1;
        }
        uVar5 = ~(-1L << (sbyte)uVar4);
        if (uVar4 == 0) {
            uVar5 = -(ulong)((int)fVar6 != 0);
        }
        field_0 = (int)lVar3;
        field_4 = (int)((ulong)lVar3 >> 32);
        field_8 = uVar5;
        field_16 = (int)fVar6;
        return this;
    }

    // 0x100bbca60, 256 bytes, placed by class name and debug map
    // TextureAtlasSlotPacker::SlotUsageBitmap::TestRow(unsigned int, unsigned int, unsigned int, unsigned long long, unsigned long long) const
    ulong TextureAtlasSlotPacker::SlotUsageBitmap::TestRow(uint param_1, uint param_2, uint param_3, ulonglong param_4,
                                                           ulonglong param_5) {
        int iVar1;
        ulonglong* puVar2;
        ulonglong* puVar3;
        ulonglong* puVar4;
        ulonglong* puVar5;
        ulong uVar6;

        if (param_1 + param_3 < field_4) {
            puVar2 = (ulonglong*)eastl::vector<unsigned long long, eastl::allocator>::operator[](
                (vector<unsigned long long, eastl::allocator>*)&field_8, (ulong)(field_4 * param_2 + param_1));
            if ((param_4 & ~*puVar2) == 0) {
                puVar3 = (ulonglong*)eastl::vector<unsigned long long, eastl::allocator>::operator[](
                    (vector<unsigned long long, eastl::allocator>*)&field_8, (ulong)(param_2 * field_4 + param_3));
                puVar5 = puVar2;
                do {
                    puVar5 = puVar5 + 1;
                    puVar4 = puVar3;
                    if (puVar3 <= puVar5)
                        goto LAB_100bbcb08;
                } while (*puVar5 == 18446744073709551615);
                iVar1 = std::distance<unsigned long long const*>(puVar2, puVar5);
                puVar4 = (ulonglong*)(ulong)(iVar1 + param_1);
            LAB_100bbcb08:
                if (puVar5 < puVar3) {
                    uVar6 = 0;
                } else {
                    if (param_5 == 0) {
                        uVar6 = 1;
                    } else {
                        uVar6 = (ulong)((param_5 & ~*puVar5) == 0);
                    }
                    iVar1 = std::distance<unsigned long long const*>(puVar2, puVar5);
                    puVar4 = (ulonglong*)(ulong)(iVar1 + param_1);
                }
                goto LAB_100bbcb1c;
            }
        }
        uVar6 = 0;
        puVar4 = (ulonglong*)(ulong)(param_1 + 1);
    LAB_100bbcb1c:
        return (long)puVar4 << 32 | uVar6;
    }

    // 0x100bbcb70, 416 bytes, placed by class name and debug map
    // TextureAtlasSlotPacker::SlotUsageBitmap::SetBits(unsigned int, unsigned int, unsigned int, bool)
    void TextureAtlasSlotPacker::SlotUsageBitmap::SetBits(uint param_1, uint param_2, uint param_3, bool param_4) {
        undefined4 uVar1;
        ulong uVar2;
        ulong* puVar3;
        ulong* puVar4;
        undefined4 in_register_0000000c;
        undefined4 in_register_00000014;
        undefined4 in_register_00000034;
        undefined3 in_register_00000081;
        int iVar5;
        int iVar6;
        SlotUsageBitmap local_88;
        ulong local_70;
        ulong local_68;
        vector<unsigned long long, eastl::allocator>* local_60;
        undefined8 local_58;
        undefined4 local_50;
        int local_4c;
        SlotUsageBitmap* local_48;
        undefined8 local_40;
        ulong local_38;

        local_38 = CONCAT44(in_register_00000034, param_1);
        local_58 = CONCAT44(in_register_00000014, param_2);
        local_40 = CONCAT44(in_register_0000000c, param_3);
        local_48 = this;
        if (field_0 < param_3 + param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(x + slotSize) <= m_numSlots",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.cpp",
                      131, (char*)0);
        }
        if (field_0 < param_3 + param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("(y + slotSize) <= m_numSlots",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.cpp",
                      132, (char*)0);
        }
        GetSlotMasks(&local_88, param_1 & 63, param_3);
        if (!param_4) {
            local_88.field_8 = ~local_88.field_8;
            local_88._0_8_ = ~local_88._0_8_;
        }
        if ((int)local_40 != 0) {
            local_38 = local_38 >> 6 & 67108863;
            local_60 = (vector<unsigned long long, eastl::allocator>*)&local_48->field_8;
            local_70._0_4_ = local_88.field_0;
            local_70._4_4_ = local_88.field_4;
            local_68 = local_88.field_8;
            local_4c = local_88.field_16;
            iVar6 = 0;
            local_50 = CONCAT31(in_register_00000081, param_4);
            do {
                uVar1 = local_50;
                iVar5 = iVar6 + (int)local_58;
                puVar3 = (ulong*)eastl::vector<unsigned long long, eastl::allocator>::operator[](
                    local_60, (ulong)(local_48->field_4 * iVar5 + (int)local_38));
                uVar2 = *puVar3 | local_70;
                if ((char)uVar1 == '\0') {
                    uVar2 = *puVar3 & local_70;
                }
                *puVar3 = uVar2;
                puVar4 = (ulong*)eastl::vector<unsigned long long, eastl::allocator>::operator[](
                    local_60, (ulong)(iVar5 * local_48->field_4 + local_4c));
                while (puVar3 = puVar3 + 1, puVar3 < puVar4) {
                    *puVar3 = -(ulong)param_4;
                }
                uVar2 = *puVar3 | local_68;
                if ((char)local_50 == '\0') {
                    uVar2 = *puVar3 & local_68;
                }
                *puVar3 = uVar2;
                iVar6 = iVar6 + 1;
            } while (iVar6 != (int)local_40);
        }
    }

    // 0x100bbcd30, 192 bytes, base-object constructor, placed by class name and debug map
    // TextureAtlasSlotPacker::TextureAtlasSlotPacker(TextureAtlasQuality const&, TextureAtlasUsage const*, bool)
    void TextureAtlasSlotPacker::TextureAtlasSlotPacker(TextureAtlasQuality* param_1, TextureAtlasUsage* param_2,
                                                        bool param_3) {
        int iVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        uint uVar5;

        field_32 = *(undefined4*)(param_1 + 32);
        uVar2 = *(undefined8*)param_1;
        uVar3 = *(undefined8*)(param_1 + 8);
        uVar4 = *(undefined8*)(param_1 + 24);
        field_16 = *(undefined8*)(param_1 + 16);
        field_24 = uVar4;
        field_0 = (short)uVar2;
        field_2 = (short)((ulong)uVar2 >> 16);
        field_4 = (short)((ulong)uVar2 >> 32);
        *(short*)&field_6 = (short)((ulong)uVar2 >> 48);
        field_8 = uVar3;
        iVar1 = *(int*)(param_1 + 4);
        m_atlasSlotCount = iVar1;
        m_totalSlots = iVar1 * iVar1;
        m_pAtlasUsage = param_2;
        field_56 = param_3;
        new (&field_64) eastl::vector<TextureAtlasSlot, eastl::allocator>();
        new (&field_96, *(uint*)(param_1 + 4)) SlotUsageBitmap();
        field_136 = 0;
        field_140 = 0;
        field_144 = 0;
        uVar5 = *(int*)this * m_atlasSlotCount;
        m_atlasPixelResolution = uVar5;
        uVar5 = math::RoundUpToPowerOf2(uVar5);
        m_atlasPixelResolution = uVar5;
        (&field_64, 512)->reserve();
    }

    // 0x100bbce60, 16 bytes, complete-object constructor, placed by class name and debug map
    // TextureAtlasSlotPacker::TextureAtlasSlotPacker(TextureAtlasQuality const&, TextureAtlasUsage const*, bool): jumps straight to the base-object constructor

    // 0x100bbce70, 400 bytes, placed by class name and debug map
    // TextureAtlasSlotPacker::AddAtlasSlotData(bool, unsigned int, unsigned int, TextureAtlasSlot2D const&)
    void TextureAtlasSlotPacker::AddAtlasSlotData(bool param_1, uint param_2, uint param_3,
                                                  TextureAtlasSlot2D* param_4) {
        uint uVar1;
        uint* puVar2;
        uint* puVar3;
        undefined7 in_register_00000031;
        undefined1 local_48[20];
        uint local_34;

        local_48._16_4_ = SUB84(CONCAT71(in_register_00000031, param_1), 0);
        local_34 = param_2;
        if (65535 < param_3) {
            /* WARNING: Subroutine does not return */
            LogAssert("textureSize <= std::numeric_limits<uint16>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.cpp",
                      245, (char*)0);
        }
        puVar2 = (uint*)GetAtlasSlot(this, (uint)(ushort)param_4->field_0, (uint)(ushort)param_4->field_2, false);
        puVar3 = (uint*)(&field_64)->end();
        if (puVar2 == puVar3) {
            uVar1 = GetTextureSlotSize(this, param_3);
            (&field_96, (uint)(ushort)param_4->field_0, (uint)(ushort)param_4->field_2, uVar1)->MarkBitsUsed();
            local_48._0_4_ = local_34;
            local_48[6] = local_48[16];
            local_48._8_2_ = param_4->field_0;
            local_48._10_2_ = param_4->field_2;
            local_48._4_2_ = (short)param_3;
            (&field_64, (TextureAtlasSlot*)local_48)->push_back();
        } else {
            if (*puVar2 != local_34) {
                /* WARNING: Subroutine does not return */
                LogAssert("textureID == (uint)existing->m_textureID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                          "textureatlas/TextureAtlasSlotPacker.cpp",
                          262, (char*)0);
            }
            if ((ushort)puVar2[1] != param_3) {
                if ((ushort)puVar2[1] <= param_3) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("existing->m_sizePixels > textureSize",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                              "graphicutils/textureatlas/TextureAtlasSlotPacker.cpp",
                              267, (char*)0);
                }
                uVar1 = GetTextureSlotSize(this, (uint)(ushort)puVar2[1]);
                local_34 = GetTextureSlotSize(this, param_3);
                (&field_96, (uint)(ushort)param_4->field_0, (uint)(ushort)param_4->field_2, uVar1)->MarkBitsUnused();
                (&field_96, (uint)(ushort)param_4->field_0, (uint)(ushort)param_4->field_2, local_34)->MarkBitsUsed();
                *(short*)(puVar2 + 1) = (short)param_3;
            }
            *(char*)((long)puVar2 + 6) = local_48[16];
        }
    }

    // 0x100bbd000, 192 bytes, placed by class name and debug map
    // TextureAtlasSlotPacker::GetAtlasSlot(unsigned int, unsigned int, bool)
    void TextureAtlasSlotPacker::GetAtlasSlot(uint param_1, uint param_2, bool param_3) {
        eastl* peVar1;
        undefined8 uVar2;

        if (65535 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("slotX <= 0xFFFFu",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.cpp",
                      428, (char*)0);
        }
        if (65535 < param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("slotY <= 0xFFFFu",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.cpp",
                      429, (char*)0);
        }
        peVar1 = (eastl*)(&field_64)->HeapBeginPtr();
        uVar2 = (&field_64)->end();
        if (param_3) {
            eastl::find_if<TextureAtlasSlot*, unsigned int->GetAtlasSlot(unsigned int, bool)::__4>(
                peVar1, uVar2, CONCAT44(param_2, param_1), this);
        } else {
            eastl::find_if<TextureAtlasSlot*, unsigned int->GetAtlasSlot(unsigned int, bool)::__5>(
                peVar1, uVar2, CONCAT44(param_2, param_1), this);
        }
    }

    // 0x100bbd170, 464 bytes, placed by class name and debug map
    // TextureAtlasSlotPacker::AllocSlot2D(unsigned int)
    TextureAtlasSlotPacker* TextureAtlasSlotPacker::AllocSlot2D(uint param_1) {
        uint uVar1;
        uint uVar2;
        int iVar3;
        ulong uVar4;
        uint in_EDX;
        undefined4 in_register_00000034;
        TextureAtlasSlotPacker* this_00;
        uint uVar5;
        uint uVar6;
        uint uVar7;
        ulong uVar8;

        this_00 = (TextureAtlasSlotPacker*)CONCAT44(in_register_00000034, param_1);
        if (65535 < in_EDX) {
            /* WARNING: Subroutine does not return */
            LogAssert("textureSize <= std::numeric_limits<uint16>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.cpp",
                      285, (char*)0);
        }
        uVar5 = 0;
        uVar8 = 0;
        if (this_00->field_136 == in_EDX) {
            uVar8 = (ulong)this_00->field_140;
            uVar5 = this_00->field_144;
        }
        uVar2 = GetTextureSlotSize(this_00, in_EDX);
        if (uVar5 < this_00->m_atlasSlotCount - uVar2) {
        LAB_100bbd27a:
            do {
                uVar6 = (uint)uVar8;
                uVar1 = this_00->m_atlasSlotCount;
                if (uVar6 < uVar1) {
                    uVar4 = (&this_00->field_96, uVar6, uVar5, uVar2)->TestRegion();
                    uVar7 = (uint)(uVar4 >> 32);
                    if ((uVar4 & 1) == 0) {
                        if (uVar6 == uVar7) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("slotX != testSlotX",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "graphicutils/textureatlas/TextureAtlasSlotPacker.cpp",
                                      324, (char*)0);
                        }
                        uVar8 = uVar4 >> 32;
                        if (uVar7 <= uVar6) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("slotX < testSlotX",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "graphicutils/textureatlas/TextureAtlasSlotPacker.cpp",
                                      325, (char*)0);
                        }
                    } else {
                        this_00->field_136 = in_EDX;
                        this_00->field_140 = uVar7;
                        this_00->field_144 = uVar5;
                        new (this) graphics::GUIAnimationRGB(uVar7 & 65535, uVar5 & 65535, in_EDX & 65535);
                    }
                    if ((uVar4 & 1) == 0)
                        goto LAB_100bbd27a;
                    iVar3 = 1;
                } else {
                    iVar3 = 5;
                }
                if (uVar6 < uVar1)
                    goto LAB_100bbd315;
                uVar5 = uVar5 + 1;
                uVar8 = 0;
            } while (uVar5 < this_00->m_atlasSlotCount - uVar2);
        }
        iVar3 = 2;
    LAB_100bbd315:
        if (iVar3 == 2) {
            new (this) TextureAtlasSlot2D();
        }
        return this;
    }

    // 0x100bbd350, 80 bytes, placed by class name and debug map
    // TextureAtlasSlotPacker::AllocSlot2D(unsigned int, unsigned int)
    TextureAtlasSlotPacker* TextureAtlasSlotPacker::AllocSlot2D(uint param_1, uint param_2) {
        uint in_ECX;
        undefined4 in_register_00000034;

        AllocSlot2D(this, param_1);
        if (IsValid() != '\0') {
            AddAtlasSlotData((TextureAtlasSlotPacker*)CONCAT44(in_register_00000034, param_1), true, in_ECX,
                             (uint)field_4, (TextureAtlasSlot2D*)this);
        }
        return this;
    }

    // 0x100bbd3c0, 272 bytes, placed by class name and debug map
    // TextureAtlasSlotPacker::FreeSlot2D(TextureAtlasSlot2D const&)
    void TextureAtlasSlotPacker::FreeSlot2D(TextureAtlasSlot2D* param_1) {
        ushort uVar1;
        uint uVar2;
        TextureAtlasSlot* pTVar3;
        TextureAtlasSlot* pTVar4;

        uVar2 = GetTextureSlotSize(this, (uint)(ushort)param_1->field_4);
        pTVar3 = (TextureAtlasSlot*)GetAtlasSlot(this, (uint)(ushort)param_1->field_0, (uint)(ushort)param_1->field_2,
                                                 false);
        pTVar4 = (TextureAtlasSlot*)(&field_64)->end();
        if (pTVar3 == pTVar4) {
            /* WARNING: Subroutine does not return */
            LogAssert("slotIt != m_textureSlots.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.cpp",
                      356, (char*)0);
        }
        if (pTVar3->field_4 != param_1->field_4) {
            /* WARNING: Subroutine does not return */
            LogAssert("slotIt->m_sizePixels == slot.m_sizeInPixels",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.cpp",
                      357, (char*)0);
        }
        (&field_64, pTVar3)->erase();
        (&field_96, (uint)(ushort)param_1->field_0, (uint)(ushort)param_1->field_2, uVar2)->MarkBitsUnused();
        if (field_136 == (uint)(ushort)param_1->field_4) {
            uVar1 = param_1->field_2;
            if (m_atlasSlotCount * (uint)uVar1 + (uint)(ushort)param_1->field_0 <
                m_atlasSlotCount * field_144 + field_140) {
                field_140 = (uint)(ushort)param_1->field_0;
                field_144 = (uint)uVar1;
                return;
            }
        }
        ClearLastCheckedValues(this);
    }

    // 0x100bbd540, 96 bytes, placed by class name and debug map
    // TextureAtlasSlotPacker::FlushProvisionalSlots(fixedfunction::function<void (TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0> const&)
    void TextureAtlasSlotPacker::FlushProvisionalSlots(function* param_1) {
        undefined1* this_00;
        eastl* peVar1;
        undefined8 uVar2;
        TextureAtlasSlot* pTVar3;
        TextureAtlasSlot* pTVar4;

        this_00 = &field_64;
        peVar1 = (eastl*)this_00->HeapBeginPtr();
        uVar2 = this_00->end();
        pTVar3 = eastl::remove_if<TextureAtlasSlot*, (fixedfunction::function<void(TextureAtlasSlot_const&), 64ul, 16ul,
                                                                              (fixedfunction::Methods)0> const&)
                                                         ->FlushProvisionalSlots()::__1>(peVar1, uVar2, this, param_1);
        pTVar4 = (TextureAtlasSlot*)this_00->end();
        this_00->erase(pTVar3, pTVar4);
    }

    // 0x100bbd660, 192 bytes, placed by class name and debug map
    // TextureAtlasSlotPacker::GetAtlasSlot(unsigned int, unsigned int, bool) const
    void TextureAtlasSlotPacker::GetAtlasSlot(uint param_1, uint param_2, bool param_3) {
        eastl* peVar1;
        undefined8 uVar2;

        if (65535 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("slotX <= 0xFFFFu",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.cpp",
                      405, (char*)0);
        }
        if (65535 < param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("slotY <= 0xFFFFu",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.cpp",
                      406, (char*)0);
        }
        peVar1 = (eastl*)(&field_64)->HeapBeginPtr();
        uVar2 = (&field_64)->end();
        if (param_3) {
            eastl::find_if<TextureAtlasSlot_const*, unsigned int->GetAtlasSlot(unsigned int, bool) const ::__2>(
                peVar1, uVar2, CONCAT44(param_2, param_1), this);
        } else {
            eastl::find_if<TextureAtlasSlot_const*, unsigned int->GetAtlasSlot(unsigned int, bool) const ::__3>(
                peVar1, uVar2, CONCAT44(param_2, param_1), this);
        }
    }

    // 0x100bc0970, 32 bytes, placed by class name
    // TextureAtlasSlotPacker::GetAtlasSlot(unsigned int, unsigned int, bool) const::$_2::operator()(TextureAtlasSlot const&) const
    /* TextureAtlasSlotPacker::GetAtlasSlot(unsigned int, unsigned int, bool)
   const::$_2::TEMPNAMEPLACEHOLDERVALUE(TextureAtlasSlot const&) const */

    _func_GetAtlasSlot_unsigned_int_unsigned_int_bool* const ::$_2::operator()(TextureAtlasSlot * param_1) {
        _func_GetAtlasSlot_unsigned_int_unsigned_int_bool* p_Var1;

        p_Var1 = (_func_GetAtlasSlot_unsigned_int_unsigned_int_bool*)param_1->OccupiesSlot(
            *(ushort*)this, *(ushort*)(this + 4), **(ushort**)(this + 8));
        return p_Var1;
    }

    // 0x100bc09d0, 32 bytes, placed by class name
    // TextureAtlasSlotPacker::GetAtlasSlot(unsigned int, unsigned int, bool) const::$_3::operator()(TextureAtlasSlot const&) const
    /* TextureAtlasSlotPacker::GetAtlasSlot(unsigned int, unsigned int, bool)
   const::$_3::TEMPNAMEPLACEHOLDERVALUE(TextureAtlasSlot const&) const */

    _func_GetAtlasSlot_unsigned_int_unsigned_int_bool* const ::$_3::operator()(TextureAtlasSlot * param_1) {
        if (param_1->field_8 == *(ushort*)this) {
            return (_func_GetAtlasSlot_unsigned_int_unsigned_int_bool*)(ulong)CONCAT11(
                (char)(param_1->field_10 >> 8), param_1->field_10 == *(ushort*)(this + 4));
        }
        return (_func_GetAtlasSlot_unsigned_int_unsigned_int_bool*)0;
    }

    // 0x100bc09f0, 32 bytes, placed by class name
    // TextureAtlasSlotPacker::GetAtlasSlot(unsigned int, unsigned int, bool)::$_4::operator()(TextureAtlasSlot const&) const
    /* TextureAtlasSlotPacker::GetAtlasSlot(unsigned int, unsigned int,
   bool)::$_4::TEMPNAMEPLACEHOLDERVALUE(TextureAtlasSlot const&) const */

    void TextureAtlasSlotPacker::GetAtlasSlot(unsigned int, unsigned int,
                                              bool)::$_4::operator()(TextureAtlasSlot* param_1) {
        param_1->OccupiesSlot(*(ushort*)this, *(ushort*)(this + 4), **(ushort**)(this + 8));
    }

    // 0x100bc0a10, 30 bytes, placed by class name
    // TextureAtlasSlotPacker::GetAtlasSlot(unsigned int, unsigned int, bool)::$_5::operator()(TextureAtlasSlot const&) const
    /* TextureAtlasSlotPacker::GetAtlasSlot(unsigned int, unsigned int,
   bool)::$_5::TEMPNAMEPLACEHOLDERVALUE(TextureAtlasSlot const&) const */

    undefined2 TextureAtlasSlotPacker::GetAtlasSlot(unsigned int, unsigned int,
                                                    bool)::$_5::operator()(TextureAtlasSlot* param_1) {
        if (param_1->field_8 == *(ushort*)this) {
            return CONCAT11((char)(param_1->field_10 >> 8), param_1->field_10 == *(ushort*)(this + 4));
        }
        return 0;
    }

} // namespace jag::graphicutils

// 0x100bbcd20, 16 bytes, placed by neighbouring functions
// ceil(float)
void ceil(float param_1) {
    _ceilf();
}

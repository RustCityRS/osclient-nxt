// libs/graphics/graphicutils/textureatlas/TextureAtlasSlotPacker.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.graphicutils

#include "TextureAtlasSlotPacker.h"

namespace jag::graphicutils {
    // 0x100d97b84
    int32_t TextureAtlasSlotPacker::SlotUsageBitmap::StorageTypeBitCount[3] = {64, 16711935, 0};

    // 0x100009ca0: TextureAtlasSlotPacker::GetAtlasQuality() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x1000fa840: TextureAtlasSlotPacker::GetAtlasSlotCount() const has the same machine code as oldscape::graphics::NXTPixScreen::GetHeight() const

    // 0x1000fcbb0: TextureAtlasSlotPacker::GetAtlasUsage() const has the same machine code as oldscape::ClientObj::GetHighlight()

    // 0x100293ee0: TextureAtlasSlotPacker::GetTotalSlots() const has the same machine code as hal::audio::AudioRenderer::GetState() const

    // 0x1003fab80: TextureAtlasSlotPacker::UseCompressedTextures() const has the same machine code as game::WaterType::OverrideDefaultWaterType() const

    // 0x10082a9b0: TextureAtlasSlotPacker::GetAtlasPixelResolution() const has the same machine code as graphics::ModularParticleSystemTemplate::GetRenderPassBits() const

    // 0x100bbc6d0
    TextureAtlasSlotPacker::SlotUsageBitmap::SlotUsageBitmap(unsigned int arg1) : field_0(arg1) {
        unsigned long long local_38;

        auto puVar2 = std::max<unsigned int>(*PTR_StorageTypeBitCount_100ee5920, arg1);
        unsigned int uVar1 = *puVar2;
        field_4 = uVar1 >> 6;
        uint8_t* this_00 = &field_8;
        new (this_00) eastl::vector<unsigned long long>((unsigned long)((uVar1 >> 6) * arg1), local_38);
        auto this_01 = this_00->HeapBeginPtr();
        auto arg2 = this_00->end();
        local_38 = 18446744073709551615;
        std::fill<unsigned long long*, unsigned long long>(this_01, arg2, local_38);
        long lVar3 = ((MapArea*)this_01->Instance())->GetOrigin();
        if (*(char*)(lVar3 + 164) != '\0') {
            field_0 = field_0 - 1;
        }
    }

    // 0x100bbc7c0
    unsigned long TextureAtlasSlotPacker::SlotUsageBitmap::TestRegion(unsigned int arg1, unsigned int arg2,
                                                                      unsigned int arg3) const {
        unsigned int uVar1;
        unsigned long* puVar2;
        unsigned long uVar3;
        unsigned long uVar4;
        unsigned long long arg1_00;
        unsigned int uVar5;
        unsigned long uVar6;
        bool bVar7;
        ReturnValue local_68;
        unsigned long long local_60;
        unsigned int local_58;
        ReturnValue local_48;
        unsigned long long local_40;
        unsigned int local_38;
        unsigned int local_34;

        if ((arg1 + arg3 < field_0) && (arg2 + arg3 < field_0)) {
            local_34 = arg1 >> 6;
            puVar2 = &field_8[(unsigned long)(field_4 * arg2 + local_34)];
            arg1_00 = (*puVar2 >> ((uint8_t)arg1 & 63)) << ((uint8_t)arg1 & 63);
            if (arg1_00 != 0) {
                uVar1 = utils::FindFirstSetBit(arg1_00);
                if (uVar1 == 4294967295) {
                    LogAssert("firstFreeBit != -1",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                              "graphicutils/textureatlas/TextureAtlasSlotPacker.cpp",
                              42, nullptr);
                }
                uVar5 = (arg1 & 4294967232) + uVar1;
                uVar6 = (unsigned long)uVar5;
                if (uVar5 + arg3 <= field_0) {
                    GetSlotMasks(&local_68, uVar1, arg3);
                    uVar1 = (unsigned int)(unsigned long)arg2;
                    local_38 = local_58;
                    local_48 = local_68;
                    local_40 = local_60;
                    uVar3 = TestRow(local_34, uVar1, local_58, (unsigned long long)local_68, local_60);
                    if ((uVar3 & 1) == 0) {
                        uVar4 = 0;
                        uVar6 = (unsigned long)((unsigned int)(uVar3 >> 26) & 4294967232);
                    } else {
                        bVar7 = 1 < arg3;
                        if (bVar7) {
                            uVar3 = TestRow(local_34, uVar1 + 1, local_38, (unsigned long long)local_48, local_40);
                            if ((uVar3 & 1) != 0) {
                                uVar1 = 2;
                                do {
                                    bVar7 = uVar1 < arg3;
                                    if (arg3 == uVar1)
                                        goto LAB_100bbc93b;
                                    uVar3 = TestRow(local_34, (int)(unsigned long)arg2 + uVar1, local_38,
                                                    (unsigned long long)local_48, local_40);
                                    uVar1 = uVar1 + 1;
                                } while ((uVar3 & 1) != 0);
                            }
                            uVar6 = (unsigned long)((unsigned int)(uVar3 >> 26) & 4294967232);
                        }
                    LAB_100bbc93b:
                        uVar4 = (unsigned long)(bVar7 ^ 1);
                    }
                    goto LAB_100bbc86f;
                }
            }
            uVar1 = arg1 + 64 & 4294967232;
        } else {
            uVar1 = arg1 + 64;
        }
        uVar4 = 0;
        uVar6 = (unsigned long)uVar1;
    LAB_100bbc86f:
        return uVar6 << 32 | uVar4;
    }

    // 0x100bbc9b0
    auto TextureAtlasSlotPacker::SlotUsageBitmap::GetSlotMasks(unsigned int arg1, unsigned int arg2) {
        unsigned int local_2c = 64 - arg1;
        auto puVar2 = std::min<unsigned int>(local_2c, arg2);
        unsigned int uVar1 = *puVar2;
        float fVar6 = (float)ceil((float)(arg2 - uVar1) * 0.015625f);
        unsigned int uVar4 = arg2 - uVar1 & 63;
        ReturnValue RVar3 = (ReturnValue)(~(-1L << ((uint8_t)uVar1 & 63)) << ((uint8_t)arg1 & 63));
        if (uVar1 == 64) {
            RVar3 = (ReturnValue)18446744073709551615;
        }
        ReturnValue RVar5 = (ReturnValue) ~(-1L << (int8_t)uVar4);
        if (uVar4 == 0) {
            RVar5 = (ReturnValue) - (unsigned long)((int)fVar6 != 0);
        }
        auto result = RVar3;
        &result[1] = RVar5;
        *(int*)(&result + 2) = (int)fVar6;
        return result;
    }

    // 0x100bbca60
    unsigned long TextureAtlasSlotPacker::SlotUsageBitmap::TestRow(unsigned int arg1, unsigned int arg2,
                                                                   unsigned int arg3, unsigned long long arg4,
                                                                   unsigned long long arg5) const {
        int iVar1;
        unsigned long long* arg1_00;
        unsigned long long* puVar2;
        unsigned long long* puVar3;
        unsigned long long* arg2_00;
        unsigned long uVar4;

        if (arg1 + arg3 < field_4) {
            arg1_00 = &field_8[(unsigned long)(field_4 * arg2 + arg1)];
            if ((arg4 & ~*arg1_00) == 0) {
                puVar2 = &field_8[(unsigned long)(arg2 * field_4 + arg3)];
                arg2_00 = arg1_00;
                do {
                    arg2_00 = arg2_00 + 1;
                    puVar3 = puVar2;
                    if (puVar2 <= arg2_00)
                        goto LAB_100bbcb08;
                } while (*arg2_00 == 18446744073709551615);
                iVar1 = std::distance<unsigned long long const*>(arg1_00, arg2_00);
                puVar3 = (unsigned long long*)(unsigned long)(iVar1 + arg1);
            LAB_100bbcb08:
                if (arg2_00 < puVar2) {
                    uVar4 = 0;
                } else {
                    if (arg5 == 0) {
                        uVar4 = 1;
                    } else {
                        uVar4 = (unsigned long)((arg5 & ~*arg2_00) == 0);
                    }
                    iVar1 = std::distance<unsigned long long const*>(arg1_00, arg2_00);
                    puVar3 = (unsigned long long*)(unsigned long)(iVar1 + arg1);
                }
                goto LAB_100bbcb1c;
            }
        }
        uVar4 = 0;
        puVar3 = (unsigned long long*)(unsigned long)(arg1 + 1);
    LAB_100bbcb1c:
        return (long)puVar3 << 32 | uVar4;
    }

    // 0x100bbcb70
    void TextureAtlasSlotPacker::SlotUsageBitmap::SetBits(unsigned int arg1, unsigned int arg2, unsigned int arg3,
                                                          bool arg4) {
        uint32_t uVar1;
        unsigned long uVar2;
        unsigned long* puVar3;
        unsigned long* puVar4;
        uint32_t in_register_0000000c;
        uint32_t in_register_00000014;
        uint32_t in_register_00000034;
        uint32_t in_register_00000081;
        int iVar5;
        int iVar6;
        ReturnValue local_88;
        unsigned long local_80;
        int local_78;
        ReturnValue local_70;
        unsigned long local_68;
        vector<unsigned long long>* local_60;
        uint32_t local_50;
        int local_4c;

        unsigned long local_38 = (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        uint64_t local_58 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        uint64_t local_40 = (((uint64_t)in_register_0000000c << 32) | (uint32_t)arg3);
        SlotUsageBitmap* local_48 = this;
        if (field_0 < arg3 + arg1) {
            LogAssert("(x + slotSize) <= m_numSlots",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.cpp",
                      131, nullptr);
        }
        if (field_0 < arg3 + arg2) {
            LogAssert("(y + slotSize) <= m_numSlots",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.cpp",
                      132, nullptr);
        }
        GetSlotMasks(&local_88, arg1 & 63, arg3);
        if (!arg4) {
            local_80 = ~local_80;
            local_88 = (ReturnValue) ~(unsigned long)local_88;
        }
        if ((int)local_40 != 0) {
            local_38 = local_38 >> 6 & 67108863;
            local_60 = (vector<unsigned long long>*)&local_48->field_8;
            local_70 = local_88;
            local_68 = local_80;
            local_4c = local_78;
            iVar6 = 0;
            local_50 = (((uint32_t)in_register_00000081 << 8) | (uint8_t)arg4);
            do {
                uVar1 = local_50;
                iVar5 = iVar6 + (int)local_58;
                puVar3 = (unsigned long*)(*local_60)[(unsigned long)(local_48->field_4 * iVar5 + (int)local_38)];
                uVar2 = *puVar3 | (unsigned long)local_70;
                if ((char)uVar1 == '\0') {
                    uVar2 = *puVar3 & (unsigned long)local_70;
                }
                *puVar3 = uVar2;
                puVar4 = (unsigned long*)(*local_60)[(unsigned long)(iVar5 * local_48->field_4 + local_4c)];
                while (puVar3 = puVar3 + 1, puVar3 < puVar4) {
                    *puVar3 = -(unsigned long)arg4;
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

    // 0x100bbcd30
    TextureAtlasSlotPacker::TextureAtlasSlotPacker(const TextureAtlasQuality& textureAtlasQuality,
                                                   const TextureAtlasUsage* textureAtlasUsage, bool arg3) {
        field_32 = *(uint32_t*)(textureAtlasQuality + 32);
        uint64_t uVar2 = *(uint64_t*)textureAtlasQuality;
        uint64_t uVar3 = *(uint64_t*)(textureAtlasQuality + 8);
        uint64_t uVar4 = *(uint64_t*)(textureAtlasQuality + 24);
        field_16 = *(uint64_t*)(textureAtlasQuality + 16);
        field_24 = uVar4;
        *(uint64_t*)this = uVar2;
        field_8 = uVar3;
        int iVar1 = *(int*)(textureAtlasQuality + 4);
        m_atlasSlotCount = iVar1;
        m_totalSlots = iVar1 * iVar1;
        m_pAtlasUsage = textureAtlasUsage;
        field_56 = arg3;
        new (&field_64) eastl::vector<TextureAtlasSlot>();
        new (&field_96) SlotUsageBitmap(*(unsigned int*)(textureAtlasQuality + 4));
        field_136 = 0;
        field_140 = 0;
        field_144 = 0;
        unsigned int uVar5 = field_0 * m_atlasSlotCount;
        m_atlasPixelResolution = uVar5;
        uVar5 = math::RoundUpToPowerOf2(uVar5);
        m_atlasPixelResolution = uVar5;
        field_64.reserve(512);
    }

    // 0x100bbce70
    void TextureAtlasSlotPacker::AddAtlasSlotData(bool arg1, unsigned int arg2, unsigned int arg3,
                                                  const TextureAtlasSlot2D& textureAtlasSlot2D) {
        unsigned int uVar1;
        uint64_t in_register_00000031;
        uint8_t local_48[20];

        local_48._16_4_ = (uint32_t)((((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1));
        unsigned int local_34 = arg2;
        if (65535 < arg3) {
            LogAssert("textureSize <= std::numeric_limits<uint16>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.cpp",
                      245, nullptr);
        }
        auto puVar2 = GetAtlasSlot((unsigned int)(unsigned short)textureAtlasSlot2D.field_0,
                                   (unsigned int)(unsigned short)textureAtlasSlot2D.field_2, false);
        auto puVar3 = field_64.end();
        if (puVar2 == puVar3) {
            uVar1 = GetTextureSlotSize(arg3);
            field_96.MarkBitsUsed((unsigned int)(unsigned short)textureAtlasSlot2D.field_0,
                                  (unsigned int)(unsigned short)textureAtlasSlot2D.field_2, uVar1);
            local_48._0_4_ = local_34;
            local_48[6] = local_48[16];
            local_48._8_2_ = textureAtlasSlot2D.field_0;
            local_48._10_2_ = textureAtlasSlot2D.field_2;
            local_48._4_2_ = (short)arg3;
            field_64.push_back(*local_48);
        } else {
            if (*puVar2 != local_34) {
                LogAssert("textureID == (uint)existing->m_textureID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                          "textureatlas/TextureAtlasSlotPacker.cpp",
                          262, nullptr);
            }
            if ((unsigned short)puVar2[1] != arg3) {
                if ((unsigned short)puVar2[1] <= arg3) {
                    LogAssert("existing->m_sizePixels > textureSize",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                              "graphicutils/textureatlas/TextureAtlasSlotPacker.cpp",
                              267, nullptr);
                }
                uVar1 = GetTextureSlotSize((unsigned int)(unsigned short)puVar2[1]);
                local_34 = GetTextureSlotSize(arg3);
                field_96.MarkBitsUnused((unsigned int)(unsigned short)textureAtlasSlot2D.field_0,
                                        (unsigned int)(unsigned short)textureAtlasSlot2D.field_2, uVar1);
                field_96.MarkBitsUsed((unsigned int)(unsigned short)textureAtlasSlot2D.field_0,
                                      (unsigned int)(unsigned short)textureAtlasSlot2D.field_2, local_34);
                *(short*)(puVar2 + 1) = (short)arg3;
            }
            *(char*)((long)puVar2 + 6) = local_48[16];
        }
    }

    // 0x100bbd000
    void TextureAtlasSlotPacker::GetAtlasSlot(unsigned int arg1, unsigned int arg2, bool arg3) {
        TextureAtlasSlot* textureAtlasSlot1;
        TextureAtlasSlot* textureAtlasSlot2;

        if (65535 < arg1) {
            LogAssert("slotX <= 0xFFFFu",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.cpp",
                      428, nullptr);
        }
        if (65535 < arg2) {
            LogAssert("slotY <= 0xFFFFu",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.cpp",
                      429, nullptr);
        }
        textureAtlasSlot1 = (TextureAtlasSlot*)field_64.HeapBeginPtr();
        textureAtlasSlot2 = (TextureAtlasSlot*)field_64.end();
        if (arg3) {
            eastl::find_if<TextureAtlasSlot*, unsigned int->GetAtlasSlot(unsigned int, bool)::__4>(
                textureAtlasSlot1, textureAtlasSlot2, (__4*)(((uint64_t)arg2 << 32) | (uint32_t)arg1));
        } else {
            eastl::find_if<TextureAtlasSlot*, unsigned int->GetAtlasSlot(unsigned int, bool)::__5>(
                textureAtlasSlot1, textureAtlasSlot2, (__5*)(((uint64_t)arg2 << 32) | (uint32_t)arg1));
        }
    }

    // 0x100bbd170
    TextureAtlasSlotPacker* TextureAtlasSlotPacker::AllocSlot2D(unsigned int arg1) {
        unsigned int uVar1;
        int iVar2;
        unsigned long uVar3;
        unsigned int in_EDX;
        uint32_t in_register_00000034;
        unsigned int arg1_00;
        unsigned int uVar4;

        TextureAtlasSlotPacker* this_00 =
            (TextureAtlasSlotPacker*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        if (65535 < in_EDX) {
            LogAssert("textureSize <= std::numeric_limits<uint16>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.cpp",
                      285, nullptr);
        }
        unsigned int arg2 = 0;
        unsigned long uVar5 = 0;
        if (this_00->field_136 == in_EDX) {
            uVar5 = (unsigned long)this_00->field_140;
            arg2 = this_00->field_144;
        }
        unsigned int arg3 = GetTextureSlotSize(this_00, in_EDX);
        if (arg2 < this_00->m_atlasSlotCount - arg3) {
        LAB_100bbd27a:
            do {
                arg1_00 = (unsigned int)uVar5;
                uVar1 = this_00->m_atlasSlotCount;
                if (arg1_00 < uVar1) {
                    uVar3 = this_00->field_96.TestRegion(arg1_00, arg2, arg3);
                    uVar4 = (unsigned int)(uVar3 >> 32);
                    if ((uVar3 & 1) == 0) {
                        if (arg1_00 == uVar4) {
                            LogAssert("slotX != testSlotX",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "graphicutils/textureatlas/TextureAtlasSlotPacker.cpp",
                                      324, nullptr);
                        }
                        uVar5 = uVar3 >> 32;
                        if (uVar4 <= arg1_00) {
                            LogAssert("slotX < testSlotX",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "graphicutils/textureatlas/TextureAtlasSlotPacker.cpp",
                                      325, nullptr);
                        }
                    } else {
                        this_00->field_136 = in_EDX;
                        this_00->field_140 = uVar4;
                        this_00->field_144 = arg2;
                        new (this) graphics::GUIAnimationRGB((short)(uVar3 >> 32), (short)arg2, (short)in_EDX);
                    }
                    if ((uVar3 & 1) == 0)
                        goto LAB_100bbd27a;
                    iVar2 = 1;
                } else {
                    iVar2 = 5;
                }
                if (arg1_00 < uVar1)
                    goto LAB_100bbd315;
                arg2 = arg2 + 1;
                uVar5 = 0;
            } while (arg2 < this_00->m_atlasSlotCount - arg3);
        }
        iVar2 = 2;
    LAB_100bbd315:
        if (iVar2 == 2) {
            new (this) TextureAtlasSlot2D();
        }
        return this;
    }

    // 0x100bbd350
    auto TextureAtlasSlotPacker::AllocSlot2D(unsigned int arg1, unsigned int arg2) {
        auto result;
        AllocSlot2D(&result, (unsigned int)this);
        if (result.IsValid() != '\0') {
            AddAtlasSlotData(true, arg2, (unsigned int)*(unsigned short*)&result.field_4, result);
        }
        return result;
    }

    // 0x100bbd3c0
    void TextureAtlasSlotPacker::FreeSlot2D(const TextureAtlasSlot2D& textureAtlasSlot2D) {
        unsigned short uVar1;
        TextureAtlasSlot* textureAtlasSlot;

        unsigned int arg3 = GetTextureSlotSize((unsigned int)(unsigned short)textureAtlasSlot2D.field_4);
        textureAtlasSlot =
            (TextureAtlasSlot*)GetAtlasSlot((unsigned int)(unsigned short)textureAtlasSlot2D.field_0,
                                            (unsigned int)(unsigned short)textureAtlasSlot2D.field_2, false);
        auto pTVar2 = field_64.end();
        if (textureAtlasSlot == pTVar2) {
            LogAssert("slotIt != m_textureSlots.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.cpp",
                      356, nullptr);
        }
        if (textureAtlasSlot->field_4 != textureAtlasSlot2D.field_4) {
            LogAssert("slotIt->m_sizePixels == slot.m_sizeInPixels",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.cpp",
                      357, nullptr);
        }
        field_64.erase(textureAtlasSlot);
        field_96.MarkBitsUnused((unsigned int)(unsigned short)textureAtlasSlot2D.field_0,
                                (unsigned int)(unsigned short)textureAtlasSlot2D.field_2, arg3);
        if (field_136 == (unsigned int)(unsigned short)textureAtlasSlot2D.field_4) {
            uVar1 = textureAtlasSlot2D.field_2;
            if (m_atlasSlotCount * (unsigned int)uVar1 + (unsigned int)(unsigned short)textureAtlasSlot2D.field_0 <
                m_atlasSlotCount * field_144 + field_140) {
                field_140 = (unsigned int)(unsigned short)textureAtlasSlot2D.field_0;
                field_144 = (unsigned int)uVar1;
                return;
            }
        }
        ClearLastCheckedValues();
    }

    // 0x100bbd540
    void TextureAtlasSlotPacker::FlushProvisionalSlots(
        fixedfunction::function<void(TextureAtlasSlot const&), 64ul, 16ul, (fixedfunction::Methods)0> const& callback) {
        uint8_t* this_00 = &field_64;
        auto pTVar1 = this_00->HeapBeginPtr();
        auto pTVar2 = this_00->end();
        pTVar1 = eastl::remove_if<TextureAtlasSlot*, (fixedfunction::function<void(TextureAtlasSlot const&), 64ul, 16ul,
                                                                              (fixedfunction::Methods)0> const&)
                                                         ->FlushProvisionalSlots()::__1>(pTVar1, pTVar2, (__1*)this);
        pTVar2 = (TextureAtlasSlot*)this_00->end();
        this_00->erase(pTVar1, pTVar2);
    }

    // 0x100bbd660
    void TextureAtlasSlotPacker::GetAtlasSlot(unsigned int arg1, unsigned int arg2, bool arg3) const {
        TextureAtlasSlot* textureAtlasSlot1;
        TextureAtlasSlot* textureAtlasSlot2;

        if (65535 < arg1) {
            LogAssert("slotX <= 0xFFFFu",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.cpp",
                      405, nullptr);
        }
        if (65535 < arg2) {
            LogAssert("slotY <= 0xFFFFu",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureAtlasSlotPacker.cpp",
                      406, nullptr);
        }
        textureAtlasSlot1 = (TextureAtlasSlot*)field_64.HeapBeginPtr();
        textureAtlasSlot2 = (TextureAtlasSlot*)field_64.end();
        if (arg3) {
            eastl::find_if<TextureAtlasSlot const*, unsigned int->GetAtlasSlot(unsigned int, bool) const ::__2>(
                textureAtlasSlot1, textureAtlasSlot2, (__2*)(((uint64_t)arg2 << 32) | (uint32_t)arg1));
        } else {
            eastl::find_if<TextureAtlasSlot const*, unsigned int->GetAtlasSlot(unsigned int, bool) const ::__3>(
                textureAtlasSlot1, textureAtlasSlot2, (__3*)(((uint64_t)arg2 << 32) | (uint32_t)arg1));
        }
    }

    // 0x100bc0970
    void
    TextureAtlasSlotPacker::GetAtlasSlot(unsigned int, unsigned int,
                                         bool) const ::$_2::operator()(const TextureAtlasSlot& textureAtlasSlot) const {
        textureAtlasSlot.OccupiesSlot(*(unsigned short*)this, *(unsigned short*)(this + 4),
                                      **(unsigned short**)(this + 8));
    }

    // 0x100bc09d0
    uint16_t
    TextureAtlasSlotPacker::GetAtlasSlot(unsigned int, unsigned int,
                                         bool) const ::$_3::operator()(const TextureAtlasSlot& textureAtlasSlot) const {
        if (textureAtlasSlot.field_8 == *(unsigned short*)this) {
            return textureAtlasSlot.field_10 == *(unsigned short*)(this + 4);
        }
        return 0;
    }

    // 0x100bc09f0
    void TextureAtlasSlotPacker::GetAtlasSlot(unsigned int, unsigned int,
                                              bool)::$_4::operator()(const TextureAtlasSlot& textureAtlasSlot) const {
        textureAtlasSlot.OccupiesSlot(*(unsigned short*)this, *(unsigned short*)(this + 4),
                                      **(unsigned short**)(this + 8));
    }

    // 0x100bc0a10
    uint16_t
    TextureAtlasSlotPacker::GetAtlasSlot(unsigned int, unsigned int,
                                         bool)::$_5::operator()(const TextureAtlasSlot& textureAtlasSlot) const {
        if (textureAtlasSlot.field_8 == *(unsigned short*)this) {
            return textureAtlasSlot.field_10 == *(unsigned short*)(this + 4);
        }
        return 0;
    }

} // namespace jag::graphicutils

// 0x100bbcd20
void ceil(float arg1) {
    _ceilf();
}

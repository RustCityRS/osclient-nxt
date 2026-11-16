// libs/image/RGBAImage.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.image

#include "RGBAImage.h"

namespace jag {
    // 0x100009d50: RGBAImage::GetMargins() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100049810: RGBAImage::GetColourData() has the same machine code as oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const

    // 0x100049810: RGBAImage::GetColourData() const has the same machine code as oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const

    // 0x100073980: RGBAImage::GetHeight() const has the same machine code as math::Rect<int>::MinY() const

    // 0x1000b9960: RGBAImage::GetWidth() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x100a0bf50
    uint64_t RGBAImage::Create(int arg1, int arg2, const void* arg3) {
        uint64_t uVar3;

        Destroy();
        if ((arg1 < 0) || (arg2 < 0)) {
            LogAssert("w >= 0 && h >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/RGBAImage.cpp", 50,
                      nullptr);
        }
        unsigned long arg1_00 = (unsigned long)(arg2 * arg1 * 4);
        uint8_t* this_00 = &field_64;
        this_00->set_max_size(arg1_00, 0);
        if (arg2 * arg1 != 0) {
            if (this_00->data() == 0) {
                uVar3 = 0;
                goto LAB_100a0c031;
            }
        }
        if (arg3 != nullptr) {
            _memcpy((void*)this_00->data(), arg3, arg1_00);
        }
        m_width = arg1;
        m_height = arg2;
        uint64_t local_48 = 0;
        uint64_t uStack_40 = 0;
        field_8 = local_48 = 4;
        uVar3 = 1;
    LAB_100a0c031:
        return uVar3;
    }

    // 0x100a0c060
    void RGBAImage::Destroy() {
        field_64.clear();
        m_width = 0;
        m_height = 0;
        uint64_t local_28 = 0;
        uint64_t uStack_20 = 0;
        field_8 = local_28 = 4;
    }

    // 0x100a0d4f0
    RGBAImage* RGBAImage::operator=(RGBAImage&& rgbaImage) {
        m_width = rgbaImage.m_width;
        m_height = rgbaImage.m_height;
        field_8 = rgbaImage.field_8;
        field_64 = rgbaImage.field_64;
        return this;
    }

    // 0x100a0d540
    RGBAImage::RGBAImage() : m_width(0), m_height(0) {}

    // 0x100a0d5a0
    RGBAImage::RGBAImage(const RGBAImage& rgbaImage)
        : m_width(rgbaImage.m_width), m_height(rgbaImage.m_height), field_8(rgbaImage.field_8),
          field_64(&rgbaImage.field_64) {}

    // 0x100a0d620
    RGBAImage::RGBAImage(RGBAImage&& rgbaImage)
        : m_width(rgbaImage.m_width), m_height(rgbaImage.m_height), field_8(rgbaImage.field_8),
          field_64(&rgbaImage.field_64) {}

    // 0x100a0d670
    RGBAImage* RGBAImage::operator=(const RGBAImage& rgbaImage) {
        m_width = rgbaImage.m_width;
        m_height = rgbaImage.m_height;
        field_8 = rgbaImage.field_8;
        field_64 = rgbaImage.field_64;
        return this;
    }

    // 0x100a0d820
    uint64_t RGBAImage::CreateFromARGB(int arg1, int arg2, const unsigned int* arg3) {
        uint8_t uVar1;
        long lVar2;
        uint8_t* puVar3;
        uint64_t uVar4;
        unsigned long arg1_00;

        Destroy();
        if ((arg1 < 0) || (arg2 < 0)) {
            LogAssert("w >= 0 && h >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/RGBAImage.cpp", 72,
                      nullptr);
        }
        int iVar5 = arg2 * arg1;
        uint8_t* this_00 = &field_64;
        this_00->set_max_size((long)(iVar5 * 4), 0);
        if (iVar5 != 0) {
            lVar2 = this_00->data();
            if (lVar2 == 0) {
                uVar4 = 0;
                goto LAB_100a0d94d;
            }
            lVar2 = (long)iVar5;
            arg1_00 = 0;
            do {
                uVar1 = *(uint8_t*)((long)arg3 + arg1_00 + 2);
                puVar3 = (uint8_t*)(*this_00)[arg1_00];
                *puVar3 = uVar1;
                uVar1 = *(uint8_t*)((long)arg3 + arg1_00 + 1);
                puVar3 = (uint8_t*)(*this_00)[arg1_00 + 1];
                *puVar3 = uVar1;
                uVar1 = *(uint8_t*)((long)arg3 + arg1_00);
                puVar3 = (uint8_t*)(*this_00)[arg1_00 + 2];
                *puVar3 = uVar1;
                uVar1 = *(uint8_t*)((long)arg3 + arg1_00 + 3);
                puVar3 = (uint8_t*)(*this_00)[arg1_00 + 3];
                *puVar3 = uVar1;
                arg1_00 = arg1_00 + 4;
                lVar2 = lVar2 - 1;
            } while (lVar2 != 0);
        }
        m_width = arg1;
        m_height = arg2;
        uint64_t local_48 = 0;
        uint64_t uStack_40 = 0;
        field_8 = local_48 = 4;
        uVar4 = 1;
    LAB_100a0d94d:
        return uVar4;
    }

    // 0x100a0d980
    void RGBAImage::Upscale(int arg1) {
        uint32_t uVar1;
        long lVar2;
        long lVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        Array<unsigned char, BucketAllocatorEASTL> local_40;

        if (arg1 != 1) {
            local_40 = Array<unsigned char, BucketAllocatorEASTL>();
            local_40.set_max_size((long)(arg1 * arg1 * m_width * m_height * 4), 0);
            local_40.swap(field_64);
            lVar2 = local_40.data();
            lVar3 = field_64.data();
            iVar5 = m_height;
            if (0 < iVar5) {
                iVar6 = 0;
                iVar7 = 0;
                do {
                    iVar5 = m_width;
                    if (0 < iVar5) {
                        iVar9 = 0;
                        do {
                            if (0 < arg1) {
                                uVar1 = *(uint32_t*)(lVar2 + (long)(iVar5 * iVar7 + iVar9) * 4);
                                iVar8 = 0;
                                iVar5 = iVar6;
                                do {
                                    if (0 < arg1) {
                                        iVar4 = 0;
                                        do {
                                            *(uint32_t*)(lVar3 + (long)((m_width * iVar5 + iVar9) * arg1 + iVar4) * 4) =
                                                uVar1;
                                            iVar4 = iVar4 + 1;
                                        } while (arg1 != iVar4);
                                    }
                                    iVar8 = iVar8 + 1;
                                    iVar5 = iVar5 + 1;
                                } while (iVar8 != arg1);
                            }
                            iVar9 = iVar9 + 1;
                            iVar5 = m_width;
                        } while (iVar9 < iVar5);
                    }
                    iVar7 = iVar7 + 1;
                    iVar5 = m_height;
                    iVar6 = iVar6 + arg1;
                } while (iVar7 < iVar5);
            }
            m_width = arg1 * m_width;
            m_height = iVar5 * arg1;
        }
    }

    // 0x100a0dad0
    auto RGBAImage::PadImage(int arg1, bool arg2) const {
        auto result;
        uint32_t uVar1;
        uint32_t uVar2;
        uint32_t uVar3;
        uint32_t uVar4;
        long lVar7;
        long lVar8;
        unsigned long uVar9;
        uint32_t* puVar10;
        int iVar12;
        int iVar14;
        long lVar15;
        long lVar16;
        int iVar17;
        int iVar18;
        uint32_t* puVar19;
        long lVar20;
        unsigned long uVar21;
        unsigned long uVar22;

        unsigned long uVar23 = (unsigned long)(unsigned int)arg1;
        if (arg1 < 1) {
            LogAssert("padding > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/image/RGBAImage.cpp", 138,
                      nullptr);
        }
        RGBAImage(&result);
        int iVar6 = m_width;
        int iVar11 = m_height;
        int iVar13 = iVar6 + arg1 * 2;
        int arg2_00 = iVar11 + arg1 * 2;
        if (Create(&result, iVar13, arg2_00, nullptr) != '\0') {
            SetMargins(&result, (fixed_vector<int, _4ul>*)&field_8, 0);
            lVar7 = (result.GetDevCredentialsOutputDirectory())->data();
            lVar8 = field_64.data();
            lVar20 = (long)iVar13;
            if (0 < m_width) {
                puVar19 = (uint32_t*)(lVar7 + (lVar20 + 1) * (long)arg1 * 4);
                iVar14 = 0;
                do {
                    if (0 < m_height) {
                        iVar17 = 0;
                        puVar10 = puVar19;
                        do {
                            *puVar10 = *(uint32_t*)(lVar8 + (long)(m_width * iVar17 + iVar14) * 4);
                            iVar17 = iVar17 + 1;
                            puVar10 = puVar10 + lVar20;
                        } while (iVar17 < m_height);
                    }
                    iVar14 = iVar14 + 1;
                    puVar19 = puVar19 + 1;
                } while (iVar14 < m_width);
            }
            if (arg2) {
                if (0 < arg1) {
                    iVar13 = iVar6 + arg1 * 2;
                    iVar17 = (iVar6 + arg1 * 2 + 1) * arg1;
                    puVar19 = (uint32_t*)(lVar7 + arg1 * lVar20 * 4);
                    iVar14 = 0;
                    uVar21 = 0;
                    uVar22 = uVar23;
                    do {
                        if (0 < m_width) {
                            lVar8 = 0;
                            uVar9 = uVar23;
                            do {
                                iVar12 = (int)uVar9;
                                *(uint32_t*)(lVar7 + (long)(iVar14 + iVar12) * 4) = 0;
                                *(uint32_t*)(lVar7 + (long)((m_height + (int)uVar22) * iVar13 + iVar12) * 4) = 0;
                                lVar8 = lVar8 + 1;
                                uVar9 = (unsigned long)(iVar12 + 1);
                            } while (lVar8 < m_width);
                        }
                        if (0 < m_height) {
                            lVar8 = 0;
                            puVar10 = puVar19;
                            iVar12 = iVar17;
                            do {
                                *puVar10 = 0;
                                *(uint32_t*)(lVar7 + (long)(m_width + iVar12) * 4) = 0;
                                lVar8 = lVar8 + 1;
                                iVar12 = iVar12 + iVar13;
                                puVar10 = puVar10 + lVar20;
                            } while (lVar8 < m_height);
                        }
                        uVar21 = uVar21 + 1;
                        uVar22 = (unsigned long)((int)uVar22 + 1);
                        iVar14 = iVar14 + iVar13;
                        iVar17 = iVar17 + 1;
                        puVar19 = puVar19 + 1;
                    } while (uVar21 != uVar23);
                    if (0 < arg1) {
                        iVar13 = iVar6 + arg1 * 2;
                        iVar11 = (iVar11 + arg1 * 2) * iVar13 - arg1;
                        lVar8 = lVar7 + ((long)arg2_00 - 1) * lVar20 * 4;
                        iVar6 = iVar6 + arg1;
                        uVar22 = 0;
                        lVar16 = lVar7;
                        do {
                            uVar22 = uVar22 + 1;
                            uVar21 = 0;
                            do {
                                *(uint32_t*)(lVar16 + uVar21 * 4) = 0;
                                *(uint32_t*)(lVar7 + (long)iVar6 * 4 + uVar21 * 4) = 0;
                                *(uint32_t*)(lVar8 + uVar21 * 4) = 0;
                                *(uint32_t*)(lVar7 + (long)iVar11 * 4 + uVar21 * 4) = 0;
                                uVar21 = uVar21 + 1;
                            } while (uVar23 != uVar21);
                            iVar11 = iVar11 - iVar13;
                            lVar8 = lVar8 + lVar20 * -4;
                            iVar6 = iVar6 + iVar13;
                            lVar16 = lVar16 + lVar20 * 4;
                        } while (uVar22 != uVar23);
                    }
                }
            } else {
                if (0 < arg1) {
                    iVar12 = iVar6 + arg1 * 2;
                    iVar14 = (iVar6 + arg1 * 2 + 1) * arg1;
                    lVar8 = lVar7 + arg1 * lVar20 * 4;
                    iVar17 = 0;
                    uVar21 = 0;
                    uVar22 = uVar23;
                    do {
                        if (0 < m_width) {
                            lVar16 = 0;
                            iVar18 = arg1;
                            do {
                                *(uint32_t*)(lVar7 + (long)(iVar17 + iVar18) * 4) =
                                    *(uint32_t*)(lVar7 + (long)(iVar14 + (int)lVar16) * 4);
                                *(uint32_t*)(lVar7 + (long)((m_height + (int)uVar22) * iVar12 + iVar18) * 4) =
                                    *(uint32_t*)(lVar7 + (long)((m_height + arg1 - 1) * iVar13 + iVar18) * 4);
                                lVar16 = lVar16 + 1;
                                iVar18 = iVar18 + 1;
                            } while (lVar16 < m_width);
                        }
                        if (0 < m_height) {
                            lVar16 = 0;
                            lVar15 = 0;
                            iVar18 = iVar14;
                            do {
                                *(uint32_t*)(lVar8 + lVar16 * 4) =
                                    *(uint32_t*)(lVar7 + (lVar20 + 1) * (long)arg1 * 4 + lVar16 * 4);
                                *(uint32_t*)(lVar7 + ((long)(iVar18 + m_width) + uVar21) * 4) =
                                    *(uint32_t*)(lVar7 + (long)(m_width + iVar18 - 1) * 4);
                                lVar15 = lVar15 + 1;
                                lVar16 = lVar16 + lVar20;
                                iVar18 = iVar18 + iVar12;
                            } while (lVar15 < m_height);
                        }
                        uVar21 = uVar21 + 1;
                        uVar22 = (unsigned long)((int)uVar22 + 1);
                        iVar17 = iVar17 + iVar12;
                        lVar8 = lVar8 + 4;
                    } while (uVar21 != uVar23);
                }
                if (0 < arg1) {
                    iVar14 = iVar13 * arg1 + arg1;
                    iVar13 = (arg1 + m_height - 1) * iVar13 + arg1;
                    uVar1 = *(uint32_t*)(lVar7 + (long)iVar14 * 4);
                    uVar2 = *(uint32_t*)(lVar7 + (long)(iVar14 + m_width - 1) * 4);
                    uVar3 = *(uint32_t*)(lVar7 + (long)iVar13 * 4);
                    uVar4 = *(uint32_t*)(lVar7 + (long)(m_width - 1 + iVar13) * 4);
                    iVar13 = iVar6 + arg1 * 2;
                    iVar11 = (iVar11 + arg1 * 2) * iVar13 - arg1;
                    lVar8 = lVar7 + ((long)arg2_00 - 1) * lVar20 * 4;
                    iVar6 = iVar6 + arg1;
                    uVar22 = 0;
                    lVar16 = lVar7;
                    do {
                        uVar22 = uVar22 + 1;
                        uVar21 = 0;
                        do {
                            *(uint32_t*)(lVar16 + uVar21 * 4) = uVar1;
                            *(uint32_t*)(lVar7 + (long)iVar6 * 4 + uVar21 * 4) = uVar2;
                            *(uint32_t*)(lVar8 + uVar21 * 4) = uVar3;
                            *(uint32_t*)(lVar7 + (long)iVar11 * 4 + uVar21 * 4) = uVar4;
                            uVar21 = uVar21 + 1;
                        } while (uVar23 != uVar21);
                        iVar11 = iVar11 - iVar13;
                        lVar8 = lVar8 + lVar20 * -4;
                        iVar6 = iVar6 + iVar13;
                        lVar16 = lVar16 + lVar20 * 4;
                    } while (uVar22 != uVar23);
                }
            }
        }
        return result;
    }

    // 0x100a0e0a0
    auto RGBAImage::AddOutline(unsigned int arg1) {
        auto result;
        int iVar2;
        int iVar3;
        char* pcVar4;
        uint8_t* puVar5;
        unsigned long arg1_00;
        long lVar6;
        long lVar7;
        int local_94;
        RGBAImage local_90;

        PadImage(&result, this, 1, true);
        auto this_00 = result.GetDevCredentialsOutputDirectory();
        RGBAImage(&local_90, &result);
        auto this_01 = local_90.GetDevCredentialsOutputDirectory();
        int iVar1 = result.GetZ();
        if (0 < iVar1) {
            local_94 = 0;
            iVar1 = 0;
            do {
                iVar2 = result.GetX();
                if (0 < iVar2) {
                    lVar6 = (long)iVar1;
                    lVar7 = 0;
                    iVar2 = 0;
                    do {
                        arg1_00 = lVar6 + lVar7 + 3;
                        pcVar4 = (char*)(*this_01)[arg1_00];
                        if (*pcVar4 != '\0')
                            goto LAB_100a0e1c0;
                        if ((iVar2 == 0) || (pcVar4 = (char*)(*this_01)[(lVar6 + lVar7) - 1], *pcVar4 == '\0')) {
                            if (local_94 != 0) {
                                iVar3 = result.GetX();
                                pcVar4 = (char*)(*this_01)[(long)(iVar1 + (int)lVar7 + iVar3 * -4 + 3)];
                                if (*pcVar4 != '\0')
                                    goto LAB_100a0e2c0;
                            }
                            iVar3 = result.GetX();
                            if ((iVar2 < iVar3 - 1) && (pcVar4 = (char*)(*this_01)[lVar6 + lVar7 + 7], *pcVar4 != '\0'))
                                goto LAB_100a0e2c0;
                            iVar3 = result.GetZ();
                            if (local_94 < iVar3 - 1) {
                                iVar3 = result.GetX();
                                pcVar4 = (char*)(*this_01)[(long)(iVar1 + (int)lVar7 + 3 + iVar3 * 4)];
                                if (*pcVar4 != '\0')
                                    goto LAB_100a0e2c0;
                            }
                        } else {
                        LAB_100a0e2c0:
                            puVar5 = (uint8_t*)(*this_00)[lVar6 + lVar7];
                            *puVar5 = (char)(arg1 >> 24);
                            puVar5 = (uint8_t*)(*this_00)[lVar6 + lVar7 + 1];
                            *puVar5 = (char)(arg1 >> 16);
                            puVar5 = (uint8_t*)(*this_00)[lVar6 + lVar7 + 2];
                            *puVar5 = (char)(arg1 >> 8);
                            puVar5 = (uint8_t*)(*this_00)[arg1_00];
                            *puVar5 = (char)arg1;
                        }
                    LAB_100a0e1c0:
                        iVar2 = iVar2 + 1;
                        iVar3 = result.GetX();
                        lVar7 = lVar7 + 4;
                    } while (iVar2 < iVar3);
                    iVar1 = iVar1 + (int)lVar7;
                }
                local_94 = local_94 + 1;
                iVar2 = result.GetZ();
            } while (local_94 < iVar2);
        }
        ~RGBAImage(&local_90);
        return result;
    }

    // 0x100a0e390
    auto RGBAImage::AddShadow(unsigned int arg1) {
        auto result;
        int iVar1;
        int iVar2;
        char* pcVar3;
        uint8_t* puVar4;
        unsigned long arg1_00;

        PadImage(&result, this, 1, true);
        auto this_00 = result.GetDevCredentialsOutputDirectory();
        int local_38 = result.GetZ();
        local_38 = local_38 - 1;
        if (local_38 != 0) {
            do {
                iVar1 = result.GetX();
                while (iVar1 = iVar1 - 1, iVar1 != 0) {
                    iVar2 = result.GetX();
                    arg1_00 = (unsigned long)(unsigned int)((iVar2 * local_38 + iVar1) * 4);
                    pcVar3 = (char*)(*this_00)[arg1_00 + 3];
                    if (*pcVar3 == '\0') {
                        iVar2 = result.GetX();
                        pcVar3 = (char*)(*this_00)[(arg1_00 - (long)(iVar2 << 2)) - 4 | 3];
                        if (*pcVar3 != '\0') {
                            puVar4 = (uint8_t*)(*this_00)[arg1_00];
                            *puVar4 = (char)(arg1 >> 24);
                            puVar4 = (uint8_t*)(*this_00)[arg1_00 | 1];
                            *puVar4 = (char)(arg1 >> 16);
                            puVar4 = (uint8_t*)(*this_00)[arg1_00 | 2];
                            *puVar4 = (char)(arg1 >> 8);
                            puVar4 = (uint8_t*)(*this_00)[arg1_00 + 3];
                            *puVar4 = (char)arg1;
                        }
                    }
                }
                local_38 = local_38 - 1;
            } while (local_38 != 0);
        }
        return result;
    }

    // 0x100a0e4f0
    void RGBAImage::FlipVertical() {
        uint8_t* this_00;
        long lVar1;
        long lVar2;
        long lVar3;
        int iVar4;
        long lVar5;
        long lVar6;
        long lVar7;
        int local_38;

        int iVar8 = m_height;
        if (1 < iVar8) {
            lVar5 = (long)m_width * 4;
            this_00 = &field_64;
            iVar4 = -1;
            lVar7 = 0;
            lVar6 = 0;
            do {
                local_38 = (int)lVar5;
                lVar1 = this_00->data();
                lVar2 = this_00->data();
                lVar3 = this_00->data();
                eastl::swap_ranges<unsigned char*, unsigned char*>(
                    (lVar1 + lVar7), (lVar2 + lVar5 + lVar7), (unsigned char*)((iVar8 + iVar4) * local_38 + lVar3));
                lVar6 = lVar6 + 1;
                iVar8 = m_height;
                iVar4 = iVar4 - 1;
                lVar7 = lVar7 + lVar5;
            } while (lVar6 < iVar8 / 2);
        }
    }

    // 0x100a0e610
    void RGBAImage::FlipHorizontal() {
        int iVar1;
        uint32_t uVar2;
        int iVar4;
        uint32_t* puVar5;
        uint32_t* puVar6;
        bool bVar7;

        long lVar3 = field_64.data();
        if (0 < m_height) {
            iVar4 = 0;
            do {
                iVar1 = m_width;
                if (1 < (long)iVar1) {
                    puVar5 = (uint32_t*)(lVar3 + (long)(iVar1 * iVar4) * 4 + (long)iVar1 * 4 - 4);
                    puVar6 = (uint32_t*)(lVar3 + 4 + (long)(iVar1 * iVar4) * 4);
                    do {
                        uVar2 = puVar6[-1];
                        puVar6[-1] = *puVar5;
                        *puVar5 = uVar2;
                        puVar5 = puVar5 - 1;
                        bVar7 = puVar6 < puVar5;
                        puVar6 = puVar6 + 1;
                    } while (bVar7);
                }
                iVar4 = iVar4 + 1;
            } while (iVar4 < m_height);
        }
    }

} // namespace jag

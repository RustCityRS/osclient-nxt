// libs/graphics/runetek7/fonts/emoji/EmojiRegistry.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "EmojiRegistry.h"

namespace jag {
    // 0x1000602b0: the linker folded this into oldscape::widgets::ScrollBarWidget::ThumbIsVisible() const, which has identical code
    EmojiRegistry::GetAutoChatLine() const;

    // 0x1000e53d0: the linker folded this into oldscape::rs2lib::CoordMapSquare::CoordMapSquare(int, int), which has identical code
    EmojiRegistry::SpriteAndIndex::SpriteAndIndex(int, int);

    // 0x10012cae0: the linker folded this into oldscape::sidebars::SideBarData::SideBarData(int, int), which has identical code
    EmojiRegistry::SpriteAndIndex::SpriteAndIndex(int, int);

    // 0x1008ea7d0, 112 bytes, base-object constructor, placed by class name and debug map
    // EmojiRegistry::EmojiRegistry()
    void EmojiRegistry::EmojiRegistry() {
        new (this) eastl::vector_map<
            eastl::string, EmojiRegistry::SpriteAndIndex, eastl::less<eastl::string>, eastl::allocator,
            eastl::vector<eastl::pair<eastl::string, EmojiRegistry::SpriteAndIndex>, eastl::allocator>>();
        new (&field_40) eastl::string();
        field_72 = 2147483647;
        field_76 = 0;
        reserve(10);
    }

    // 0x1008ea8a0, 16 bytes, complete-object constructor, placed by class name and debug map
    // EmojiRegistry::EmojiRegistry(): jumps straight to the base-object constructor

    // 0x1008ea8b0, 192 bytes, placed by class name and debug map
    // EmojiRegistry::Add(eastl::string const&, int, int)
    ulong EmojiRegistry::Add(basic_string* param_1, int param_2, int param_3) {
        char cVar1;
        ulong uVar2;
        char* pcVar3;
        ulong uVar4;
        eastl local_60[40];
        undefined1 local_38[8];

        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            uVar2 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            uVar4 = 0;
            if (uVar2 < 11) {
                pcVar3 = (char*)eastl::string::operator[]((eastl::string*)param_1, 0);
                cVar1 = IsEmojiPrefix(*pcVar3);
                if (cVar1 != '\0') {
                    new (local_38) oldscape::sidebars::SideBarData(param_2, param_3);
                    eastl::make_pair<eastl::stringconst&, EmojiRegistry::SpriteAndIndex>(local_60, param_1,
                                                                                         (SpriteAndIndex*)local_38);
                    eastl::vector_map<
                        eastl::string, EmojiRegistry::SpriteAndIndex, eastl::less<eastl::string>, eastl::allocator,
                        eastl::vector<eastl::pair<eastl::string, EmojiRegistry::SpriteAndIndex>, eastl::allocator>>::
                        insert<eastl::pair<eastl::string, EmojiRegistry::SpriteAndIndex>, void>(
                            (vector_map<eastl::string, EmojiRegistry::SpriteAndIndex, eastl::less<eastl::string>,
                                        eastl::allocator,
                                        eastl::vector<eastl::pair<eastl::string, EmojiRegistry::SpriteAndIndex>,
                                                      eastl::allocator>>*)this,
                            (pair*)local_60);
                    local_60->~hash_node();
                    UpdatePrefixes(this);
                    uVar4 = CONCAT71((int7)((ulong)local_38 >> 8), 1);
                }
            }
        } else {
            uVar4 = 0;
        }
        return uVar4 & 4294967295;
    }

    // 0x1008eaad0, 192 bytes, placed by class name and debug map
    // EmojiRegistry::UpdatePrefixes()
    void EmojiRegistry::UpdatePrefixes() {
        char* pcVar1;
        long lVar2;
        undefined4 in_EAX;
        int iVar3;
        undefined4 in_register_00000004;
        eastl::string* pbVar4;
        eastl::string* this_00;
        undefined8 uStack_38;

        uStack_38 = CONCAT44(in_register_00000004, in_EAX);
        field_72 = 2147483647;
        eastl::string::clear();
        this_00 = (eastl::string*)HeapBeginPtr();
        pbVar4 = (eastl::string*)end();
        if (this_00 != pbVar4) {
            do {
                iVar3 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                if (iVar3 < field_72) {
                    field_72 = iVar3;
                }
                pcVar1 = (char*)eastl::string::operator[](this_00, 0);
                uStack_38 = CONCAT17(*pcVar1, (undefined7)uStack_38);
                lVar2 = (&field_40, *pcVar1, 0)->find();
                if (lVar2 == -1) {
                    (&field_40, (char*)((long)&uStack_38 + 7), 1)->append();
                }
                this_00 = this_00 + 40;
            } while (this_00 != pbVar4);
        }
    }

    // 0x1008eab90, 32 bytes, placed by class name and debug map
    // EmojiRegistry::Remove(eastl::string const&)
    void EmojiRegistry::Remove(basic_string* param_1) {
        erase(param_1);
        UpdatePrefixes(this);
    }

    // 0x1008eabf0, 32 bytes, placed by class name and debug map
    // EmojiRegistry::RemoveAll()
    void EmojiRegistry::RemoveAll() {
        clear();
        UpdatePrefixes(this);
    }

} // namespace jag

namespace jag::math {
    // 0x1008ec3b0, 320 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>& Matrix44OrthographicLH<float>(Matrix44T<float>&, float, float, float, float, float, float, MATRIX_PROJECTION_RANGE)
    Matrix44T* Matrix44OrthographicLH<float>(float param_2, float param_3, float param_4, float param_5, float param_6,
                                             float param_7, Matrix44T* param_1, int param_8) {
        float fVar1;
        float fVar2;
        float fVar3;

        if (param_8 == 0) {
            fVar3 = 1.0 / (param_7 - param_6);
            fVar1 = (param_3 + param_2) / (param_2 - param_3);
            fVar2 = (param_5 + param_4) / (param_4 - param_5);
            param_6 = param_6 / (param_6 - param_7);
        } else {
            fVar3 = 1.0 / (param_7 - param_6);
            fVar1 = -(param_3 + param_2) / (param_3 - param_2);
            fVar2 = -(param_5 + param_4) / (param_5 - param_4);
            param_6 = -(param_7 + param_6) * fVar3;
            fVar3 = fVar3 + fVar3;
        }
        param_1->Set(2.0 / (param_3 - param_2), 0.0, 0.0, 0.0, 0.0, 2.0 / (param_5 - param_4), 0.0, 0.0, 0.0, 0.0,
                     fVar3, 0.0, fVar1, fVar2, param_6, 1.0);
        return param_1;
    }

    // 0x1008eef70, 112 bytes, inline, placed by debug map only (low confidence)
    // SinCos(float*, float*, float)
    void SinCos(float* param_1, float* param_2, float param_3) {
        float fVar1;

        if ((param_1 == (float*)0) || (param_2 == (float*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pSinOut && pCosOut",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/Trig.h", 16,
                      (char*)0);
        }
        fVar1 = (float)::sin(param_3);
        *param_1 = fVar1;
        fVar1 = (float)::cos(param_3);
        *param_2 = fVar1;
    }

} // namespace jag::math

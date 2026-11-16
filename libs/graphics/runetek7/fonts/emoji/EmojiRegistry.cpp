// libs/graphics/runetek7/fonts/emoji/EmojiRegistry.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "EmojiRegistry.h"

namespace jag {
    // 0x1000602b0: EmojiRegistry::GetAutoChatLine() const has the same machine code as oldscape::widgets::ScrollBarWidget::ThumbIsVisible() const

    // 0x10012cae0: EmojiRegistry::SpriteAndIndex::SpriteAndIndex(int, int) has the same machine code as oldscape::sidebars::SideBarData::SideBarData(int, int)

    // 0x1008ea7d0
    EmojiRegistry::EmojiRegistry()
        : eastl::vector_map<eastl::string, EmojiRegistry::SpriteAndIndex>(), field_72(2147483647), m_autoChatLine(0) {
        reserve(10);
    }

    // 0x1008ea8b0
    unsigned long EmojiRegistry::Add(const eastl::string& str, int arg2, int arg3) {
        unsigned long uVar2;
        char* pcVar3;
        unsigned long uVar4;
        ReturnValue local_60;
        uint8_t local_38[8];

        if (!(str.empty())) {
            uVar2 = str.size();
            uVar4 = 0;
            if (uVar2 < 11) {
                pcVar3 = &str[0];
                if (IsEmojiPrefix(*pcVar3)) {
                    new (local_38) oldscape::sidebars::SideBarData(arg2, arg3);
                    local_60 = eastl::make_pair<eastl::stringconst&, EmojiRegistry::SpriteAndIndex>(str, *local_38);
                    eastl::vector_map<eastl::string, EmojiRegistry::SpriteAndIndex>::insert<
                        eastl::pair<eastl::string, EmojiRegistry::SpriteAndIndex>, void>(
                        (vector_map<eastl::string, EmojiRegistry::SpriteAndIndex>*)this, &local_60);
                    UpdatePrefixes();
                    uVar4 = (((uint64_t)((int64_t)((unsigned long)local_38 >> 8)) << 8) | (uint8_t)1);
                }
            }
        } else {
            uVar4 = 0;
        }
        return uVar4 & 4294967295;
    }

    // 0x1008eaad0
    void EmojiRegistry::UpdatePrefixes() {
        char* pcVar1;
        uint32_t in_EAX;
        int iVar3;
        uint32_t in_register_00000004;

        uint64_t uStack_38 = (((uint64_t)in_register_00000004 << 32) | (uint32_t)in_EAX);
        field_72 = 2147483647;
        uint8_t* this_00 = &field_40;
        this_00->clear();
        auto this_01 = HeapBeginPtr();
        auto pbVar4 = end();
        if (this_01 != pbVar4) {
            do {
                iVar3 = this_01->size();
                if (iVar3 < field_72) {
                    field_72 = iVar3;
                }
                pcVar1 = (char*)(*this_01)[0];
                uStack_38 = (((uint64_t)(*pcVar1) << 56) | (uint64_t)((uint64_t)uStack_38));
                if (this_00->find(*pcVar1, 0) == -1) {
                    this_00->append((char*)((long)&uStack_38 + 7), 1);
                }
                this_01 = this_01 + 40;
            } while (this_01 != pbVar4);
        }
    }

    // 0x1008eab90
    void EmojiRegistry::Remove(const eastl::string& str) {
        eastl::vector_map<eastl::string, EmojiRegistry::SpriteAndIndex>::erase(str);
        UpdatePrefixes((EmojiRegistry*)str);
    }

    // 0x1008eabf0
    void EmojiRegistry::RemoveAll() {
        clear();
        UpdatePrefixes();
    }

} // namespace jag

namespace jag::math {
    // 0x1008ec3b0
    Matrix44T<float>& Matrix44OrthographicLH<float>(Matrix44T<float>& matrix44, float arg2, float arg3, float arg4,
                                                    float arg5, float arg6, float arg7,
                                                    MATRIX_PROJECTION_RANGE mATRIX_PROJECTION_RANGE) {
        float arg13;
        float arg14;
        float arg15;
        float fVar1;

        if (mATRIX_PROJECTION_RANGE == 0) {
            fVar1 = 1.0 / (arg7 - arg6);
            arg13 = (arg3 + arg2) / (arg2 - arg3);
            arg14 = (arg5 + arg4) / (arg4 - arg5);
            arg15 = arg6 / (arg6 - arg7);
        } else {
            fVar1 = 1.0 / (arg7 - arg6);
            arg13 = -(arg3 + arg2) / (arg3 - arg2);
            arg14 = -(arg5 + arg4) / (arg5 - arg4);
            arg15 = -(arg7 + arg6) * fVar1;
            fVar1 = fVar1 + fVar1;
        }
        matrix44.Set(2.0 / (arg3 - arg2), 0.0, 0.0, 0.0, 0.0, 2.0 / (arg5 - arg4), 0.0, 0.0, 0.0, 0.0, fVar1, 0.0,
                     arg13, arg14, arg15, 1.0);
        return matrix44;
    }

    // 0x1008eef70
    void SinCos(float* arg1, float* arg2, float arg3) {
        if ((arg1 == nullptr) || (arg2 == nullptr)) {
            LogAssert("pSinOut && pCosOut",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/Trig.h", 16, nullptr);
        }
        float fVar1 = (float)::sin(arg3);
        *arg1 = fVar1;
        fVar1 = (float)::cos(arg3);
        *arg2 = fVar1;
    }

} // namespace jag::math

// libs/graphics/postprocess/PostProcessCommon.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::postprocess {
    class PostProcessParams {
    public:
        PostProcessParams();
        void SetTransition(const PostProcessParams& postProcessParams, long long arg2, unsigned long long arg3);
        bool operator==(const PostProcessParams& postProcessParams) const;
        uint64_t hash() const;

    private:
        unsigned long long field_0;
        uint32_t field_8;
        uint8_t _unknown_12[4];
        long field_16;
        float field_24;
        uint8_t _unknown_28[164];
        bool field_192;
        uint8_t _unknown_193[7];
    };

    // 0x1004902b0
    void PostProcessParams::SetTransition(const PostProcessParams& postProcessParams, long long arg2,
                                          unsigned long long arg3) {
        auto pfVar1 = postProcessParams.second();
        SetValue(*pfVar1, arg2, arg3);
        pfVar1 = (float*)postProcessParams.field_32.second();
        field_32.SetValue(*pfVar1, arg2, arg3);
        pfVar1 = (float*)postProcessParams.field_64.second();
        field_64.SetValue(*pfVar1, arg2, arg3);
        pfVar1 = (float*)postProcessParams.field_96.second();
        field_96.SetValue(*pfVar1, arg2, arg3);
        pfVar1 = (float*)postProcessParams.field_128.second();
        field_128.SetValue(*pfVar1, arg2, arg3);
        pfVar1 = (float*)postProcessParams.field_160.second();
        field_160.SetValue(*pfVar1, arg2, arg3);
        field_192 = postProcessParams.field_192;
    }

    // 0x1004abb10
    bool PostProcessParams::operator==(const PostProcessParams& postProcessParams) const {
        auto pfVar2 = second();
        float fVar1 = *pfVar2;
        pfVar2 = (float*)postProcessParams.second();
        if (fVar1 == *pfVar2) {
            pfVar2 = (float*)field_32.second();
            fVar1 = *pfVar2;
            pfVar2 = (float*)postProcessParams.field_32.second();
            if (fVar1 == *pfVar2) {
                pfVar2 = (float*)field_64.second();
                fVar1 = *pfVar2;
                pfVar2 = (float*)postProcessParams.field_64.second();
                if (fVar1 == *pfVar2) {
                    pfVar2 = (float*)field_96.second();
                    fVar1 = *pfVar2;
                    pfVar2 = (float*)postProcessParams.field_96.second();
                    if (fVar1 == *pfVar2) {
                        pfVar2 = (float*)field_128.second();
                        fVar1 = *pfVar2;
                        pfVar2 = (float*)postProcessParams.field_128.second();
                        if (fVar1 == *pfVar2) {
                            pfVar2 = (float*)field_160.second();
                            fVar1 = *pfVar2;
                            pfVar2 = (float*)postProcessParams.field_160.second();
                            if (fVar1 == *pfVar2) {
                                return field_192 == postProcessParams.field_192;
                            }
                        }
                    }
                }
            }
        }
        return false;
    }

} // namespace jag::postprocess

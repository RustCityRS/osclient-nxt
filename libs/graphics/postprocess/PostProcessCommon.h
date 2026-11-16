// libs/graphics/postprocess/PostProcessCommon.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::postprocess {
    class PostProcessParams {
    public:
        PostProcessParams();
        void SetTransition(PostProcessParams const&, long long, unsigned long long);
        bool operator==(PostProcessParams const&) const;
        hash() const;

        // data members, from how the methods use this: 200 bytes
        ulonglong field_0;  // offset 0
        undefined4 field_8; // offset 8
        char _unknown_12[4];
        long field_16;  // offset 16
        float field_24; // offset 24
        char _unknown_28[164];
        bool field_192; // offset 192
        char _unknown_193[7];
    };

    // 0x1001d4b30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PostProcessParams::PostProcessParams(): jumps straight to the base-object constructor

    // 0x1004902b0, 256 bytes, inline, placed by debug map only (low confidence)
    // PostProcessParams::SetTransition(PostProcessParams const&, long long, unsigned long long)
    void PostProcessParams::SetTransition(PostProcessParams* param_1, longlong param_2, ulonglong param_3) {
        float* pfVar1;

        pfVar1 = (float*)param_1->second();
        SetValue(pfVar1, param_2, param_3);
        pfVar1 = (float*)(&param_1->field_32)->second();
        (&field_32, pfVar1, param_2, param_3)->SetValue();
        pfVar1 = (float*)(&param_1->field_64)->second();
        (&field_64, pfVar1, param_2, param_3)->SetValue();
        pfVar1 = (float*)(&param_1->field_96)->second();
        (&field_96, pfVar1, param_2, param_3)->SetValue();
        pfVar1 = (float*)(&param_1->field_128)->second();
        (&field_128, pfVar1, param_2, param_3)->SetValue();
        pfVar1 = (float*)(&param_1->field_160)->second();
        (&field_160, pfVar1, param_2, param_3)->SetValue();
        field_192 = param_1->field_192;
    }

    // 0x1004abb10, 288 bytes, inline, placed by class header (inline)
    // PostProcessParams::operator==(PostProcessParams const&) const
    /* PostProcessParams::TEMPNAMEPLACEHOLDERVALUE(PostProcessParams
   const&) const */

    bool PostProcessParams::operator==(PostProcessParams* param_1) {
        float fVar1;
        float* pfVar2;

        pfVar2 = (float*)second();
        fVar1 = *pfVar2;
        pfVar2 = (float*)param_1->second();
        if (fVar1 == *pfVar2) {
            pfVar2 = (float*)(&field_32)->second();
            fVar1 = *pfVar2;
            pfVar2 = (float*)(&param_1->field_32)->second();
            if (fVar1 == *pfVar2) {
                pfVar2 = (float*)(&field_64)->second();
                fVar1 = *pfVar2;
                pfVar2 = (float*)(&param_1->field_64)->second();
                if (fVar1 == *pfVar2) {
                    pfVar2 = (float*)(&field_96)->second();
                    fVar1 = *pfVar2;
                    pfVar2 = (float*)(&param_1->field_96)->second();
                    if (fVar1 == *pfVar2) {
                        pfVar2 = (float*)(&field_128)->second();
                        fVar1 = *pfVar2;
                        pfVar2 = (float*)(&param_1->field_128)->second();
                        if (fVar1 == *pfVar2) {
                            pfVar2 = (float*)(&field_160)->second();
                            fVar1 = *pfVar2;
                            pfVar2 = (float*)(&param_1->field_160)->second();
                            if (fVar1 == *pfVar2) {
                                return field_192 == param_1->field_192;
                            }
                        }
                    }
                }
            }
        }
        return false;
    }

} // namespace jag::postprocess

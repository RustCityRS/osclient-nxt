// libs/image/PNGDecoding.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.image

#include "PNGDecoding.h"

namespace jag {
    // 0x100a0bb20, 848 bytes, placed by debug map only (low confidence)
    // PNGDecoder::LoadFromPacket(RGBAImage&, PacketView&)
    ulong PNGDecoder::LoadFromPacket(RGBAImage* param_1, PacketView* param_2) {
        char cVar1;
        int iVar2;
        void* pvVar3;
        void* pvVar4;
        ulong uVar5;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this;
        ulong uVar6;
        ulong uVar7;
        NxtPNGInfoStruct local_118[152];
        PacketView* local_80;
        undefined1 local_58[4];
        int local_54;
        uint local_50;
        int local_4c;
        void* local_48;
        uint local_3c;
        long local_38;

        local_48 = (void*)0;
        NxtPNGInfoStruct::NxtPNGInfoStruct(local_118);
        local_4c = 0;
        local_3c = 0;
        local_80 = param_2;
        local_38 = _png_create_read_struct(&DAT_100e2f68b, 0, _nxt_PNG_error, _nxt_PNG_warning);
        if (local_38 == 0) {
        LAB_100a0bd9a:
            pvVar3 = (void*)0;
        LAB_100a0bd9f:
            param_1->Destroy();
            if (pvVar3 != (void*)0) {
                if (local_3c != 0) {
                    uVar6 = 0;
                    do {
                        _free(*(void**)((long)pvVar3 + uVar6 * 8));
                        uVar6 = uVar6 + 1;
                    } while (uVar6 < local_3c);
                }
                _free(pvVar3);
            }
            if (local_38 == 0) {
                uVar6 = 0;
                goto LAB_100a0be2b;
            }
            if (local_48 == (void*)0) {
                uVar6 = 0;
                _png_destroy_read_struct(&local_38, 0);
                goto LAB_100a0be2b;
            }
            _png_destroy_read_struct(&local_38, &local_48, 0);
            uVar6 = 0;
            pvVar3 = local_48;
        } else {
            _png_set_read_fn(local_38, local_118, _nxt_PNG_stream_reader);
            local_48 = (void*)_png_create_info_struct(local_38);
            if (local_48 == (void*)0)
                goto LAB_100a0bd9a;
            iVar2 = _setjmp((int*)local_118);
            if (iVar2 != 0)
                goto LAB_100a0bd9a;
            _png_read_info(local_38, local_48);
            _png_get_IHDR(local_38, local_48, &local_4c, &local_3c, &local_54, &local_50, local_58, 0, 0);
            cVar1 = param_1->Create(local_4c, local_3c, 0);
            if (cVar1 == '\0')
                goto LAB_100a0bd9a;
            if (local_50 == 3) {
                _png_set_expand(local_38);
            }
            if ((local_50 & 4294967291) == 0) {
                _png_set_expand(local_38);
                _png_set_gray_to_rgb(local_38);
            }
            if (local_54 < 8) {
                _png_set_expand(local_38);
            }
            _png_set_strip_16(local_38);
            _png_set_packing(local_38);
            iVar2 = _png_get_valid(local_38, local_48, 16);
            if (iVar2 == 0) {
                _png_set_filler(local_38, 255, 1);
            } else {
                _png_set_expand();
                _png_set_tRNS_to_alpha(local_38);
            }
            _png_set_interlace_handling(local_38);
            uVar6 = (ulong)local_3c;
            pvVar3 = _calloc(uVar6, 8);
            if (pvVar3 == (void*)0)
                goto LAB_100a0bd9a;
            uVar7 = (ulong)(uint)(local_4c << 2);
            if (uVar6 != 0) {
                uVar5 = 0;
                do {
                    pvVar4 = _malloc(uVar7);
                    *(void**)((long)pvVar3 + uVar5 * 8) = pvVar4;
                    if (pvVar4 == (void*)0)
                        goto LAB_100a0bd9f;
                    uVar5 = uVar5 + 1;
                } while (uVar6 != uVar5);
            }
            _png_read_image(local_38, pvVar3);
            _png_read_end(local_38, local_48);
            _png_destroy_read_struct(&local_38, &local_48, 0);
            this = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                          std::default_delete<LoadingScreenScript::AnimLayer>>,
                          eastl::allocator>*)param_1->GetDevCredentialsOutputDirectory();
            pvVar4 = (void*)data();
            if (local_3c != 0) {
                uVar6 = 0;
                do {
                    _memcpy(pvVar4, *(void**)((long)pvVar3 + uVar6 * 8), uVar7);
                    _free(*(void**)((long)pvVar3 + uVar6 * 8));
                    pvVar4 = (void*)((long)pvVar4 + uVar7);
                    uVar6 = uVar6 + 1;
                } while (uVar6 < local_3c);
            }
            uVar6 = CONCAT71((int7)((ulong)param_1 >> 8), 1) & 4294967295;
        }
        _free(pvVar3);
    LAB_100a0be2b:
        local_118->~NxtPNGInfoStruct();
        return uVar6;
    }

} // namespace jag

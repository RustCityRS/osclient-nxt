// libs/image/PNGEncoding.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.image

namespace jag {
    class PNGEncoder {
    public:
        class PNGDestructor;
        void EncodeToPacket(PacketT<Array<unsigned char>>& arg1, const RGBAImage& rgbaImage);
    };

    class PNGEncoder::PNGDestructor {
    public:
        PNGDestructor(png_struct_def* png_struct_def);
        ~PNGDestructor();

    private:
        png_struct_def* field_0;
        uint64_t field_8;
    };

    // 0x100a0c0e0
    PNGEncoder::PNGDestructor::PNGDestructor(png_struct_def* png_struct_def) : field_0(png_struct_def), field_8(0) {}

    // 0x100a0c110
    PNGEncoder::PNGDestructor::~PNGDestructor() {
        uint64_t* puVar1;

        if (field_0 != nullptr) {
            if (field_8 == 0) {
                puVar1 = nullptr;
            } else {
                puVar1 = &field_8;
            }
            _png_destroy_write_struct(this, puVar1);
        }
    }

    // 0x100a0c140
    void PNGEncoder::EncodeToPacket(PacketT<Array<unsigned char>>& arg1, const RGBAImage& rgbaImage) {
        int iVar1;
        uint32_t uVar2;
        uint32_t uVar3;
        unsigned int uVar4;
        long lVar6;
        Array<unsigned char, BucketAllocatorEASTL>* pAVar7;
        uint64_t uVar8;
        uint64_t* puVar9;
        uint64_t extraout_RAX;
        unsigned long uVar10;
        NxtPNGInfoStruct local_160;
        vector<unsigned char> local_c0;
        VBOMapper local_a0;
        Array<unsigned char const*> local_80[24];
        PNGDestructor local_68;
        png_struct_def* local_50;
        Array<unsigned char, BucketAllocatorEASTL>* local_48;
        long local_40;
        uint8_t local_31;

        auto ppVar5 = _png_create_write_struct(&DAT_100e2f68b, 0, nxt_PNG_error, nxt_PNG_warning);
        if (ppVar5 == nullptr) {
            uVar2 = 0;
        } else {
            local_68 = PNGDestructor(ppVar5);
            lVar6 = _png_create_info_struct(ppVar5);
            if (lVar6 == 0) {
                uVar2 = 0;
            } else {
                local_68.field_8 = lVar6;
                local_40 = lVar6;
                local_160 = NxtPNGInfoStruct();
                pAVar7 = (Array<unsigned char, BucketAllocatorEASTL>*)rgbaImage.GetDevCredentialsOutputDirectory();
                iVar1 = rgbaImage.GetZ();
                new (local_80) Array<unsigned char const*>((long)iVar1);
                iVar1 = _setjmp(&local_160);
                local_31 = iVar1 == 0;
                if (local_31) {
                    uVar2 = rgbaImage.GetX();
                    uVar3 = rgbaImage.GetZ();
                    _png_set_IHDR(ppVar5, local_40, uVar2, uVar3, 8, 6, 0, 0, 0);
                    local_50 = ppVar5;
                    iVar1 = rgbaImage.GetZ();
                    if (iVar1 != 0) {
                        lVar6 = 0;
                        uVar10 = 0;
                        local_48 = pAVar7;
                        do {
                            iVar1 = rgbaImage.GetX();
                            uVar8 = (*local_48)[iVar1 * lVar6];
                            puVar9 = (uint64_t*)(*local_80)[uVar10];
                            *puVar9 = uVar8;
                            uVar10 = uVar10 + 1;
                            uVar4 = rgbaImage.GetZ();
                            lVar6 = lVar6 + 4;
                        } while (uVar10 < uVar4);
                    }
                    uVar8 = (*local_80)[0];
                    ppVar5 = local_50;
                    _png_set_rows(local_50, local_40, uVar8);
                    _png_set_write_fn(ppVar5, &local_160, nxt_PNG_stream_writer, nxt_PNG_stream_flush);
                    _png_write_png(ppVar5, local_40, 0, 0);
                    _png_write_end(ppVar5, local_40);
                    local_a0 = PacketT(&local_c0);
                    arg1 = local_a0;
                    uVar10 = local_c0.size();
                    arg1.SetPos(uVar10);
                }
                uVar2 = (uint32_t)(((uint64_t)((int64_t)((unsigned long)extraout_RAX >> 8)) << 8) | (uint8_t)local_31);
            }
        }
        return uVar2;
    }

} // namespace jag

// 0x100a0c470
void _nxt_PNG_stream_writer(undefined8 param_1, uchar* param_2, long param_3) {
    long lVar1 = _png_get_io_ptr();
    unsigned char* arg1 = (unsigned char*)((lVar1 + 160))->end();
    ((lVar1 + 160))->insert<unsigned char*>(arg1, param_2, param_2 + param_3);
}

// 0x100a0c4c0
void _nxt_PNG_stream_flush(void) {}

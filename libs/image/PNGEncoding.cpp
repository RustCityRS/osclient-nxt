// libs/image/PNGEncoding.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.image

namespace jag {
    class PNGEncoder {
    public:
        class PNGDestructor;
        EncodeToPacket(PacketT<Array<unsigned char, eastl::allocator>>&, RGBAImage const&);
    };

    class PNGEncoder::PNGDestructor {
    public:
        PNGDestructor(png_struct_def*);
        ~PNGDestructor();

        // data members, from how the methods use this: 16 bytes
        png_struct_def* field_0; // offset 0
        undefined8 field_8;      // offset 8
    };

    // 0x100a0c0e0, 32 bytes, base-object constructor, placed by debug map only (low confidence)
    // PNGEncoder::PNGDestructor::PNGDestructor(png_struct_def*)
    void PNGEncoder::PNGDestructor::PNGDestructor(png_struct_def* param_1) {
        field_0 = param_1;
        field_8 = 0;
    }

    // 0x100a0c100, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // PNGEncoder::PNGDestructor::PNGDestructor(png_struct_def*): jumps straight to the base-object constructor

    // 0x100a0c110, 32 bytes, base-object destructor, placed by debug map only (low confidence)
    // PNGEncoder::PNGDestructor::~PNGDestructor()
    void PNGEncoder::PNGDestructor::~PNGDestructor() {
        undefined8* puVar1;

        if (field_0 != (png_struct_def*)0) {
            if (field_8 == 0) {
                puVar1 = (undefined8*)0;
            } else {
                puVar1 = &field_8;
            }
            _png_destroy_write_struct(this, puVar1);
        }
    }

    // 0x100a0c130, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // PNGEncoder::PNGDestructor::~PNGDestructor(): jumps straight to the base-object destructor

    // 0x100a0c140, 672 bytes, placed by debug map only (low confidence)
    // PNGEncoder::EncodeToPacket(PacketT<Array<unsigned char, eastl::allocator> >&, RGBAImage const&)
    undefined4 PNGEncoder::EncodeToPacket(PacketT* param_1, RGBAImage* param_2) {
        int iVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        uint uVar4;
        png_struct_def* ppVar5;
        long lVar6;
        Array<unsigned char, BucketAllocatorEASTL>* pAVar7;
        undefined8 uVar8;
        undefined8* puVar9;
        ulong uVar10;
        NxtPNGInfoStruct local_160[160];
        vector local_c0[32];
        VBOMapper local_a0;
        Array<unsigned char const*, eastl::allocator> local_80[24];
        PNGDestructor local_68;
        png_struct_def* local_50;
        Array<unsigned char, BucketAllocatorEASTL>* local_48;
        long local_40;
        undefined1 local_31;

        ppVar5 = (png_struct_def*)_png_create_write_struct(&DAT_100e2f68b, 0, _nxt_PNG_error, _nxt_PNG_warning);
        if (ppVar5 == (png_struct_def*)0) {
            uVar2 = 0;
        } else {
            new (&local_68) PNGDestructor(ppVar5);
            lVar6 = _png_create_info_struct(ppVar5);
            if (lVar6 == 0) {
                uVar2 = 0;
            } else {
                local_68.field_8 = lVar6;
                local_40 = lVar6;
                NxtPNGInfoStruct::NxtPNGInfoStruct(local_160);
                pAVar7 = (Array<unsigned char, BucketAllocatorEASTL>*)param_2->GetDevCredentialsOutputDirectory();
                iVar1 = param_2->GetZ();
                Array<unsigned char const*, eastl::allocator>::Array(local_80, (long)iVar1);
                iVar1 = _setjmp((int*)local_160);
                local_31 = iVar1 == 0;
                if ((bool)local_31) {
                    uVar2 = param_2->GetX();
                    uVar3 = param_2->GetZ();
                    _png_set_IHDR(ppVar5, local_40, uVar2, uVar3, 8, 6, 0, 0, 0);
                    local_50 = ppVar5;
                    iVar1 = param_2->GetZ();
                    if (iVar1 != 0) {
                        lVar6 = 0;
                        uVar10 = 0;
                        local_48 = pAVar7;
                        do {
                            iVar1 = param_2->GetX();
                            uVar8 = Array<unsigned char, BucketAllocatorEASTL>::operator[](local_48, iVar1 * lVar6);
                            puVar9 = (undefined8*)Array<unsigned char const*, eastl::allocator>::operator[](local_80,
                                                                                                            uVar10);
                            *puVar9 = uVar8;
                            uVar10 = uVar10 + 1;
                            uVar4 = param_2->GetZ();
                            lVar6 = lVar6 + 4;
                        } while (uVar10 < uVar4);
                    }
                    uVar8 = Array<unsigned char const*, eastl::allocator>::operator[](local_80, 0);
                    ppVar5 = local_50;
                    _png_set_rows(local_50, local_40, uVar8);
                    _png_set_write_fn(ppVar5, local_160, _nxt_PNG_stream_writer, _nxt_PNG_stream_flush);
                    _png_write_png(ppVar5, local_40, 0, 0);
                    _png_write_end(ppVar5, local_40);
                    new (&local_a0) PacketT<Array<unsigned char, eastl::allocator>>(local_c0);
                    PacketT<Array<unsigned char, eastl::allocator>>::operator=(
                        (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (PacketT*)&local_a0);
                    local_a0.~VBOMapper();
                    uVar10 = local_c0->size();
                    param_1->SetPos(uVar10);
                }
                local_80->~Array();
                uVar8 = local_160->~NxtPNGInfoStruct();
                uVar2 = (undefined4)CONCAT71((int7)((ulong)uVar8 >> 8), local_31);
            }
            local_68.~PNGDestructor();
        }
        return uVar2;
    }

} // namespace jag

// 0x100a0c470, 80 bytes, placed by debug map only (low confidence)
// nxt_PNG_stream_writer
void _nxt_PNG_stream_writer(undefined8 param_1, uchar* param_2) {
    long lVar1;
    uchar* puVar2;

    lVar1 = _png_get_io_ptr();
    puVar2 = (uchar*)((lVar1 + 160))->end();
    eastl::vector<unsigned char, eastl::allocator>::insert<unsigned char*>((uchar*)(lVar1 + 160), puVar2, param_2);
}

// 0x100a0c4c0, 16 bytes, placed by debug map only (low confidence)
// nxt_PNG_stream_flush
void _nxt_PNG_stream_flush() {}

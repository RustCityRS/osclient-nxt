// libs/hal/filesystem/FileListContents.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::filesystem {
    class FileListContents {
    public:
        FileListContents(FileListContents const&);
        ~FileListContents();
        FileListContents();
        void swap(FileListContents&);
        FileListContents(FileListContents&&);

        // data members, from how the methods use this: 328 bytes
        char _unknown_0[304];
        Pix8* field_304;      // offset 304
        Pix8* field_312;      // offset 312
        undefined4 field_320; // offset 320
        char _unknown_324[4];
    };

    // 0x1002b1470, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // FileListContents::FileListContents(FileListContents const&): jumps straight to the base-object constructor

    // 0x1002b1480, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // FileListContents::~FileListContents(): jumps straight to the base-object destructor

    // 0x1002d9bb0, 64 bytes, base-object constructor, inline, placed by class name
    // FileListContents::FileListContents(FileListContents const&)
    void FileListContents::FileListContents(FileListContents* param_1) {
        Pix8* pPVar1;

        new (this) Filename(param_1);
        field_320 = param_1->field_320;
        pPVar1 = param_1->field_312;
        field_304 = param_1->field_304;
        field_312 = pPVar1;
    }

    // 0x1002d9bf0, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // FileListContents::~FileListContents()
    /* void eastl::destruct<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, unsigned
   int> >(eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, unsigned int>*) */

    void
    eastl::destruct<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, unsigned int>>(pair* param_1) {
        ~pair();
    }

    // 0x100b1efa0, 16 bytes, complete-object constructor, inline, placed by class name
    // FileListContents::FileListContents(): jumps straight to the base-object constructor

    // 0x100b1efb0, 96 bytes, inline, placed by class name
    // FileListContents::swap(FileListContents&)
    void FileListContents::swap(FileListContents* param_1) {
        swap(param_1);
        eastl::swap<oldscape::graphics::Pix8*>(&field_304, &param_1->field_304);
        eastl::swap<oldscape::graphics::Pix8*>(&field_312, &param_1->field_312);
        eastl::swap<unsigned int>(&field_320, &param_1->field_320);
    }

    // 0x100b23c70, 48 bytes, base-object constructor, inline, placed by class name
    // FileListContents::FileListContents()
    void FileListContents::FileListContents() {
        new (this) Filename();
        field_304 = (Pix8*)0;
        field_312 = (Pix8*)0;
        field_320 = 0;
    }

    // 0x100b284e0, 16 bytes, complete-object constructor, inline, placed by class name
    // FileListContents::FileListContents(FileListContents&&): jumps straight to the base-object constructor

    // 0x100b284f0, 64 bytes, base-object constructor, inline, placed by class name
    // FileListContents::FileListContents(FileListContents&&)
    void FileListContents::FileListContents(FileListContents* param_1) {
        Pix8* pPVar1;

        new (this) Filename(param_1);
        field_320 = param_1->field_320;
        pPVar1 = param_1->field_312;
        field_304 = param_1->field_304;
        field_312 = pPVar1;
    }

} // namespace jag::filesystem

namespace jag::oldscape::javapal {
    // 0x1002b2aa0, 128 bytes, placed by debug map only (low confidence)
    // Packet_gUTF8(eastl::string&, PacketJ<Array<unsigned char, eastl::allocator> >&)
    bool Packet_gUTF8(basic_string* param_1, PacketJ* param_2) {
        char cVar1;
        ulong uVar2;
        ulong uVar3;
        long lVar4;
        long lVar5;
        bool bVar6;

        cVar1 = param_2->g1();
        if (cVar1 == '\0') {
            uVar2 = param_2->gVarInt();
            uVar3 = param_2->GetSpace();
            if (uVar2 <= uVar3) {
                lVar4 = param_2->GetDataPtr();
                lVar5 = param_2->size();
                param_1->assign((char*)(lVar4 + lVar5), uVar2);
            }
            bVar6 = uVar2 <= uVar3;
        } else {
            bVar6 = false;
        }
        return bVar6;
    }

    // 0x1002b2b20, 80 bytes, placed by debug map only (low confidence)
    // Packet_pUTF8(PacketJ<Array<unsigned char, eastl::allocator> >&, char const*, unsigned int)
    void Packet_pUTF8(PacketJ* param_1, char* param_2, uint param_3) {
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, 0);
        param_1->pVarInt((ulong)param_3);
        param_1->pArrayBuffer_alt1(param_2, 0, (ulong)param_3);
    }

} // namespace jag::oldscape::javapal

namespace jag {
    // 0x1002b2b70, 96 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::pVarInt(unsigned long long)
    void PacketT<Array<unsigned char, eastl::allocator>>::pVarInt(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  ulonglong param_1) {
        bool bVar1;
        ulonglong uVar2;

        if (127 < param_1) {
            uVar2 = param_1;
            do {
                p1<unsigned long>(this, (ulong)((uint)uVar2 & 255 | 128));
                param_1 = uVar2 >> 7;
                bVar1 = 16383 < uVar2;
                uVar2 = param_1;
            } while (bVar1);
        }
        p1<unsigned long>(this, param_1);
    }

    // 0x1002b2bd0, 240 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::pArrayBuffer_alt1(unsigned char const*, unsigned long, unsigned long)
    void PacketT<Array<unsigned char, eastl::allocator>>::pArrayBuffer_alt1(
        PacketT<Array<unsigned char, eastl::allocator>>* this, uchar* param_1, ulong param_2, ulong param_3) {
        uchar uVar1;
        int iVar3;
        ulong uVar4;
        long lVar5;
        ulong* puVar6;
        uchar* puVar7;
        ulong local_40;
        ulong local_38;

        if (param_3 != 0) {
            lVar5 = *(long*)(this + 24);
            local_38 = param_3;
            uVar4 = end();
            if (uVar4 < param_3 + lVar5) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "m_pos + length <= m_data.size()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl", 898,
                    (char*)0);
            }
            if (param_1 == (uchar*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "val != nullptr",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl", 899,
                    (char*)0);
            }
            lVar5 = end();
            local_40 = lVar5 - *(long*)(this + 24);
            puVar6 = std::min<unsigned long>(&local_38, &local_40);
            local_38 = *puVar6;
            iVar3 = (int)local_38 + (int)param_2;
            if ((int)param_2 < iVar3) {
                lVar5 = (long)iVar3;
                do {
                    uVar1 = param_1[lVar5 + -1];
                    lVar5 = lVar5 + -1;
                    uVar4 = *(ulong*)(this + 24);
                    *(ulong*)(this + 24) = uVar4 + 1;
                    puVar7 = (uchar*)Array<unsigned char, eastl::allocator>::operator[](
                        (Array<unsigned char, eastl::allocator>*)this, uVar4);
                    *puVar7 = uVar1;
                } while ((int)param_2 < lVar5);
            }
        }
    }

} // namespace jag

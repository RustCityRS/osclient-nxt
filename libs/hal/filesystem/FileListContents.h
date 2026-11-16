// libs/hal/filesystem/FileListContents.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::filesystem {
    class FileListContents {
    public:
        FileListContents(const FileListContents& fileListContents);
        ~FileListContents();
        FileListContents();
        void swap(FileListContents& fileListContents);
        FileListContents(FileListContents&& fileListContents);

    private:
        uint8_t _unknown_0[304];
        Pix32* field_304;
        Pix32* field_312;
        uint32_t field_320;
        uint8_t _unknown_324[4];
    };

    // 0x1002d9bb0
    FileListContents::FileListContents(const FileListContents& fileListContents)
        : Filename(fileListContents), field_320(fileListContents.field_320) {
        Pix32* pPVar1 = fileListContents.field_312;
        field_304 = fileListContents.field_304;
        field_312 = pPVar1;
    }

    // 0x1002d9bf0
    FileListContents::~FileListContents() {}

    // 0x100b1efb0
    void FileListContents::swap(FileListContents& fileListContents) {
        swap(fileListContents);
        eastl::swap<oldscape::graphics::Pix8*>(field_304, fileListContents.field_304);
        eastl::swap<oldscape::graphics::Pix8*>(field_312, fileListContents.field_312);
        eastl::swap<unsigned int>(field_320, fileListContents.field_320);
    }

    // 0x100b23c70
    FileListContents::FileListContents() : Filename(), field_304(nullptr), field_312(nullptr), field_320(0) {}

    // 0x100b284f0
    FileListContents::FileListContents(FileListContents&& fileListContents)
        : Filename(fileListContents), field_320(fileListContents.field_320) {
        Pix32* pPVar1 = fileListContents.field_312;
        field_304 = fileListContents.field_304;
        field_312 = pPVar1;
    }

} // namespace jag::filesystem

namespace jag::oldscape::javapal {
    // 0x1002b2aa0
    bool Packet_gUTF8(eastl::string& str, PacketJ<Array<unsigned char>>& packetJ) {
        unsigned long arg2;
        unsigned long uVar2;
        long lVar3;
        long lVar4;
        bool bVar5;

        if (packetJ.g1() == '\0') {
            arg2 = packetJ.gVarInt();
            uVar2 = packetJ.GetSpace();
            if (arg2 <= uVar2) {
                lVar3 = packetJ.GetDataPtr();
                lVar4 = packetJ.size();
                str.assign((lVar3 + lVar4), arg2);
            }
            bVar5 = arg2 <= uVar2;
        } else {
            bVar5 = false;
        }
        return bVar5;
    }

    // 0x1002b2b20
    void Packet_pUTF8(PacketJ<Array<unsigned char>>& packetJ, const char* str, unsigned int arg3) {
        packetJ.p1<unsigned long>(0);
        packetJ.pVarInt((unsigned long)arg3);
        packetJ.pArrayBuffer_alt1(str, 0, (unsigned long)arg3);
    }

} // namespace jag::oldscape::javapal

namespace jag {
    // 0x1002b2b70
    void PacketT<Array<unsigned char>>::pVarInt(unsigned long long arg1) {
        bool bVar1;
        unsigned long long uVar2;

        if (127 < arg1) {
            uVar2 = arg1;
            do {
                p1<unsigned long>(this, (ID)uVar2 & 255 | 128);
                arg1 = uVar2 >> 7;
                bVar1 = 16383 < uVar2;
                uVar2 = arg1;
            } while (bVar1);
        }
        p1<unsigned long>(this, (ID)arg1);
    }

    // 0x1002b2bd0
    void PacketT<Array<unsigned char>>::pArrayBuffer_alt1(const unsigned char* arg1, unsigned long arg2,
                                                          unsigned long arg3) {
        unsigned char uVar1;
        int iVar3;
        unsigned long uVar4;
        long lVar5;
        unsigned long* puVar6;
        unsigned char* puVar7;
        unsigned long local_40;
        unsigned long local_38;

        if (arg3 != 0) {
            lVar5 = *(long*)(this + 24);
            local_38 = arg3;
            uVar4 = end();
            if (uVar4 < arg3 + lVar5) {
                LogAssert(
                    "m_pos + length <= m_data.size()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl", 898,
                    nullptr);
            }
            if (arg1 == nullptr) {
                LogAssert(
                    "val != nullptr",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl", 899,
                    nullptr);
            }
            lVar5 = end();
            local_40 = lVar5 - *(long*)(this + 24);
            puVar6 = std::min<unsigned long>(local_38, local_40);
            local_38 = *puVar6;
            iVar3 = (int)local_38 + (int)arg2;
            if ((int)arg2 < iVar3) {
                lVar5 = (long)iVar3;
                do {
                    uVar1 = arg1[lVar5 - 1];
                    lVar5 = lVar5 - 1;
                    uVar4 = *(unsigned long*)(this + 24);
                    *(unsigned long*)(this + 24) = uVar4 + 1;
                    puVar7 = (unsigned char*)(*this)[uVar4];
                    *puVar7 = uVar1;
                } while ((int)arg2 < lVar5);
            }
        }
    }

} // namespace jag

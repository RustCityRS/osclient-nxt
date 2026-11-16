// libs/oldscape/jagex3/javapal/Pix32Tools.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::javapal {
    class Pix32Tools {
    public:
        Pix32Tools* createPix32FromRGBAImage(const RGBAImage& rgbaImage);
        auto createPix32FromPNGData(PacketJ<Array<unsigned char>>& packetJ);
        auto createPix32FromPNGData(const Array<unsigned char>& arg1);
        void ExportPix32ToPNG(const graphics::Pix32& pix32, const Filename& filename);

        uint8_t _unknown_0[1];
    };

    // 0x1002b4910
    Pix32Tools* Pix32Tools::createPix32FromRGBAImage(const RGBAImage& rgbaImage) {
        uint8_t bVar1;
        uint8_t bVar2;
        uint8_t bVar3;
        char* pcVar6;
        uint8_t* pbVar7;
        SharedArray<unsigned int>* pSVar8;
        unsigned int* puVar9;
        uint32_t* puVar10;
        unsigned long arg1_00;
        unsigned int uVar11;
        unsigned int local_44;

        int local_34 = rgbaImage.GetX();
        int iVar5 = rgbaImage.GetZ();
        int iVar4 = local_34;
        int local_48 = iVar5;
        auto arg1 = rgbaImage.GetDevCredentialsOutputDirectory();
        Array<unsigned char, BucketAllocatorEASTL> local_60(arg1);
        make_shared<graphics::Pix32, int&, int&>((ReturnValue*)this, &local_34, &local_48);
        if (0 < iVar4 * iVar5) {
            uVar11 = 0;
            arg1_00 = 0;
            do {
                pcVar6 = &local_60[(unsigned long)(uVar11 + 3)];
                if (*pcVar6 == '\0') {
                    pSVar8 = (SharedArray<unsigned int>*)(*this).operator->();
                    puVar10 = (uint32_t*)(*pSVar8)[arg1_00];
                    *puVar10 = 0;
                } else {
                    pbVar7 = &local_60[(unsigned long)(uVar11 + 3)];
                    local_44 = (unsigned int)*pbVar7;
                    pbVar7 = &local_60[(unsigned long)uVar11];
                    bVar1 = *pbVar7;
                    pbVar7 = &local_60[(unsigned long)(uVar11 + 1)];
                    bVar2 = *pbVar7;
                    pbVar7 = &local_60[(unsigned long)(uVar11 + 2)];
                    bVar3 = *pbVar7;
                    pSVar8 = (SharedArray<unsigned int>*)(*this).operator->();
                    puVar9 = (unsigned int*)(*pSVar8)[arg1_00];
                    *puVar9 =
                        (unsigned int)bVar2 << 8 | (unsigned int)bVar1 << 16 | local_44 << 24 | (unsigned int)bVar3;
                }
                arg1_00 = arg1_00 + 1;
                uVar11 = uVar11 + 4;
            } while ((unsigned int)(iVar4 * iVar5) != arg1_00);
        }
        return this;
    }

    // 0x1002b4aa0
    auto Pix32Tools::createPix32FromPNGData(PacketJ<Array<unsigned char>>& packetJ) {
        PacketView local_a0;

        RGBAImage local_78;
        local_a0.PacketView<Array<unsigned char>>(packetJ);
        if (PNGDecoder::LoadFromPacket(local_78, local_a0) == '\0') {
            (logger::default_logger())
                ->Log(false, 5,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/javapal/"
                      "Pix32Tools.cpp",
                      68, "createPix32FromPNGData could not decode image data");
            auto result;
        } else {
            createPix32FromRGBAImage(&result, &local_78);
        }
        return result;
    }

    // 0x1002b4b90
    auto Pix32Tools::createPix32FromPNGData(const Array<unsigned char>& arg1) {
        Array<unsigned char>* arg2;

        RGBAImage local_80;
        if (local_80.LoadFromMemory(arg1, *arg2) == '\0') {
            (logger::default_logger())
                ->Log(false, 5,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/javapal/"
                      "Pix32Tools.cpp",
                      80, "createPix32FromPNGData could not decode image data");
            auto result;
        } else {
            createPix32FromRGBAImage(&result, &local_80);
        }
        return result;
    }

    // 0x1002b4cc0
    void Pix32Tools::ExportPix32ToPNG(const graphics::Pix32& pix32, const Filename& filename) {
        WindowSavedPosition local_1e0;

        RGBAImage local_88;
        unsigned int uVar1 = pix32.field_24;
        unsigned int arg2 = pix32.field_28;
        auto arg3 = pix32.data();
        local_88.CreateFromARGB(uVar1, arg2, arg3);
        local_1e0.PacketT(30000);
        PNGEncoder::EncodeToPacket(local_1e0, local_88);
        File local_1c0(filename, 1538, nullptr);
        auto arg1 = local_1e0.GetDataPtr();
        uVar1 = local_1e0.size();
        local_1c0.write(arg1, uVar1, nullptr);
        local_1c0.close(nullptr);
    }

} // namespace jag::oldscape::javapal

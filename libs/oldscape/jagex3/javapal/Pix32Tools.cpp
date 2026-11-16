// libs/oldscape/jagex3/javapal/Pix32Tools.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::javapal {
    class Pix32Tools {
    public:
        Pix32Tools* createPix32FromRGBAImage(RGBAImage const&);
        Pix32Tools* createPix32FromPNGData(PacketJ<Array<unsigned char, eastl::allocator>>&);
        Pix32Tools* createPix32FromPNGData(Array<unsigned char, eastl::allocator> const&);
        void ExportPix32ToPNG(graphics::Pix32 const&, Filename const&);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1002b4910, 384 bytes, placed by class name and debug map
    // Pix32Tools::createPix32FromRGBAImage(RGBAImage const&)
    Pix32Tools* Pix32Tools::createPix32FromRGBAImage(RGBAImage* param_1) {
        byte bVar1;
        byte bVar2;
        byte bVar3;
        int iVar4;
        int iVar5;
        Array* pAVar6;
        char* pcVar7;
        byte* pbVar8;
        SharedArray<unsigned int>* pSVar9;
        uint* puVar10;
        undefined4* puVar11;
        ulong uVar12;
        uint uVar13;
        Array<unsigned char, BucketAllocatorEASTL> local_60[24];
        int local_48;
        uint local_44;
        int local_34;

        local_34 = param_1->GetX();
        iVar5 = param_1->GetZ();
        iVar4 = local_34;
        local_48 = iVar5;
        pAVar6 = (Array*)param_1->GetDevCredentialsOutputDirectory();
        Array<unsigned char, BucketAllocatorEASTL>::Array(local_60, pAVar6);
        make_shared<graphics::Pix32, int&, int&>((jag*)this, &local_34, &local_48);
        if (0 < iVar4 * iVar5) {
            uVar13 = 0;
            uVar12 = 0;
            do {
                pcVar7 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](local_60, (ulong)(uVar13 + 3));
                if (*pcVar7 == '\0') {
                    pSVar9 = (SharedArray<unsigned int>*)shared_ptr<graphics::Pix32>::operator->(
                        (shared_ptr<graphics::Pix32>*)(Pix32Tools*)this);
                    puVar11 = (undefined4*)SharedArray<unsigned int>::operator[](pSVar9, uVar12);
                    *puVar11 = 0;
                } else {
                    pbVar8 =
                        (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](local_60, (ulong)(uVar13 + 3));
                    local_44 = (uint)*pbVar8;
                    pbVar8 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](local_60, (ulong)uVar13);
                    bVar1 = *pbVar8;
                    pbVar8 =
                        (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](local_60, (ulong)(uVar13 + 1));
                    bVar2 = *pbVar8;
                    pbVar8 =
                        (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](local_60, (ulong)(uVar13 + 2));
                    bVar3 = *pbVar8;
                    pSVar9 = (SharedArray<unsigned int>*)shared_ptr<graphics::Pix32>::operator->(
                        (shared_ptr<graphics::Pix32>*)(Pix32Tools*)this);
                    puVar10 = (uint*)SharedArray<unsigned int>::operator[](pSVar9, uVar12);
                    *puVar10 = (uint)bVar2 << 8 | (uint)bVar1 << 16 | local_44 << 24 | (uint)bVar3;
                }
                uVar12 = uVar12 + 1;
                uVar13 = uVar13 + 4;
            } while ((uint)(iVar4 * iVar5) != uVar12);
        }
        local_60->~Array();
        return (Pix32Tools*)this;
    }

    // 0x1002b4aa0, 240 bytes, placed by class name and debug map
    // Pix32Tools::createPix32FromPNGData(PacketJ<Array<unsigned char, eastl::allocator> >&)
    Pix32Tools* Pix32Tools::createPix32FromPNGData(PacketJ* param_1) {
        undefined8 uVar2;
        PacketView local_a0;
        RGBAImage local_78;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_78) RGBAImage();
        PacketView::PacketView<Array<unsigned char, eastl::allocator>>(&local_a0, (PacketT*)param_1);
        if (PNGDecoder::LoadFromPacket(&local_78, &local_a0) == '\0') {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "javapal/Pix32Tools.cpp",
                                68, "createPix32FromPNGData could not decode image data");
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            createPix32FromRGBAImage(this, &local_78);
        }
        local_a0.~PacketView();
        local_78.~RGBAImage();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x1002b4b90, 192 bytes, placed by class name and debug map
    // Pix32Tools::createPix32FromPNGData(Array<unsigned char, eastl::allocator> const&)
    Pix32Tools* Pix32Tools::createPix32FromPNGData(Array* param_1) {
        undefined8 uVar2;
        RGBAImage local_80;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_80) RGBAImage();
        if (PNGDecoder::LoadFromMemory(&local_80, param_1) == '\0') {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "javapal/Pix32Tools.cpp",
                                80, "createPix32FromPNGData could not decode image data");
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            createPix32FromRGBAImage(this, &local_80);
        }
        local_80.~RGBAImage();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x1002b4cc0, 336 bytes, placed by class name
    // Pix32Tools::ExportPix32ToPNG(graphics::Pix32 const&, Filename const&)
    void Pix32Tools::ExportPix32ToPNG(Pix32* param_1, Filename* param_2) {
        uint uVar1;
        uint uVar2;
        uint* puVar3;
        uchar* puVar4;
        WindowSavedPosition local_1e0;
        File local_1c0[13];
        RGBAImage local_88;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_88) RGBAImage();
        uVar2 = param_1->field_24;
        uVar1 = param_1->field_28;
        puVar3 = (uint*)param_1->data();
        local_88.CreateFromARGB(uVar2, uVar1, puVar3);
        local_1e0.PacketT(30000);
        PNGEncoder::EncodeToPacket((PacketT*)&local_1e0, &local_88);
        File::File(local_1c0, param_2, 1538, (Error*)0);
        puVar4 = (uchar*)local_1e0.GetDataPtr();
        uVar2 = local_1e0.size();
        local_1c0->write(puVar4, uVar2, 0);
        local_1c0->close(0);
        local_1c0->~File();
        local_1e0.~WindowSavedPosition();
        local_88.~RGBAImage();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::oldscape::javapal

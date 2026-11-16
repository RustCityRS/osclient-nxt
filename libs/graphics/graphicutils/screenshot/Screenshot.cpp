// libs/graphics/graphicutils/screenshot/Screenshot.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.graphicutils

#include "Screenshot.h"

namespace jag::graphicutils {
    // 0x100f48570, 8 bytes, __data
    Screengrabber::DEFAULT_PNG_FILENAME = "test_screenshot.png";

    // 0x100bbbd70, 64 bytes, placed by debug map only (low confidence)
    // WritePNGDataToPacket(void*, void*, int)
    void WritePNGDataToPacket(void* param_1, void* param_2, int param_3) {
        param_1->Reserve((long)param_3);
        param_1->pArrayBuffer(param_2, 0, (long)param_3);
        param_1->SetPos(0);
    }

    // 0x100bbbdb0, 96 bytes, placed by debug map only (low confidence)
    // Screengrabber::RequestScreenshot(eastl::string const&)
    void Screengrabber::RequestScreenshot(basic_string* param_1) {
        undefined8 uVar2;

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
            '\0') {
            (&field_40, param_1)->push_back();
        } else {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "graphicutils/screenshot/Screenshot.cpp",
                                40, "Screenshot fileName is empty. Not adding request.");
        }
    }

    // 0x100bbbe10, 16 bytes, placed by neighbouring functions
    // Screengrabber::RegisterOnScreenGrabbedListener(std::function<void (std::unique_ptr<unsigned char [], std::default_delete<unsigned char []> > const&)> const&)
    /* Screengrabber::RegisterOnScreenGrabbedListener(std::function<void
   (std::unique_ptr<unsigned char [], std::default_delete<unsigned char []> > const&)> const&) */

    void Screengrabber::RegisterOnScreenGrabbedListener(function* param_1) {
        eastl::vector<
            std::function<void(std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>> const&)>,
            eastl::allocator>::
            push_back(
                (vector<
                    std::function<void(std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>> const&)>,
                    eastl::allocator>*)&field_72,
                param_1);
    }

    // 0x100bbbe70, 176 bytes, placed by neighbouring functions
    // Screengrabber::OnScreenGrabbed()
    void Screengrabber::OnScreenGrabbed() {
        RenderDevice* pRVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        Singleton<render::RenderDevice>* this_00;
        RenderContext* pRVar5;
        unique_ptr<unsigned char[], std::default_delete<unsigned char[]>> local_30[8];

        this_00 = (Singleton<render::RenderDevice>*)&field_40;
        cVar2 = this_00->empty();
        if (cVar2 == '\0') {
            pRVar1 = (RenderDevice*)this_00->Instance();
            pRVar5 = (RenderContext*)pRVar1->GetPrimaryRenderContext();
            iVar3 = pRVar5->GetBackBufferWidth();
            pRVar1 = (RenderDevice*)pRVar5->Instance();
            pRVar5 = (RenderContext*)pRVar1->GetPrimaryRenderContext();
            iVar4 = pRVar5->GetBackBufferHeight();
            ReadBackbuffer((Screengrabber*)local_30, (int)this, iVar3, iVar4);
            WriteOutScreenshots(this, (unique_ptr*)local_30, iVar3, iVar4, 4);
            std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::~unique_ptr(local_30);
        }
    }

    // 0x100bbbf20, 240 bytes, placed by neighbouring functions
    // Screengrabber::ReadBackbuffer(int, int, int)
    Screengrabber* Screengrabber::ReadBackbuffer(int param_1, int param_2, int param_3) {
        RenderDevice* this_00;
        undefined4 in_register_00000034;
        undefined8 uVar1;
        __0 local_f0;
        function local_d8;
        long local_38;

        uVar1._4_4_ = in_register_00000034;
        uVar1._0_4_ = param_1;
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::make_unique<unsigned char[]>((ulong)this);
        this_00 = (RenderDevice*)((Screengrabber*)this)->Instance();
        local_f0._0_8_ = uVar1;
        local_f0.field_8 = (unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>*)this;
        local_f0.field_16 = param_2;
        local_f0.field_20 = param_3;
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            Screengrabber::ReadBackbuffer(int, int, int)::__0, void>(
            (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8, &local_f0);
        this_00->RunSynchronouslyOnRenderThread(&local_d8, true);
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x100bbc010, 832 bytes, placed by debug map only (low confidence)
    // Screengrabber::WriteOutScreenshots(std::unique_ptr<unsigned char [], std::default_delete<unsigned char []> > const&, int, int, int)
    /* Screengrabber::WriteOutScreenshots(std::unique_ptr<unsigned char [],
   std::default_delete<unsigned char []> > const&, int, int, int) */

    void Screengrabber::WriteOutScreenshots(unique_ptr* param_1, int param_2, int param_3, int param_4) {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        int iVar3;
        basic_string* pbVar4;
        ulong uVar5;
        ulong uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        undefined4 uVar9;
        VBOMapper local_f8;
        eastl::string local_d8[32];
        allocator local_b8[64];
        eastl::string local_78[32];
        basic_string* local_58;
        vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>* local_50;
        unique_ptr* local_48;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        this_00 = &field_40;
        local_48 = param_1;
        local_40 = param_3;
        local_38 = param_4;
        local_34 = param_2;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            eastl::allocator::allocator(local_b8, "EASTL basic_string");
            eastl::string::basic_string(local_d8, ".png", local_b8);
            eastl::allocator::allocator(local_b8, "EASTL basic_string");
            eastl::string::basic_string(local_78, "", local_b8);
            pbVar4 = (basic_string*)this_00->HeapBeginPtr();
            local_50 =
                (vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
                    this_00;
            local_58 = (basic_string*)this_00->end();
            if (pbVar4 != local_58) {
                local_3c = local_38 * local_34;
                do {
                    uVar5 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    uVar6 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    if (uVar6 < uVar5) {
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                        eastl::string::substr((ulong)local_b8, (ulong)pbVar4);
                        bVar2 = eastl::operator!=((basic_string*)local_b8, (basic_string*)local_d8);
                        if (bVar2) {
                            eastl::string::append(pbVar4);
                        }
                        local_b8->~basic_string();
                    } else {
                        eastl::string::append(pbVar4);
                    }
                    local_78->append();
                    uVar7 = logger::default_logger();
                    uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    logger::Logger::Log(uVar7, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/graphicutils/screenshot/Screenshot.cpp",
                                        107, "Writing screenshot to: %s", uVar8);
                    uVar9 = (undefined4)((ulong)uVar8 >> 32);
                    _stbi_flip_vertically_on_write(1);
                    if ((field_32 & 4) != 0) {
                        new (&local_f8) PacketT<Array<unsigned char, eastl::allocator>>();
                        uVar7 = local_48->get();
                        _stbi_write_png_to_func(WritePNGDataToPacket, &local_f8, local_34, local_40, local_38, uVar7,
                                                CONCAT44(uVar9, local_3c));
                        eastl::pair<PacketT<Array<unsigned char, eastl::allocator>>, eastl::string>::pair<
                            PacketT<Array<unsigned char, eastl::allocator>>&, eastl::string&, void>(
                            (pair<PacketT<Array<unsigned char, eastl::allocator>>, eastl::string>*)local_b8,
                            (PacketT*)&local_f8, pbVar4);
                        push_back(local_b8);
                        local_b8->~pair();
                        local_f8.~VBOMapper();
                    }
                    if ((field_32 & 2) != 0) {
                        uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        uVar8 = local_48->get();
                        iVar3 = _stbi_write_png(uVar7, local_34, local_40, local_38, uVar8, local_3c);
                        if (iVar3 == 0) {
                            uVar7 = logger::default_logger();
                            uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            logger::Logger::Log(uVar7, 0, 2,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "graphics/graphicutils/screenshot/Screenshot.cpp",
                                                129, "Failed to write PNG screenshot for: %s", uVar8);
                        }
                    }
                    pbVar4 = pbVar4 + 32;
                } while (pbVar4 != local_58);
            }
            eastl::vector<eastl::string,
                          eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::clear(local_50);
            eastl::string::~basic_string(local_78);
            eastl::string::~basic_string(local_d8);
        }
    }

} // namespace jag::graphicutils

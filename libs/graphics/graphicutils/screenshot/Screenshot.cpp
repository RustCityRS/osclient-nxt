// libs/graphics/graphicutils/screenshot/Screenshot.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.graphicutils

#include "Screenshot.h"

namespace jag::graphicutils {
    // 0x100f48570
    const char* Screengrabber::DEFAULT_PNG_FILENAME = "test_screenshot.png";

    // 0x100bbbd70
    void WritePNGDataToPacket(void* arg1, void* arg2, int arg3) {
        arg1->Reserve((long)arg3);
        arg1->pArrayBuffer(arg2, 0, (long)arg3);
        arg1->SetPos(0);
    }

    // 0x100bbbdb0
    void Screengrabber::RequestScreenshot(const eastl::string& str) {
        if (str.empty() == '\0') {
            field_40.push_back(str);
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "screenshot/Screenshot.cpp",
                      40, "Screenshot fileName is empty. Not adding request.");
        }
    }

    // 0x100bbbe10
    void Screengrabber::RegisterOnScreenGrabbedListener(
        std::function<void(std::unique_ptr<unsigned char[]> const&)> const& callback) {
        ((vector<std::function<void(std::unique_ptr<unsigned char[]> const&)>>*)&field_72)->push_back(callback);
    }

    // 0x100bbbe70
    void Screengrabber::OnScreenGrabbed() {
        int arg1;
        int arg2;
        RenderDevice* pRVar2;
        RenderContext* pRVar3;
        ReturnValue local_30;

        Singleton<render::RenderDevice>* this_00 = (Singleton<render::RenderDevice>*)&field_40;
        if (this_00->empty() == '\0') {
            pRVar2 = (RenderDevice*)this_00->Instance();
            pRVar3 = (RenderContext*)pRVar2->GetPrimaryRenderContext();
            arg1 = pRVar3->GetBackBufferWidth();
            pRVar2 = (RenderDevice*)pRVar3->Instance();
            pRVar3 = (RenderContext*)pRVar2->GetPrimaryRenderContext();
            arg2 = pRVar3->GetBackBufferHeight();
            ReadBackbuffer(&local_30, this, arg1, arg2, 4);
            WriteOutScreenshots(*((unique_ptr<unsigned_char_[], std::default_delete<unsigned_char_[]> _>*)&local_30),
                                arg1, arg2, 4);
            ((unique_ptr<unsigned char[]>*)&local_30)->~unique_ptr();
        }
    }

    // 0x100bbbf20
    auto Screengrabber::ReadBackbuffer(int arg1, int arg2, int arg3) {
        auto result;
        function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        ReturnValue* this_01 = &result;
        result = std::make_unique<unsigned char[]>((long)(arg2 * arg1 * arg3));
        auto this_00 = this_01->Instance();
        Screengrabber* local_f0 = this;
        ReturnValue* local_e8 = &result;
        int local_e0 = arg1;
        int local_dc = arg2;
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            Screengrabber::ReadBackbuffer(int, int, int)::__0, void>(local_d8, (__0*)&local_f0);
        this_00->RunSynchronouslyOnRenderThread(*local_d8, true);
        return result;
    }

    // 0x100bbc010
    void Screengrabber::WriteOutScreenshots(const std::unique_ptr<unsigned char[]>& arg1, int arg2, int arg3,
                                            int arg4) {
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* this_01;
        unsigned long uVar4;
        long lVar6;
        long lVar7;
        Logger* pLVar8;
        uint64_t uVar9;
        uint64_t uVar10;
        uint32_t uVar11;
        VBOMapper local_f8;
        eastl::string local_d8;
        ReturnValue local_b8;
        eastl::string local_78;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* local_58;
        vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true>>* local_50;
        int local_3c;

        uint8_t* this_00 = &field_40;
        if (this_00->empty() == '\0') {
            local_d8 = eastl::string(".png");
            local_78 = eastl::string("");
            this_01 =
                (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)this_00->HeapBeginPtr();
            local_50 = (vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true>>*)this_00;
            local_58 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)this_00->end();
            if (this_01 != local_58) {
                local_3c = arg4 * arg2;
                do {
                    uVar4 = this_01->size();
                    if (local_d8.size() < uVar4) {
                        lVar6 = this_01->size();
                        lVar7 = local_d8.size();
                        uVar4 = local_d8.size();
                        local_b8 = this_01->substr(lVar6 - lVar7, uVar4);
                        if (local_b8 != local_d8) {
                            this_01->append(&local_d8);
                        }
                    } else {
                        this_01->append(&local_d8);
                    }
                    local_78.append(this_01);
                    pLVar8 = logger::default_logger();
                    uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    pLVar8->Log(false, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "graphicutils/screenshot/Screenshot.cpp",
                                107, "Writing screenshot to: %s", uVar9);
                    uVar11 = (uint32_t)((unsigned long)uVar9 >> 32);
                    _stbi_flip_vertically_on_write(1);
                    if ((m_screenshotSaveMode & 4) != 0) {
                        local_f8 = PacketT();
                        uVar9 = ((unique_ptr<unsigned char[]>*)arg1)->get();
                        _stbi_write_png_to_func(WritePNGDataToPacket, &local_f8, arg2, arg3, arg4, uVar9,
                                                (((uint64_t)uVar11 << 32) | (uint32_t)local_3c));
                        eastl::pair<PacketT<Array<unsigned char>>, eastl::string>::pair<PacketT<Array<unsigned char>>&,
                                                                                        eastl::string&, void>(
                            &local_b8, (PacketT<Array<unsigned char> _>*)&local_f8, (eastl::string*)this_01);
                        push_back(local_b8);
                    }
                    if ((m_screenshotSaveMode & 2) != 0) {
                        uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        uVar10 = ((unique_ptr<unsigned char[]>*)arg1)->get();
                        if (_stbi_write_png(uVar9, arg2, arg3, arg4, uVar10, local_3c) == 0) {
                            pLVar8 = logger::default_logger();
                            uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            pLVar8->Log(false, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/graphicutils/screenshot/Screenshot.cpp",
                                        129, "Failed to write PNG screenshot for: %s", uVar9);
                        }
                    }
                    this_01 = this_01 + 32;
                } while (this_01 != local_58);
            }
            local_50->clear();
        }
    }

} // namespace jag::graphicutils
